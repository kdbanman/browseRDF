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

#include <tulip/GlQuad.h>

#include <tulip/GlTextureManager.h>
#include <tulip/GlXMLTools.h>
#include <tulip/GlTools.h>
#include <tulip/OpenGlConfigManager.h>

using namespace std;

namespace tlp {

GlQuad::GlQuad() : GlPolygon(4,4,4,true,false) {
}

GlQuad::GlQuad(const Coord &p1, const Coord &p2, const Coord &p3, const Coord &p4,
               const Color &color) : GlPolygon(4,4,4,true,false) {
  points[0] = p1;
  points[1] = p2;
  points[2] = p3;
  points[3] = p4;
  setFillColor(color);
  recomputeBoundingBox();
}

GlQuad::GlQuad(const Coord &p1, const Coord &p2, const Coord &p3, const Coord &p4,
               const Color &c1, const Color &c2, const Color &c3, const Color &c4) {
  points[0] = p1;
  points[1] = p2;
  points[2] = p3;
  points[3] = p4;
  fillColors[0] = c1;
  fillColors[1] = c2;
  fillColors[2] = c3;
  fillColors[3] = c4;
  recomputeBoundingBox();
}

GlQuad::GlQuad(const Coord positions[4], const Color &color):GlPolygon(4,4,4,true,false) {
  for(int i=0; i < 4; ++i) {
    points[i] = positions[i];
  }

  setFillColor(color);
  recomputeBoundingBox();
}

GlQuad::GlQuad(const Coord positions[4], const Color colors[4]) {
  for(int i=0; i < 4; ++i) {
    points[i] = positions[i];
    fillColors[i]    = colors[i];
  }

  recomputeBoundingBox();
}

GlQuad::~GlQuad() {
}

void GlQuad::setColor(const Color& color) {
  setFillColor(color);
}

void GlQuad::setPosition(const int idPosition, const Coord &position) {
  setPoint(idPosition,position);
}

void GlQuad::setColor(const int idColor, const Color &color) {
  setFillColor(idColor,color);
}

const Coord& GlQuad::getPosition(const int idPosition) const {
  return  (*(const_cast< vector<Coord> * > (&points)))[idPosition];
}

const Color& GlQuad::getColor(const int idColor) const {
  return (*(const_cast< vector<Color> * > (&fillColors)))[idColor];
}
//===========================================================
void GlQuad::getXML(xmlNodePtr rootNode) {
  xmlNodePtr dataNode = NULL;

  GlXMLTools::createProperty(rootNode, "type", "GlQuad");

  GlPolygon::getXMLOnlyData(rootNode);

  GlXMLTools::getDataNode(rootNode, dataNode);
}
//============================================================
void GlQuad::setWithXML(xmlNodePtr rootNode) {
  xmlNodePtr dataNode = NULL;

  GlPolygon::setWithXML(rootNode);

  GlXMLTools::getDataNode(rootNode, dataNode);
}

}
