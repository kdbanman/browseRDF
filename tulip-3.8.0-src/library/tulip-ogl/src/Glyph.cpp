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
#include <tulip/Size.h>
#include <tulip/Coord.h>
#include <tulip/Glyph.h>

using namespace tlp;
using namespace std;

TemplateFactory<GlyphFactory,Glyph, GlyphContext *> *GlyphFactory::factory;

Glyph::Glyph(GlyphContext *gc) {
  if (gc != 0) {
    glGraphInputData=gc->glGraphInputData;
  }
  else {
    glGraphInputData = 0;
  }
}
//=============================================
Glyph::~Glyph() {
}
//=============================================
Coord Glyph::getAnchor(const Coord &nodeCenter, const Coord &from, const Size &scale, const double zRotation) const {
  Coord anchor = from - nodeCenter;

  if( anchor.getX() == 0.0f && anchor.getY() == 0.0f)
    return nodeCenter;

  if( scale.getW() == 0.0f || scale.getH() == 0.0f)
    return nodeCenter;

  if(zRotation!=0) {
    //unrotate
    Coord saveAnchor(anchor);
    double zRot =  - 2.0*M_PI * zRotation / 360.0;
    anchor[0] = saveAnchor[0]*static_cast<float>(cos(zRot)) - saveAnchor[1]*static_cast<float>(sin(zRot));
    anchor[1] = saveAnchor[0]*static_cast<float>(sin(zRot)) + saveAnchor[1]*static_cast<float>(cos(zRot));
  }

  // unscale
  anchor.setX( anchor.getX() / scale.getW() );
  anchor.setY( anchor.getY() / scale.getH() );

  if(scale.getD() != 0.0f)
    anchor.setZ( anchor.getZ() / scale.getD() );
  else
    anchor.setZ(0.0f);

  anchor = getAnchor( anchor );

  // rescale
  anchor.setX( anchor.getX() * scale.getW() );
  anchor.setY( anchor.getY() * scale.getH() );
  anchor.setZ( anchor.getZ() * scale.getD() );

  if(scale.getD() == 0.0f)
    anchor[2]=0.;

  if(zRotation!=0) {
    //rerotate
    Coord saveAnchor = anchor;
    double zRot = 2.0*M_PI * zRotation / 360.0;
    anchor[0] = saveAnchor[0]*static_cast<float>(cos(zRot)) - saveAnchor[1]*static_cast<float>(sin(zRot));
    anchor[1] = saveAnchor[0]*static_cast<float>(sin(zRot)) + saveAnchor[1]*static_cast<float>(cos(zRot));
  }

  return nodeCenter + anchor;
}
//=================================================================
Coord Glyph::getAnchor(const Coord &vector) const {
  Coord anchor = vector;
  /* anchor must be on the surface of a sphere centered on nodecenter, radius is 0.5 */
  anchor *= 0.5f / anchor.norm();
  return anchor;
}
