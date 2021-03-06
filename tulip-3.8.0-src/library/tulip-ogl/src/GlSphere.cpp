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
#include <tulip/GlSphere.h>

#include <tulip/Color.h>

#include <tulip/GlDisplayListManager.h>
#include <tulip/GlTextureManager.h>
#include <tulip/GlTools.h>
#include <tulip/OpenGlConfigManager.h>

using namespace std;

namespace tlp {

GlSphere::GlSphere(const Coord &position, float radius,const Color& color,float rotX,float rotY,float rotZ):position(position),radius(radius),color(color),rot(rotX,rotY,rotZ) {
  boundingBox[0]  = Coord(position[0]-radius,position[1]-radius,position[2]-radius);
  boundingBox[1] = Coord(position[0]+radius,position[1]+radius,position[2]+radius);
}

GlSphere::GlSphere(const Coord &position, float radius,const string& textureFile,int alpha,float rotX,float rotY,float rotZ):position(position),radius(radius),color(255,255,255,alpha),textureFile(textureFile),rot(rotX,rotY,rotZ) {
  boundingBox[0] = Coord(position[0]-radius,position[1]-radius,position[2]-radius);
  boundingBox[1] = Coord(position[0]+radius,position[1]+radius,position[2]+radius);
}

void GlSphere::draw(float, Camera *) {

  glEnable(GL_LIGHTING);
  glDisable(GL_COLOR_MATERIAL);

  glPushMatrix();
  glTranslatef(position[0],position[1],position[2]);
  glRotatef(rot[0],1,0,0);
  glRotatef(rot[1],0,1,0);
  glRotatef(rot[2],0,0,1);

  if (textureFile != "") {
    GlTextureManager::getInst().activateTexture(textureFile);
  }

  setMaterial(color);

  OpenGlConfigManager::getInst().activatePolygonAntiAliasing();

  GLUquadricObj *quadratic;
  quadratic = gluNewQuadric();
  gluQuadricNormals(quadratic, GLU_SMOOTH);
  gluQuadricTexture(quadratic, GL_TRUE);
  gluSphere(quadratic, radius , 30, 30);
  gluDeleteQuadric(quadratic);

  OpenGlConfigManager::getInst().desactivatePolygonAntiAliasing();

  GlTextureManager::getInst().desactivateTexture();
  glPopMatrix();
}
//===========================================================
void GlSphere::translate(const Coord& vec) {
  boundingBox.translate(vec);
  position += vec;
}
//===========================================================
void GlSphere::getXML(xmlNodePtr rootNode) {
  xmlNodePtr dataNode=NULL;

  GlXMLTools::createProperty(rootNode, "type", "GlSphere");

  GlXMLTools::getDataNode(rootNode,dataNode);

  GlXMLTools::getXML(dataNode,"position",position);
  GlXMLTools::getXML(dataNode,"radius",radius);
  GlXMLTools::getXML(dataNode,"color",color);
  GlXMLTools::getXML(dataNode,"textureFile",textureFile);
  GlXMLTools::getXML(dataNode,"rotation",rot);

}
//============================================================
void GlSphere::setWithXML(xmlNodePtr rootNode) {
  xmlNodePtr dataNode=NULL;

  GlXMLTools::getDataNode(rootNode,dataNode);

  // Parse Data
  if(dataNode) {

    GlXMLTools::setWithXML(dataNode,"position",position);
    GlXMLTools::setWithXML(dataNode,"radius",radius);
    GlXMLTools::setWithXML(dataNode,"color",color);
    GlXMLTools::setWithXML(dataNode,"textureFile",textureFile);
    GlXMLTools::setWithXML(dataNode,"rotation",rot);

    boundingBox[0] = Coord(position[0]-radius,position[1]-radius,position[2]-radius);
    boundingBox[1] = Coord(position[0]+radius,position[1]+radius,position[2]+radius);
  }
}

}
