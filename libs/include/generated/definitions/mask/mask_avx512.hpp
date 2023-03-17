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
 * \file /home/u172652/damon23_tvl_fpga/libs/include/generated/definitions/mask/mask_avx512.hpp
 * \date 2023-02-27
 * \brief Mask related primitives.
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

#ifndef TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_AVX512_HPP
#define TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_AVX512_HPP

#include <type_traits>
#include "../../declarations/mask.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {

               return vec_mask; //mask is integral already.
            }
         };
   } // end of namespace functors for template specialization of to_integral for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {

               return vec_mask; //mask is integral already.
            }
         };
   } // end of namespace functors for template specialization of to_integral for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {

               return vec_mask; //mask is integral already.
            }
         };
   } // end of namespace functors for template specialization of to_integral for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {

               return vec_mask; //mask is integral already.
            }
         };
   } // end of namespace functors for template specialization of to_integral for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {

               return vec_mask; //mask is integral already.
            }
         };
   } // end of namespace functors for template specialization of to_integral for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {

               return vec_mask; //mask is integral already.
            }
         };
   } // end of namespace functors for template specialization of to_integral for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {

               return vec_mask; //mask is integral already.
            }
         };
   } // end of namespace functors for template specialization of to_integral for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {

               return vec_mask; //mask is integral already.
            }
         };
   } // end of namespace functors for template specialization of to_integral for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {

               return vec_mask; //mask is integral already.
            }
         };
   } // end of namespace functors for template specialization of to_integral for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_integral<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {

               return vec_mask; //mask is integral already.
            }
         };
   } // end of namespace functors for template specialization of to_integral for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<int32_t, avx512>, Idof> {
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
                const typename Vec::mask_type mask
            ) {

               return _mm512_maskz_set1_epi32( mask, -1 );
            }
         };
   } // end of namespace functors for template specialization of to_vector for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<uint32_t, avx512>, Idof> {
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
                const typename Vec::mask_type mask
            ) {

               return _mm512_maskz_set1_epi32( mask, -1 );
            }
         };
   } // end of namespace functors for template specialization of to_vector for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<int64_t, avx512>, Idof> {
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
                const typename Vec::mask_type mask
            ) {

               return _mm512_maskz_set1_epi64( mask, -1 );
            }
         };
   } // end of namespace functors for template specialization of to_vector for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<uint64_t, avx512>, Idof> {
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
                const typename Vec::mask_type mask
            ) {

               return _mm512_maskz_set1_epi64( mask, -1 );
            }
         };
   } // end of namespace functors for template specialization of to_vector for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<int8_t, avx512>, Idof> {
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
                const typename Vec::mask_type mask
            ) {

               return _mm512_maskz_set1_epi8( mask, -1 );
            }
         };
   } // end of namespace functors for template specialization of to_vector for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<uint8_t, avx512>, Idof> {
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
                const typename Vec::mask_type mask
            ) {

               return _mm512_maskz_set1_epi8( mask, -1 );
            }
         };
   } // end of namespace functors for template specialization of to_vector for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<int16_t, avx512>, Idof> {
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
                const typename Vec::mask_type mask
            ) {

               return _mm512_maskz_set1_epi16( mask, -1 );
            }
         };
   } // end of namespace functors for template specialization of to_vector for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<uint16_t, avx512>, Idof> {
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
                const typename Vec::mask_type mask
            ) {

               return _mm512_maskz_set1_epi16( mask, -1 );
            }
         };
   } // end of namespace functors for template specialization of to_vector for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<float, avx512>, Idof> {
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
                const typename Vec::mask_type mask
            ) {

               return _mm512_castsi512_ps(_mm512_maskz_set1_epi32(mask, -1));
            }
         };
   } // end of namespace functors for template specialization of to_vector for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_vector<simd<double, avx512>, Idof> {
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
                const typename Vec::mask_type mask
            ) {

               return _mm512_castsi512_pd(_mm512_maskz_set1_epi64(mask, -1));
            }
         };
   } // end of namespace functors for template specialization of to_vector for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_mask<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {

               return mask;
            }
         };
   } // end of namespace functors for template specialization of to_mask for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_mask<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {

               return mask;
            }
         };
   } // end of namespace functors for template specialization of to_mask for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_mask<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {

               return mask;
            }
         };
   } // end of namespace functors for template specialization of to_mask for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_mask<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {

               return mask;
            }
         };
   } // end of namespace functors for template specialization of to_mask for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_mask<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {

               return mask;
            }
         };
   } // end of namespace functors for template specialization of to_mask for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_mask<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {

               return mask;
            }
         };
   } // end of namespace functors for template specialization of to_mask for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_mask<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {

               return mask;
            }
         };
   } // end of namespace functors for template specialization of to_mask for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_mask<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {

               return mask;
            }
         };
   } // end of namespace functors for template specialization of to_mask for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_not<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::imask_type mask
            ) {

               return (~mask);
            }
         };
   } // end of namespace functors for template specialization of imask_binary_not for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_not<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::imask_type mask
            ) {

               return (~mask);
            }
         };
   } // end of namespace functors for template specialization of imask_binary_not for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_not<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::imask_type mask
            ) {

               return (~mask);
            }
         };
   } // end of namespace functors for template specialization of imask_binary_not for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_not<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::imask_type mask
            ) {

               return (~mask);
            }
         };
   } // end of namespace functors for template specialization of imask_binary_not for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_not<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::imask_type mask
            ) {

               return (~mask);
            }
         };
   } // end of namespace functors for template specialization of imask_binary_not for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_not<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::imask_type mask
            ) {

               return (~mask);
            }
         };
   } // end of namespace functors for template specialization of imask_binary_not for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_not<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::imask_type mask
            ) {

               return (~mask);
            }
         };
   } // end of namespace functors for template specialization of imask_binary_not for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_binary_not<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
                const typename Vec::imask_type mask
            ) {

               return (~mask);
            }
         };
   } // end of namespace functors for template specialization of imask_binary_not for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kand_mask8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kand_mask8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kand_mask16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kand_mask16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kand_mask32(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kand_mask32(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kand_mask64(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kand_mask64(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kand_mask16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f', 'avx512dq']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_and<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kand_mask8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_and for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kor_mask8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kor_mask8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kor_mask16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kor_mask16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kor_mask32(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kor_mask32(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kor_mask64(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kor_mask64(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kor_mask16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f', 'avx512dq']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_or<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kor_mask8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_or for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kxor_mask8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kxor_mask8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kxor_mask16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kxor_mask16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kxor_mask32(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kxor_mask32(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kxor_mask64(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f', 'avx512dq', 'avx512bw']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kxor_mask64(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kxor_mask16(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f', 'avx512dq']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct mask_binary_xor<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            
            using return_type = typename Vec::mask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {

               return _kxor_mask8(first, second);
            }
         };
   } // end of namespace functors for template specialization of mask_binary_xor for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_population_count<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            
            using return_type = unsigned int;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {

               #if defined(__clang__) || defined(__GNUC__)
               return __builtin_popcount(mask);
               #elif defined(_MSC_VER)
               return  __popcnt16(mask);
               #else
               static_assert(false, "No known implementation for popcount");
               #endif
            }
         };
   } // end of namespace functors for template specialization of imask_population_count for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_population_count<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
            using return_type = unsigned int;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {

               #if defined(__clang__) || defined(__GNUC__)
               return __builtin_popcount(mask);
               #elif defined(_MSC_VER)
               return  __popcnt16(mask);
               #else
               static_assert(false, "No known implementation for popcount");
               #endif
            }
         };
   } // end of namespace functors for template specialization of imask_population_count for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_population_count<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            
            using return_type = unsigned int;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {

               #if defined(__clang__) || defined(__GNUC__)
               return __builtin_popcount(mask);
               #elif defined(_MSC_VER)
               return  __popcnt16(mask);
               #else
               static_assert(false, "No known implementation for popcount");
               #endif
            }
         };
   } // end of namespace functors for template specialization of imask_population_count for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_population_count<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
            using return_type = unsigned int;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {

               #if defined(__clang__) || defined(__GNUC__)
               return __builtin_popcount(mask);
               #elif defined(_MSC_VER)
               return  __popcnt16(mask);
               #else
               static_assert(false, "No known implementation for popcount");
               #endif
            }
         };
   } // end of namespace functors for template specialization of imask_population_count for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_population_count<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
            using return_type = unsigned int;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {

               #if defined(__clang__) || defined(__GNUC__)
               return __builtin_popcountl(mask);
               #elif defined(_MSC_VER)
               return  __popcnt32(mask);
               #else
               static_assert(false, "No known implementation for popcount");
               #endif
            }
         };
   } // end of namespace functors for template specialization of imask_population_count for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_population_count<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
            using return_type = unsigned int;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {

               #if defined(__clang__) || defined(__GNUC__)
               return __builtin_popcountl(mask);
               #elif defined(_MSC_VER)
               return  __popcnt32(mask);
               #else
               static_assert(false, "No known implementation for popcount");
               #endif
            }
         };
   } // end of namespace functors for template specialization of imask_population_count for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_population_count<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            
            using return_type = unsigned int;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {

               #if defined(__clang__) || defined(__GNUC__)
               return __builtin_popcountl(mask);
               #elif defined(_MSC_VER)
               return  __popcnt32(mask);
               #else
               static_assert(false, "No known implementation for popcount");
               #endif
            }
         };
   } // end of namespace functors for template specialization of imask_population_count for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_population_count<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
            using return_type = unsigned int;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {

               #if defined(__clang__) || defined(__GNUC__)
               return __builtin_popcountll(mask);
               #elif defined(_MSC_VER)
               return  __popcnt64(mask);
               #else
               static_assert(false, "No known implementation for popcount");
               #endif
            }
         };
   } // end of namespace functors for template specialization of imask_population_count for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_population_count<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
            using return_type = unsigned int;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {

               #if defined(__clang__) || defined(__GNUC__)
               return __builtin_popcountll(mask);
               #elif defined(_MSC_VER)
               return  __popcnt64(mask);
               #else
               static_assert(false, "No known implementation for popcount");
               #endif
            }
         };
   } // end of namespace functors for template specialization of imask_population_count for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct imask_population_count<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            
            using return_type = unsigned int;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {

               #if defined(__clang__) || defined(__GNUC__)
               return __builtin_popcountll(mask);
               #elif defined(_MSC_VER)
               return  __popcnt64(mask);
               #else
               static_assert(false, "No known implementation for popcount");
               #endif
            }
         };
   } // end of namespace functors for template specialization of imask_population_count for avx512 using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct integral_all_true<simd<uint8_t, avx512>, Idof> {
            using Vec = simd<uint8_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
               
            ) {

               return ~0;
            }
         };
   } // end of namespace functors for template specialization of integral_all_true for avx512 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct integral_all_true<simd<uint16_t, avx512>, Idof> {
            using Vec = simd<uint16_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
               
            ) {

               return ~0;
            }
         };
   } // end of namespace functors for template specialization of integral_all_true for avx512 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct integral_all_true<simd<uint32_t, avx512>, Idof> {
            using Vec = simd<uint32_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
               
            ) {

               return ~0;
            }
         };
   } // end of namespace functors for template specialization of integral_all_true for avx512 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
       * @details:
       * Target Extension: avx512.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct integral_all_true<simd<uint64_t, avx512>, Idof> {
            using Vec = simd<uint64_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
               
            ) {

               return ~0;
            }
         };
   } // end of namespace functors for template specialization of integral_all_true for avx512 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int8_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct integral_all_true<simd<int8_t, avx512>, Idof> {
            using Vec = simd<int8_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
               
            ) {

               return ~0;
            }
         };
   } // end of namespace functors for template specialization of integral_all_true for avx512 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int16_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct integral_all_true<simd<int16_t, avx512>, Idof> {
            using Vec = simd<int16_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
               
            ) {

               return ~0;
            }
         };
   } // end of namespace functors for template specialization of integral_all_true for avx512 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int32_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct integral_all_true<simd<int32_t, avx512>, Idof> {
            using Vec = simd<int32_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
               
            ) {

               return ~0;
            }
         };
   } // end of namespace functors for template specialization of integral_all_true for avx512 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
       * @details:
       * Target Extension: avx512.
       *        Data Type: int64_t
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct integral_all_true<simd<int64_t, avx512>, Idof> {
            using Vec = simd<int64_t, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
               
            ) {

               return ~0;
            }
         };
   } // end of namespace functors for template specialization of integral_all_true for avx512 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
       * @details:
       * Target Extension: avx512.
       *        Data Type: float
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct integral_all_true<simd<float, avx512>, Idof> {
            using Vec = simd<float, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
               
            ) {

               return ~0;
            }
         };
   } // end of namespace functors for template specialization of integral_all_true for avx512 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
       * @details:
       * Target Extension: avx512.
       *        Data Type: double
       *  Extension Flags: ['avx512f']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct integral_all_true<simd<double, avx512>, Idof> {
            using Vec = simd<double, avx512>;
            
            using return_type = typename Vec::imask_type;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static typename Vec::imask_type apply(
               
            ) {

               return ~0;
            }
         };
   } // end of namespace functors for template specialization of integral_all_true for avx512 using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_AVX512_HPP