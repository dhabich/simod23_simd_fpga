/*==========================================================================*
 * This file is part of the TVL - a template SIMD library.                  *
 *                                                                          *
 * Copyright 2023 TVL-Team, Database Research Group TU Dresden              *
 *                                                                          *
 * Licensed under the Apache License, Version 2.0 (the "License");          *
 * you may not use this file except in compliance with the License.         *
 * You may obtain a copy of the License at                                  *
 *                                                                          *
 *     http://www.apache.org/licenses/LICENSE-2.0                           *
 *                                                                          *
 * Unless required by applicable law or agreed to in writing, software      *
 * distributed under the License is distributed on an "AS IS" BASIS,        *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 * See the License for the specific language governing permissions and      *
 * limitations under the License.                                           *
 *==========================================================================*/
/*
 * \file /home/u172652/damon23_tvl_fpga/libs/include/generated/definitions/ls/ls_avx2.hpp
 * \date 2023-02-27
 * \brief Load/Store primitives
 * \note
 * Git-Local Url : /home/u172652/damon23_tvl_fpga/TVLGen
 * Git-Remote Url: git@github.com:db-tu-dresden/TVLGen.git
 * Git-Branch    : main
 * Git-Commit    : b763fd5 (b763fd5bf1dd9646532d2a8642e95ba90fb292d2)
 * Submodule(s):
 *   Git-Local Url : primitive_data
 *   Git-Remote Url: git@github.com:db-tu-dresden/TVLPrimitiveData.git
 *   Git-Branch    : main
 *   Git-Commit    : d419aa7 (d419aa79bb0cb49806eb3f8e137c2bc44ce37ee5)
 *
 */

#ifndef TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_LS_LS_AVX2_HPP
#define TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_LS_LS_AVX2_HPP

