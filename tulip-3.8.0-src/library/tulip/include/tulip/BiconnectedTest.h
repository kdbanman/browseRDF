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

#ifndef TULIP_BICONNEX_H
#define TULIP_BICONNEX_H

#include "tulip/tuliphash.h"
#include "tulip/ObservableGraph.h"

namespace tlp {
class Graph;

/** \addtogroup graph_test */
/*@{*/
/// class for testing if the graph is biconnected
class TLP_SCOPE BiconnectedTest : public GraphObserver {
public:

  /**
   * Returns true if the graph is biconnected (ie. one must remove at least two nodes in order
   * to disconnect the graph), false otherwise.
   */
  static bool isBiconnected(Graph *graph);

  /**
   * If the graph is not biconnected, adds edges in order to make the graph
   * biconnected. The new edges are added in addedEdges.
   */
  static void makeBiconnected(Graph *graph, std::vector<edge>& addedEdges);

private:
  void connect(Graph *, std::vector<edge>& addedEdges);
  bool compute(Graph *);
  // override GraphObserver methods
  void addEdge(Graph *,const edge);
  void delEdge(Graph *,const edge);
  void reverseEdge(Graph *,const edge);
  void addNode(Graph *,const node);
  void delNode(Graph *,const node);
  void destroy(Graph *);
  BiconnectedTest(); //to ensure singleton
  static BiconnectedTest * instance;
  TLP_HASH_MAP<unsigned long,bool> resultsBuffer;
};
}
/*@}*/
#endif
