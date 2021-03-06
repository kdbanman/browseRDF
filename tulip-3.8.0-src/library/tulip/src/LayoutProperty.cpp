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
#include <cmath>
#include <float.h>
#include <fstream>
#include <tulip/LayoutProperty.h>
#include <tulip/Coord.h>
#include <tulip/PluginContext.h>
#include <tulip/ForEach.h>

using namespace std;
using namespace tlp;

const string LayoutProperty::propertyTypename="layout";
const string CoordVectorProperty::propertyTypename="vector<coord>";

inline double sqr(double x) {
  return (x*x);
}

// define a specific MetaValueCalculator
class LayoutMetaValueCalculator
    :public AbstractLayoutProperty::MetaValueCalculator {
public:
  void computeMetaValue(AbstractLayoutProperty* layout,
                        node mN, Graph* sg, Graph*) {
    // nothing to do if the subgraph is not linked to the property graph
    if (sg!=layout->getGraph() && !layout->getGraph()->isDescendantGraph(sg)) {
#ifndef NDEBUG
      std::cerr << "Warning : " << __PRETTY_FUNCTION__ << " does not compute any value for a subgraph not linked to the graph of the property " << layout->getName().c_str() << std::endl;
#endif
      return;
    }

    switch(sg->numberOfNodes()) {
    case 0:
      layout->setNodeValue(mN, Coord(0, 0, 0));
      return;

    case 1:
      layout->setNodeValue(mN,((LayoutProperty *)layout)->getMax(sg));
      return;

    default:
      // between the min and max computed values
      layout->setNodeValue(mN,
                           (((LayoutProperty *)layout)->getMax(sg) +
                            ((LayoutProperty *)layout)->getMin(sg)) / 2.0f);
    }
  }
};

static LayoutMetaValueCalculator mvLayoutCalculator;

