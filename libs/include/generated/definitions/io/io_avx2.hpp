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
 * \file /home/u172652/damon23_tvl_fpga/libs/include/generated/definitions/io/io_avx2.hpp
 * \date 2023-02-27
 * \brief Input/Output primitives.
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

#ifndef TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_IO_IO_AVX2_HPP
#define TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_IO_IO_AVX2_HPP

#include "../../declarations/io.hpp"
namespace tvl {
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_ostream<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = std::ostream &;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {

               using cast_type = typename std::conditional_t<
                 (sizeof(typename Vec::base_type) <= 2),
                 std::conditional_t<
                   std::is_signed_v<typename Vec::base_type>,
                   int,
                   unsigned int
                 >,
                 typename Vec::base_type
               >;
               std::ios_base::fmtflags f(out.flags());
               if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
               } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
               } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
               } else {
                  out << std::dec;
               }
               for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                     out << std::bitset<sizeof(typename Vec::base_type)*8>{(unsigned long long)data[(Vec::vector_element_count()-1)-idx]} << "|";
                  } else {
                     out << std::setw(sizeof(typename Vec::base_type)*8) << (cast_type) data[(Vec::vector_element_count()-1)-idx] << "|";
                  }
               }
               out.flags(f);
               out << std::endl;
               return out;
            }
         };
   } // end of namespace functors for template specialization of to_ostream for avx2 using uint8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int8_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_ostream<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = std::ostream &;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {

               using cast_type = typename std::conditional_t<
                 (sizeof(typename Vec::base_type) <= 2),
                 std::conditional_t<
                   std::is_signed_v<typename Vec::base_type>,
                   int,
                   unsigned int
                 >,
                 typename Vec::base_type
               >;
               std::ios_base::fmtflags f(out.flags());
               if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
               } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
               } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
               } else {
                  out << std::dec;
               }
               for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                     out << std::bitset<sizeof(typename Vec::base_type)*8>{(unsigned long long)data[(Vec::vector_element_count()-1)-idx]} << "|";
                  } else {
                     out << std::setw(sizeof(typename Vec::base_type)*8) << (cast_type) data[(Vec::vector_element_count()-1)-idx] << "|";
                  }
               }
               out.flags(f);
               out << std::endl;
               return out;
            }
         };
   } // end of namespace functors for template specialization of to_ostream for avx2 using int8_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_ostream<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = std::ostream &;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {

               using cast_type = typename std::conditional_t<
                 (sizeof(typename Vec::base_type) <= 2),
                 std::conditional_t<
                   std::is_signed_v<typename Vec::base_type>,
                   int,
                   unsigned int
                 >,
                 typename Vec::base_type
               >;
               std::ios_base::fmtflags f(out.flags());
               if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
               } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
               } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
               } else {
                  out << std::dec;
               }
               for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                     out << std::bitset<sizeof(typename Vec::base_type)*8>{(unsigned long long)data[(Vec::vector_element_count()-1)-idx]} << "|";
                  } else {
                     out << std::setw(sizeof(typename Vec::base_type)*8) << (cast_type) data[(Vec::vector_element_count()-1)-idx] << "|";
                  }
               }
               out.flags(f);
               out << std::endl;
               return out;
            }
         };
   } // end of namespace functors for template specialization of to_ostream for avx2 using uint16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int16_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_ostream<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = std::ostream &;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {

               using cast_type = typename std::conditional_t<
                 (sizeof(typename Vec::base_type) <= 2),
                 std::conditional_t<
                   std::is_signed_v<typename Vec::base_type>,
                   int,
                   unsigned int
                 >,
                 typename Vec::base_type
               >;
               std::ios_base::fmtflags f(out.flags());
               if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
               } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
               } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
               } else {
                  out << std::dec;
               }
               for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                     out << std::bitset<sizeof(typename Vec::base_type)*8>{(unsigned long long)data[(Vec::vector_element_count()-1)-idx]} << "|";
                  } else {
                     out << std::setw(sizeof(typename Vec::base_type)*8) << (cast_type) data[(Vec::vector_element_count()-1)-idx] << "|";
                  }
               }
               out.flags(f);
               out << std::endl;
               return out;
            }
         };
   } // end of namespace functors for template specialization of to_ostream for avx2 using int16_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_ostream<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = std::ostream &;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {

               using cast_type = typename std::conditional_t<
                 (sizeof(typename Vec::base_type) <= 2),
                 std::conditional_t<
                   std::is_signed_v<typename Vec::base_type>,
                   int,
                   unsigned int
                 >,
                 typename Vec::base_type
               >;
               std::ios_base::fmtflags f(out.flags());
               if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
               } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
               } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
               } else {
                  out << std::dec;
               }
               for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                     out << std::bitset<sizeof(typename Vec::base_type)*8>{(unsigned long long)data[(Vec::vector_element_count()-1)-idx]} << "|";
                  } else {
                     out << std::setw(sizeof(typename Vec::base_type)*8) << (cast_type) data[(Vec::vector_element_count()-1)-idx] << "|";
                  }
               }
               out.flags(f);
               out << std::endl;
               return out;
            }
         };
   } // end of namespace functors for template specialization of to_ostream for avx2 using uint32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int32_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_ostream<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = std::ostream &;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {

               using cast_type = typename std::conditional_t<
                 (sizeof(typename Vec::base_type) <= 2),
                 std::conditional_t<
                   std::is_signed_v<typename Vec::base_type>,
                   int,
                   unsigned int
                 >,
                 typename Vec::base_type
               >;
               std::ios_base::fmtflags f(out.flags());
               if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
               } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
               } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
               } else {
                  out << std::dec;
               }
               for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                     out << std::bitset<sizeof(typename Vec::base_type)*8>{(unsigned long long)data[(Vec::vector_element_count()-1)-idx]} << "|";
                  } else {
                     out << std::setw(sizeof(typename Vec::base_type)*8) << (cast_type) data[(Vec::vector_element_count()-1)-idx] << "|";
                  }
               }
               out.flags(f);
               out << std::endl;
               return out;
            }
         };
   } // end of namespace functors for template specialization of to_ostream for avx2 using int32_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
       * @details:
       * Target Extension: avx2.
       *        Data Type: uint64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_ostream<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = std::ostream &;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {

               using cast_type = typename std::conditional_t<
                 (sizeof(typename Vec::base_type) <= 2),
                 std::conditional_t<
                   std::is_signed_v<typename Vec::base_type>,
                   int,
                   unsigned int
                 >,
                 typename Vec::base_type
               >;
               std::ios_base::fmtflags f(out.flags());
               if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
               } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
               } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
               } else {
                  out << std::dec;
               }
               for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                     out << std::bitset<sizeof(typename Vec::base_type)*8>{(unsigned long long)data[(Vec::vector_element_count()-1)-idx]} << "|";
                  } else {
                     out << std::setw(sizeof(typename Vec::base_type)*8) << (cast_type) data[(Vec::vector_element_count()-1)-idx] << "|";
                  }
               }
               out.flags(f);
               out << std::endl;
               return out;
            }
         };
   } // end of namespace functors for template specialization of to_ostream for avx2 using uint64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
       * @details:
       * Target Extension: avx2.
       *        Data Type: int64_t
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_ostream<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = std::ostream &;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {

               using cast_type = typename std::conditional_t<
                 (sizeof(typename Vec::base_type) <= 2),
                 std::conditional_t<
                   std::is_signed_v<typename Vec::base_type>,
                   int,
                   unsigned int
                 >,
                 typename Vec::base_type
               >;
               std::ios_base::fmtflags f(out.flags());
               if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
               } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
               } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
               } else {
                  out << std::dec;
               }
               for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                     out << std::bitset<sizeof(typename Vec::base_type)*8>{(unsigned long long)data[(Vec::vector_element_count()-1)-idx]} << "|";
                  } else {
                     out << std::setw(sizeof(typename Vec::base_type)*8) << (cast_type) data[(Vec::vector_element_count()-1)-idx] << "|";
                  }
               }
               out.flags(f);
               out << std::endl;
               return out;
            }
         };
   } // end of namespace functors for template specialization of to_ostream for avx2 using int64_t.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
       * @details:
       * Target Extension: avx2.
       *        Data Type: float
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_ostream<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = std::ostream &;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {

               using cast_type = typename std::conditional_t<
                 (sizeof(typename Vec::base_type) <= 2),
                 std::conditional_t<
                   std::is_signed_v<typename Vec::base_type>,
                   int,
                   unsigned int
                 >,
                 typename Vec::base_type
               >;
               std::ios_base::fmtflags f(out.flags());
               if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
               } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
               } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
               } else {
                  out << std::dec;
               }
               for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                     out << std::bitset<sizeof(typename Vec::base_type)*8>{(unsigned long long)data[(Vec::vector_element_count()-1)-idx]} << "|";
                  } else {
                     out << std::setw(sizeof(typename Vec::base_type)*8) << (cast_type) data[(Vec::vector_element_count()-1)-idx] << "|";
                  }
               }
               out.flags(f);
               out << std::endl;
               return out;
            }
         };
   } // end of namespace functors for template specialization of to_ostream for avx2 using float.
   namespace functors {
      /**
       * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
       * @details:
       * Target Extension: avx2.
       *        Data Type: double
       *  Extension Flags: ['avx']
       */
      template<ImplementationDegreeOfFreedom Idof>
         struct to_ostream<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = std::ostream &;
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
               return true;
            }
            [[nodiscard]] 
            TVL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {

               using cast_type = typename std::conditional_t<
                 (sizeof(typename Vec::base_type) <= 2),
                 std::conditional_t<
                   std::is_signed_v<typename Vec::base_type>,
                   int,
                   unsigned int
                 >,
                 typename Vec::base_type
               >;
               std::ios_base::fmtflags f(out.flags());
               if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
               } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
               } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
               } else {
                  out << std::dec;
               }
               for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                     out << std::bitset<sizeof(typename Vec::base_type)*8>{(unsigned long long)data[(Vec::vector_element_count()-1)-idx]} << "|";
                  } else {
                     out << std::setw(sizeof(typename Vec::base_type)*8) << (cast_type) data[(Vec::vector_element_count()-1)-idx] << "|";
                  }
               }
               out.flags(f);
               out << std::endl;
               return out;
            }
         };
   } // end of namespace functors for template specialization of to_ostream for avx2 using double.
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DEFINITIONS_IO_IO_AVX2_HPP