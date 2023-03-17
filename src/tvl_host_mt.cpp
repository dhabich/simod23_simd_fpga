#include <CL/sycl.hpp>
#include <algorithm>
#include <array>
#include <chrono>
#include <cstring>
#include <future>
#include <iomanip>
#include <iostream>
#include <memory>
#include <numeric>
#include <random>
#include <string>
#include <sycl/ext/intel/fpga_extensions.hpp>
#include <thread>
#include <tuple>
#include <utility>
#include <vector>

#include <tvlintrin.hpp>

// Time
#include <sys/time.h>
// Sleep
#include <unistd.h>

using namespace sycl;
using namespace std::chrono;

using Type = float;  // type to use for the test
using BoundaryType = size_t;

const BoundaryType lower_bound = 5;
const BoundaryType upper_bound = 15;

template <typename MyVec, typename T, typename U>
uint32_t agg_kernel_free_func(T in, size_t size, U lower, U upper) {
    using namespace tvl;
    using CountVec = tvl::simd<uint32_t, typename MyVec::target_extension, MyVec::vector_size_b()>;

    auto result_vec = set1<CountVec>(0);
    const auto increment_vec = set1<CountVec>(1);

    const auto lower_vec = set1<MyVec>(lower);
    const auto upper_vec = set1<MyVec>(upper);
    for (size_t i = 0; i < size; i += MyVec::vector_element_count()) {
        const auto data_vec = loadu<MyVec>(&in[i]);
        const auto result_mask = between_inclusive<MyVec>(data_vec, lower_vec, upper_vec);

        const auto increment_result_vec = binary_and<CountVec>(reinterpret<MyVec, CountVec>(to_vector<MyVec>(result_mask)), increment_vec);
        result_vec = add<CountVec>(result_vec, increment_result_vec);
    }

    return hadd<CountVec>(result_vec);
}

template <typename MyVec, typename T, typename U>
void run(std::shared_future<void>* ready_future, size_t tid, long* out_time, long* out_results, T in, size_t size, U lower, U upper) {
    ready_future->wait();
    auto start = std::chrono::high_resolution_clock::now();
    *out_results = agg_kernel_free_func<MyVec>(in, size, lower, upper);
    auto end = std::chrono::high_resolution_clock::now();
    *out_time = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
}

void exception_handler(exception_list exceptions);

class aggregationKernel_tvl;

template <typename VE>
void aggregation_kernel(queue* q, std::shared_future<void>* ready_future, Type* in_host, long* out_results, long* out_time, size_t size) {
    ready_future->wait();
    auto start = high_resolution_clock::now();
    q->submit([&](handler& h) {
         h.single_task<aggregationKernel_tvl>([=]() [[intel::kernel_args_restrict]] {
             host_ptr<Type> in(in_host);
             host_ptr<long> out(out_results);

             out_results[0] = agg_kernel_free_func<VE>(in, size, static_cast<float>(lower_bound), static_cast<float>(upper_bound));
         });
     }).wait();
    auto end = high_resolution_clock::now();
    *out_time = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
}

