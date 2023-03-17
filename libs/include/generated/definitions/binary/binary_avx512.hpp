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
 * \file /home/u172652/damon23_tvl_fpga/libs/include/generated/definitions/binary/binary_avx512.hpp
 * \date 2023-02-27
 * \brief Bit manipulation primitives.
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

#ifndef TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_AVX512_HPP
#define TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_AVX512_HPP

#include "../../declarations/binary.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_and_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512dq']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_and_ps(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512dq']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_and_pd(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_and for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_xor_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_xor for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_xor_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_xor for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_xor_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_xor for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_xor_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_xor for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_xor_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_xor for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_xor_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_xor for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_xor_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_xor for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_xor_si512(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_xor for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512dq']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_xor_ps(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_xor for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512dq']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {

               return _mm512_xor_pd(a, b);
            }
         };
   } // end of namespace functors for template specialization of binary_xor for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {

               return _mm512_srli_epi32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {

               return _mm512_srli_epi64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {

               return _mm512_srli_epi32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {

               return _mm512_srli_epi64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {

               return _mm512_srli_epi16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {

               return _mm512_srli_epi16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_right for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive shift_right is not supported by your hardware natively while it is forced by using native" );

               return _mm512_castsi512_ps(_mm512_srli_epi32(_mm512_castps_si512(data), shift));
            }
         };
   } // end of namespace functors for template specialization of shift_right for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive shift_right is not supported by your hardware natively while it is forced by using native" );

               return _mm512_castsi512_pd(_mm512_srli_epi64(_mm512_castpd_si512(data), shift));
            }
         };
   } // end of namespace functors for template specialization of shift_right for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {

               return _mm512_slli_epi32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {

               return _mm512_slli_epi64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {

               return _mm512_slli_epi32(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {

               return _mm512_slli_epi64(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {

               return _mm512_slli_epi16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {

               return _mm512_slli_epi16(data, shift);
            }
         };
   } // end of namespace functors for template specialization of shift_left for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive shift_left is not supported by your hardware natively while it is forced by using native" );

               return _mm512_castsi512_ps(_mm512_slli_epi32(_mm512_castps_si512(data), shift));
            }
         };
   } // end of namespace functors for template specialization of shift_left for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            
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
                const typename Vec::register_type data, const int shift
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive shift_left is not supported by your hardware natively while it is forced by using native" );

               return _mm512_castsi512_pd(_mm512_slli_epi64(_mm512_castpd_si512(data), shift));
            }
         };
   } // end of namespace functors for template specialization of shift_left for avx512 using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_AVX512_HPP