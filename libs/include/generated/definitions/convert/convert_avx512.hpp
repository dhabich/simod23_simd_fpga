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
 * \file /home/u172652/damon23_tvl_fpga/libs/include/generated/definitions/convert/convert_avx512.hpp
 * \date 2023-02-27
 * \brief Conversion primitives.
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

#ifndef TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_AVX512_HPP
#define TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_AVX512_HPP

#include "../../declarations/convert.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx512>, simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            using ToType = simd<int8_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx512>, simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            using ToType = simd<uint8_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx512>, simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            using ToType = simd<int16_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx512>, simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            using ToType = simd<uint16_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx512>, simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            using ToType = simd<int32_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx512>, simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            using ToType = simd<uint32_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx512>, simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            using ToType = simd<int64_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx512>, simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            using ToType = simd<uint64_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx512>, simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            using ToType = simd<float, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx512>, simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            using ToType = simd<double, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return data;
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx512>, simd<float, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            using ToType = simd<float, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx512>, simd<float, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            using ToType = simd<float, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx512>, simd<float, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            using ToType = simd<float, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx512>, simd<float, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            using ToType = simd<float, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx512>, simd<float, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            using ToType = simd<float, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx512>, simd<float, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            using ToType = simd<float, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx512>, simd<float, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            using ToType = simd<float, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx512>, simd<float, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            using ToType = simd<float, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx512>, simd<int8_t, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            using ToType = simd<int8_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castps_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx512>, simd<uint8_t, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            using ToType = simd<uint8_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castps_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx512>, simd<int16_t, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            using ToType = simd<int16_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castps_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx512>, simd<uint16_t, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            using ToType = simd<uint16_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castps_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx512>, simd<int32_t, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            using ToType = simd<int32_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castps_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx512>, simd<uint32_t, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            using ToType = simd<uint32_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castps_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx512>, simd<int64_t, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            using ToType = simd<int64_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castps_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx512>, simd<uint64_t, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            using ToType = simd<uint64_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castps_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx512>, simd<double, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            using ToType = simd<double, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx512>, simd<double, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            using ToType = simd<double, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx512>, simd<double, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            using ToType = simd<double, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx512>, simd<double, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            using ToType = simd<double, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx512>, simd<double, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            using ToType = simd<double, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx512>, simd<double, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            using ToType = simd<double, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx512>, simd<double, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            using ToType = simd<double, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx512>, simd<double, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            using ToType = simd<double, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castsi512_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx512>, simd<int8_t, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            using ToType = simd<int8_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castpd_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx512>, simd<uint8_t, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            using ToType = simd<uint8_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castpd_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx512>, simd<int16_t, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            using ToType = simd<int16_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castpd_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx512>, simd<uint16_t, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            using ToType = simd<uint16_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castpd_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx512>, simd<int32_t, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            using ToType = simd<int32_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castpd_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx512>, simd<uint32_t, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            using ToType = simd<uint32_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castpd_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx512>, simd<int64_t, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            using ToType = simd<int64_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castpd_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx512>, simd<uint64_t, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            using ToType = simd<uint64_t, avx512>;
            using return_type = typename ToType::register_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {

               return _mm512_castpd_si512(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx512 using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_AVX512_HPP