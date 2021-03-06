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

#if defined(__APPLE__)
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else
#include <GL/glew.h>
#include <GL/glu.h>
#endif
#include <tulip/GlComplexPolygon.h>
#include <tulip/GlTools.h>
#include <tulip/GlLayer.h>
#include <tulip/GlTextureManager.h>
#include <tulip/ParametricCurves.h>
#include <tulip/OpenGlConfigManager.h>
#include <tulip/GlShaderProgram.h>

#include <tulip/TlpTools.h>

#include <cstring>

#ifdef __APPLE_CC__
#if __APPLE_CC__ < 5400
// Tiger
typedef GLvoid (*GLUTesselatorFunction)(...);
#else
// Leopard
typedef GLvoid (*GLUTesselatorFunction)();
#endif
#elif defined( __mips ) || defined( __linux__ ) || defined( __FreeBSD_kernel__) || defined( __FreeBSD__ ) || defined( __OpenBSD__ ) || defined( __sun ) || defined (__CYGWIN__)
typedef GLvoid (*GLUTesselatorFunction)();
#elif defined (WIN32)
typedef void (CALLBACK*GLUTesselatorFunction)(void);
#else
#error "Error - need to define type GLUTesselatorFunction for this platform/compiler"
#endif


using namespace std;

namespace tlp {
//=====================================================
void CALLBACK beginCallback(GLenum which, GLvoid *polygonData) {
  GlComplexPolygon *complexPolygon = static_cast<GlComplexPolygon *>(polygonData);
  complexPolygon->startPrimitive(which);
}
//=====================================================
void CALLBACK errorCallback(GLenum errorCode) {
  const GLubyte *estring = gluErrorString(errorCode);
  cerr << "Tessellation Error: " << estring << endl;
}
//=====================================================
void CALLBACK endCallback(GLvoid *polygonData) {
  GlComplexPolygon *complexPolygon = static_cast<GlComplexPolygon *>(polygonData);
  complexPolygon->endPrimitive();
}
//=====================================================
void CALLBACK vertexCallback(GLvoid *vertex, GLvoid *polygonData) {
  const GLdouble *pointer = static_cast<GLdouble *>(vertex);
  GlComplexPolygon *complexPolygon = static_cast<GlComplexPolygon *>(polygonData);
  Coord v(static_cast<float>(pointer[0]), static_cast<float>(pointer[1]), static_cast<float>(pointer[2]));
  Vec2f texCoord;
  texCoord[0] = static_cast<float>(pointer[0]) / complexPolygon->getTextureZoom();
  texCoord[1] = static_cast<float>(pointer[1]) / complexPolygon->getTextureZoom();
  complexPolygon->addVertex(v, texCoord);
}
//=====================================================
void CALLBACK combineCallback(GLdouble coords[3], VERTEX *d[4], GLfloat w[4], VERTEX** dataOut, GLvoid *polygonData) {
  GlComplexPolygon *complexPolygon = static_cast<GlComplexPolygon *>(polygonData);
  VERTEX *vertex = complexPolygon->allocateNewVertex();
  vertex->x = coords[0];
  vertex->y = coords[1];
  vertex->z = coords[2];
  vertex->r = vertex->g = vertex->b = vertex->a = 0;

  for (unsigned int i = 0 ; i < 4 ; ++i) {
    if (d[i]) {
      vertex->r += w[i]*d[i]->r;
      vertex->g += w[i]*d[i]->g;
      vertex->b += w[i]*d[i]->b;
      vertex->a += w[i]*d[i]->a;
    }
  }

  *dataOut = vertex;
}
//=====================================================
GlComplexPolygon::GlComplexPolygon(const vector<Coord> &coords,Color fcolor,int polygonEdgesType,const string &textureName):
  currentVector(-1),
  outlined(false),
  fillColor(fcolor),
  outlineSize(1),
  textureName(textureName),
  textureZoom(1.) {
  setPolygonContour(coords, polygonEdgesType);
}
//=====================================================
GlComplexPolygon::GlComplexPolygon(const vector<Coord> &coords,Color fcolor,Color ocolor,int polygonEdgesType,const string &textureName):
  currentVector(-1),
  outlined(true),
  fillColor(fcolor),
  outlineColor(ocolor),
  outlineSize(1),
  textureName(textureName),
  textureZoom(1.) {
  setPolygonContour(coords, polygonEdgesType);
}
//=====================================================
GlComplexPolygon::GlComplexPolygon(const vector<vector<Coord> >&coords,Color fcolor,int polygonEdgesType,const string &textureName):
  currentVector(-1),
  outlined(false),
  fillColor(fcolor),
  outlineSize(1),
  textureName(textureName),
  textureZoom(1.) {
  setPolygonContours(coords, polygonEdgesType);
}
//=====================================================
GlComplexPolygon::GlComplexPolygon(const vector<vector<Coord> >&coords,Color fcolor,Color ocolor,int polygonEdgesType,const string &textureName):
  currentVector(-1),
  outlined(true),
  fillColor(fcolor),
  outlineColor(ocolor),
  outlineSize(1),
  textureName(textureName),
  textureZoom(1.) {
  setPolygonContours(coords, polygonEdgesType);
}
//=====================================================
void GlComplexPolygon::setPolygonContour(const vector<Coord> &contour, int polygonEdgesType) {
  polygonContours.clear();
  polygonContours.push_back(contour);
  points.clear();
  currentVector = -1;
  createPolygon(contour, polygonEdgesType);
  runTesselation();
}
//=====================================================
void GlComplexPolygon::setPolygonContours(const vector<vector<Coord> > &contours, int polygonEdgesType) {
  polygonContours = contours;
  points.clear();
  currentVector = -1;

  for(size_t i = 0 ; i < contours.size(); ++i) {
    createPolygon(contours[i],polygonEdgesType);
  }

  runTesselation();
}
//=====================================================
const vector<vector<Coord> > &GlComplexPolygon::getPolygonContours() const {
  return polygonContours;
}
//=====================================================
void GlComplexPolygon::createPolygon(const vector<Coord> &coords,int polygonEdgesType) {
  beginNewHole();

  if (polygonEdgesType == 1) {
    vector<Coord> catmullPoints;
    computeCatmullRomPoints(coords, catmullPoints, true, coords.size() * 20);

    for (size_t i = 0 ; i < catmullPoints.size() ; ++i) {
      addPoint(catmullPoints[i]);
    }
  }
  else if (polygonEdgesType == 2) {

    const unsigned int nbCurvePoints = 20;
    addPoint(coords[0]);

    for(size_t i = 0 ; i+3 < coords.size() ; i+=3) {
      vector<Coord> controlPoints;
      vector<Coord> curvePoints;
      controlPoints.push_back(coords[i]);
      controlPoints.push_back(coords[i+1]);
      controlPoints.push_back(coords[i+2]);
      controlPoints.push_back(coords[i+3]);
      computeBezierPoints(controlPoints, curvePoints, nbCurvePoints);

      for (size_t j = 0 ; j < curvePoints.size() ; ++j) {
        addPoint(curvePoints[j]);
      }
    }

    addPoint(coords[coords.size()-1]);
  }
  else {
    for(vector<Coord>::const_iterator it=coords.begin(); it!=coords.end(); ++it) {
      addPoint(*it);
    }
  }
}
//=====================================================
void GlComplexPolygon::setOutlineMode(const bool outlined) {
  this->outlined = outlined;
}
//=====================================================
void GlComplexPolygon::setOutlineSize(double size) {
  outlineSize=size;
}
//=====================================================
void GlComplexPolygon::addPoint(const Coord& point) {
  points[currentVector].push_back(point);
  boundingBox.expand(point);
}
//=====================================================
void GlComplexPolygon::beginNewHole() {
  ++currentVector;
  points.push_back(vector<Coord>());
}
//=====================================================
void GlComplexPolygon::runTesselation() {

  primitivesSet.clear();
  startIndicesMap.clear();
  verticesCountMap.clear();
  verticesMap.clear();
  texCoordsMap.clear();

  GLUtesselator *tobj;
  tobj = gluNewTess();

  gluTessCallback(tobj, GLU_TESS_BEGIN_DATA, reinterpret_cast<GLUTesselatorFunction>(&beginCallback));
  gluTessCallback(tobj, GLU_TESS_VERTEX_DATA, reinterpret_cast<GLUTesselatorFunction>(&vertexCallback));
  gluTessCallback(tobj, GLU_TESS_END_DATA, reinterpret_cast<GLUTesselatorFunction>(&endCallback));
  gluTessCallback(tobj, GLU_TESS_COMBINE_DATA, reinterpret_cast<GLUTesselatorFunction>(&combineCallback));
  gluTessCallback(tobj, GLU_TESS_ERROR, reinterpret_cast<GLUTesselatorFunction>(&errorCallback));

  //Compute number of points to compute and create a big tab to store points' informations
  unsigned int numberOfPoints = 0;

  for(size_t v = 0 ; v < points.size() ; ++v) {
    numberOfPoints += points[v].size();
  }

  GLdouble *pointsData = new GLdouble[7*numberOfPoints];
  memset(pointsData, 0, 7*numberOfPoints*sizeof(GLdouble));

  unsigned int pointNumber=0;
  gluTessBeginPolygon(tobj, static_cast<void *>(this));

  for(size_t v = 0 ; v < points.size() ; ++v) {
    gluTessBeginContour(tobj);

    for(size_t i = 0 ; i < points[v].size() ; ++i) {
      pointsData[pointNumber*7]=points[v][i][0];
      pointsData[pointNumber*7+1]=points[v][i][1];
      pointsData[pointNumber*7+2]=points[v][i][2];
      gluTessVertex(tobj,&pointsData[pointNumber*7],&pointsData[pointNumber*7]);
      pointNumber++;
    }

    gluTessEndContour(tobj);
  }

  gluTessEndPolygon(tobj);
  gluDeleteTess(tobj);
  delete [] pointsData;

  for (size_t i = 0 ; i < allocatedVertices.size() ; ++i) {
    delete allocatedVertices[i];
  }

  allocatedVertices.clear();

}
//=====================================================
void GlComplexPolygon::startPrimitive(GLenum primitive) {
  currentPrimitive = primitive;
  nbPrimitiveVertices = 0;
  startIndicesMap[primitive].push_back(verticesMap[primitive].size());
  primitivesSet.insert(primitive);
}
//=====================================================
void GlComplexPolygon::endPrimitive() {
  verticesCountMap[currentPrimitive].push_back(nbPrimitiveVertices);
}
//=====================================================
void GlComplexPolygon::addVertex(const Coord &vertexCoord, const Vec2f &vertexTexCoord) {
  verticesMap[currentPrimitive].push_back(vertexCoord);
  texCoordsMap[currentPrimitive].push_back(vertexTexCoord);
  ++nbPrimitiveVertices;
}
//=====================================================
VERTEX *GlComplexPolygon::allocateNewVertex() {
  VERTEX *vertex = new VERTEX();
  allocatedVertices.push_back(vertex);
  return vertex;
}
//=====================================================
string GlComplexPolygon::getTextureName() {
  return textureName;
}
//=====================================================
void GlComplexPolygon::setTextureName(const string &name) {
  textureName=name;
}
//=====================================================
void GlComplexPolygon::draw(float,Camera *) {

  static double glVersion = atof(reinterpret_cast<const char *>(glGetString(GL_VERSION)));

  if(cameraIs3D()) {
    glEnable(GL_LIGHTING);
  }
  else {
    glDisable(GL_LIGHTING);
  }

  glDisable(GL_CULL_FACE);
  glEnable(GL_COLOR_MATERIAL);

  if(textureName!="") {
    if(GlTextureManager::getInst().activateTexture(textureName))
      glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  }

  glNormal3f(0.0f, 0.0f, 1.0f);

  glEnableClientState(GL_VERTEX_ARRAY);
  glEnableClientState(GL_TEXTURE_COORD_ARRAY);

  OpenGlConfigManager::getInst().activatePolygonAntiAliasing();

  setMaterial(fillColor);

  for (set<GLenum>::iterator it = primitivesSet.begin() ; it != primitivesSet.end() ; ++it) {
    glVertexPointer(3, GL_FLOAT, 3*sizeof(GLfloat), &verticesMap[*it][0][0]);
    glTexCoordPointer(2, GL_FLOAT, 2*sizeof(GLfloat), &texCoordsMap[*it][0]);

    if (glVersion >= 1.4) {
      glMultiDrawArrays(*it, reinterpret_cast<GLint *>(&startIndicesMap[*it][0]), reinterpret_cast<GLsizei *>(&verticesCountMap[*it][0]), verticesCountMap[*it].size());
    }
    else {
      for (size_t i = 0 ; i < verticesCountMap[*it].size() ; ++i) {
        glDrawArrays(*it, startIndicesMap[*it][i], verticesCountMap[*it][i]);
      }
    }
  }

  OpenGlConfigManager::getInst().desactivatePolygonAntiAliasing();

  glDisableClientState(GL_TEXTURE_COORD_ARRAY);

  if(textureName!="") {
    GlTextureManager::getInst().desactivateTexture();
  }

  if (outlined) {
    float lineWidth=static_cast<float>(outlineSize);

    if(lineWidth < 1e-6f)
      lineWidth=1e-6f;

    glLineWidth(lineWidth);
    setMaterial(outlineColor);

    OpenGlConfigManager::getInst().activateLineAndPointAntiAliasing();

    for(size_t v = 0 ; v < points.size() ; ++v) {
      glVertexPointer(3, GL_FLOAT, 3 * sizeof(GLfloat), &points[v][0]);
      glDrawArrays(GL_LINE_LOOP, 0, points[v].size());
    }

    OpenGlConfigManager::getInst().desactivateLineAndPointAntiAliasing();
  }


  glDisableClientState(GL_VERTEX_ARRAY);

  glTest(__PRETTY_FUNCTION__);
}
//===========================================================
void GlComplexPolygon::translate(const Coord& vec) {
  boundingBox.translate(vec);

  for(vector<vector<Coord> >::iterator it = points.begin(); it != points.end(); ++it) {
    for(vector<Coord>::iterator it2 = (*it).begin(); it2 != (*it).end(); ++it2) {
      (*it2) += vec;
    }
  }

  runTesselation();
}
//===========================================================
void GlComplexPolygon::getXML(xmlNodePtr rootNode) {

  GlXMLTools::createProperty(rootNode, "type", "GlComplexPolygon");

  getXMLOnlyData(rootNode);

}
//===========================================================
void GlComplexPolygon::getXMLOnlyData(xmlNodePtr rootNode) {
  xmlNodePtr dataNode=NULL;

  GlXMLTools::getDataNode(rootNode,dataNode);

  GlXMLTools::getXML(dataNode,"numberOfVector",points.size());

  for (size_t i = 0 ; i < points.size() ; ++i) {
    stringstream str;
    str << i ;

    if(!points[i].empty()) {
      GlXMLTools::getXML(dataNode,"points"+str.str(),points[i]);
    }
    else {
      GlXMLTools::getXML(dataNode,"points"+str.str(),vector<Coord>());
    }
  }

  GlXMLTools::getXML(dataNode,"fillColor",fillColor);
  GlXMLTools::getXML(dataNode,"outlineColor",outlineColor);
  GlXMLTools::getXML(dataNode,"outlined",outlined);
  GlXMLTools::getXML(dataNode,"outlineSize",outlineSize);
  GlXMLTools::getXML(dataNode,"textureName",textureName);
}
//============================================================
void GlComplexPolygon::setWithXML(xmlNodePtr rootNode) {
  xmlNodePtr dataNode=NULL;

  GlXMLTools::getDataNode(rootNode,dataNode);

  // Parse Data
  if(dataNode) {
    int numberOfVector;
    GlXMLTools::setWithXML(dataNode,"numberOfVector",numberOfVector);

    for(int i=0; i<numberOfVector; ++i) {
      stringstream str;
      str << i ;
      points.push_back(vector<Coord>());
      GlXMLTools::setWithXML(dataNode,"points"+str.str(),points[i]);
    }

    GlXMLTools::setWithXML(dataNode,"fillColor",fillColor);
    GlXMLTools::setWithXML(dataNode,"outlineColor",outlineColor);
    GlXMLTools::setWithXML(dataNode,"outlined",outlined);
    GlXMLTools::setWithXML(dataNode,"outlineSize",outlineSize);
    GlXMLTools::setWithXML(dataNode,"textureName",textureName);

    for(vector<vector<Coord> >::iterator it= points.begin(); it!=points.end(); ++it) {
      for(vector<Coord>::iterator it2=(*it).begin(); it2!=(*it).end(); ++it2) {
        boundingBox.expand(*it2);
      }
    }
  }
}
}
