// $Id: error_estimator.h,v 1.2 2003-05-15 23:34:33 benkirk Exp $

// The Next Great Finite Element Library.
// Copyright (C) 2002  Benjamin S. Kirk, John W. Peterson
  
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
  
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
  
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA



#ifndef __error_estimator_h__
#define __error_estimator_h__

// C++ includes
#include <vector>
#include <string>

// Local Includes
#include "mesh_common.h"


// Forward Declarations
class EquationSystems;

/**
 * This namespace holds functions that will estimate the error
 * in a finite element solution on a given mesh.  These error
 * estimates can be useful in their own right, or may be used
 * to guide adaptive mesh refinement.  
 *
 * @author Benjamin S. Kirk, 2003.
 */
namespace ErrorEstimator
{

  /**
   * This function uses the Kelley Flux Jump error
   * estimate to estimate the error on each cell.
   * The estimated error is output in the vector
   * \p error_per_cell
   */
  void flux_jump (const EquationSystems& es,
		  const std::string& name,
		  std::vector<Real>& error_per_cell);
};


#endif

