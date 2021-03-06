#include <ogdf/energybased/FastMultipoleEmbedder.h>

#include "tulip2ogdf/OGDFLayoutPluginBase.h"

namespace {

const char * paramHelp[] = {
  HTML_HELP_OPEN()
  HTML_HELP_DEF( "type", "int" )
  HTML_HELP_BODY()
  "The number of threads to use during the computation of the layout."
  HTML_HELP_CLOSE()
};
}

// comments below have been extracted from OGDF/src/energybased/FastMultipoleEmbedder.cpp
/** \addtogroup layout */
/*@{*/
/**
 * Implementation of class FastMultipoleEmbedder.
 *
 * \author Martin Gronemann
 *
 * \par License:
 * This is part of the Open Graph Drawing Framework (OGDF).
 * Copyright (C) 2005-2009
 *
 * \par
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * Version 2 or 3 as published by the Free Software Foundation
 * and appearing in the files LICENSE_GPL_v2.txt and
 * LICENSE_GPL_v3.txt included in the packaging of this file.
 *
 * \par
 * In addition, as a special exception, you have permission to link
 * this software with the libraries of the COIN-OR Osi project
 * (http://www.coin-or.org/projects/Osi.xml), all libraries required
 * by Osi, and all LP-solver libraries directly supported by the
 * COIN-OR Osi project, and distribute executables, as long as
 * you follow the requirements of the GNU General Public License
 * in regard to all of the software in the executable aside from these
 * third-party libraries.
 *
 * \par
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * \par
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 * \see  http://www.gnu.org/copyleft/gpl.html
 ***************************************************************/
class OGDFFastMultipoleMultiLevelEmbedder : public OGDFLayoutPluginBase {

public:

  OGDFFastMultipoleMultiLevelEmbedder(const tlp::PropertyContext &context) :OGDFLayoutPluginBase(context, new ogdf::FastMultipoleMultilevelEmbedder()) {
    addParameter<int>("number of threads", paramHelp[0], "2");
  }

  ~OGDFFastMultipoleMultiLevelEmbedder() {}

  void beforeCall() {
    ogdf::FastMultipoleMultilevelEmbedder *fmme = static_cast<ogdf::FastMultipoleMultilevelEmbedder*>(ogdfLayoutAlgo);

    if (dataSet != NULL) {
      int ival = 0;

      if (dataSet->get("number of threads", ival))
        fmme->maxNumThreads(ival);

    }
  }

};
/*@}*/

LAYOUTPLUGINOFGROUP(OGDFFastMultipoleMultiLevelEmbedder,"Fast Multipole Multilevel Embedder (OGDF)","Martin Gronemann","12/11/2007","Ok","1.0","Multilevel");