//======================================================
LayoutProperty::LayoutProperty(Graph *sg, std::string n):AbstractLayoutProperty(sg, n) {
  minMaxOk[(unsigned long)graph]=false;

  // observe the graph for layout min/max update
  // and bends update when an edge is reversed
  graph->addGraphObserver(this);

  // set default MetaValueCalculator
  setMetaValueCalculator(&mvLayoutCalculator);
}
//======================================================
Coord LayoutProperty::getMax(Graph *sg) {
  if (sg==NULL) sg=graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  unsigned int sgi = sg->getId();

  if (minMaxOk.find(sgi)==minMaxOk.end()) minMaxOk[sgi]=false;

  if (!minMaxOk[sgi]) computeMinMax(sg);

  return max[sgi];
}
//======================================================
Coord  LayoutProperty::getMin(Graph *sg) {
  if (sg==NULL) sg=graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  unsigned int sgi = sg->getId();

  if (minMaxOk.find(sgi)==minMaxOk.end()) minMaxOk[sgi]=false;

  if (!minMaxOk[sgi]) computeMinMax(sg);

  return min[sgi];
}
//=================================================================================
#define X_ROT 0
#define Y_ROT 1
#define Z_ROT 2
static void rotateVector(Coord &vec, double alpha, int rot) {
  Coord backupVec(vec);
  double aRot =  2.0*M_PI * alpha / 360.0;
  float cosA = static_cast<float>(cos(aRot));
  float sinA = static_cast<float>(sin(aRot));

  switch(rot) {
  case Z_ROT:
    vec[0] = backupVec[0]*cosA - backupVec[1]*sinA;
    vec[1] = backupVec[0]*sinA + backupVec[1]*cosA;
    break;

  case Y_ROT:
    vec[0] = backupVec[0]*cosA + backupVec[2]*sinA;
    vec[2] = backupVec[2]*cosA - backupVec[0]*sinA;
    break;

  case X_ROT:
    vec[1] = backupVec[1]*cosA - backupVec[2]*sinA;
    vec[2] = backupVec[1]*sinA + backupVec[2]*cosA;
    break;
  }
}
//=================================================================================
void LayoutProperty::rotate(const double &alpha, int rot, Iterator<node> *itN, Iterator<edge> *itE) {
  Observable::holdObservers();

  while (itN->hasNext()) {
    node itn = itN->next();
    Coord tmpCoord(getNodeValue(itn));
    rotateVector(tmpCoord, alpha, rot);
    setNodeValue(itn,tmpCoord);
  }

  while (itE->hasNext()) {
    edge ite=itE->next();

    if (!getEdgeValue(ite).empty()) {
      LineType::RealType tmp = getEdgeValue(ite);
      LineType::RealType::iterator itCoord;
      itCoord=tmp.begin();

      while(itCoord!=tmp.end()) {
        rotateVector(*itCoord, alpha, rot);
        ++itCoord;
      }

      setEdgeValue(ite,tmp);
    }
  }

  Observable::unholdObservers();
}
//=================================================================================
void LayoutProperty::rotateX(const double &alpha,  Iterator<node> *itN, Iterator<edge> *itE) {
  rotate(alpha, X_ROT, itN, itE);
}
//=================================================================================
void LayoutProperty::rotateY(const double &alpha,  Iterator<node> *itN, Iterator<edge> *itE) {
  rotate(alpha, Y_ROT, itN, itE);
}
//=================================================================================
void LayoutProperty::rotateZ(const double &alpha,  Iterator<node> *itN, Iterator<edge> *itE) {
  rotate(alpha, Z_ROT, itN, itE);
}
//=================================================================================
void LayoutProperty::rotateZ(const double &alpha, Graph *sg) {
  if (sg==0) sg = graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  if (sg->numberOfNodes()==0) return;

  Iterator<node> *itN = sg->getNodes();
  Iterator<edge> *itE = sg->getEdges();
  rotateZ(alpha, itN, itE);
  delete itN;
  delete itE;
}
//=================================================================================
void LayoutProperty::rotateY(const double &alpha, Graph *sg) {
  if (sg==0) sg = graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  if (sg->numberOfNodes()==0) return;

  Iterator<node> *itN = sg->getNodes();
  Iterator<edge> *itE = sg->getEdges();
  rotateY(alpha, itN, itE);
  delete itN;
  delete itE;
}
//=================================================================================
void LayoutProperty::rotateX(const double &alpha, Graph *sg) {
  if (sg==0) sg = graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  if (sg->numberOfNodes()==0) return;

  Iterator<node> *itN = sg->getNodes();
  Iterator<edge> *itE = sg->getEdges();
  rotateX(alpha, itN, itE);
  delete itN;
  delete itE;
}
//=================================================================================
void LayoutProperty::scale(const tlp::Vec3f &v, Iterator<node> *itN, Iterator<edge> *itE) {
  Observable::holdObservers();

  while (itN->hasNext()) {
    node itn = itN->next();
    Coord tmpCoord(getNodeValue(itn));
    tmpCoord *= *(Coord*)&v;
    setNodeValue(itn,tmpCoord);
  }

  while (itE->hasNext()) {
    edge ite=itE->next();

    if (!getEdgeValue(ite).empty()) {
      LineType::RealType tmp = getEdgeValue(ite);
      LineType::RealType::iterator itCoord;
      itCoord=tmp.begin();

      while(itCoord!=tmp.end()) {
        *itCoord *= *(Coord*)&v;
        ++itCoord;
      }

      setEdgeValue(ite,tmp);
    }
  }

  Observable::unholdObservers();
}
//=================================================================================
void LayoutProperty::scale(const tlp::Vec3f &v, Graph *sg) {
  if (sg==0) sg = graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  if (sg->numberOfNodes()==0) return;

  Iterator<node> *itN = sg->getNodes();
  Iterator<edge> *itE = sg->getEdges();
  scale(v, itN, itE);
  delete itN;
  delete itE;
}
//=================================================================================
void LayoutProperty::translate(const tlp::Vec3f &v, Iterator<node> *itN, Iterator<edge> *itE) {
  Observable::holdObservers();

  if (itN != NULL)
    while (itN->hasNext()) {
      node itn = itN->next();
      Coord tmpCoord(getNodeValue(itn));
      tmpCoord += *(Coord*)&v;
      setNodeValue(itn,tmpCoord);
    }

  if (itE != NULL)
    while (itE->hasNext()) {
      edge ite=itE->next();

      if (!getEdgeValue(ite).empty()) {
        LineType::RealType tmp = getEdgeValue(ite);
        LineType::RealType::iterator itCoord;
        itCoord=tmp.begin();

        while(itCoord!=tmp.end()) {
          *itCoord += *(Coord*)&v;
          ++itCoord;
        }

        setEdgeValue(ite,tmp);
      }
    }

  if (itE != NULL || itN != NULL) {
    resetBoundingBox();
    notifyObservers();
  }

  Observable::unholdObservers();
}
//=================================================================================
void LayoutProperty::translate(const tlp::Vec3f &v, Graph *sg) {
  if (sg==0) sg = graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  if (sg->numberOfNodes()==0) return;

  Iterator<node> *itN = sg->getNodes();
  Iterator<edge> *itE = sg->getEdges();
  translate(v, itN, itE);
  delete itN;
  delete itE;
}
//=================================================================================
void LayoutProperty::center(Graph *sg) {

  if (sg==0) sg = graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  if (sg->numberOfNodes()==0) return;

  Observable::holdObservers();
  Coord tr=getMax(sg)+getMin(sg);
  tr /= -2.0;
  translate(tr, sg);
  resetBoundingBox();
  notifyObservers();
  Observable::unholdObservers();
}
//=================================================================================
void LayoutProperty::center(const Vec3f &newCenter, Graph *sg) {
  if (sg==0) sg = graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  if (sg->numberOfNodes()==0) return;

  Observable::holdObservers();
  Coord curCenter=(getMax(sg)+getMin(sg))/2.0f;
  translate(newCenter-curCenter, sg);
  resetBoundingBox();
  notifyObservers();
  Observable::unholdObservers();
}

