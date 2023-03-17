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
 * \file /home/u172652/damon23_tvl_fpga/libs/include/generated/declarations/misc.hpp
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

#ifndef TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DECLARATIONS_MISC_HPP
#define TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DECLARATIONS_MISC_HPP

namespace tvl {
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "conflict".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct conflict{};
   }
   /*
    * \brief Checks whether all elements are unique in a register.
    * \details todo.
    * \param data Data vector.
    * \return Vector containing result of the uniqueness check.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type conflict(
          [[maybe_unused]] const typename Vec::register_type data
      ) {
         return functors::conflict<Vec, Idof>::apply(
            data
         );
      }
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "imask_conflict_free".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct imask_conflict_free{};
   }
   /*
    * \brief Checks whether all elements are unique in a register and returns a mask indicating which elements don't have preceeding conflicts.
    * \details todo.
    * \param mask Mask indicating which lanes should be considered for conflict detection. Be aware, that non-valid lanes can still conflict with others.
    * \param data Data vector.
    * \return integral mask containing result of the uniqueness check.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::imask_type conflict_free(
          [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
      ) {
         return functors::imask_conflict_free<Vec, Idof>::apply(
            mask,data
         );
      }
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "blend".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct blend{};
   }
   /*
    * \brief Blends two registers using provided bitmask.
    * \details todo.
    * \param control If control[i] == 0, the corresponding value from left register is used, from right otherwise.
    * \param left Left data.
    * \param right Right data.
    * \return Vector containing blended data.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type blend(
          const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
      ) {
         return functors::blend<Vec, Idof>::apply(
            control,left,right
         );
      }
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "blend_add".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct blend_add{};
   }
   /*
    * \brief Blends or add two registers using provided bitmask
    * \details todo.
    * \param control todo.
    * \param left Left data.
    * \param right Right data.
    * \param adder Adder data.
    * \return todo.
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type blend_add(
          const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right, const typename Vec::register_type adder
      ) {
         return functors::blend_add<Vec, Idof>::apply(
            control,left,right,adder
         );
      }
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "undefined".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct undefined{};
   }
   /*
    * \brief Returns a vector register with undefined data inside.
    * \details todo.
    * \return SIMD reigster
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE typename Vec::register_type undefined(
         
      ) {
         return functors::undefined<Vec, Idof>::apply(
            
         );
      }
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DECLARATIONS_MISC_HPP