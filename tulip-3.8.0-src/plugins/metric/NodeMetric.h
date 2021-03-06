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
#ifndef _NODEMETRIC_H
#define _NODEMETRIC_H

#include <tulip/TulipPlugin.h>




/** \addtogroup metric */
/*@{*/
/** This plugin computes the number of nodes in the subtree induced by each node.
 *
 *  \note This algorithm assigns to each node a value defined as following : If two nodes are in the same
 *  connected component they have the same value else they have a
 *  different value.
 *
 */
class NodeMetric:public tlp::DoubleAlgorithm {
public:
  NodeMetric(const tlp::PropertyContext &);
  bool run();
  bool check(std::string &);
private:
  double getNodeValue(const tlp::node n);
};
/*@}*/
#endif

