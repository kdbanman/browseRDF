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

#ifndef _StrongComponent_H
#define _StrongComponent_H
#include <stack>
#include <tulip/tuliphash.h>
#include <tulip/TulipPlugin.h>
struct NodeInfo {
  NodeInfo(int stra=0,int sta=0):prefixOrder(stra),minAttach(sta) {}
  int prefixOrder;
  int minAttach;
};

/** This plugin is an implementation of the Stongly connected algorithm.
 *
 *  \note This algorithm assigns to each node a value defined as following : If two nodes are in the same
 *  strongly connected component they have the same value else they have a
 *  different value.
 *
 */
class StrongComponent:public tlp::DoubleAlgorithm {
public:
  StrongComponent(const tlp::PropertyContext &);
  ~StrongComponent();
  bool run();

private:
  int  attachNumerotation(tlp::node, TLP_HASH_MAP<tlp::node,bool> &,
                          TLP_HASH_MAP<tlp::node,bool> &,
                          TLP_HASH_MAP<tlp::node,int> &, int &,
                          std::stack<tlp::node> &, int &);
};

#endif











