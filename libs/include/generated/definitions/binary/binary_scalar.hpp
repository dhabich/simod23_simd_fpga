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
 * \file /home/u172652/damon23_tvl_fpga/libs/include/generated/definitions/binary/binary_scalar.hpp
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

#ifndef TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_SCALAR_HPP
#define TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_SCALAR_HPP

#include "../../declarations/binary.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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

               return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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

               return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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

               return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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

               return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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

               return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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

               return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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

               return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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

               return a & b;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       * @note: Benchmark what to use. Current implementation or: uint32_t c = (*((uint32_t *)&a) & *((uint32_t *)&b)); return *((float *)&c);
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );

               float c = 0.0;
               auto a1 = reinterpret_cast<const unsigned char *>(&a);
               auto b1 = reinterpret_cast<const unsigned char *>(&b);
               auto c1 = reinterpret_cast<unsigned char *>(&c);
               c1[0] = a1[0] & b1[0];
               c1[1] = a1[1] & b1[1];
               c1[2] = a1[2] & b1[2];
               c1[3] = a1[3] & b1[3];
               return c;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       * @note: Benchmark what to use. Current implementation or: uint64_t c = (*((uint64_t *)&a) & *((uint64_t *)&b)); return *((double *)&c);
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );

               double c = 0.0;
               auto a1 = reinterpret_cast<const unsigned char *>(&a);
               auto b1 = reinterpret_cast<const unsigned char *>(&b);
               auto c1 = reinterpret_cast<unsigned char *>(&c);
               c1[0] = a1[0] & b1[0];
               c1[1] = a1[1] & b1[1];
               c1[2] = a1[2] & b1[2];
               c1[3] = a1[3] & b1[3];
               c1[4] = a1[4] & b1[4];
               c1[5] = a1[5] & b1[5];
               c1[6] = a1[6] & b1[6];
               c1[7] = a1[7] & b1[7];
               return c;
            }
         };
   } // end of namespace functors for template specialization of binary_and for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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

               return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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

               return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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

               return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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

               return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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

               return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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

               return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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

               return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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

               return a ^ b;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       * @note: Benchmark what to use. Current implementation or: uint32_t c = (*((uint32_t *)&a) ^ *((uint32_t *)&b)); return *((float *)&c);
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_xor is not supported by your hardware natively while it is forced by using native" );

               float c = 0.0;
               auto a1 = reinterpret_cast<const unsigned char *>(&a);
               auto b1 = reinterpret_cast<const unsigned char *>(&b);
               auto c1 = reinterpret_cast<unsigned char *>(&c);
               c1[0] = a1[0] ^ b1[0];
               c1[1] = a1[1] ^ b1[1];
               c1[2] = a1[2] ^ b1[2];
               c1[3] = a1[3] ^ b1[3];
               return c;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       * @note: Benchmark what to use. Current implementation or: uint64_t c = (*((uint64_t *)&a) ^ *((uint64_t *)&b)); return *((double *)&c);
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct binary_xor<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
               static_assert( !std::is_same_v< Idof, native >, "The primitive binary_xor is not supported by your hardware natively while it is forced by using native" );

               double c = 0.0;
               auto a1 = reinterpret_cast<const unsigned char *>(&a);
               auto b1 = reinterpret_cast<const unsigned char *>(&b);
               auto c1 = reinterpret_cast<unsigned char *>(&c);
               c1[0] = a1[0] ^ b1[0];
               c1[1] = a1[1] ^ b1[1];
               c1[2] = a1[2] ^ b1[2];
               c1[3] = a1[3] ^ b1[3];
               c1[4] = a1[4] ^ b1[4];
               c1[5] = a1[5] ^ b1[5];
               c1[6] = a1[6] ^ b1[6];
               c1[7] = a1[7] ^ b1[7];
               return c;
            }
         };
   } // end of namespace functors for template specialization of binary_xor for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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

               return data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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

               return data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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

               return data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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

               return data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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

               return data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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

               return data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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

               return data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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

               return data >> shift;
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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

               uint32_t x = *reinterpret_cast<uint32_t const *>(&data);
               x >>= shift;
               return *reinterpret_cast<float*>(&x);
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_right<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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

               uint64_t x = *reinterpret_cast<uint64_t const *>(&data);
               x >>= shift;
               return *reinterpret_cast<double*>(&x);
            }
         };
   } // end of namespace functors for template specialization of shift_right for scalar using double.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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

               return data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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

               return data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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

               return data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: uint64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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

               return data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int8_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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

               return data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int16_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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

               return data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int32_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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

               return data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: int64_t
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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

               return data << shift;
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: float
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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

               uint32_t x = *reinterpret_cast<uint32_t const *>(&data);
               x <<= shift;
               return *reinterpret_cast<float*>(&x);
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
       * @details:
       * Target Extension: scalar.
       *        Data Type: double
       *  Extension Flags: []
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct shift_left<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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

               uint64_t x = *reinterpret_cast<uint64_t const *>(&data);
               x <<= shift;
               return *reinterpret_cast<double*>(&x);
            }
         };
   } // end of namespace functors for template specialization of shift_left for scalar using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_SCALAR_HPP