//=================================================================================
void LayoutProperty::normalize(Graph *sg) {

  if (sg==0) sg = graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  if (sg->numberOfNodes()==0) return;

  Observable::holdObservers();
  center();
  double dtmpMax = 1.0;
  Iterator<node> *itN=sg->getNodes();

  while (itN->hasNext())  {
    node itn=itN->next();
    const Coord& tmpCoord = getNodeValue(itn);
    dtmpMax  = std::max(dtmpMax, sqr(tmpCoord[0])+sqr(tmpCoord[1])+sqr(tmpCoord[2]));
  }

  delete itN;
  dtmpMax = 1.0 / sqrt(dtmpMax);
  scale(Coord(static_cast<float>(dtmpMax),static_cast<float>(dtmpMax),static_cast<float>(dtmpMax)), sg);
  resetBoundingBox();
  notifyObservers();
  Observable::unholdObservers();
}
//=================================================================================
void LayoutProperty::perfectAspectRatio() {

  if (graph->numberOfNodes()==0) return;

  Observable::holdObservers();
  center();
  double scaleX,scaleY,scaleZ;
  double deltaX,deltaY,deltaZ;
  deltaX = (double )getMax()[0]-(double )getMin()[0];
  deltaY = (double )getMax()[1]-(double )getMin()[1];
  deltaZ = (double )getMax()[2]-(double )getMin()[2];
  double delta = std::max(deltaX , deltaY);
  delta = std::max(delta, deltaZ);

  if (delta<0.001) return;

  if (deltaX<0.001) deltaX=delta;

  if (deltaY<0.001) deltaY=delta;

  if (deltaZ<0.001) deltaZ=delta;

  scaleX = delta / deltaX;
  scaleY = delta / deltaY;
  scaleZ = delta / deltaZ;
  scale(Coord(static_cast<float>(scaleX),static_cast<float>(scaleY),static_cast<float>(scaleZ)));
  notifyObservers();
  Observable::unholdObservers();
}
//=================================================================================
void maxV(Coord &res, const Coord &cmp) {
  for (unsigned int i = 0; i<3; ++i) {
    res[i] = std::max(res[i], cmp[i]);
  }
}
void minV(Coord &res, const Coord &cmp) {
  for (unsigned int i = 0; i<3; ++i) {
    res[i] = std::min(res[i], cmp[i]);
  }
}
//=================================================================================
void LayoutProperty::computeMinMax(Graph *sg) {
  Coord maxT(-FLT_MAX, -FLT_MAX, -FLT_MAX);
  Coord minT(FLT_MAX, FLT_MAX, FLT_MAX);

  if (sg==0) sg=graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  Iterator<node> *itN=sg->getNodes();

  if  (itN->hasNext()) {
    node itn=itN->next();
    const Coord& tmpCoord=getNodeValue(itn);
    maxV(maxT, tmpCoord);
    minV(minT, tmpCoord);
  }

  while (itN->hasNext()) {
    node itn=itN->next();
    const Coord& tmpCoord=getNodeValue(itn);
    maxV(maxT, tmpCoord);
    minV(minT, tmpCoord);
  }

  delete itN;
  Iterator<edge> *itE=sg->getEdges();

  while (itE->hasNext()) {
    edge ite=itE->next();
    const LineType::RealType& value = getEdgeValue(ite);
    LineType::RealType::const_iterator itCoord;

    for (itCoord=value.begin(); itCoord!=value.end(); ++itCoord) {
      const Coord& tmpCoord = *itCoord;
      maxV(maxT, tmpCoord);
      minV(minT, tmpCoord);
    }
  }

  delete itE;
  unsigned int sgi = sg->getId();
  minMaxOk[sgi]=true;
  min[sgi] = minT;
  max[sgi] = maxT;
  //  cerr << "LayoutProperty::computeMinMax end" << endl;
}
//=================================================================================
void LayoutProperty::clone_handler(AbstractProperty<PointType,LineType, LayoutAlgorithm> &proxyC) {
  if (typeid(this)==typeid(&proxyC)) {
    LayoutProperty *proxy=(LayoutProperty *)&proxyC;
    minMaxOk = proxy->minMaxOk;
    min = proxy->min;
    max = proxy->max;
  }
}
//=================================================================================
void LayoutProperty::resetBoundingBox() {
  minMaxOk.clear();
  min.clear();
  max.clear();
}
//================================================================================
void LayoutProperty::setNodeValue(const node n, const Coord& v) {
  TLP_HASH_MAP<unsigned int, bool>::const_iterator it = minMaxOk.begin();

  if (it != minMaxOk.end()) {
    const Coord& oldV = getNodeValue(n);

    if (v != oldV) {
      // loop on subgraph min/max
      for(; it != minMaxOk.end(); ++it) {
        unsigned int gid = (*it).first;
        const Coord& minV = min[gid];
        const Coord& maxV = max[gid];

        // check if min or max have to be updated
        if ((v < minV) || (v > maxV) ||
            ((v != oldV) && ((oldV == minV) || (oldV == maxV)))) {
          resetBoundingBox();
          break;
        }
      }
    }
  }

  AbstractLayoutProperty::setNodeValue(n, v);
}
//================================================================================
void LayoutProperty::setEdgeValue(const edge e, const std::vector<Coord>& v) {
  TLP_HASH_MAP<unsigned int, bool>::const_iterator it = minMaxOk.begin();

  if (it != minMaxOk.end()) {
    const std::vector<Coord>& oldV = getEdgeValue(e);

    if (v != oldV) {
      // loop on subgraph min/max
      for(; it != minMaxOk.end(); ++it) {
        unsigned int gid = (*it).first;
        const Coord& minV = min[gid];
        const Coord& maxV = max[gid];
        bool reset = false;

        // check if min has to be updated
        for(unsigned i = 0; i < v.size(); ++i) {
          if (minV > v[i]) {
            reset = true;
            break;
          }
        }

        if (!reset) {
          // check if max has to be updated
          for(unsigned i = 0; i < v.size(); ++i) {
            if (maxV < v[i]) {
              reset = true;
              break;
            }
          }
        }

        if (!reset) {
          // check if minV belongs to oldV
          for(unsigned i = 0; i < oldV.size(); ++i) {
            if (minV == oldV[i]) {
              reset = false;
              break;
            }
          }
        }

        if (!reset) {
          // check if maxV belongs to oldV
          for(unsigned i = 0; i < oldV.size(); ++i) {
            if (maxV == oldV[i]) {
              reset = false;
              break;
            }
          }
        }

        // reset bounding box if needed
        if (reset) {
          resetBoundingBox();
          break;
        }
      }
    }
  }

  AbstractLayoutProperty::setEdgeValue(e, v);
}
//=================================================================================
void LayoutProperty::setAllNodeValue(const Coord &v) {
  resetBoundingBox();
  AbstractLayoutProperty::setAllNodeValue(v);
}
//=================================================================================
void LayoutProperty::setAllEdgeValue(const std::vector<Coord> &v) {
  resetBoundingBox();
  AbstractLayoutProperty::setAllEdgeValue(v);
}
//================================================================================
void LayoutProperty::reverseEdge(Graph *sg, const edge e) {
  (void)sg; //fixes unused parameter warning in release builds
  assert(sg == graph);
  std::vector<Coord> bends = getEdgeValue(e);

  // reverse bends if needed
  if (bends.size() > 1) {
    unsigned int halfSize = bends.size()/2;

    for (unsigned int i = 0, j = bends.size() - 1; i < halfSize; ++i, j--) {
      Coord tmp = bends[i];
      bends[i] = bends[j];
      bends[j] = tmp;
    }

    setEdgeValue(e, bends);
  }
}
//=================================================================================
double LayoutProperty::averageAngularResolution(const Graph *sg) const {
  if (sg==0) sg=graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  Iterator<node> *itN=sg->getNodes();
  double result=0;

  while (itN->hasNext()) {
    result+=averageAngularResolution(itN->next(),sg);
  }

  delete itN;
  return result/(double)sg->numberOfNodes();
}
//=================================================================================