template <bool with_fpga, typename VE, typename VE_fpga>
void benchmark(queue& q, size_t total_elements, std::vector<size_t>& core_count, std::array<Type*, 9>& dataPtrs, std::array<long*, 9>& resultPtrs, std::array<long*, 9>& timePtrs) {
    std::ofstream outfile;
    std::string fname = std::to_string(total_elements) + "_" + tvl::type_name<typename VE::target_extension>();
    // std::string fname = std::to_string(total_elements) + "_" + tvl::type_name<VE>();
    if (with_fpga) {
        outfile.open(fname + "_fpga.log");
        std::cout << "Adding FPGA as additional compute unit, starting dummy run." << std::endl;
    } else {
        outfile.open(fname + ".log");
    }

    outfile << "core_count\tinput_size_mb_per_thread\t";
    for (size_t i = 0; i < timePtrs.size()-1; ++i) {
        outfile << "Core-" << std::to_string(i) << "-us\t";
    }
    outfile << "fpga-us\tsum_coretime\ttotal_results" << std::endl;

    std::cout << "core_count\tinput_size_mb_per_thread\t";
    for (size_t i = 0; i < timePtrs.size()-1; ++i) {
        std::cout << "Core-" << std::to_string(i) << "-us\t";
    }
    std::cout << "fpga-us\tsum_coretime\ttotal_results" << std::endl;

    auto cleanup = [&]() -> void {
        for (size_t i = 0; i < timePtrs.size(); ++i) {
            *timePtrs[i] = 0;
            *resultPtrs[i] = 0;
        }
    };

    cleanup();

    std::vector<std::thread> pool;
    std::cout << "TCnt\tus\tMB/s\tResults" << std::endl;
    for (size_t i : core_count) {
        pool.reserve(i + 1);

        std::promise<void> p;
        std::shared_future<void> ready_future(p.get_future());

        for (size_t tid = 0; tid < i; tid++) {
            pool.emplace_back(run<VE, Type*, BoundaryType>, &ready_future, tid, timePtrs[tid], resultPtrs[tid], dataPtrs[tid], total_elements, lower_bound, upper_bound);
        }

        if (with_fpga) {
            std::promise<void> fpga_promise;
            std::shared_future<void> fpga_ready_future(fpga_promise.get_future());
            fpga_promise.set_value();
            aggregation_kernel<VE_fpga>(&q, &fpga_ready_future, dataPtrs[i], resultPtrs[i], timePtrs[i], total_elements);
            pool.emplace_back(aggregation_kernel<VE_fpga>, &q, &ready_future, dataPtrs[i], resultPtrs[i], timePtrs[i], total_elements);
        }

        {
            using namespace std::chrono_literals;
            // Wating a second for every thread to reach the barrier...
            std::this_thread::sleep_for(500ms);
        }
        p.set_value();

        for (auto& t : pool) {
            t.join();
        }

        double total_results = 0;
        double sum_coretime = 0.0;

        for (size_t tid = 0; tid < i; ++tid) {
            total_results += *resultPtrs[tid];
            sum_coretime += *timePtrs[tid];
        }

        double time_fpga = with_fpga ? *timePtrs[i] : 0.0;
        double results_fpga = with_fpga ? *resultPtrs[i] : 0.0;

        total_results = with_fpga ? (total_results + results_fpga) / (i + 1) : total_results / i;
        double input_size_mb_per_thread = static_cast<double>(total_elements * sizeof(Type)) / (1024 * 1024);

        auto logToStream = []<typename T>(std::ostream& stream, std::array<T, 9> arr, size_t idxs) -> void {
            for (size_t i = 0; i < idxs; ++i) {
                stream << *arr[i] << "\t";
            }
            for ( size_t i = idxs; i < arr.size()-1; ++i ) {
                stream << 0 << "\t";
            }
        };

        outfile << i << "\t"
                << input_size_mb_per_thread << "\t";
        logToStream(outfile, timePtrs, i);
        outfile << time_fpga << "\t"
                << sum_coretime << "\t"
                << total_results
                << std::endl;

        std::cout << std::setw(2)
                  << i << "\t"
                  << input_size_mb_per_thread << "\t"
                  << std::fixed << std::setprecision(2);
        logToStream(std::cout, timePtrs, i);
        std::cout << time_fpga << "\t"
                  << sum_coretime << "\t"
                  << std::setprecision(0) << total_results
                  << std::endl;

        cleanup();

        pool.clear();
    }
    outfile.close();
}

