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
 * \file /home/u172652/damon23_tvl_fpga/libs/include/generated/definitions/convert/convert_avx2.hpp
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

#ifndef TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_AVX2_HPP
#define TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_AVX2_HPP

#include "../../declarations/convert.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<float, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<double, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<float, avx2>;
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

               return _mm256_castsi256_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<float, avx2>;
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

               return _mm256_castsi256_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<float, avx2>;
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

               return _mm256_castsi256_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<float, avx2>;
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

               return _mm256_castsi256_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<float, avx2>;
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

               return _mm256_castsi256_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<float, avx2>;
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

               return _mm256_castsi256_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<float, avx2>;
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

               return _mm256_castsi256_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<float, avx2>;
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

               return _mm256_castsi256_ps(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<int8_t, avx2>;
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

               return _mm256_castps_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<uint8_t, avx2>;
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

               return _mm256_castps_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<int16_t, avx2>;
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

               return _mm256_castps_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<uint16_t, avx2>;
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

               return _mm256_castps_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<int32_t, avx2>;
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

               return _mm256_castps_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<uint32_t, avx2>;
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

               return _mm256_castps_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<int64_t, avx2>;
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

               return _mm256_castps_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<float, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<uint64_t, avx2>;
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

               return _mm256_castps_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int8_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<double, avx2>;
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

               return _mm256_castsi256_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint8_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<double, avx2>;
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

               return _mm256_castsi256_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int16_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<double, avx2>;
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

               return _mm256_castsi256_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint16_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<double, avx2>;
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

               return _mm256_castsi256_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int32_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<double, avx2>;
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

               return _mm256_castsi256_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint32_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<double, avx2>;
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

               return _mm256_castsi256_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<int64_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<double, avx2>;
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

               return _mm256_castsi256_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<uint64_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<double, avx2>;
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

               return _mm256_castsi256_pd(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<int8_t, avx2>;
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

               return _mm256_castpd_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<uint8_t, avx2>;
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

               return _mm256_castpd_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<int16_t, avx2>;
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

               return _mm256_castpd_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<uint16_t, avx2>;
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

               return _mm256_castpd_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<int32_t, avx2>;
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

               return _mm256_castpd_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<uint32_t, avx2>;
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

               return _mm256_castpd_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<int64_t, avx2>;
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

               return _mm256_castpd_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct reinterpret<simd<double, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<uint64_t, avx2>;
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

               return _mm256_castpd_si256(data);
            }
         };
   } // end of namespace functors for template specialization of reinterpret for avx2 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<int8_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int32_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               return { {
                 _mm256_cvtepi8_epi32(b),
                 _mm256_cvtepi8_epi32(_mm_bsrli_si128(b,8)),
                 _mm256_cvtepi8_epi32(c),
                 _mm256_cvtepi8_epi32(_mm_bsrli_si128(c,8))
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       * @note: int to uint is unsafe... we should delete this
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<uint8_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi32(0xff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi8_epi32(b), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi32(_mm_bsrli_si128(b,8)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi32(c), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi32(_mm_bsrli_si128(c,8)), upper_zero)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       * @note: int to uint is unsafe... we should delete this
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<uint8_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int32_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi32(0xff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi8_epi32(b), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi32(_mm_bsrli_si128(b,8)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi32(c), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi32(_mm_bsrli_si128(c,8)), upper_zero)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       * @note: int to uint is unsafe... we should delete this
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<int8_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi32(0xff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi8_epi32(b), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi32(_mm_bsrli_si128(b,8)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi32(c), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi32(_mm_bsrli_si128(c,8)), upper_zero)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<int8_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const x = _mm256_extracti128_si256(data, 0);
               auto const y = _mm256_extracti128_si256(data, 1);
               return { {
                 _mm256_cvtepi8_epi64(x),
                 _mm256_cvtepi8_epi64(_mm_bsrli_si128(x, 4)),
                 _mm256_cvtepi8_epi64(_mm_bsrli_si128(x, 8)),
                 _mm256_cvtepi8_epi64(_mm_bsrli_si128(x, 12)),
                 _mm256_cvtepi8_epi64(y),
                 _mm256_cvtepi8_epi64(_mm_bsrli_si128(y, 4)),
                 _mm256_cvtepi8_epi64(_mm_bsrli_si128(y, 8)),
                 _mm256_cvtepi8_epi64(_mm_bsrli_si128(y, 12))
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<uint8_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const x = _mm256_extracti128_si256(data, 0);
               auto const y = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi64x(0xff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi8_epi64(x), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(x, 4)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(x, 8)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(x, 12)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(y), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(y, 4)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(y, 8)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(y, 12)), upper_zero),
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<uint8_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const x = _mm256_extracti128_si256(data, 0);
               auto const y = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi64x(0xff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi8_epi64(x), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(x, 4)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(x, 8)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(x, 12)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(y), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(y, 4)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(y, 8)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(y, 12)), upper_zero),
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<int8_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const x = _mm256_extracti128_si256(data, 0);
               auto const y = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi64x(0xff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi8_epi64(x), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(x, 4)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(x, 8)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(x, 12)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(y), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(y, 4)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(y, 8)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi8_epi64(_mm_bsrli_si128(y, 12)), upper_zero),
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<int16_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<int32_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               return { {
                   _mm256_cvtepi16_epi32(b),
                   _mm256_cvtepi16_epi32(c)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<uint16_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi32(0xffff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi16_epi32(b), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi16_epi32(c), upper_zero)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<uint16_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<int32_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi32(0xffff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi16_epi32(b), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi16_epi32(c), upper_zero)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<int16_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi32(0xffff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi16_epi32(b), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi16_epi32(c), upper_zero)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<int16_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               return { {
                 _mm256_cvtepi16_epi64(b),
                 _mm256_cvtepi16_epi64(_mm_bsrli_si128(b,8)),
                 _mm256_cvtepi16_epi64(c),
                 _mm256_cvtepi16_epi64(_mm_bsrli_si128(c,8)),
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<uint16_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi64x(0xffff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi16_epi64(b), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi16_epi64(_mm_bsrli_si128(b,8)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi16_epi64(c), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi16_epi64(_mm_bsrli_si128(c,8)), upper_zero)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<uint16_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi64x(0xffff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi16_epi64(b), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi16_epi64(_mm_bsrli_si128(b,8)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi16_epi64(c), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi16_epi64(_mm_bsrli_si128(c,8)), upper_zero)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<int16_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi64x(0xffff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi16_epi64(b), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi16_epi64(_mm_bsrli_si128(b,8)), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi16_epi64(c), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi16_epi64(_mm_bsrli_si128(c,8)), upper_zero)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<int32_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               return { {
                 _mm256_cvtepi32_epi64(b),
                 _mm256_cvtepi32_epi64(c),
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<uint32_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi64x(0xffffffff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi32_epi64(b), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi32_epi64(c), upper_zero)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<uint32_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi64x(0xffffffff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi32_epi64(b), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi32_epi64(c), upper_zero)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<int32_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               auto const b = _mm256_extracti128_si256(data, 0);
               auto const c = _mm256_extracti128_si256(data, 1);
               auto const upper_zero = _mm256_set1_epi64x(0xffffffff);
               return { {
                 _mm256_and_si256(_mm256_cvtepi32_epi64(b), upper_zero),
                 _mm256_and_si256(_mm256_cvtepi32_epi64(c), upper_zero)
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<int64_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               return { {
                 data
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<uint64_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<int64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               return { {
                 data
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<int64_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               return { {
                 data
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_up" (primitive convert_up).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_up<simd<uint64_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
            using return_type = std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)>;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return false;
            }
            [[nodiscard]] TVL_NO_NATIVE_SUPPORT_WARNING
            TVL_FORCE_INLINE 
            static std::array<typename ToType::register_type, sizeof(typename ToType::base_type)/sizeof(typename Vec::base_type)> apply(
                const typename Vec::register_type data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_up is not supported by your hardware natively while it is forced by using native" );

               return { {
                 data
               } };
            }
         };
   } // end of namespace functors for template specialization of convert_up for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_down" (primitive convert_down).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_down<simd<int32_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
                std::array<typename Vec::register_type, sizeof(typename Vec::base_type)/sizeof(typename ToType::base_type)> data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_down is not supported by your hardware natively while it is forced by using native" );

               auto const upper_zero = _mm256_set1_epi32(0xff);
               const __m256i x = 
                 _mm256_or_si256(
                   _mm256_or_si256(
                     _mm256_or_si256(
                       _mm256_and_si256(upper_zero, data[0]), 
                       _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[1]),1)
                     ), 
                     _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[2]), 2)
                   ), 
                   _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[3]), 3)
                 );
               const __m256i y = 
                 _mm256_shuffle_epi8(
                   x, 
                   _mm256_set_epi32(
                     0xF0B0703,0xE0A0602, 0xD090501,0xC080400, 
                     0xF0B0703,0xE0A0602, 0xD090501,0xC080400
                   )
                 );
               return _mm256_permutevar8x32_epi32(y, _mm256_set_epi32(7,3,6,2,5,1,4,0));
            }
         };
   } // end of namespace functors for template specialization of convert_down for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_down" (primitive convert_down).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_down<simd<uint32_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
                std::array<typename Vec::register_type, sizeof(typename Vec::base_type)/sizeof(typename ToType::base_type)> data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_down is not supported by your hardware natively while it is forced by using native" );

               auto const upper_zero = _mm256_set1_epi32(0xff);
               const __m256i x = 
                 _mm256_or_si256(
                   _mm256_or_si256(
                     _mm256_or_si256(
                       _mm256_and_si256(upper_zero, data[0]), 
                       _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[1]),1)
                     ), 
                     _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[2]), 2)
                   ), 
                   _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[3]), 3)
                 );
               const __m256i y = 
                 _mm256_shuffle_epi8(
                   x, 
                   _mm256_set_epi32(
                     0xF0B0703,0xE0A0602, 0xD090501,0xC080400, 
                     0xF0B0703,0xE0A0602, 0xD090501,0xC080400
                   )
                 );
               return _mm256_permutevar8x32_epi32(y, _mm256_set_epi32(7,3,6,2,5,1,4,0));
            }
         };
   } // end of namespace functors for template specialization of convert_down for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_down" (primitive convert_down).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_down<simd<int32_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
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
                std::array<typename Vec::register_type, sizeof(typename Vec::base_type)/sizeof(typename ToType::base_type)> data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_down is not supported by your hardware natively while it is forced by using native" );

               auto const upper_zero = _mm256_set1_epi32(0xffff);
               auto const d0 = _mm256_and_si256(upper_zero, data[0]);
               auto const d1 = _mm256_and_si256(upper_zero, data[1]);
               using zext = functors::cast<simd<Vec::base_type, sse>, simd<Vec::base_type, avx2>, Idof>; 
               return
                 _mm256_shuffle_epi8(
                   _mm256_permute2x128_si256(
                     _mm256_or_si256(
                       zext::apply(
                         _mm256_extracti128_si256(
                           d0,
                           0
                         )
                       ),
                       _mm256_bslli_epi128(
                         zext::apply(
                           _mm256_extracti128_si256(
                             d0,
                             1
                           )
                         ), 
                         2
                       )
                     ),
                     _mm256_or_si256(
                       zext::apply(
                         _mm256_extracti128_si256(
                           d1,
                           0
                         )
                       ),
                       _mm256_bslli_epi128(
                         zext::apply(
                           _mm256_extracti128_si256(
                             d1,
                             1
                           )
                         ), 
                         2
                       )
                     ),
                     0x20
                   ),
                   _mm256_set_epi32(
                     0x0f0e0b0a, 0x07060302, 0x0d0c0908, 0x05040100,
                     0x0f0e0b0a, 0x07060302, 0x0d0c0908, 0x05040100
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of convert_down for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_down" (primitive convert_down).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_down<simd<uint32_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
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
                std::array<typename Vec::register_type, sizeof(typename Vec::base_type)/sizeof(typename ToType::base_type)> data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_down is not supported by your hardware natively while it is forced by using native" );

               auto const upper_zero = _mm256_set1_epi32(0xffff);
               auto const d0 = _mm256_and_si256(upper_zero, data[0]);
               auto const d1 = _mm256_and_si256(upper_zero, data[1]);
               using zext = functors::cast<simd<Vec::base_type, sse>, simd<Vec::base_type, avx2>, Idof>; 
               return
                 _mm256_shuffle_epi8(
                   _mm256_permute2x128_si256(
                     _mm256_or_si256(
                       zext::apply(
                         _mm256_extracti128_si256(
                           d0,
                           0
                         )
                       ),
                       _mm256_bslli_epi128(
                         zext::apply(
                           _mm256_extracti128_si256(
                             d0,
                             1
                           )
                         ), 
                         2
                       )
                     ),
                     _mm256_or_si256(
                       zext::apply(
                         _mm256_extracti128_si256(
                           d1,
                           0
                         )
                       ),
                       _mm256_bslli_epi128(
                         zext::apply(
                           _mm256_extracti128_si256(
                             d1,
                             1
                           )
                         ), 
                         2
                       )
                     ),
                     0x20
                   ),
                   _mm256_set_epi32(
                     0x0f0e0b0a, 0x07060302, 0x0d0c0908, 0x05040100,
                     0x0f0e0b0a, 0x07060302, 0x0d0c0908, 0x05040100
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of convert_down for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_down" (primitive convert_down).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_down<simd<int64_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
                std::array<typename Vec::register_type, sizeof(typename Vec::base_type)/sizeof(typename ToType::base_type)> data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_down is not supported by your hardware natively while it is forced by using native" );

               auto const upper_zero = _mm256_set1_epi64x(0xff);
               auto const perm = _mm256_set_epi32(7,5,3,1,6,4,2,0);
               auto const a = _mm256_permutevar8x32_epi32(_mm256_or_si256(
                 _mm256_and_si256(upper_zero, data[0]),
                 _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[1]), 4)), perm);
               auto const b = _mm256_permutevar8x32_epi32(_mm256_or_si256(
                 _mm256_and_si256(upper_zero, data[2]),
                 _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[3]), 4)), perm);
               auto const c = _mm256_permutevar8x32_epi32(_mm256_or_si256(
                 _mm256_and_si256(upper_zero, data[4]),
                 _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[5]), 4)), perm);
               auto const d = _mm256_permutevar8x32_epi32(_mm256_or_si256(
                 _mm256_and_si256(upper_zero, data[6]),
                 _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[7]), 4)), perm);
               auto const x = _mm256_or_si256(_mm256_or_si256(_mm256_or_si256(a, _mm256_bslli_epi128(b,1)), _mm256_bslli_epi128(c, 2)), _mm256_bslli_epi128(d, 3));
               auto const y = _mm256_shuffle_epi8(x, _mm256_set_epi32(0xF0B0703,0xE0A0602, 0xD090501,0xC080400, 0xF0B0703,0xE0A0602, 0xD090501,0xC080400));
               return _mm256_permutevar8x32_epi32(y, _mm256_set_epi32(7,3,6,2,5,1,4,0));
            }
         };
   } // end of namespace functors for template specialization of convert_down for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_down" (primitive convert_down).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_down<simd<uint64_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
                std::array<typename Vec::register_type, sizeof(typename Vec::base_type)/sizeof(typename ToType::base_type)> data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_down is not supported by your hardware natively while it is forced by using native" );

               auto const upper_zero = _mm256_set1_epi64x(0xff);
               auto const perm = _mm256_set_epi32(7,5,3,1,6,4,2,0);
               auto const a = _mm256_permutevar8x32_epi32(_mm256_or_si256(
                 _mm256_and_si256(upper_zero, data[0]),
                 _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[1]), 4)), perm);
               auto const b = _mm256_permutevar8x32_epi32(_mm256_or_si256(
                 _mm256_and_si256(upper_zero, data[2]),
                 _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[3]), 4)), perm);
               auto const c = _mm256_permutevar8x32_epi32(_mm256_or_si256(
                 _mm256_and_si256(upper_zero, data[4]),
                 _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[5]), 4)), perm);
               auto const d = _mm256_permutevar8x32_epi32(_mm256_or_si256(
                 _mm256_and_si256(upper_zero, data[6]),
                 _mm256_bslli_epi128(_mm256_and_si256(upper_zero, data[7]), 4)), perm);
               auto const x = _mm256_or_si256(_mm256_or_si256(_mm256_or_si256(a, _mm256_bslli_epi128(b,1)), _mm256_bslli_epi128(c, 2)), _mm256_bslli_epi128(d, 3));
               auto const y = _mm256_shuffle_epi8(x, _mm256_set_epi32(0xF0B0703,0xE0A0602, 0xD090501,0xC080400, 0xF0B0703,0xE0A0602, 0xD090501,0xC080400));
               return _mm256_permutevar8x32_epi32(y, _mm256_set_epi32(7,3,6,2,5,1,4,0));
            }
         };
   } // end of namespace functors for template specialization of convert_down for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_down" (primitive convert_down).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_down<simd<int64_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
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
                std::array<typename Vec::register_type, sizeof(typename Vec::base_type)/sizeof(typename ToType::base_type)> data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_down is not supported by your hardware natively while it is forced by using native" );

               auto const upper_zero = _mm256_set1_epi64x(0xffff);
               auto const d0 = _mm256_and_si256(upper_zero, data[0]);
               auto const d1 = _mm256_and_si256(upper_zero, data[1]);
               auto const d2 = _mm256_and_si256(upper_zero, data[2]);
               auto const d3 = _mm256_and_si256(upper_zero, data[3]);
               using zext = functors::cast<simd<Vec::base_type, sse>, simd<Vec::base_type, avx2>, Idof>; 
               return
                 _mm256_shuffle_epi8(
                   _mm256_permute2x128_si256(
                     _mm256_or_si256(
                       _mm256_or_si256(
                         zext::apply(_mm256_extracti128_si256(d0,0)),
                         _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d0,1)),2)
                       ),
                       _mm256_or_si256(
                         _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d1,0)),4),
                         _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d1,1)),6)
                       )
                     ),
                     _mm256_or_si256(
                       _mm256_or_si256(
                         zext::apply(_mm256_extracti128_si256(d2,0)),
                         _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d2,1)),2)
                       ),
                       _mm256_or_si256(
                         _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d3,0)),4),
                         _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d3,1)),6)
                       )
                     ),
                     0x20
                   ),
                   _mm256_set_epi32(
                     0x0f0e0706, 0x0d0c0504, 0x0b0a0302, 0x09080100,
                     0x0f0e0706, 0x0d0c0504, 0x0b0a0302, 0x09080100
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of convert_down for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_down" (primitive convert_down).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_down<simd<uint64_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
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
                std::array<typename Vec::register_type, sizeof(typename Vec::base_type)/sizeof(typename ToType::base_type)> data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_down is not supported by your hardware natively while it is forced by using native" );

               auto const upper_zero = _mm256_set1_epi64x(0xffff);
               auto const d0 = _mm256_and_si256(upper_zero, data[0]);
               auto const d1 = _mm256_and_si256(upper_zero, data[1]);
               auto const d2 = _mm256_and_si256(upper_zero, data[2]);
               auto const d3 = _mm256_and_si256(upper_zero, data[3]);
               using zext = functors::cast<simd<Vec::base_type, sse>, simd<Vec::base_type, avx2>, Idof>; 
               return
                 _mm256_shuffle_epi8(
                   _mm256_permute2x128_si256(
                     _mm256_or_si256(
                       _mm256_or_si256(
                         zext::apply(_mm256_extracti128_si256(d0,0)),
                         _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d0,1)),2)
                       ),
                       _mm256_or_si256(
                         _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d1,0)),4),
                         _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d1,1)),6)
                       )
                     ),
                     _mm256_or_si256(
                       _mm256_or_si256(
                         zext::apply(_mm256_extracti128_si256(d2,0)),
                         _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d2,1)),2)
                       ),
                       _mm256_or_si256(
                         _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d3,0)),4),
                         _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d3,1)),6)
                       )
                     ),
                     0x20
                   ),
                   _mm256_set_epi32(
                     0x0f0e0706, 0x0d0c0504, 0x0b0a0302, 0x09080100,
                     0x0f0e0706, 0x0d0c0504, 0x0b0a0302, 0x09080100
                   )
                 );
            }
         };
   } // end of namespace functors for template specialization of convert_down for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_down" (primitive convert_down).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_down<simd<int64_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
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
                std::array<typename Vec::register_type, sizeof(typename Vec::base_type)/sizeof(typename ToType::base_type)> data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_down is not supported by your hardware natively while it is forced by using native" );

               auto const upper_zero = _mm256_set1_epi64x(0xffffffff);
               auto const d0 = _mm256_and_si256(upper_zero, data[0]);
               auto const d1 = _mm256_and_si256(upper_zero, data[1]);
               using zext = functors::cast<simd<Vec::base_type, sse>, simd<Vec::base_type, avx2>, Idof>; 
               return
                 _mm256_shuffle_epi32(
                   _mm256_permute2x128_si256(
                     _mm256_or_si256(
                       zext::apply(_mm256_extracti128_si256(d0, 0)),
                       _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d0, 1)),4)
                     ),
                     _mm256_or_si256(
                       zext::apply(_mm256_extracti128_si256(d1, 0)),
                       _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d1, 1)),4)
                     ),
                     0x20
                   ),
                   0xd8
                 );
            }
         };
   } // end of namespace functors for template specialization of convert_down for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "convert_down" (primitive convert_down).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx2']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct convert_down<simd<uint64_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
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
                std::array<typename Vec::register_type, sizeof(typename Vec::base_type)/sizeof(typename ToType::base_type)> data
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive convert_down is not supported by your hardware natively while it is forced by using native" );

               auto const upper_zero = _mm256_set1_epi64x(0xffffffff);
               auto const d0 = _mm256_and_si256(upper_zero, data[0]);
               auto const d1 = _mm256_and_si256(upper_zero, data[1]);
               using zext = functors::cast<simd<Vec::base_type, sse>, simd<Vec::base_type, avx2>, Idof>; 
               return
                 _mm256_shuffle_epi32(
                   _mm256_permute2x128_si256(
                     _mm256_or_si256(
                       zext::apply(_mm256_extracti128_si256(d0, 0)),
                       _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d0, 1)),4)
                     ),
                     _mm256_or_si256(
                       zext::apply(_mm256_extracti128_si256(d1, 0)),
                       _mm256_bslli_epi128(zext::apply(_mm256_extracti128_si256(d1, 1)),4)
                     ),
                     0x20
                   ),
                   0xd8
                 );
            }
         };
   } // end of namespace functors for template specialization of convert_down for avx2 using uint64_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_AVX2_HPP