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
 * \file /home/u172652/damon23_tvl_fpga/libs/include/generated/definitions/misc/misc_avx2.hpp
 * \date 2023-02-27
 * \brief Miscellaneous primitives.
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

#ifndef TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_AVX2_HPP
#define TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_AVX2_HPP

#include "../../declarations/misc.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint8_t, avx2>, Idof> {
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );

               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               _mm256_store_si256(reinterpret_cast<__m256i*>(conflicts.data()), _mm256_setzero_si256());
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return _mm256_load_si256(reinterpret_cast<__m256i const*>(conflicts.data()));
            }
         };
   } // end of namespace functors for template specialization of conflict for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint16_t, avx2>, Idof> {
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );

               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               _mm256_store_si256(reinterpret_cast<__m256i*>(conflicts.data()), _mm256_setzero_si256());
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return _mm256_load_si256(reinterpret_cast<__m256i const*>(conflicts.data()));
            }
         };
   } // end of namespace functors for template specialization of conflict for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );

               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               _mm256_store_si256(reinterpret_cast<__m256i*>(conflicts.data()), _mm256_setzero_si256());
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return _mm256_load_si256(reinterpret_cast<__m256i const*>(conflicts.data()));
            }
         };
   } // end of namespace functors for template specialization of conflict for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );

               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               _mm256_store_si256(reinterpret_cast<__m256i*>(conflicts.data()), _mm256_setzero_si256());
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return _mm256_load_si256(reinterpret_cast<__m256i const*>(conflicts.data()));
            }
         };
   } // end of namespace functors for template specialization of conflict for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int8_t, avx2>, Idof> {
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );

               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               _mm256_store_si256(reinterpret_cast<__m256i*>(conflicts.data()), _mm256_setzero_si256());
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return _mm256_load_si256(reinterpret_cast<__m256i const*>(conflicts.data()));
            }
         };
   } // end of namespace functors for template specialization of conflict for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int16_t, avx2>, Idof> {
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );

               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               _mm256_store_si256(reinterpret_cast<__m256i*>(conflicts.data()), _mm256_setzero_si256());
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return _mm256_load_si256(reinterpret_cast<__m256i const*>(conflicts.data()));
            }
         };
   } // end of namespace functors for template specialization of conflict for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );

               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               _mm256_store_si256(reinterpret_cast<__m256i*>(conflicts.data()), _mm256_setzero_si256());
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return _mm256_load_si256(reinterpret_cast<__m256i const*>(conflicts.data()));
            }
         };
   } // end of namespace functors for template specialization of conflict for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "conflict" (primitive conflict).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct conflict<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive conflict is not supported by your hardware natively while it is forced by using native" );

               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> conflicts{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               _mm256_store_si256(reinterpret_cast<__m256i*>(conflicts.data()), _mm256_setzero_si256());
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 for(unsigned cur = 0; cur < ref; ++cur) {
                   if(tmp[ref] == tmp[cur]) {
                     conflicts[ref] |= (1<<cur);
                   }
                 }
               }
               return _mm256_load_si256(reinterpret_cast<__m256i const*>(conflicts.data()));
            }
         };
   } // end of namespace functors for template specialization of conflict for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       * @note: @todo This can be done better using some shuffle instructions cleverly.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive imask_conflict_free is not supported by your hardware natively while it is forced by using native" );

               typename Vec::imask_type result = 0;
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               typename Vec::imask_type pos = 2;
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 if(((mask>>ref)&0b1)==1) {
                   for(unsigned cur = 0; cur < ref; ++cur) {
                     if(((mask>>cur)&0b1)==1) {
                       if(tmp[ref] == tmp[cur]) {
                         result |= pos;
                         break;
                       }
                     }
                   }
                 }
                 pos <<= 1;
               }
               return (~result & mask);
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       * @note: @todo This can be done better using some shuffle instructions cleverly.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive imask_conflict_free is not supported by your hardware natively while it is forced by using native" );

               typename Vec::imask_type result = 0;
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               typename Vec::imask_type pos = 2;
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 if(((mask>>ref)&0b1)==1) {
                   for(unsigned cur = 0; cur < ref; ++cur) {
                     if(((mask>>cur)&0b1)==1) {
                       if(tmp[ref] == tmp[cur]) {
                         result |= pos;
                         break;
                       }
                     }
                   }
                 }
                 pos <<= 1;
               }
               return (~result & mask);
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       * @note: @todo This can be done better using some shuffle instructions cleverly.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive imask_conflict_free is not supported by your hardware natively while it is forced by using native" );

               typename Vec::imask_type result = 0;
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               typename Vec::imask_type pos = 2;
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 if(((mask>>ref)&0b1)==1) {
                   for(unsigned cur = 0; cur < ref; ++cur) {
                     if(((mask>>cur)&0b1)==1) {
                       if(tmp[ref] == tmp[cur]) {
                         result |= pos;
                         break;
                       }
                     }
                   }
                 }
                 pos <<= 1;
               }
               return (~result & mask);
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       * @note: @todo This can be done better using some shuffle instructions cleverly.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive imask_conflict_free is not supported by your hardware natively while it is forced by using native" );

               typename Vec::imask_type result = 0;
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               typename Vec::imask_type pos = 2;
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 if(((mask>>ref)&0b1)==1) {
                   for(unsigned cur = 0; cur < ref; ++cur) {
                     if(((mask>>cur)&0b1)==1) {
                       if(tmp[ref] == tmp[cur]) {
                         result |= pos;
                         break;
                       }
                     }
                   }
                 }
                 pos <<= 1;
               }
               return (~result & mask);
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       * @note: @todo This can be done better using some shuffle instructions cleverly.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive imask_conflict_free is not supported by your hardware natively while it is forced by using native" );

               typename Vec::imask_type result = 0;
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               typename Vec::imask_type pos = 2;
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 if(((mask>>ref)&0b1)==1) {
                   for(unsigned cur = 0; cur < ref; ++cur) {
                     if(((mask>>cur)&0b1)==1) {
                       if(tmp[ref] == tmp[cur]) {
                         result |= pos;
                         break;
                       }
                     }
                   }
                 }
                 pos <<= 1;
               }
               return (~result & mask);
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       * @note: @todo This can be done better using some shuffle instructions cleverly.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive imask_conflict_free is not supported by your hardware natively while it is forced by using native" );

               typename Vec::imask_type result = 0;
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               typename Vec::imask_type pos = 2;
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 if(((mask>>ref)&0b1)==1) {
                   for(unsigned cur = 0; cur < ref; ++cur) {
                     if(((mask>>cur)&0b1)==1) {
                       if(tmp[ref] == tmp[cur]) {
                         result |= pos;
                         break;
                       }
                     }
                   }
                 }
                 pos <<= 1;
               }
               return (~result & mask);
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       * @note: @todo This can be done better using some shuffle instructions cleverly.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive imask_conflict_free is not supported by your hardware natively while it is forced by using native" );

               typename Vec::imask_type result = 0;
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               typename Vec::imask_type pos = 2;
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 if(((mask>>ref)&0b1)==1) {
                   for(unsigned cur = 0; cur < ref; ++cur) {
                     if(((mask>>cur)&0b1)==1) {
                       if(tmp[ref] == tmp[cur]) {
                         result |= pos;
                         break;
                       }
                     }
                   }
                 }
                 pos <<= 1;
               }
               return (~result & mask);
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       * @note: @todo This can be done better using some shuffle instructions cleverly.
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive imask_conflict_free is not supported by your hardware natively while it is forced by using native" );

               typename Vec::imask_type result = 0;
               alignas(Vec::vector_alignment())
                 std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
               _mm256_store_si256(reinterpret_cast<__m256i*>(tmp.data()), data);
               typename Vec::imask_type pos = 2;
               for(unsigned ref = 1; ref < Vec::vector_element_count(); ++ref) {
                 if(((mask>>ref)&0b1)==1) {
                   for(unsigned cur = 0; cur < ref; ++cur) {
                     if(((mask>>cur)&0b1)==1) {
                       if(tmp[ref] == tmp[cur]) {
                         result |= pos;
                         break;
                       }
                     }
                   }
                 }
                 pos <<= 1;
               }
               return (~result & mask);
            }
         };
   } // end of namespace functors for template specialization of imask_conflict_free for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend" (primitive blend).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend<simd<uint8_t, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {

               return _mm256_or_si256(_mm256_andnot_si256(control, left), _mm256_and_si256(control,right));
            }
         };
   } // end of namespace functors for template specialization of blend for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend" (primitive blend).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend<simd<int8_t, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {

               return _mm256_or_si256(_mm256_andnot_si256(control, left), _mm256_and_si256(control,right));
            }
         };
   } // end of namespace functors for template specialization of blend for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend" (primitive blend).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend<simd<uint16_t, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {

               return _mm256_or_si256(_mm256_andnot_si256(control, left), _mm256_and_si256(control,right));
            }
         };
   } // end of namespace functors for template specialization of blend for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend" (primitive blend).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend<simd<int16_t, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {

               return _mm256_or_si256(_mm256_andnot_si256(control, left), _mm256_and_si256(control,right));
            }
         };
   } // end of namespace functors for template specialization of blend for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend" (primitive blend).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend<simd<int32_t, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {

               return _mm256_or_si256(_mm256_andnot_si256(control, left), _mm256_and_si256(control,right));
            }
         };
   } // end of namespace functors for template specialization of blend for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend" (primitive blend).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend<simd<uint32_t, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {

               return _mm256_or_si256(_mm256_andnot_si256(control, left), _mm256_and_si256(control,right));
            }
         };
   } // end of namespace functors for template specialization of blend for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend" (primitive blend).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend<simd<int64_t, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {

               return _mm256_or_si256(_mm256_andnot_si256(control, left), _mm256_and_si256(control,right));
            }
         };
   } // end of namespace functors for template specialization of blend for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend" (primitive blend).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend<simd<uint64_t, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {

               return _mm256_or_si256(_mm256_andnot_si256(control, left), _mm256_and_si256(control,right));
            }
         };
   } // end of namespace functors for template specialization of blend for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend" (primitive blend).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend<simd<float, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {

               return _mm256_or_ps(_mm256_andnot_ps(control, left), _mm256_and_ps(control,right));
            }
         };
   } // end of namespace functors for template specialization of blend for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend" (primitive blend).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend<simd<double, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {

               return _mm256_or_pd(_mm256_andnot_pd(control, left), _mm256_and_pd(control,right));
            }
         };
   } // end of namespace functors for template specialization of blend for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend_add" (primitive blend_add).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend_add<simd<uint8_t, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right, const typename Vec::register_type adder
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive blend_add is not supported by your hardware natively while it is forced by using native" );

               auto const left_part = _mm256_and_si256(control, left);
               auto const right_added_part = _mm256_andnot_si256(control, _mm256_add_epi8(right, adder));
               return _mm256_or_si256(left_part, right_added_part);
            }
         };
   } // end of namespace functors for template specialization of blend_add for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend_add" (primitive blend_add).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend_add<simd<int8_t, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right, const typename Vec::register_type adder
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive blend_add is not supported by your hardware natively while it is forced by using native" );

               auto const left_part = _mm256_and_si256(control, left);
               auto const right_added_part = _mm256_andnot_si256(control, _mm256_add_epi8(right, adder));
               return _mm256_or_si256(left_part, right_added_part);
            }
         };
   } // end of namespace functors for template specialization of blend_add for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend_add" (primitive blend_add).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend_add<simd<uint16_t, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right, const typename Vec::register_type adder
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive blend_add is not supported by your hardware natively while it is forced by using native" );

               auto const left_part = _mm256_and_si256(control, left);
               auto const right_added_part = _mm256_andnot_si256(control, _mm256_add_epi16(right, adder));
               return _mm256_or_si256(left_part, right_added_part);
            }
         };
   } // end of namespace functors for template specialization of blend_add for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend_add" (primitive blend_add).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend_add<simd<int16_t, avx2>, Idof> {
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right, const typename Vec::register_type adder
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive blend_add is not supported by your hardware natively while it is forced by using native" );

               auto const left_part = _mm256_and_si256(control, left);
               auto const right_added_part = _mm256_andnot_si256(control, _mm256_add_epi16(right, adder));
               return _mm256_or_si256(left_part, right_added_part);
            }
         };
   } // end of namespace functors for template specialization of blend_add for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend_add" (primitive blend_add).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend_add<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right, const typename Vec::register_type adder
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive blend_add is not supported by your hardware natively while it is forced by using native" );

               auto const left_part = _mm256_and_si256(control, left);
               auto const right_added_part = _mm256_andnot_si256(control, _mm256_add_epi32(right, adder));
               return _mm256_or_si256(left_part, right_added_part);
            }
         };
   } // end of namespace functors for template specialization of blend_add for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend_add" (primitive blend_add).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend_add<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right, const typename Vec::register_type adder
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive blend_add is not supported by your hardware natively while it is forced by using native" );

               auto const left_part = _mm256_and_si256(control, left);
               auto const right_added_part = _mm256_andnot_si256(control, _mm256_add_epi32(right, adder));
               return _mm256_or_si256(left_part, right_added_part);
            }
         };
   } // end of namespace functors for template specialization of blend_add for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend_add" (primitive blend_add).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend_add<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right, const typename Vec::register_type adder
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive blend_add is not supported by your hardware natively while it is forced by using native" );

               auto const left_part = _mm256_and_si256(control, left);
               auto const right_added_part = _mm256_andnot_si256(control, _mm256_add_epi64(right, adder));
               return _mm256_or_si256(left_part, right_added_part);
            }
         };
   } // end of namespace functors for template specialization of blend_add for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "blend_add" (primitive blend_add).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct blend_add<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right, const typename Vec::register_type adder
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive blend_add is not supported by your hardware natively while it is forced by using native" );

               auto const left_part = _mm256_and_si256(control, left);
               auto const right_added_part = _mm256_andnot_si256(control, _mm256_add_epi64(right, adder));
               return _mm256_or_si256(left_part, right_added_part);
            }
         };
   } // end of namespace functors for template specialization of blend_add for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "undefined" (primitive undefined).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct undefined<simd<uint8_t, avx2>, Idof> {
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

               return _mm256_undefined_si256();
            }
         };
   } // end of namespace functors for template specialization of undefined for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "undefined" (primitive undefined).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct undefined<simd<int8_t, avx2>, Idof> {
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

               return _mm256_undefined_si256();
            }
         };
   } // end of namespace functors for template specialization of undefined for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "undefined" (primitive undefined).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct undefined<simd<uint16_t, avx2>, Idof> {
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

               return _mm256_undefined_si256();
            }
         };
   } // end of namespace functors for template specialization of undefined for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "undefined" (primitive undefined).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct undefined<simd<int16_t, avx2>, Idof> {
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

               return _mm256_undefined_si256();
            }
         };
   } // end of namespace functors for template specialization of undefined for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "undefined" (primitive undefined).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct undefined<simd<uint32_t, avx2>, Idof> {
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

               return _mm256_undefined_si256();
            }
         };
   } // end of namespace functors for template specialization of undefined for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "undefined" (primitive undefined).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct undefined<simd<int32_t, avx2>, Idof> {
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

               return _mm256_undefined_si256();
            }
         };
   } // end of namespace functors for template specialization of undefined for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "undefined" (primitive undefined).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct undefined<simd<uint64_t, avx2>, Idof> {
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

               return _mm256_undefined_si256();
            }
         };
   } // end of namespace functors for template specialization of undefined for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "undefined" (primitive undefined).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct undefined<simd<int64_t, avx2>, Idof> {
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

               return _mm256_undefined_si256();
            }
         };
   } // end of namespace functors for template specialization of undefined for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "undefined" (primitive undefined).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct undefined<simd<float, avx2>, Idof> {
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

               return _mm256_undefined_ps();
            }
         };
   } // end of namespace functors for template specialization of undefined for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "undefined" (primitive undefined).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct undefined<simd<double, avx2>, Idof> {
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

               return _mm256_undefined_pd();
            }
         };
   } // end of namespace functors for template specialization of undefined for avx2 using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_AVX2_HPP