// main
int main(int argc, char* argv[]) {
    // the device selector
#ifdef FPGA_EMULATOR
    ext::intel::fpga_emulator_selector selector;
#else
    ext::intel::fpga_selector selector;
#endif

    // create the device queue
    auto props = property_list{property::queue::enable_profiling()};
    queue q(selector, exception_handler, props);

    // make sure the device supports USM device allocations
    device d = q.get_device();
    if (!d.get_info<info::device::usm_device_allocations>()) {
        std::cerr << "ERROR: The selected device does not support USM device"
                  << " allocations" << std::endl;
        std::terminate();
    }
    if (!d.get_info<info::device::usm_host_allocations>()) {
        std::cerr << "ERROR: The selected device does not support USM host"
                  << " allocations" << std::endl;
        std::terminate();
    }

    size_t size;
    if (argc != 2)  // argc should be 2 for correct execution
    {
        size = 1024;
    } else {
        size = atoll(argv[1]);
    }

    std::cout << "Element count: " << size << std::endl;

    size_t number_CL = 0;

    using funcVE_fpga = tvl::simd<Type, tvl::fpga, 512>;
    const size_t vec_elems = funcVE_fpga::vector_element_count();

    if (size % vec_elems == 0) {
        number_CL = size / vec_elems;
    } else {
        number_CL = size / vec_elems + 1;
    }

    double input_size_mb = static_cast<double>(size * sizeof(Type)) / (1024 * 1024);
    std::cout << "Number CLs: " << number_CL << " (" << input_size_mb << " MB)" << std::endl;

    // Allocate input/output data in pinned host memory
    // Used in both tests, for convenience

    std::vector<size_t> core_count{1, 2, 3, 4, 5, 6, 7, 8};
    std::array<Type*, 9> dataPtrs;
    std::array<long*, 9> resultPtrs;
    std::array<long*, 9> timePtrs;

    // in = (Type*)malloc(number_CL * vec_elems * sizeof(Type));
    for (size_t cc = 0; cc < dataPtrs.size(); ++cc) {
        if ((dataPtrs[cc] = malloc_host<Type>(number_CL * vec_elems, q)) == nullptr) {
            std::cerr << "ERROR: could not allocate space for 'in'" << std::endl;
            std::terminate();
        }
        if ((resultPtrs[cc] = malloc_host<long>(1, q)) == nullptr) {
            std::cerr << "ERROR: could not allocate space for 'in'" << std::endl;
            std::terminate();
        }
        if ((timePtrs[cc] = malloc_host<long>(1, q)) == nullptr) {
            std::cerr << "ERROR: could not allocate space for 'in'" << std::endl;
            std::terminate();
        }
    }

    const size_t total_elements = number_CL * vec_elems;
    std::mt19937 engine(0xc01dbadc00ffee);
    std::uniform_real_distribution<float> dist(0, 20);

    // Init input buffer
    for (int i = 0; i < (number_CL * vec_elems); ++i) {
        if (i < size) {
            dataPtrs[0][i] = dist(engine);
        } else {
            dataPtrs[0][i] = 0;
        }
    }

    for (size_t i = 1; i < dataPtrs.size(); ++i) {
        memcpy(dataPtrs[i], dataPtrs[0], total_elements * sizeof(Type));
    }

    benchmark<false, tvl::simd<Type, tvl::sse>, funcVE_fpga>(q, total_elements, core_count, dataPtrs, resultPtrs, timePtrs);
    benchmark<true, tvl::simd<Type, tvl::sse>, funcVE_fpga>(q, total_elements, core_count, dataPtrs, resultPtrs, timePtrs);
    benchmark<false, tvl::simd<Type, tvl::avx2>, funcVE_fpga>(q, total_elements, core_count, dataPtrs, resultPtrs, timePtrs);
    benchmark<true, tvl::simd<Type, tvl::avx2>, funcVE_fpga>(q, total_elements, core_count, dataPtrs, resultPtrs, timePtrs);
    benchmark<false, tvl::simd<Type, tvl::avx512>, funcVE_fpga>(q, total_elements, core_count, dataPtrs, resultPtrs, timePtrs);
    benchmark<true, tvl::simd<Type, tvl::avx512>, funcVE_fpga>(q, total_elements, core_count, dataPtrs, resultPtrs, timePtrs);

    for (size_t cc = 0; cc < dataPtrs.size(); ++cc) {
        sycl::free(dataPtrs[cc], q);
        sycl::free(resultPtrs[cc], q);
        sycl::free(timePtrs[cc], q);
    }
}

void exception_handler(exception_list exceptions) {
    for (std::exception_ptr const& e : exceptions) {
        try {
            std::rethrow_exception(e);
        } catch (exception const& e) {
            std::cout << "Caught asynchronous SYCL exception:\n"
                      << e.what() << std::endl;
        }
    }
}
