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
 * \file /home/u172652/damon23_tvl_fpga/libs/include/generated/definitions/binary/binary_fpga.hpp
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

#ifndef TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_FPGA_HPP
#define TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_FPGA_HPP

#include "../../declarations/binary.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint8_t
       *  Extension Flags: ['fpga']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint8_t, fpga, VectorSize>;
            
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

               using T = typename Vec::register_type;
               T result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = a[i] & b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of binary_and for fpga using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int8_t
       *  Extension Flags: ['fpga']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int8_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int8_t, fpga, VectorSize>;
            
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

               using T = typename Vec::register_type;
               T result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = a[i] & b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of binary_and for fpga using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint16_t
       *  Extension Flags: ['fpga']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint16_t, fpga, VectorSize>;
            
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

               using T = typename Vec::register_type;
               T result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = a[i] & b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of binary_and for fpga using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int16_t
       *  Extension Flags: ['fpga']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int16_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int16_t, fpga, VectorSize>;
            
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

               using T = typename Vec::register_type;
               T result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = a[i] & b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of binary_and for fpga using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: fpga.
       *        Data Type: uint32_t
       *  Extension Flags: ['fpga']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<uint32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<uint32_t, fpga, VectorSize>;
            
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

               using T = typename Vec::register_type;
               T result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = a[i] & b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of binary_and for fpga using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
       * @details:
       * Target Extension: fpga.
       *        Data Type: int32_t
       *  Extension Flags: ['fpga']
       */
      template<std::size_t VectorSize, ImplementationDegreeOfFreedom Idof>
         struct binary_and<simd<int32_t, fpga, VectorSize>, Idof> {
            using Vec = simd<int32_t, fpga, VectorSize>;
            
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

               using T = typename Vec::register_type;
               T result{};
               #pragma unroll
               for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   result[i] = a[i] & b[i];
               }
               return result;
            }
         };
   } // end of namespace functors for template specialization of binary_and for fpga using int32_t.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_FPGA_HPP