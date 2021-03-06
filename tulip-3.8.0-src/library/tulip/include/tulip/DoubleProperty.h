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
#ifndef TULIP_METRIC_H
#define TULIP_METRIC_H

#include <tulip/tuliphash.h>
#include <tulip/PropertyTypes.h>
#include <tulip/AbstractProperty.h>
#include <tulip/DoubleAlgorithm.h>
#include <tulip/ObservableGraph.h>

namespace tlp {

typedef AbstractProperty<tlp::DoubleType, tlp::DoubleType, tlp::DoubleAlgorithm> AbstractDoubleProperty;
/** \addtogroup properties */
/*\@{*/
class TLP_SCOPE DoubleProperty:public AbstractDoubleProperty, public GraphObserver {

  friend class DoubleAlgorithm;

public :
  DoubleProperty (Graph *, std::string n="");
  DoubleType::RealType  getNodeMin(Graph *sg=NULL);
  DoubleType::RealType  getNodeMax(Graph *sg=NULL);
  DoubleType::RealType  getEdgeMin(Graph *sg=NULL);
  DoubleType::RealType  getEdgeMax(Graph *sg=NULL);
  void uniformQuantification(unsigned int);
  void nodesUniformQuantification(unsigned int);
  void edgesUniformQuantification(unsigned int);

  void clone_handler(AbstractProperty<DoubleType,DoubleType, DoubleAlgorithm> &);

  // redefinition of some PropertyInterface methods
  PropertyInterface* clonePrototype(Graph *, const std::string& );
  static const std::string propertyTypename;
  std::string getTypename() const {
    return propertyTypename;
  }

  // override some AbstractProperty methods
  virtual void setNodeValue(const node n, const double &v);
  virtual void setEdgeValue(const edge e, const double &v);
  virtual void setAllNodeValue(const double &v);
  virtual void setAllEdgeValue(const double &v);

  // override some GraphObserver methods
  virtual void addNode(Graph* graph, const node n);
  virtual void addEdge(Graph* graph, const edge e);
  virtual void delNode(Graph* graph, const node n);
  virtual void delEdge(Graph* graph, const edge e);
  virtual void addSubGraph(Graph* graph, Graph *sub);
  virtual void delSubGraph(Graph* graph, Graph *sub);

  enum PredefinedMetaValueCalculator {NO_CALC = 0, AVG_CALC = 1, SUM_CALC = 2,
                                      MAX_CALC = 3, MIN_CALC = 4
                                     };

  // setMetaValueCalculator overloading
  virtual void setMetaValueCalculator(PropertyInterface::MetaValueCalculator* calc);
  void setMetaValueCalculator(PredefinedMetaValueCalculator nodeCalc = AVG_CALC,
                              PredefinedMetaValueCalculator edgeCalc = AVG_CALC);

private:
  TLP_HASH_MAP<unsigned int, double> maxN,minN,maxE,minE;
  TLP_HASH_MAP<unsigned int, bool> minMaxOkNode;
  TLP_HASH_MAP<unsigned int, bool> minMaxOkEdge;
  void computeMinMaxNode(Graph *sg=NULL);
  void computeMinMaxEdge(Graph *sg=NULL);
};

class TLP_SCOPE DoubleVectorProperty:public AbstractVectorProperty<tlp::DoubleVectorType, tlp::DoubleType> {
public :
  DoubleVectorProperty(Graph *g, std::string n=""):AbstractVectorProperty<DoubleVectorType, tlp::DoubleType>(g, n) {}
  // redefinition of some PropertyInterface methods
  PropertyInterface* clonePrototype(Graph *, const std::string& );
  static const std::string propertyTypename;
  std::string getTypename() const {
    return propertyTypename;
  }
};
/*@}*/

}
#endif
