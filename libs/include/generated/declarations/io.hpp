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
 * \file /home/u172652/damon23_tvl_fpga/libs/include/generated/declarations/io.hpp
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

#ifndef TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DECLARATIONS_IO_HPP
#define TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DECLARATIONS_IO_HPP

#include <ostream>
#include <iomanip>
#include <bitset>
namespace tvl {
   
namespace functors {
      // Forward declaration of implementation struct for TVL-primitive "to_ostream".
      template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
         struct to_ostream{};
   }
   /*
    * \brief Loads data from aligned memory into a vector register.
    * \details todo.
    * \param out 
    * \param data 
    * \param ostream_modifier 
    * \return 
    */
   template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof = workaround>
      [[nodiscard]] TVL_FORCE_INLINE std::ostream & to_ostream(
          std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier=modifier::DEC
      ) {
         return functors::to_ostream<Vec, Idof>::apply(
            out,data,ostream_modifier
         );
      }
} // end of namespace tvl
#endif //TUD_D2RG_TVL_HOME_U172652_DAMON23_TVL_FPGA_LIBS_INCLUDE_GENERATED_DECLARATIONS_IO_HPP