#ifndef DOXYGEN_NOTFOR_DEVEL
struct AngularOrder {
  bool operator() (const Vec2d &c1, const Vec2d &c2) {
    //if the vectors have not the same direction on y-coordiantes
    //the result is direct.
    Vec2d c1c2(c2 - c1);
    assert(c1c2.norm() > 1E-4);

    if (c1[1]>=0 && c2[1]<0) return false;

    if (c2[1]>=0 && c1[1]<0) return true;

    //If the vectors have the same size on the y-coordinates, we compare
    //their x-coordinates
    if (c2[1]>=0 && c1[1]>=0)
      return c1[0]>c2[0];
    else
      return c1[0]<c2[0];

    double alpha = c1[0]*c2[1] - c1[1]*c2[0];
    return alpha < 0.;
    return false;
  }
  bool operator() (const pair<Vec2d, edge> &c1, const pair<Vec2d, edge> &c2) {
    return this->operator()(c1.first, c2.first);
  }
};

#endif // DOXYGEN_NOTFOR_DEVEL
//=================================================================================
/*
 * TODO check code duplication with angularresolution function
 */
void LayoutProperty::computeEmbedding(Graph *sg) {
  if (sg == NULL) sg = graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  node n;
  forEach(n, sg->getNodes()) {
    computeEmbedding(n, sg);
  }
}
//=================================================================================
void LayoutProperty::computeEmbedding(const node n, Graph *sg) {
  if (sg == NULL) sg = graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  if (sg->deg(n) < 2) return;

  //===========
  typedef pair<Vec2d, edge> pCE;

  list< pCE > adjCoord;
  //Extract all adjacent edges, the bends are taken
  //into account.
  Iterator<edge> *itE=sg->getInOutEdges(n);

  for (unsigned int i=0; itE->hasNext(); ++i) {
    edge ite=itE->next();

    if (getEdgeValue(ite).size()>0) {
      if (sg->source(ite)==n) {
        Coord tmp = getEdgeValue(ite).front();
        Vec2d v;
        v[0] = tmp[0];
        v[1] = tmp[1];
        adjCoord.push_back(pCE(v, ite));
      }
      else {
        Coord tmp = getEdgeValue(ite).back();
        Vec2d v;
        v[0] = tmp[0];
        v[1] = tmp[1];
        adjCoord.push_back(pCE(v, ite) );
      }
    }
    else {
      Coord tmp = getNodeValue(sg->opposite(ite,n));
      Vec2d v;
      v[0] = tmp[0];
      v[1] = tmp[1];
      adjCoord.push_back(pCE(v, ite) );
    }
  }

  delete itE;

  //Compute normalized vectors associated to incident edges.
  Vec2d center;
  center[0] = getNodeValue(n)[0];
  center[1] = getNodeValue(n)[1];
  list<pCE>::iterator it;

  for (it=adjCoord.begin(); it!=adjCoord.end();) {
    it->first  -= center;
    double norm = it->first.norm();

    if (norm > 1E-3) {
      it->first /= norm;
      ++it;
    }
    else   // remove null vector
      it = adjCoord.erase(it);
  }

  //Sort the vector to compute angles between two edges
  //Correctly.
  adjCoord.sort(AngularOrder());
  //Compute the angles
  vector<edge> tmpOrder;

  for (it = adjCoord.begin(); it != adjCoord.end(); ++it) {
    tmpOrder.push_back(it->second);
  }

  sg->setEdgeOrder(n, tmpOrder);
}
//=================================================================================
vector<double> LayoutProperty::angularResolutions(const node n, const Graph *sg) const {
  vector<double> result;

  if (sg == NULL) sg = graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  if (sg->deg(n) < 2) return result;

  //===========
  typedef pair<Vec2d, edge> pCE;

  list< pCE > adjCoord;
  //Extract all adjacent edges, the bends are taken
  //into account.
  Iterator<edge> *itE=sg->getInOutEdges(n);

  for (unsigned int i=0; itE->hasNext(); ++i) {
    edge ite=itE->next();

    if (getEdgeValue(ite).size()>0) {
      if (sg->source(ite)==n) {
        Coord tmp = getEdgeValue(ite).front();
        Vec2d v;
        v[0] = tmp[1];
        v[1] = tmp[2];
        adjCoord.push_back(pCE(v, ite));
      }
      else {
        Coord tmp = getEdgeValue(ite).back();
        Vec2d v;
        v[0] = tmp[1];
        v[1] = tmp[2];
        adjCoord.push_back(pCE(v, ite) );
      }
    }
    else {
      Coord tmp = getNodeValue(sg->opposite(ite,n));
      Vec2d v;
      v[0] = tmp[1];
      v[1] = tmp[2];
      adjCoord.push_back(pCE(v, ite) );
    }
  }

  delete itE;

  //Compute normalized vectors associated to incident edges.
  Vec2d center;
  center[0] = getNodeValue(n)[0];
  center[1] = getNodeValue(n)[1];
  list<pCE>::iterator it;

  for (it=adjCoord.begin(); it!=adjCoord.end();) {
    it->first  -= center;
    double norm = it->first.norm();

    if (norm) {
      it->first /= norm;
      ++it;
    }
    else   // remove null vector
      it = adjCoord.erase(it);
  }

  //Sort the vector to compute angles between two edges
  //Correctly.
  adjCoord.sort(AngularOrder());

  //Compute the angles
  it = adjCoord.begin();
  Vec3d first;
  first[0] = (*it).first[0];
  first[1] = (*it).first[1];
  first[2] = 0;
  Vec3d current = first;
  ++it;

  int stop=2;
  double degree = sg->deg(n);

  for (; stop>0;) {
    Vec3d next;
    next[0] = (*it).first[0];
    next[1] = (*it).first[1];
    next[2] = 0;

    double cosTheta = current.dotProduct(next);//current * next;
    double sinTheta = (current^next)[2];

    if (cosTheta+0.0001>1) cosTheta-=0.0001;

    if (cosTheta-0.0001<-1) cosTheta+=0.0001;

    if (sinTheta+0.0001>1) sinTheta-=0.0001;

    if (sinTheta-0.0001<-1) sinTheta+=0.0001;

    if (sinTheta>=0) {
      result.push_back(2.0*M_PI/degree - acos(cosTheta));
    }
    else {
      result.push_back(2.0*M_PI/degree - (2.0*M_PI-acos(cosTheta)));
    }

    current=next;
    ++it;

    if (stop<2) stop=0;

    if (it==adjCoord.end()) {
      it=adjCoord.begin();
      stop--;
    }
  }

  return result;
}
//=================================================================================
double LayoutProperty::averageAngularResolution(const node n, const Graph *sg) const {
  vector<double> tmp(angularResolutions(n, sg));

  if (tmp.empty()) return 0.;

  double sum = 0.;
  vector<double>::const_iterator it = tmp.begin();

  for (; it != tmp.end(); ++it)
    sum += *it;

  return sum / double(tmp.size());
}
//=================================================================================
double LayoutProperty::edgeLength(const edge e) const {
  pair<node, node> eEnds = graph->ends(e);
  Coord start=getNodeValue(eEnds.first);
  const Coord& end=getNodeValue(eEnds.second);
  double result=0;
  const vector<Coord> & tmp=getEdgeValue(e);

  for (unsigned int i=0; i<tmp.size(); ++i) {
    result+=(tmp[i]-start).norm();
    start=tmp[i];
  }

  result+=(end-start).norm();
  return result;
}
//=================================================================================
double LayoutProperty::averageEdgeLength(const Graph *sg) const {
  if (sg == NULL) sg = graph;

  assert(sg==graph || graph->isDescendantGraph(sg));

  double ret = 0;
  edge e;
  forEach(e, sg->getEdges()) {
    ret += edgeLength(e);
  }
  return (ret / sg->numberOfEdges());
}
//=================================================================================
unsigned int LayoutProperty::crossingNumber() const {
  cerr << "!!! Warning: Not Implemented function :" << endl;
  cerr << __PRETTY_FUNCTION__ << endl;
  return 0;
}
//=================================================================================
PropertyInterface* LayoutProperty::clonePrototype(Graph * g, const std::string& n) {
  if( !g )
    return 0;

  // allow to get an unregistered property (empty name)
  LayoutProperty * p = n.empty()
                       ? new LayoutProperty(g) : g->getLocalProperty<LayoutProperty>( n );
  p->setAllNodeValue( getNodeDefaultValue() );
  p->setAllEdgeValue( getEdgeDefaultValue() );
  return p;
}
//=================================================================================
PropertyInterface* CoordVectorProperty::clonePrototype(Graph * g, const std::string& n) {
  if( !g )
    return 0;

  // allow to get an unregistered property (empty name)
  CoordVectorProperty * p = n.empty()
                            ? new CoordVectorProperty(g) : g->getLocalProperty<CoordVectorProperty>( n );
  p->setAllNodeValue( getNodeDefaultValue() );
  p->setAllEdgeValue( getEdgeDefaultValue() );
  return p;
}

void LayoutProperty::addNode(Graph*, const tlp::node) {
  // invalidate all to avoid time consuming checking
  // when loading graph
  minMaxOk.clear();
}
//=================================================================================
void LayoutProperty::delNode(Graph* g, const tlp::node n) {
  unsigned int sgi = g->getId();
  TLP_HASH_MAP<unsigned int, bool>::const_iterator it = minMaxOk.find(sgi);

  if (it != minMaxOk.end() && it->second) {
    Coord oldV = getNodeValue(n);

    // check if min or max has to be updated
    if ((oldV == min[sgi]) || (oldV == max[sgi]))
      minMaxOk[sgi] = false;
  }
}
//=================================================================================
