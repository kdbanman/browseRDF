/**
 *
 * This file is part of Tulip (www.tulip-software.org)
 *
 * Authors: David Auber and the Tulip development Team
 * from LaBRI, University of Bordeaux 1 and Inria Bordeaux - Sud Ouest
 *
 * Tulip is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * Tulip is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 */

#ifndef TULIP_COLORSALGO_H
#define TULIP_COLORSALGO_H

#include <tulip/Algorithm.h>

namespace tlp {

class ColorProperty;

/** \addtogroup plugins */
/*@{*/
/// Interface for color plug-ins
class TLP_SCOPE ColorAlgorithm : public tlp::Algorithm {
  ///
  friend class ColorProperty;
public:
  ColorProperty *colorResult;
  ///
  virtual ~ColorAlgorithm();

protected:
  ///
  ColorAlgorithm (const AlgorithmContext & context);
};
/*@}*/

}
#endif









