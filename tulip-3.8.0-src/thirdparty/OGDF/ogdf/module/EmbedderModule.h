/*
 * $Revision: 2299 $
 * 
 * last checkin:
 *   $Author: gutwenger $ 
 *   $Date: 2012-05-07 15:57:08 +0200 (Mon, 07 May 2012) $ 
 ***************************************************************/
 
/** \file
 * \brief Declaration of interface for embedder for
 * graphs.
 * 
 * \author Thorsten Kerkhof (thorsten.kerkhof@udo.edu)
 * 
 * \par License:
 * This file is part of the Open Graph Drawing Framework (OGDF).
 *
 * Copyright (C). All rights reserved.
 * See README.txt in the root directory of the OGDF installation for details.
 * 
 * \par
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * Version 2 or 3 as published by the Free Software Foundation;
 * see the file LICENSE.txt included in the packaging of this file
 * for details.
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

#ifdef _MSC_VER
#pragma once
#endif

#ifndef OGDF_EMBEDDER_MODULE_H
#define OGDF_EMBEDDER_MODULE_H

#include <ogdf/planarity/PlanRep.h>
#include <ogdf/basic/Module.h>
#include <ogdf/basic/Timeouter.h>

namespace ogdf {

/**
 * \brief Base class for embedder algorithms.
 *
 * An embedder algorithm computes a planar embedding of a planar
 * graph. The interface for calling such an algorithm takes a
 * PlanRep \a PG as input which makes it possible to apply the
 * embedder in the planarization approach.
 *
 * \see PlanarizationLayout, PlanarizationGridLayout
 */
class OGDF_EXPORT EmbedderModule : public Module, public Timeouter {
public:
	//! Initializes an embedder module.
	EmbedderModule() { }

	virtual ~EmbedderModule() { }

	/**
	 * \brief Calls the embedder algorithm for planarized representation \a PG.
	 * \param PG is the planarized representation that shall be embedded.
	 * \param adjExternal is set (by the algorithm) to an adjacency entry on the
	 *        external face of \a PG.
	 */
	virtual void call(PlanRep& PG, adjEntry& adjExternal) = 0;

	//! Calls the embedder algorithm for planarized representation \a PG.
	void operator()(PlanRep& PG, adjEntry& adjExternal) { call(PG, adjExternal); }

	OGDF_MALLOC_NEW_DELETE
};

} // end namespace ogdf

#endif
