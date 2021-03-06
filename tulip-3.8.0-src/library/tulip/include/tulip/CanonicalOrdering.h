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

#ifndef Tulip_CanonicalOrdering_H
#define Tulip_CanonicalOrdering_H
#include <tulip/Face.h>
#include <tulip/PlanarConMap.h>
#include <tulip/Node.h>
#include <vector>
#include <map>
#include <cstdio>
#include <tulip/MutableContainer.h>

#ifndef DOXYGEN_NOTFOR_USER

class TLP_SCOPE Ordering : public std::vector<std::vector<node> > {
  class PluginProgress;
public :

  typedef struct FaceAndPos_ {
    Face face;
    node n_first;
    node n_last;
  } FaceAndPos;

  std::vector<edge> getDummyEdges() {
    return dummy_edge;
  }

  Ordering(PlanarConMap * G, PluginProgress* pluginProgress = NULL,
           int minProgress = 0, int deltaProgress = 0, int maxProgress = 0);
  ~Ordering();
  std::vector<std::vector<node> > computeCanonicalOrdering(PluginProgress* pluginProgress = NULL, int minProgress = 0, int deltaProgress = 0, int maxProgress = 0);

private :

  PlanarConMap::PlanarConMap * Gp;
  MutableContainer<int>::MutableContainer oute;
  MutableContainer<int>::MutableContainer outv;
  MutableContainer<bool>::MutableContainer visitedNodes;
  MutableContainer<bool>::MutableContainer visitedFaces;
  MutableContainer<bool>::MutableContainer markedFaces;
  MutableContainer<int>::MutableContainer seqP;
  MutableContainer<bool>::MutableContainer isOuterFace;
  MutableContainer<bool>::MutableContainer contour;
  MutableContainer<bool>::MutableContainer is_selectable;
  MutableContainer<bool>::MutableContainer is_selectable_visited;
  MutableContainer<bool>::MutableContainer is_selectable_face;
  MutableContainer<bool>::MutableContainer is_selectable_visited_face;
  MutableContainer<node>::MutableContainer left;
  MutableContainer<node>::MutableContainer right;
  bool existMarkedF;
  FaceAndPos minMarkedFace ;
  Face ext;
  std::vector<node> v1;
  std::vector<edge> dummy_edge;

  node getLastOfQ(Face f, node prec, node n, edge e);
  node getLastOfP(Face f, node prec, node n,edge e);
  std::vector<node> getPathFrom(std::vector<node> fn, int from);
  int infFaceSize();

  void updateOutAndVisitedFaces(Face f);
  void updateContourLeftRight(node prec, node n, edge e, node last);
  void updateNewSelectableNodes(node node_f, node no_tmp2,edge ed_tmp, node node_last,std::vector<Face> v_faces, bool one_face = false, bool was_visited = false, bool selection_face = false);
  void updateSelectableFaces(std::vector<Face> v_faces);

  int seqp(Face f);
  void minMarkedf();
  void setMinMarkedFace(Face f);

  struct augmentableAndNodes_ getAugAndNodes(Face f);
  void augment(Face f, node prec, node n, node prec_last, node last, int nbNewFace, bool pair);
  void selectAndUpdate(Face f);
  void selectAndUpdate(node n);
  bool isSelectable(node n);

  void init();
  void init_v1(std::vector<node> fn);
  void init_selectableNodes();
  void init_selectableFaces();
  void init_outv_oute();
  void init_seqP();
  void init_outerface();

};

#endif
#endif