#include <array>
#include <cstring>
#include "../../declarations/ls.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
         };
   } // end of namespace functors for template specialization of load for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
         };
   } // end of namespace functors for template specialization of load for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
         };
   } // end of namespace functors for template specialization of load for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
         };
   } // end of namespace functors for template specialization of load for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
         };
   } // end of namespace functors for template specialization of load for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
         };
   } // end of namespace functors for template specialization of load for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
         };
   } // end of namespace functors for template specialization of load for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
         };
   } // end of namespace functors for template specialization of load for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_load_ps(assume_aligned<Vec::vector_alignment()>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load" (primitive load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_load_pd(assume_aligned<Vec::vector_alignment()>(memory));
            }
         };
   } // end of namespace functors for template specialization of load for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
         };
   } // end of namespace functors for template specialization of loadu for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
         };
   } // end of namespace functors for template specialization of loadu for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
         };
   } // end of namespace functors for template specialization of loadu for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
         };
   } // end of namespace functors for template specialization of loadu for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
         };
   } // end of namespace functors for template specialization of loadu for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
         };
   } // end of namespace functors for template specialization of loadu for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
         };
   } // end of namespace functors for template specialization of loadu for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
         };
   } // end of namespace functors for template specialization of loadu for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_loadu_ps(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "loadu" (primitive loadu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct loadu<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type * memory
            ) {

               return _mm256_loadu_pd(memory);
            }
         };
   } // end of namespace functors for template specialization of loadu for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_store_ps(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "store" (primitive store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct store<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_store_pd(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of store for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_storeu_ps(memory, data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "storeu" (primitive storeu).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct storeu<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_storeu_pd(memory, data);
            }
         };
   } // end of namespace functors for template specialization of storeu for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_array" (primitive to_array).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_array<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {

               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               tvl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
               return tmp;
            }
         };
   } // end of namespace functors for template specialization of to_array for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_array" (primitive to_array).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_array<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {

               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               tvl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
               return tmp;
            }
         };
   } // end of namespace functors for template specialization of to_array for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_array" (primitive to_array).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_array<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {

               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               tvl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
               return tmp;
            }
         };
   } // end of namespace functors for template specialization of to_array for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_array" (primitive to_array).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_array<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {

               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               tvl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
               return tmp;
            }
         };
   } // end of namespace functors for template specialization of to_array for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_array" (primitive to_array).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_array<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {

               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               tvl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
               return tmp;
            }
         };
   } // end of namespace functors for template specialization of to_array for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_array" (primitive to_array).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_array<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {

               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               tvl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
               return tmp;
            }
         };
   } // end of namespace functors for template specialization of to_array for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_array" (primitive to_array).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_array<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {

               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               tvl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
               return tmp;
            }
         };
   } // end of namespace functors for template specialization of to_array for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_array" (primitive to_array).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_array<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {

               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               tvl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
               return tmp;
            }
         };
   } // end of namespace functors for template specialization of to_array for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_array" (primitive to_array).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_array<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {

               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               tvl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
               return tmp;
            }
         };
   } // end of namespace functors for template specialization of to_array for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_array" (primitive to_array).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_array<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {

               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               tvl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
               return tmp;
            }
         };
   } // end of namespace functors for template specialization of to_array for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {

               return _mm256_set1_epi8(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {

               return _mm256_set1_epi16(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {

               return _mm256_set1_epi32(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {

               return _mm256_set1_epi8(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {

               return _mm256_set1_epi16(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {

               return _mm256_set1_epi32(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {

               return _mm256_set1_epi64x(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {

               return _mm256_set1_epi64x(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {

               return _mm256_set1_ps(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set1" (primitive set1).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set1<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {

               return _mm256_set1_pd(value);
            }
         };
   } // end of namespace functors for template specialization of set1 for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set_zero<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               return _mm256_setzero_si256();
            }
         };
   } // end of namespace functors for template specialization of set_zero for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set_zero<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               return _mm256_setzero_si256();
            }
         };
   } // end of namespace functors for template specialization of set_zero for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set_zero<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               return _mm256_setzero_si256();
            }
         };
   } // end of namespace functors for template specialization of set_zero for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set_zero<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               return _mm256_setzero_si256();
            }
         };
   } // end of namespace functors for template specialization of set_zero for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set_zero<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               return _mm256_setzero_si256();
            }
         };
   } // end of namespace functors for template specialization of set_zero for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set_zero<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               return _mm256_setzero_si256();
            }
         };
   } // end of namespace functors for template specialization of set_zero for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set_zero<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               return _mm256_setzero_si256();
            }
         };
   } // end of namespace functors for template specialization of set_zero for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set_zero<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               return _mm256_setzero_si256();
            }
         };
   } // end of namespace functors for template specialization of set_zero for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set_zero<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               return _mm256_setzero_ps();
            }
         };
   } // end of namespace functors for template specialization of set_zero for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set_zero<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               return _mm256_setzero_pd();
            }
         };
   } // end of namespace functors for template specialization of set_zero for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set" (primitive set).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {

               return _mm256_set_epi8(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set" (primitive set).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {

               return _mm256_set_epi16(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set" (primitive set).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {

               return _mm256_set_epi32(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set" (primitive set).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {

               return _mm256_set_epi8(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set" (primitive set).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {

               return _mm256_set_epi16(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set" (primitive set).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {

               return _mm256_set_epi32(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set" (primitive set).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {

               return _mm256_set_epi64x( args... );
            }
         };
   } // end of namespace functors for template specialization of set for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set" (primitive set).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {

               return _mm256_set_epi64x( args... );
            }
         };
   } // end of namespace functors for template specialization of set for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set" (primitive set).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {

               return _mm256_set_ps(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "set" (primitive set).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct set<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               Ts... args
            ) {

               return _mm256_set_pd(args...);
            }
         };
   } // end of namespace functors for template specialization of set for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "sequence" (primitive sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct sequence<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((T)Is)...
                 );
               };
               return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of sequence for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "sequence" (primitive sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct sequence<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((T)Is)...
                 );
               };
               return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of sequence for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "sequence" (primitive sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct sequence<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((T)Is)...
                 );
               };
               return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of sequence for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "sequence" (primitive sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct sequence<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((T)Is)...
                 );
               };
               return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of sequence for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "sequence" (primitive sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct sequence<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((T)Is)...
                 );
               };
               return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of sequence for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "sequence" (primitive sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct sequence<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((T)Is)...
                 );
               };
               return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of sequence for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "sequence" (primitive sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct sequence<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((T)Is)...
                 );
               };
               return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of sequence for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "sequence" (primitive sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct sequence<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((T)Is)...
                 );
               };
               return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of sequence for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "sequence" (primitive sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct sequence<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((T)Is)...
                 );
               };
               return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of sequence for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "sequence" (primitive sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct sequence<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
               
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((T)Is)...
                 );
               };
               return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of sequence for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct custom_sequence<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 T const init, T const sw, std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((((T)(sizeof...(Is) - 1 - Is))*sw)+init)...
                 );
               };
               return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of custom_sequence for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct custom_sequence<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 T const init, T const sw, std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((((T)(sizeof...(Is) - 1 - Is))*sw)+init)...
                 );
               };
               return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of custom_sequence for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct custom_sequence<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 T const init, T const sw, std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((((T)(sizeof...(Is) - 1 - Is))*sw)+init)...
                 );
               };
               return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of custom_sequence for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct custom_sequence<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 T const init, T const sw, std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((((T)(sizeof...(Is) - 1 - Is))*sw)+init)...
                 );
               };
               return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of custom_sequence for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct custom_sequence<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 T const init, T const sw, std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((((T)(sizeof...(Is) - 1 - Is))*sw)+init)...
                 );
               };
               return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of custom_sequence for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct custom_sequence<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 T const init, T const sw, std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((((T)(sizeof...(Is) - 1 - Is))*sw)+init)...
                 );
               };
               return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of custom_sequence for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct custom_sequence<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 T const init, T const sw, std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((((T)(sizeof...(Is) - 1 - Is))*sw)+init)...
                 );
               };
               return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of custom_sequence for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct custom_sequence<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 T const init, T const sw, std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((((T)(sizeof...(Is) - 1 - Is))*sw)+init)...
                 );
               };
               return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of custom_sequence for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct custom_sequence<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 T const init, T const sw, std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((((T)(sizeof...(Is) - 1 - Is))*sw)+init)...
                 );
               };
               return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of custom_sequence for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct custom_sequence<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {

               using T = typename Vec::base_type;
               using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
               auto seq_fun= []<sequence_type... Is>(
                 T const init, T const sw, std::integer_sequence<sequence_type, Is...>        
               ) {
                 return tvl::set<Vec>(
                   ((((T)(sizeof...(Is) - 1 - Is))*sw)+init)...
                 );
               };
               return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
         };
   } // end of namespace functors for template specialization of custom_sequence for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather" (primitive gather).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct gather<simd<uint64_t, avx2>, N, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {

               return _mm256_i64gather_epi64(reinterpret_cast<long long int const *>(memory), index, scale());
            }
         };
   } // end of namespace functors for template specialization of gather for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather" (primitive gather).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct gather<simd<int64_t, avx2>, N, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {

               return _mm256_i64gather_epi64(reinterpret_cast<long long int const *>(memory), index, scale());
            }
         };
   } // end of namespace functors for template specialization of gather for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather" (primitive gather).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct gather<simd<uint32_t, avx2>, N, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {

               return _mm256_i32gather_epi32(reinterpret_cast<int const *>(memory), index, scale());
            }
         };
   } // end of namespace functors for template specialization of gather for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather" (primitive gather).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct gather<simd<int32_t, avx2>, N, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {

               return _mm256_i32gather_epi32(reinterpret_cast<int const *>(memory), index, scale());
            }
         };
   } // end of namespace functors for template specialization of gather for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather" (primitive gather).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct gather<simd<float, avx2>, N, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {

               return _mm256_i32gather_ps(reinterpret_cast<float const *>(memory), index, scale());
            }
         };
   } // end of namespace functors for template specialization of gather for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "gather" (primitive gather).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct gather<simd<double, avx2>, N, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {

               return _mm256_i64gather_pd(reinterpret_cast<double const *>(memory), index, scale());
            }
         };
   } // end of namespace functors for template specialization of gather for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_gather<simd<uint64_t, avx2>, N, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {

               return _mm256_mask_i64gather_epi64(source, reinterpret_cast<long long int const *>(memory), index, mask, scale());
            }
         };
   } // end of namespace functors for template specialization of mask_gather for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_gather<simd<int64_t, avx2>, N, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {

               return _mm256_mask_i64gather_epi64(source, reinterpret_cast<long long int const *>(memory), index, mask, scale());
            }
         };
   } // end of namespace functors for template specialization of mask_gather for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_gather<simd<uint32_t, avx2>, N, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {

               return _mm256_mask_i32gather_epi32(source, reinterpret_cast<int const *>(memory), index, mask, scale());
            }
         };
   } // end of namespace functors for template specialization of mask_gather for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_gather<simd<int32_t, avx2>, N, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {

               return _mm256_mask_i32gather_epi32(source, reinterpret_cast<int const *>(memory), index, mask, scale());
            }
         };
   } // end of namespace functors for template specialization of mask_gather for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_gather<simd<float, avx2>, N, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {

               return _mm256_mask_i32gather_ps(source, reinterpret_cast<float const *>(memory), index, mask, scale());
            }
         };
   } // end of namespace functors for template specialization of mask_gather for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_gather<simd<double, avx2>, N, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {

               return _mm256_mask_i64gather_pd(source, reinterpret_cast<double const *>(memory), index, mask, scale());
            }
         };
   } // end of namespace functors for template specialization of mask_gather for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct scatter<simd<uint8_t, avx2>, N, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if constexpr(N==sizeof(typename Vec::base_type)) {
                   auto mem = reinterpret_cast<typename Vec::base_type *>(memory); 
                   mem[idx_array[i]] = val_array[i];
                 } else {
                   if constexpr(N==1) {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                   } else {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                   }
                 }
               }
            }
         };
   } // end of namespace functors for template specialization of scatter for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct scatter<simd<int8_t, avx2>, N, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if constexpr(N==sizeof(typename Vec::base_type)) {
                   auto mem = reinterpret_cast<typename Vec::base_type *>(memory); 
                   mem[idx_array[i]] = val_array[i];
                 } else {
                   if constexpr(N==1) {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                   } else {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                   }
                 }
               }
            }
         };
   } // end of namespace functors for template specialization of scatter for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct scatter<simd<uint16_t, avx2>, N, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if constexpr(N==sizeof(typename Vec::base_type)) {
                   auto mem = reinterpret_cast<typename Vec::base_type *>(memory); 
                   mem[idx_array[i]] = val_array[i];
                 } else {
                   if constexpr(N==1) {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                   } else {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                   }
                 }
               }
            }
         };
   } // end of namespace functors for template specialization of scatter for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct scatter<simd<int16_t, avx2>, N, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if constexpr(N==sizeof(typename Vec::base_type)) {
                   auto mem = reinterpret_cast<typename Vec::base_type *>(memory); 
                   mem[idx_array[i]] = val_array[i];
                 } else {
                   if constexpr(N==1) {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                   } else {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                   }
                 }
               }
            }
         };
   } // end of namespace functors for template specialization of scatter for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct scatter<simd<uint32_t, avx2>, N, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if constexpr(N==sizeof(typename Vec::base_type)) {
                   auto mem = reinterpret_cast<typename Vec::base_type *>(memory); 
                   mem[idx_array[i]] = val_array[i];
                 } else {
                   if constexpr(N==1) {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                   } else {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                   }
                 }
               }
            }
         };
   } // end of namespace functors for template specialization of scatter for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct scatter<simd<int32_t, avx2>, N, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if constexpr(N==sizeof(typename Vec::base_type)) {
                   auto mem = reinterpret_cast<typename Vec::base_type *>(memory); 
                   mem[idx_array[i]] = val_array[i];
                 } else {
                   if constexpr(N==1) {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                   } else {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                   }
                 }
               }
            }
         };
   } // end of namespace functors for template specialization of scatter for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct scatter<simd<uint64_t, avx2>, N, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if constexpr(N==sizeof(typename Vec::base_type)) {
                   auto mem = reinterpret_cast<typename Vec::base_type *>(memory); 
                   mem[idx_array[i]] = val_array[i];
                 } else {
                   if constexpr(N==1) {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                   } else {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                   }
                 }
               }
            }
         };
   } // end of namespace functors for template specialization of scatter for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct scatter<simd<int64_t, avx2>, N, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if constexpr(N==sizeof(typename Vec::base_type)) {
                   auto mem = reinterpret_cast<typename Vec::base_type *>(memory); 
                   mem[idx_array[i]] = val_array[i];
                 } else {
                   if constexpr(N==1) {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                   } else {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                   }
                 }
               }
            }
         };
   } // end of namespace functors for template specialization of scatter for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct scatter<simd<float, avx2>, N, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if constexpr(N==sizeof(typename Vec::base_type)) {
                   auto mem = reinterpret_cast<typename Vec::base_type *>(memory); 
                   mem[idx_array[i]] = val_array[i];
                 } else {
                   if constexpr(N==1) {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                   } else {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                   }
                 }
               }
            }
         };
   } // end of namespace functors for template specialization of scatter for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct scatter<simd<double, avx2>, N, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if constexpr(N==sizeof(typename Vec::base_type)) {
                   auto mem = reinterpret_cast<typename Vec::base_type *>(memory); 
                   mem[idx_array[i]] = val_array[i];
                 } else {
                   if constexpr(N==1) {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                   } else {
                     *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                   }
                 }
               }
            }
         };
   } // end of namespace functors for template specialization of scatter for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_scatter<simd<uint8_t, avx2>, N, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               auto const mask_array = tvl::to_array<Vec>(mask);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(mask_array[i] != 0) {
                   if constexpr(N==sizeof(typename Vec::base_type)) {
                     auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                     mem[idx_array[i]] = val_array[i];
                   } else {
                     if constexpr(N==1) {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                     } else {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                     }
                   }
                 }        
               }
            }
         };
   } // end of namespace functors for template specialization of mask_scatter for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_scatter<simd<int8_t, avx2>, N, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               auto const mask_array = tvl::to_array<Vec>(mask);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(mask_array[i] != 0) {
                   if constexpr(N==sizeof(typename Vec::base_type)) {
                     auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                     mem[idx_array[i]] = val_array[i];
                   } else {
                     if constexpr(N==1) {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                     } else {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                     }
                   }
                 }        
               }
            }
         };
   } // end of namespace functors for template specialization of mask_scatter for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_scatter<simd<uint16_t, avx2>, N, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               auto const mask_array = tvl::to_array<Vec>(mask);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(mask_array[i] != 0) {
                   if constexpr(N==sizeof(typename Vec::base_type)) {
                     auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                     mem[idx_array[i]] = val_array[i];
                   } else {
                     if constexpr(N==1) {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                     } else {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                     }
                   }
                 }        
               }
            }
         };
   } // end of namespace functors for template specialization of mask_scatter for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_scatter<simd<int16_t, avx2>, N, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               auto const mask_array = tvl::to_array<Vec>(mask);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(mask_array[i] != 0) {
                   if constexpr(N==sizeof(typename Vec::base_type)) {
                     auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                     mem[idx_array[i]] = val_array[i];
                   } else {
                     if constexpr(N==1) {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                     } else {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                     }
                   }
                 }        
               }
            }
         };
   } // end of namespace functors for template specialization of mask_scatter for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_scatter<simd<uint32_t, avx2>, N, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               auto const mask_array = tvl::to_array<Vec>(mask);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(mask_array[i] != 0) {
                   if constexpr(N==sizeof(typename Vec::base_type)) {
                     auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                     mem[idx_array[i]] = val_array[i];
                   } else {
                     if constexpr(N==1) {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                     } else {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                     }
                   }
                 }        
               }
            }
         };
   } // end of namespace functors for template specialization of mask_scatter for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_scatter<simd<int32_t, avx2>, N, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               auto const mask_array = tvl::to_array<Vec>(mask);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(mask_array[i] != 0) {
                   if constexpr(N==sizeof(typename Vec::base_type)) {
                     auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                     mem[idx_array[i]] = val_array[i];
                   } else {
                     if constexpr(N==1) {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                     } else {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                     }
                   }
                 }        
               }
            }
         };
   } // end of namespace functors for template specialization of mask_scatter for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_scatter<simd<uint64_t, avx2>, N, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               auto const mask_array = tvl::to_array<Vec>(mask);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(mask_array[i] != 0) {
                   if constexpr(N==sizeof(typename Vec::base_type)) {
                     auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                     mem[idx_array[i]] = val_array[i];
                   } else {
                     if constexpr(N==1) {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                     } else {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                     }
                   }
                 }        
               }
            }
         };
   } // end of namespace functors for template specialization of mask_scatter for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_scatter<simd<int64_t, avx2>, N, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               auto const mask_array = tvl::to_array<Vec>(mask);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(mask_array[i] != 0) {
                   if constexpr(N==sizeof(typename Vec::base_type)) {
                     auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                     mem[idx_array[i]] = val_array[i];
                   } else {
                     if constexpr(N==1) {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                     } else {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                     }
                   }
                 }        
               }
            }
         };
   } // end of namespace functors for template specialization of mask_scatter for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_scatter<simd<float, avx2>, N, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               auto const mask_array = tvl::to_array<Vec>(mask);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(mask_array[i] != 0) {
                   if constexpr(N==sizeof(typename Vec::base_type)) {
                     auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                     mem[idx_array[i]] = val_array[i];
                   } else {
                     if constexpr(N==1) {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                     } else {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                     }
                   }
                 }        
               }
            }
         };
   } // end of namespace functors for template specialization of mask_scatter for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx2']
       */
      template<int N, ImplementationDegreeOfFreedom Idof>
         struct mask_scatter<simd<double, avx2>, N, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void * memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

               auto const val_array = tvl::to_array<Vec>(data);
               using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
               auto const idx_array = tvl::to_array<offsetExt>(index);
               auto const mask_array = tvl::to_array<Vec>(mask);
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(mask_array[i] != 0) {
                   if constexpr(N==sizeof(typename Vec::base_type)) {
                     auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                     mem[idx_array[i]] = val_array[i];
                   } else {
                     if constexpr(N==1) {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                     } else {
                       *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                     }
                   }
                 }        
               }
            }
         };
   } // end of namespace functors for template specialization of mask_scatter for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct compress_store<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::imask_type mask, typename Vec::base_type * memory, const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive compress_store is not supported by your hardware natively while it is forced by using native" );

               auto const orig_mem = memory;
               auto const data_array = tvl::to_array<Vec>(data);
               typename Vec::base_type safe[Vec::vector_element_count()];
               std::memcpy(reinterpret_cast<void*>(safe), reinterpret_cast<void const *>(memory), Vec::vector_size_B());
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 *memory = data_array[i];
                 memory += (mask>>i)&0b1;
               }
               if(((mask>>Vec::vector_element_count())&0b1) == 0) {
                 *memory = safe[memory-orig_mem];
               }
            }
         };
   } // end of namespace functors for template specialization of compress_store for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct compress_store<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::imask_type mask, typename Vec::base_type * memory, const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive compress_store is not supported by your hardware natively while it is forced by using native" );

               auto const orig_mem = memory;
               auto const data_array = tvl::to_array<Vec>(data);
               typename Vec::base_type safe[Vec::vector_element_count()];
               std::memcpy(reinterpret_cast<void*>(safe), reinterpret_cast<void const *>(memory), Vec::vector_size_B());
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 *memory = data_array[i];
                 memory += (mask>>i)&0b1;
               }
               if(((mask>>Vec::vector_element_count())&0b1) == 0) {
                 *memory = safe[memory-orig_mem];
               }
            }
         };
   } // end of namespace functors for template specialization of compress_store for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct compress_store<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::imask_type mask, typename Vec::base_type * memory, const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive compress_store is not supported by your hardware natively while it is forced by using native" );

               auto const orig_mem = memory;
               auto const data_array = tvl::to_array<Vec>(data);
               typename Vec::base_type safe[Vec::vector_element_count()];
               std::memcpy(reinterpret_cast<void*>(safe), reinterpret_cast<void const *>(memory), Vec::vector_size_B());
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 *memory = data_array[i];
                 memory += (mask>>i)&0b1;
               }
               if(((mask>>Vec::vector_element_count())&0b1) == 0) {
                 *memory = safe[memory-orig_mem];
               }
            }
         };
   } // end of namespace functors for template specialization of compress_store for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct compress_store<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return false;
            }
            TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::imask_type mask, typename Vec::base_type * memory, const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive compress_store is not supported by your hardware natively while it is forced by using native" );

               auto const orig_mem = memory;
               auto const data_array = tvl::to_array<Vec>(data);
               typename Vec::base_type safe[Vec::vector_element_count()];
               std::memcpy(reinterpret_cast<void*>(safe), reinterpret_cast<void const *>(memory), Vec::vector_size_B());
               #pragma unroll
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 *memory = data_array[i];
                 memory += (mask>>i)&0b1;
               }
               if(((mask>>Vec::vector_element_count())&0b1) == 0) {
                 *memory = safe[memory-orig_mem];
               }
            }
         };
   } // end of namespace functors for template specialization of compress_store for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2', 'avx512f', 'avx512vl']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct compress_store<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::imask_type mask, typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_mask_compressstoreu_epi32(reinterpret_cast<void*>(memory), mask, data);
            }
         };
   } // end of namespace functors for template specialization of compress_store for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2', 'avx512f', 'avx512vl']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct compress_store<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::imask_type mask, typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_mask_compressstoreu_epi32(reinterpret_cast<void*>(memory), mask, data);
            }
         };
   } // end of namespace functors for template specialization of compress_store for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2', 'avx512f', 'avx512vl']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct compress_store<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::imask_type mask, typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_mask_compressstoreu_epi64(reinterpret_cast<void*>(memory), mask, data);
            }
         };
   } // end of namespace functors for template specialization of compress_store for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2', 'avx512f', 'avx512vl']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct compress_store<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::imask_type mask, typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_mask_compressstoreu_epi64(reinterpret_cast<void*>(memory), mask, data);
            }
         };
   } // end of namespace functors for template specialization of compress_store for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx2', 'avx512f', 'avx512vl']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct compress_store<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::imask_type mask, typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_mask_compressstoreu_ps(reinterpret_cast<void*>(memory), mask, data);
            }
         };
   } // end of namespace functors for template specialization of compress_store for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx2', 'avx512f', 'avx512vl']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct compress_store<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = void;
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
               return true;
            }
            
            TVL_FORCE_INLINE 
            static void apply(
                const typename Vec::imask_type mask, typename Vec::base_type * memory, const typename Vec::register_type data
            ) {

               _mm256_mask_compressstoreu_pd(reinterpret_cast<void*>(memory), mask, data);
            }
         };
   } // end of namespace functors for template specialization of compress_store for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "expand_load" (primitive expand_load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct expand_load<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::imask_type mask, const typename Vec::register_type src, typename Vec::base_type * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive expand_load is not supported by your hardware natively while it is forced by using native" );

               //@todo: optimizable
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> data_array;
               auto src_array = tvl::to_array<Vec>(src);
               auto mem = memory;
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(((mask>>i)&0b1)==0) {
                   data_array[i] = src_array[i];
                 } else {
                   data_array[i] = *mem;
                   ++mem;
                 }
               }
               return tvl::load<Vec>(data_array.data());
               //return _mm256_load_si256(reinterpret_cast<__m256i const *>(data_array.data()));
            }
         };
   } // end of namespace functors for template specialization of expand_load for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "expand_load" (primitive expand_load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct expand_load<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::imask_type mask, const typename Vec::register_type src, typename Vec::base_type * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive expand_load is not supported by your hardware natively while it is forced by using native" );

               //@todo: optimizable
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> data_array;
               auto src_array = tvl::to_array<Vec>(src);
               auto mem = memory;
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(((mask>>i)&0b1)==0) {
                   data_array[i] = src_array[i];
                 } else {
                   data_array[i] = *mem;
                   ++mem;
                 }
               }
               return tvl::load<Vec>(data_array.data());
               //return _mm256_load_si256(reinterpret_cast<__m256i const *>(data_array.data()));
            }
         };
   } // end of namespace functors for template specialization of expand_load for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "expand_load" (primitive expand_load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct expand_load<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::imask_type mask, const typename Vec::register_type src, typename Vec::base_type * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive expand_load is not supported by your hardware natively while it is forced by using native" );

               //@todo: optimizable
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> data_array;
               auto src_array = tvl::to_array<Vec>(src);
               auto mem = memory;
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(((mask>>i)&0b1)==0) {
                   data_array[i] = src_array[i];
                 } else {
                   data_array[i] = *mem;
                   ++mem;
                 }
               }
               return tvl::load<Vec>(data_array.data());
               //return _mm256_load_si256(reinterpret_cast<__m256i const *>(data_array.data()));
            }
         };
   } // end of namespace functors for template specialization of expand_load for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "expand_load" (primitive expand_load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct expand_load<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::imask_type mask, const typename Vec::register_type src, typename Vec::base_type * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive expand_load is not supported by your hardware natively while it is forced by using native" );

               //@todo: optimizable
               alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> data_array;
               auto src_array = tvl::to_array<Vec>(src);
               auto mem = memory;
               for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                 if(((mask>>i)&0b1)==0) {
                   data_array[i] = src_array[i];
                 } else {
                   data_array[i] = *mem;
                   ++mem;
                 }
               }
               return tvl::load<Vec>(data_array.data());
               //return _mm256_load_si256(reinterpret_cast<__m256i const *>(data_array.data()));
            }
         };
   } // end of namespace functors for template specialization of expand_load for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "expand_load" (primitive expand_load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2', 'avx512f', 'avx512vl']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct expand_load<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::imask_type mask, const typename Vec::register_type src, typename Vec::base_type * memory
            ) {

               return _mm256_mask_expandloadu_epi32(src, mask, reinterpret_cast<void const*>(memory));
            }
         };
   } // end of namespace functors for template specialization of expand_load for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "expand_load" (primitive expand_load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2', 'avx512f', 'avx512vl']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct expand_load<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::imask_type mask, const typename Vec::register_type src, typename Vec::base_type * memory
            ) {

               return _mm256_mask_expandloadu_epi32(src, mask, reinterpret_cast<void const*>(memory));
            }
         };
   } // end of namespace functors for template specialization of expand_load for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "expand_load" (primitive expand_load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2', 'avx512f', 'avx512vl']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct expand_load<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::imask_type mask, const typename Vec::register_type src, typename Vec::base_type * memory
            ) {

               return _mm256_mask_expandloadu_epi64(src, mask, reinterpret_cast<void const*>(memory));
            }
         };
   } // end of namespace functors for template specialization of expand_load for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "expand_load" (primitive expand_load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2', 'avx512f', 'avx512vl']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct expand_load<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::imask_type mask, const typename Vec::register_type src, typename Vec::base_type * memory
            ) {

               return _mm256_mask_expandloadu_epi64(src, mask, reinterpret_cast<void const*>(memory));
            }
         };
   } // end of namespace functors for template specialization of expand_load for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "expand_load" (primitive expand_load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx2', 'avx512f', 'avx512vl']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct expand_load<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::imask_type mask, const typename Vec::register_type src, typename Vec::base_type * memory
            ) {

               return _mm256_mask_expandloadu_ps(src, mask, reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of expand_load for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "expand_load" (primitive expand_load).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx2', 'avx512f', 'avx512vl']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct expand_load<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::imask_type mask, const typename Vec::register_type src, typename Vec::base_type * memory
            ) {

               return _mm256_mask_expandloadu_pd(src, mask, reinterpret_cast<void const *>(memory));
            }
         };
   } // end of namespace functors for template specialization of expand_load for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2', 'avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<uint8_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return
                 _mm256_and_si256(
                   tvl::set1<ToType>(
                     (typename Vec::base_type)~0
                   ),
                   _mm256_cvtepi8_epi16(
                     _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2', 'avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<uint8_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return
                 _mm256_and_si256(
                   tvl::set1<ToType>(
                     (typename Vec::base_type)~0
                   ),
                   _mm256_cvtepi8_epi32(
                     _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2', 'avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<uint8_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return
                 _mm256_and_si256(
                   tvl::set1<ToType>(
                     (typename Vec::base_type)~0
                   ),
                   _mm256_cvtepi8_epi64(
                     _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2', 'avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<uint8_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int16_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return
                 _mm256_and_si256(
                   tvl::set1<ToType>(
                     (typename Vec::base_type)~0
                   ),
                   _mm256_cvtepi8_epi16(
                     _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2', 'avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<uint8_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int32_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return
                 _mm256_and_si256(
                   tvl::set1<ToType>(
                     (typename Vec::base_type)~0
                   ),
                   _mm256_cvtepi8_epi32(
                     _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['sse2', 'avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<uint8_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return
                 _mm256_and_si256(
                   tvl::set1<ToType>(
                     (typename Vec::base_type)~0
                   ),
                   _mm256_cvtepi8_epi64(
                     _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2', 'avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<uint16_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return
                 _mm256_and_si256(
                   tvl::set1<ToType>(
                     (typename Vec::base_type)~0
                   ),
                   _mm256_cvtepi16_epi32(
                     _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2', 'avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<uint16_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return
                 _mm256_and_si256(
                   tvl::set1<ToType>(
                     (typename Vec::base_type)~0
                   ),
                   _mm256_cvtepi16_epi64(
                     _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2', 'avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<uint16_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<int32_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return
                 _mm256_and_si256(
                   tvl::set1<ToType>(
                     (typename Vec::base_type)~0
                   ),
                   _mm256_cvtepi16_epi32(
                     _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['sse2', 'avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<uint16_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return
                 _mm256_and_si256(
                   tvl::set1<ToType>(
                     (typename Vec::base_type)~0
                   ),
                   _mm256_cvtepi16_epi64(
                     _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2', 'avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<uint32_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return
                 _mm256_and_si256(
                   tvl::set1<ToType>(
                     (typename Vec::base_type)~0
                   ),
                   _mm256_cvtepi32_epi64(
                     _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['sse2', 'avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<uint32_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return
                 _mm256_and_si256(
                   tvl::set1<ToType>(
                     (typename Vec::base_type)~0
                   ),
                   _mm256_cvtepi32_epi64(
                     _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<int8_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int16_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return 
                 _mm256_cvtepi8_epi16(
                   _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<int8_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int32_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return 
                 _mm256_cvtepi8_epi32(
                   _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<int8_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return 
                 _mm256_cvtepi8_epi64(
                   _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<int16_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<int32_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return 
                 _mm256_cvtepi16_epi32(
                   _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<int16_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return 
                 _mm256_cvtepi16_epi64(
                   _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "load_convert_up" (primitive load_convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct load_convert_up<simd<int32_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                typename Vec::base_type const * memory
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive load_convert_up is not supported by your hardware natively while it is forced by using native" );

               return 
                 _mm256_cvtepi32_epi64(
                   _mm_loadu_si128(reinterpret_cast<__m128i const *>(memory))
                 );
            }
         };
   } // end of namespace functors for template specialization of load_convert_up for avx2 using int32_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_LS_LS_AVX2_HPP