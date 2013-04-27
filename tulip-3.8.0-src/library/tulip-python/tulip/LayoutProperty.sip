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

// +-------------------------------------------------------------------------+
// | Tulip Python Bindings                                                   |
// | inspired from bindings by the Booggie project development team          |
// | (http://booggie.org/)                                                   |
// +-------------------------------------------------------------------------+

%Include PropertyInterface.sip

namespace tlp {

class LayoutProperty : tlp::PropertyInterface /NoDefaultCtors/ {
%TypeHeaderCode
#include <tulip/LayoutProperty.h>
%End

%Docstring
Bases: :class:`tlp.PropertyInterface`
%End

public :
	
//===========================================================================================
	
	LayoutProperty(tlp::Graph *graph, std::string name="");

//===========================================================================================
		
	void setAllNodeValue(const tlp::Coord &val);
%Docstring
tlp.LayoutProperty.setAllNodeValue(val)

Sets the same value on the whole set of nodes.

:param val: the value to set on the nodes.
:type val: :class:`tlp.Coord`
%End

//===========================================================================================

	void setAllEdgeValue(const std::vector<tlp::Coord> &val);
%Docstring
tlp.LayoutProperty.setAllEdgeValue(val)

Sets the same value on the whole set of edges.

:param val: the value to set on the edges.
:type val: list of :class:`tlp.Coord`
%End
	
//===========================================================================================	
	
	tlp::Coord getNodeDefaultValue();
%Docstring
tlp.LayoutProperty.getNodeDefaultValue()

Returns the default value associated to the nodes.

:rtype: :class:`tlp.Coord`
%End	
	
//===========================================================================================	
	
	std::vector<tlp::Coord> getEdgeDefaultValue();
%Docstring
tlp.LayoutProperty.getEdgeDefaultValue()

Returns the default value associated to the edges.

:rtype: list of :class:`tlp.Coord`
%End

//===========================================================================================

	const tlp::Coord getNodeValue(const tlp::node node);
%Docstring
tlp.LayoutProperty.getNodeValue(node)

Returns the value associated to a particular node.

:param node: an existing node
:type node: :class:`tlp.node`
:rtype: :class:`tlp.Coord`
:throws: an exception if the node does not belong to the graph attached to the property
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE	
		sipRes = sipCpp->getNodeValue(*a0);
#else
		sipRes = new tlp::Coord(sipCpp->getNodeValue(*a0));
#endif		
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End

//===========================================================================================

	const std::vector<tlp::Coord> getEdgeValue(const tlp::edge edge);
%Docstring
tlp.LayoutProperty.getEdgeValue(edge) 

Returns the value associated to a particular edge.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:rtype: list of :class:`tlp.Coord`
:throws: an exception if the edge does not belong to the graph attached to the property
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE	
		sipRes = sipCpp->getEdgeValue(*a0);
#else
		sipRes = new std::vector<tlp::Coord>(sipCpp->getEdgeValue(*a0));
#endif		
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End

//===========================================================================================

	void setNodeValue(const tlp::node node, const tlp::Coord &val);
%Docstring
tlp.LayoutProperty.setNodeValue(node, val)

Sets the value of a particular node.

:param node: an existing node
:type node: :class:`tlp.node`
:param val: the value to set on the node
:type val: :class:`tlp.Coord`
:throws: an exception if the node does not belong to the graph attached to the property
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE	
		sipCpp->setNodeValue(*a0, a1);
#else
		sipCpp->setNodeValue(*a0, *a1);
#endif		
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End

//===========================================================================================

	void setEdgeValue(const tlp::edge edge, const std::vector<tlp::Coord> &val);
%Docstring
tlp.LayoutProperty.setEdgeValue(edge, val)

Sets the value of a particular edge.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param val: the value to set on the edge
:type val: list of :class:`tlp.Coord`
:throws: an exception if the edge does not belong to the graph attached to the property
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE	
		sipCpp->setEdgeValue(*a0, a1);
#else
		sipCpp->setEdgeValue(*a0, *a1);
#endif		
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End

//===========================================================================================

    tlp::Coord __getitem__(const tlp::node node) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE		
        sipRes = sipCpp->getNodeValue(*a0);
#else
        sipRes = new tlp::Coord(sipCpp->getNodeValue(*a0));
#endif     	
    } else {
    	sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
    }
%End

//===========================================================================================

	void __setitem__(const tlp::node node, const tlp::Coord &val) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE		
     	sipCpp->setNodeValue(*a0, a1);
#else
		sipCpp->setNodeValue(*a0, *a1);
#endif     	
    } else {
    	sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
    } 
%End

//===========================================================================================

	std::vector<tlp::Coord> __getitem__(const tlp::edge edge) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE		
     	sipRes = sipCpp->getEdgeValue(*a0);
#else
		sipRes = new std::vector<tlp::Coord>(sipCpp->getEdgeValue(*a0));
#endif     	
    } else {
    	sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
    }
     
%End

//===========================================================================================

	void __setitem__(const tlp::edge edge, const std::vector<tlp::Coord> &val) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {	
#ifdef PROPERTY_BASE_TYPE	
     	sipCpp->setEdgeValue(*a0, a1);
#else
		sipCpp->setEdgeValue(*a0, *a1);
#endif     	
    } else {
    	sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
    } 
%End
	
//===========================================================================================	
	
	SIP_PYOBJECT __repr__() const;
%MethodCode
	std::ostringstream oss;
	oss << "<Layout property " << sipCpp->getName() << ">";
	std::string s = oss.str();
#if PY_MAJOR_VERSION >= 3
    sipRes = PyUnicode_FromString(s.c_str());
#else
    sipRes = PyString_FromString(s.c_str());
#endif
%End
	
//===========================================================================================	
	
	virtual void erase(const tlp::node node) ;

//===========================================================================================

	virtual void erase(const tlp::edge edge) ;

//===========================================================================================

	virtual std::string getTypename() const ;

//===========================================================================================

	const std::string& getName() const;

//===========================================================================================

	virtual std::string getNodeDefaultStringValue() const ;

//===========================================================================================

	virtual std::string getEdgeDefaultStringValue() const ;
	
//===========================================================================================

	virtual std::string getNodeStringValue(const tlp::node node) const ;

//===========================================================================================

	virtual std::string getEdgeStringValue(const tlp::edge edge) const ;

//===========================================================================================

	virtual bool setNodeStringValue(const tlp::node node, const std::string & strVal);
	
//===========================================================================================

	virtual bool setEdgeStringValue(const tlp::edge edge, const std::string & strVal);

//===========================================================================================

	virtual bool setAllNodeStringValue(const std::string & strVal);

//===========================================================================================

	virtual bool setAllEdgeStringValue(const std::string & strVal);
	
//===========================================================================================

	virtual tlp::Iterator<tlp::node>* getNonDefaultValuatedNodes(const tlp::Graph* subgraph = NULL) const ;
	
//===========================================================================================

	virtual tlp::Iterator<tlp::edge>* getNonDefaultValuatedEdges(const tlp::Graph* subgraph = NULL) const ;
	
//===========================================================================================

    virtual bool copy(tlp::node dst, tlp::node src, tlp::LayoutProperty* prop, bool ifNotDefault=false);
%Docstring
tlp.LayoutProperty.copy(nodeDst, nodeSrc, prop[, ifNotDefault=False])

.. versionadded:: 3.8

Copies the value hold by a property on a node to another node on this property.

:param nodeDst: the node to copy the value to.
:type nodeDst: :class:`tlp.node`
:param nodeSrc: the node to copy the value from.
:type nodeSrc: :class:`tlp.node`
:param prop: the property holding the value to copy.
:type prop: :class:`tlp.LayoutProperty`
:param ifNotDefault: whether to ignore default-valuated nodes or not. Defaults to :const:`False`.
:type ifNotDefault: boolean
%End


//===========================================================================================

    virtual bool copy(tlp::edge src, tlp::edge dst, tlp::LayoutProperty* prop, bool ifNotDefault=false);
%Docstring
tlp.LayoutProperty.copy(edgeDst, edgeSrc, prop[, ifNotDefault=False])

.. versionadded:: 3.8

Copies the value hold by a property on an edge to another edge on this property.

:param edgeDst: the node to copy the value to.
:type edgeDst: :class:`tlp.edge`
:param edgeSrc: the node to copy the value from.
:type edgeSrc: :class:`tlp.edge`
:param prop: the property holding the value to copy.
:type prop: :class:`tlp.LayoutProperty`
:param ifNotDefault: whether to ignore default-valuated nodes or not. Defaults to :const:`False`.
:type ifNotDefault: boolean
%End

//===========================================================================================

    virtual void copy(tlp::LayoutProperty* prop);
%Docstring
tlp.LayoutProperty.copy(prop)

.. versionadded:: 3.8

Copies the values hold by a property on this property.

:param prop: the property to copy
:type prop: :class:`tlp.LayoutProperty`
%End
//===========================================================================================
	

        tlp::Coord getMax(tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.getMax([subgraph = None])

Returns the maximum coordinate in that layout property,
i.e. the top-right corner of the graph drawing bounding box.

:param subgraph: a sub-graph can be given in parameter, in that case return the maximum coordinate of the sub-graph layout.
:type subgraph: :class:`tlp.Graph`
:rtype: :class:`tlp.Coord` 
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End	

%MethodCode
    if (a0) {
        if (!sipCpp->getGraph()->isDescendantGraph(a0) && a0 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a0->getName() << " (id " << a0->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
        sipRes = new tlp::Coord(sipCpp->getMax(a0));
    }
%End
	
//===========================================================================================	
	
        tlp::Coord getMin(tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.getMin([subgraph = None])

Returns the minimum coordinate in that layout property,
i.e. the bottom-left corner of the graph drawing bounding box.

:param subgraph: a sub-graph can be given in parameter, in that case return the minimum coordinate of the sub-graph layout.
:type subgraph: :class:`tlp.Graph`
:rtype: :class:`tlp.Coord` 
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End

%MethodCode
    if (a0) {
        if (!sipCpp->getGraph()->isDescendantGraph(a0) && a0 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a0->getName() << " (id " << a0->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
        sipRes = new tlp::Coord(sipCpp->getMin(a0));
    }
%End

//===========================================================================================

        void translate(const tlp::Vec3f &move, tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.translate(move[, subgraph = None])

Translates the current layout according to a movement vector.

:param move: a movement vector
:type move: :class:`tlp.Vec3f`
:param subgraph: a sub-graph can be given in parameter, in that case translates the layout of the nodes belonging to that sub-graph.
:type subgraph: :class:`tlp.Graph`
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End 

%MethodCode
    if (a1) {
        if (!sipCpp->getGraph()->isDescendantGraph(a1) && a1 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a1->getName() << " (id " << a1->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
        sipCpp->translate(*a0, a1);
    }
%End
 
 //===========================================================================================
 
        void translate(const tlp::Vec3f &move, tlp::Iterator<tlp::node> *itNodes, tlp::Iterator<tlp::edge> *itEdges);
%Docstring
tlp.LayoutProperty.translate(move, itNodes, itEdges)

Translates the layout of a set of nodes and edges provided through iterators according to a movement vector.

:param move: a movement vector
:type move: :class:`tlp.Vec3f`
:param itNodes: an iterator on graph nodes
:type itNodes: :class:`tlp.IteratorNode`
:param itEdges: an iterator on graph edges
:type itEdges: :class:`tlp.IteratorEdge`
%End


	
//===========================================================================================	
	
        void scale(const tlp::Vec3f &scaleFactors, tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.scale(scaleFactors[, subgraph = None])

Scales the layout according to a vector of scale factors (sx, sy, sz).

:param move: a vector of scale factors
:type move: :class:`tlp.Vec3f`
:param subgraph: a sub-graph can be given in parameter, in that case scales the layout of the nodes belonging to that sub-graph.
:type subgraph: :class:`tlp.Graph`
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End 

%MethodCode
    if (a1) {
        if (!sipCpp->getGraph()->isDescendantGraph(a1) && a1 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a1->getName() << " (id " << a1->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
        sipCpp->scale(*a0, a1);
    }
%End

	
//===========================================================================================	
	
        void scale(const tlp::Vec3f &scaleFactors, tlp::Iterator<tlp::node> *itNodes, tlp::Iterator<tlp::edge> *itEdges);
%Docstring
tlp.LayoutProperty.scale(scaleFactors, itNodes, itEdges)

Scales the layout of the nodes and edges provided through iterators according to a vector of scale factors (sx, sy, sz).

:param move: a vector of scale factors
:type move: :class:`tlp.Vec3f`
:param itNodes: an iterator on graph nodes
:type itNodes: :class:`tlp.IteratorNode`
:param itEdges: an iterator on graph edges
:type itEdges: :class:`tlp.IteratorEdge`
%End

//===========================================================================================

        void rotateX(const double &alpha, tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.rotateX(alpha[, subgraph = None])

.. versionadded:: 3.7

Rotates the layout around the X-axis according to an angle in degrees.

:param alpha: an angle in degrees
:type alpha: float
:param subgraph: a sub-graph can be given in parameter, in that case rotates the layout of the nodes belonging to that sub-graph.
:type subgraph: :class:`tlp.Graph`
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End

%MethodCode
    if (a1) {
        if (!sipCpp->getGraph()->isDescendantGraph(a1) && a1 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a1->getName() << " (id " << a1->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
        sipCpp->rotateX(a0, a1);
    }
%End


//===========================================================================================

        void rotateY(const double &alpha, tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.rotateY(alpha[, subgraph = None])

.. versionadded:: 3.7

Rotates the layout around the Y-axis according to an angle in degrees.

:param alpha: an angle in degrees
:type alpha: float
:param subgraph: a sub-graph can be given in parameter, in that case rotates the layout of the nodes belonging to that sub-graph.
:type subgraph: :class:`tlp.Graph`
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End

%MethodCode
    if (a1) {
        if (!sipCpp->getGraph()->isDescendantGraph(a1) && a1 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a1->getName() << " (id " << a1->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
        sipCpp->rotateY(a0, a1);
    }
%End

//===========================================================================================
  
        void rotateZ(const double &alpha, tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.rotateZ(alpha[, subgraph = None])

Rotates the layout around the Z-axis according to an angle in degrees.

:param alpha: an angle in degrees
:type alpha: float
:param subgraph: a sub-graph can be given in parameter, in that case rotates the layout of the nodes belonging to that sub-graph.
:type subgraph: :class:`tlp.Graph`
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End 

%MethodCode
    if (a1) {
        if (!sipCpp->getGraph()->isDescendantGraph(a1) && a1 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a1->getName() << " (id " << a1->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
        sipCpp->rotateZ(a0, a1);
    }
%End

//===========================================================================================

        void rotateX(const double &alpha, tlp::Iterator<tlp::node> *itNodes, tlp::Iterator<tlp::edge> *itEdges);
%Docstring
tlp.LayoutProperty.rotateX(alpha, itNodes, itEdges)

Rotates the layout around the X-axis of the nodes and edges provided through iterators according to an angle in degrees. 

:param alpha: an angle in degrees
:type alpha: float
:param itNodes: an iterator on graph nodes
:type itNodes: :class:`tlp.IteratorNode`
:param itEdges: an iterator on graph edges
:type itEdges: :class:`tlp.IteratorEdge`
%End
	
//===========================================================================================	
	
        void rotateY(const double &alpha, tlp::Iterator<tlp::node> *itNodes, tlp::Iterator<tlp::edge> *itEdges);
%Docstring
tlp.LayoutProperty.rotateY(alpha, itNodes, itEdges)

Rotates the layout around the Y-axis of the nodes and edges provided through iterators according to an angle in degrees. 

:param alpha: an angle in degrees
:type alpha: float
:param itNodes: an iterator on graph nodes
:type itNodes: :class:`tlp.IteratorNode`
:param itEdges: an iterator on graph edges
:type itEdges: :class:`tlp.IteratorEdge`
%End
	
//===========================================================================================	
	
        void rotateZ(const double &alpha, tlp::Iterator<tlp::node> *itNodes, tlp::Iterator<tlp::edge> *itEdges);
%Docstring
tlp.LayoutProperty.rotateZ(alpha, itNodes, itEdges)

Rotates the layout around the Z-axis of the nodes and edges provided through iterators according to an angle in degrees. 

:param alpha: an angle in degrees
:type alpha: float
:param itNodes: an iterator on graph nodes
:type itNodes: :class:`tlp.IteratorNode`
:param itEdges: an iterator on graph edges
:type itEdges: :class:`tlp.IteratorEdge`
%End	
	
//===========================================================================================	
	
     void center(tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.center([subgraph = None])

Centers the layout, meaning translating it in order that the center of its bounding box is (0,0,0)

:param subgraph: a sub-graph can be given in parameter, in that case only centers the layout of that sub-graph.
:type subgraph: :class:`tlp.Graph`
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End

%MethodCode
    if (a0) {
        if (!sipCpp->getGraph()->isDescendantGraph(a0) && a0 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a0->getName() << " (id " << a0->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
        sipCpp->center(a0);
    }
%End

//===========================================================================================

     void center(const tlp::Vec3f &newCenter, tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.center(newCenter[, subgraph = None])

.. versionadded:: 3.7

Centers the layout to newCenter, meaning translating it in order that
the center of its bounding box is equal to newCenter.

:param newCenter: the new center of the layout
:type newCenter: :class:`tlp.Vec3f`
:param subgraph: a sub-graph can be given in parameter, in that case only centers the layout of that sub-graph.
:type subgraph: :class:`tlp.Graph`
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End

%MethodCode
    if (a1) {
        if (!sipCpp->getGraph()->isDescendantGraph(a1) && a1 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a1->getName() << " (id " << a1->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
        sipCpp->center(*a0, a1);
    }
%End

//===========================================================================================	
	
        void normalize(tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.normalize([subgraph = None])

Normalizes the layout, meaning dividing each nodes and edges coordinate by the maximum magnitude of the whole coordinates set

:param subgraph: a sub-graph can be given in parameter, in that case only normalizes the layout of that sub-graph.
:type subgraph: :class:`tlp.Graph`
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End

%MethodCode
    if (a0) {
        if (!sipCpp->getGraph()->isDescendantGraph(a0) && a0 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a0->getName() << " (id " << a0->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
        sipCpp->normalize(a0);
    }
%End
	
//===========================================================================================	
	
	void perfectAspectRatio();
%Docstring
tlp.LayoutProperty.perfectAspectRatio()

Scales the layout in order to approach an aspect ratio (width / height) of 1.0 . 
%End  
  
//=========================================================================================== 
  
        double edgeLength(const tlp::edge e);
%Docstring
tlp.LayoutProperty.edgeLength(edge)

Returns the length of an edge, the bends are taken into account.
Thus, it measures the length of a polyline.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:rtype: float
:throws: an exception if the edge does not belong to the graph attached to the property

.. warning:: This function only measures the length of the polyline between bends, when using curves like Bezier etc... the result will not be the length of the curve.
%End

%MethodCode
        if (sipCpp->getGraph()->isElement(*a0)) {
		sipRes = sipCpp->edgeLength(*a0);
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End

//===========================================================================================

  double averageEdgeLength(const tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.averageEdgeLength([subgraph=None])

.. versionadded:: 3.7

Returns the average edge length of the layout, the bends are taken into account.

:param subgraph: a sub-graph can be given in parameter, in that case only computes the average edge length for that sub-graph.
:type subgraph: :class:`tlp.Graph`
:rtype: float
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End

%MethodCode
    if (a0) {
        if (!sipCpp->getGraph()->isDescendantGraph(a0) && a0 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a0->getName() << " (id " << a0->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }

    if (sipIsErr == 0) {
        sipRes = sipCpp->averageEdgeLength(a0);
    }
%End

//===========================================================================================
  
        double averageAngularResolution(const tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.averageAngularResolution([subgraph = None])

Returns the average angular resolution of the layout.
It is only defined for 2D drawing, meaning the third coordinate is omitted

:param subgraph: a sub-graph can be given in parameter, in that case computes the average angular resolution for the layout of the nodes belonging to that sub-graph.
:type subgraph: :class:`tlp.Graph`
:rtype: float
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End
  
%MethodCode
    if (a0) {
        if (!sipCpp->getGraph()->isDescendantGraph(a0) && a0 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a0->getName() << " (id " << a0->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }

    if (sipIsErr == 0) {
        sipRes = sipCpp->averageAngularResolution(a0);
    }
%End

//===========================================================================================  
  
        double averageAngularResolution(const tlp::node n, const tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.averageAngularResolution(node[, subgraph = None])

Returns the average angular resolution of a node.
It is only defined for 2D drawing, meaning the third coordinate is omitted

:param node: an existing node
:type node: :class:`tlp.node`
:param subgraph: a sub-graph can be given in parameter, in that case computes the average angular resolution of a node in that sub-graph.
:type subgraph: :class:`tlp.Graph`
:rtype: float
:throws: an exception if the node does not belong to the graph attached to the property or if the provided sub-graph is not a descendant of the graph attached to the property
%End 


%MethodCode
    if (a1) {
        if (!sipCpp->getGraph()->isDescendantGraph(a1) && a1 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a1->getName() << " (id " << a1->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
	if (sipCpp->getGraph()->isElement(*a0)) {
		if (a1 && a1->isElement(*a0)) {
			sipRes = sipCpp->averageAngularResolution(*a0, a1);
		} else {
			if (!a1) {
				sipRes = sipCpp->averageAngularResolution(*a0);
			} else {
				sipIsErr = throwInvalidNodeException(const_cast<tlp::Graph*>(a1), *a0);
			}
		}
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
        }
    }
%End
  
//===========================================================================================  
  
        std::vector<double> angularResolutions(const tlp::node n, const tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.angularResolutions(node[, subgraph=None])

Returns a list of all angular resolution of a node.
It is only defined for 2D drawing, meaning the third coordinates is omitted

:param node: an existing node
:type node: :class:`tlp.node`
:param subgraph: a sub-graph can be given in parameter, in that case returns the list of angular resolution for the node in that sub-graph
:type subgraph: :class:`tlp.Graph`
:rtype: list of float
:throws: an exception if the node does not belong to the graph attached to the property or if the provided sub-graph is not a descendant of the graph attached to the property
%End

%MethodCode
    if (a1) {
        if (!sipCpp->getGraph()->isDescendantGraph(a1) && a1 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a1->getName() << " (id " << a1->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
	if (sipCpp->getGraph()->isElement(*a0)) {
		if (a1 && a1->isElement(*a0)) {
			sipRes = new std::vector<double>(sipCpp->angularResolutions(*a0, a1));
		} else {
			if (!a1) {
				sipRes = new std::vector<double>(sipCpp->angularResolutions(*a0));
			} else {
				sipIsErr = throwInvalidNodeException(const_cast<tlp::Graph*>(a1), *a0);
			}
		}
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
        }
    }
%End

//===========================================================================================

        void computeEmbedding(tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.computeEmbedding([subgraph=None])

Fixes embedding of the graph according to the layout,
ie. sort edges around nodes according to their neighbors/bends position in the layout.
Only works in 2D, the third coordinate is not taken into account.

:param subgraph: a sub-graph can be given in parameter, in that case fixes embedding of that sub-graph
:type subgraph: :class:`tlp.Graph`
:throws: an exception if the provided sub-graph is not a descendant of the graph attached to the property
%End  

%MethodCode
    if (a0) {
        if (!sipCpp->getGraph()->isDescendantGraph(a0) && a0 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a0->getName() << " (id " << a0->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }

    if (sipIsErr == 0) {
        sipCpp->computeEmbedding(a0);
    }
%End
  
 //===========================================================================================
  
        void computeEmbedding(const tlp::node n, tlp::Graph *subgraph=NULL);
%Docstring
tlp.LayoutProperty.computeEmbedding(node[, subgraph=None])

Fixes embedding of the node according to the layout,
ie. sort edges around the node according to their neighbors/bends position in the layout.
Only works in 2D, the third coordinate is not taken into account.

:param subgraph: a sub-graph can be given in parameter, in that case fixes embedding of the node in that sub-graph
:type subgraph: :class:`tlp.Graph`
:throws: an exception if the node does not belong to the graph attached to the property or if the provided sub-graph is not a descendant of the graph attached to the property
%End

%MethodCode

    if (a1) {
        if (!sipCpp->getGraph()->isDescendantGraph(a1) && a1 != sipCpp->getGraph()) {
            sipIsErr = 1;
            std::ostringstream oss;
            oss << "Error : <graph " << a1->getName() << " (id " << a1->getId() << ")>";
            oss << "is not a descendant of <graph " << sipCpp->getGraph()->getName() << " (id " << sipCpp->getGraph()->getId() << ")>";
            PyErr_SetString(PyExc_Exception, oss.str().c_str());
        }
    }
    if (sipIsErr == 0) {
	if (sipCpp->getGraph()->isElement(*a0)) {
		if (a1 && a1->isElement(*a0)) {
			sipCpp->computeEmbedding(*a0, a1);
		} else {
			if (!a1) {
				sipCpp->computeEmbedding(*a0);
			} else {
				sipIsErr = throwInvalidNodeException(const_cast<tlp::Graph*>(a1), *a0);
			}
		}
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	} 
    }
%End

 //===========================================================================================
  
  	unsigned int crossingNumber() const;
%Docstring
tlp.LayoutProperty.crossingNumber()

Returns the number of edges crossings in the layout.
%End 	
  	


//===========================================================================================
	
};

class CoordVectorProperty : tlp::PropertyInterface /NoDefaultCtors/ {
%TypeHeaderCode
#include <tulip/LayoutProperty.h>
%End

%Docstring
Bases: :class:`tlp.PropertyInterface`
%End

public :

//===========================================================================================

	CoordVectorProperty (tlp::Graph *graph, std::string name="");
  	
//===========================================================================================	
 
	const std::vector<tlp::Coord> getNodeDefaultValue();
%Docstring
tlp.CoordVectorProperty.getNodeDefaultValue()

Returns the default list of values associated to the nodes.

:rtype: list of :class:`tlp.Coord`
%End
	
//===========================================================================================	
	
	const std::vector<tlp::Coord> getEdgeDefaultValue();
%Docstring
tlp.CoordVectorProperty.getEdgeDefaultValue()

Returns the default list of values associated to the edges.

:rtype: list of :class:`tlp.Coord`
%End

//===========================================================================================

	const std::vector<tlp::Coord> getNodeValue(const tlp::node node);
%Docstring
tlp.CoordVectorProperty.getNodeValue(node)

Returns the list of values associated to a particular node.

:param node: an existing node
:type node: :class:`tlp.node`
:rtype: list of :class:`tlp.Coord`
:throws: an exception if the node does not belong to the graph attached to the property
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		sipRes = new std::vector<tlp::Coord>(sipCpp->getNodeValue(*a0));
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End	

//===========================================================================================

	const std::vector<tlp::Coord> getEdgeValue(const tlp::edge edge);
%Docstring
tlp.CoordVectorProperty.getEdgeValue(edge)

Returns the list of values associated to a particular edge.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:rtype: list of :class:`tlp.Coord`
:throws: an exception if the edge does not belong to the graph attached to the property
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		sipRes = new std::vector<tlp::Coord>(sipCpp->getEdgeValue(*a0));
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End	

//===========================================================================================

	void setNodeValue(const tlp::node node, const std::vector<tlp::Coord> &val);
%Docstring
tlp.CoordVectorProperty.setNodeValue(node, val)

Sets the list of values of a particular node.

:param node: an existing node
:type node: :class:`tlp.node`
:param val: the list of values to set on the node
:type val: list of :class:`tlp.Coord`
:throws: an exception if the node does not belong to the graph attached to the property
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		sipCpp->setNodeValue(*a0, *a1);
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End	

//===========================================================================================

	void setEdgeValue(const tlp::edge edge, const std::vector<tlp::Coord> &val);
%Docstring
tlp.CoordVectorProperty.setEdgeValue(edge, val)

Sets the list of values of a particular edge.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param val: the list of values to set on the edge
:type val: list of :class:`tlp.Coord`
:throws: an exception if the edge does not belong to the graph attached to the property
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		sipCpp->setEdgeValue(*a0, *a1);
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End	

//===========================================================================================

	void setAllNodeValue(const std::vector<tlp::Coord> &val);
%Docstring
tlp.CoordVectorProperty.setAllNodeValue(val)

Sets the same list of values on the whole set of nodes.

:param val: the list of values to set on the nodes
:type val: list of :class:`tlp.Coord` 
%End

//===========================================================================================

	void setAllEdgeValue(const std::vector<tlp::Coord> &val);
%Docstring
tlp.CoordVectorProperty.setAllEdgeValue(val)

Sets the same list of values on the whole set of edges.

:param val: the list of values to set on the edges
:type val: list of :class:`tlp.Coord` 
%End
	
//===========================================================================================
	
	void setNodeEltValue(const tlp::node node, unsigned int index, const tlp::Coord &val);
%Docstring	
tlp.CoordVectorProperty.setNodeEltValue(node, index, val)

Sets the value in the list attached to a particular node at the given index.

:param node: an existing node
:type node: :class:`tlp.node`
:param index: the index in the list
:type index: integer
:param val: the value to set in the list
:type val: :class:`tlp.Coord`
:throws: an exception if the node does not belong to the graph attached to the property or if the list attached to the node has a size smaller than the given index.
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		const std::vector<tlp::Coord> &v = sipCpp->getNodeValue(*a0);
		if (a1 < v.size()) {
#ifdef PROPERTY_BASE_TYPE		
			sipCpp->setNodeEltValue(*a0, a1, a2);
#else
			sipCpp->setNodeEltValue(*a0, a1, *a2);
#endif			
		} else {
			std::ostringstream oss;
			oss << "vector associated to node " << a0->id << " for vector property \"" << sipCpp->getName() << "\" has a size of " << v.size() << " and the requested index is " << a1 ;
			PyErr_SetString(PyExc_Exception, oss.str().c_str());
			sipIsErr = -1;
		}	
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End

//===========================================================================================
 
    const tlp::Coord getNodeEltValue(const tlp::node node, unsigned int index);
%Docstring	
tlp.CoordVectorProperty.getNodeEltValue(node, index)

Returns the value in the list attached to a particular node at the given index.

:param node: an existing node
:type node: :class:`tlp.node`
:param index: the index in the list
:type index: integer
:rtype: :class:`tlp.Coord`
:throws: an exception if the node does not belong to the graph attached to the property or if the list attached to the node has a size smaller than the given index.
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		const std::vector<tlp::Coord> &v = sipCpp->getNodeValue(*a0);
		if (a1 < v.size()) {
#ifdef PROPERTY_BASE_TYPE		
			sipRes = sipCpp->getNodeEltValue(*a0, a1);
#else
			sipRes = new tlp::Coord(sipCpp->getNodeEltValue(*a0, a1));
#endif			
		} else {
			std::ostringstream oss;
			oss << "vector associated to node " << a0->id << " for vector property \"" << sipCpp->getName() << "\" has a size of " << v.size() << " and the requested index is " << a1 ;
			PyErr_SetString(PyExc_Exception, oss.str().c_str());
			sipIsErr = -1;
		}	
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End  
  
//===========================================================================================  
  
  	void pushBackNodeEltValue(const tlp::node node, const tlp::Coord& val);
%Docstring	
tlp.CoordVectorProperty.pushBackNodeEltValue(node, val)

Inserts a value at the end of the list attached to a particular node. The size of the list is incremented by one.

:param node: an existing node
:type node: :class:`tlp.node`
:param val: the value to add in the list
:type val: :class:`tlp.Coord`
:throws: an exception if the node does not belong to the graph attached to the property
%End

%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE	
		sipCpp->pushBackNodeEltValue(*a0, a1);
#else
		sipCpp->pushBackNodeEltValue(*a0, *a1);
#endif			
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End
 
//=========================================================================================== 
 
	void popBackNodeEltValue(const tlp::node node);
%Docstring	
tlp.CoordVectorProperty.popBackNodeEltValue(node)

Removes the value at the end of the list (if not empty) attached to a particular node. The size of the list is decremented by one.

:param node: an existing node
:type node: :class:`tlp.node`
:throws: an exception if the node does not belong to the graph attached to the property
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		sipCpp->popBackNodeEltValue(*a0);	
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End
	
//===========================================================================================	
	
	void resizeNodeValue(const tlp::node node, unsigned int size);
%Docstring	
tlp.CoordVectorProperty.resizeNodeValue(node, size)

Resizes the list attached to a particular node. A default value will be assigned to new elements (if any).

:param node: an existing node
:type node: :class:`tlp.node`
:param size: the new size of the list
:type size: integer
:throws: an exception if the node does not belong to the graph attached to the property
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		sipCpp->resizeNodeValue(*a0, a1);	
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End
	
//===========================================================================================
	
	void resizeNodeValue(const tlp::node node, unsigned int size, tlp::Coord elt);
%Docstring	
tlp.CoordVectorProperty.resizeNodeValue(node, size, val)

Resizes the list attached to a particular node. The value given in paramater will be assigned to new elements (if any).

:param node: an existing node
:type node: :class:`tlp.node`
:param size: the new size of the list
:type size: integer
:param val: the value to assign on new elements in the list
:type val: :class:`tlp.Coord`
:throws: an exception if the node does not belong to the graph attached to the property
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE	
		sipCpp->resizeNodeValue(*a0, a1, a2);
#else
		sipCpp->resizeNodeValue(*a0, a1, *a2);
#endif			
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End

//===========================================================================================
	
	void setEdgeEltValue(const tlp::edge edge, unsigned int index, const tlp::Coord &val);
%Docstring	
tlp.CoordVectorProperty.setEdgeEltValue(edge, index, val)

Sets the value in the list attached to a particular edge at the given index.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param index: the index in the list
:type index: integer
:param val: the value to set in the list
:type val: :class:`tlp.Coord`
:throws: an exception if the edge does not belong to the graph attached to the property or if the list attached to the edge has a size smaller than the given index.
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		const std::vector<tlp::Coord> &v = sipCpp->getEdgeValue(*a0);
		if (a1 < v.size()) {
#ifdef PROPERTY_BASE_TYPE		
			sipCpp->setEdgeEltValue(*a0, a1, a2);
#else
			sipCpp->setEdgeEltValue(*a0, a1, *a2);
#endif			
		} else {
			std::ostringstream oss;
			oss << "vector associated to edge " << a0->id << " for vector property \"" << sipCpp->getName() << "\" has a size of " << v.size() << " and the requested index is " << a1 ;
			PyErr_SetString(PyExc_Exception, oss.str().c_str());
			sipIsErr = -1;
		}	
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End  
  
//===========================================================================================  
  
    const tlp::Coord getEdgeEltValue(const tlp::edge edge, unsigned int index);
%Docstring	
tlp.CoordVectorProperty.getEdgeEltValue(edge, index)

Returns the value in the list attached to a particular edge at the given index.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param index: the index in the list
:type index: integer
:rtype: :class:`tlp.Coord`
:throws: an exception if the edge does not belong to the graph attached to the property or if the list attached to the edge has a size smaller than the given index.
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		const std::vector<tlp::Coord> &v = sipCpp->getEdgeValue(*a0);
		if (a1 < v.size()) {
#ifdef PROPERTY_BASE_TYPE		
			sipRes = sipCpp->getEdgeEltValue(*a0, a1);
#else
			sipRes = new tlp::Coord(sipCpp->getEdgeEltValue(*a0, a1));
#endif			
		} else {
			std::ostringstream oss;
			oss << "vector associated to edge " << a0->id << " for vector property \"" << sipCpp->getName() << "\" has a size of " << v.size() << " and the requested index is " << a1 ;
			PyErr_SetString(PyExc_Exception, oss.str().c_str());
			sipIsErr = -1;
		}	
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End  

//===========================================================================================

	void pushBackEdgeEltValue(const tlp::edge edge, const tlp::Coord &val);
%Docstring	
tlp.CoordVectorProperty.pushBackEdgeEltValue(edge, val)

Inserts a value at the end of the list attached to a particular edge. The size of the list is incremented by one.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param val: the value to add in the list
:type val: :class:`tlp.Coord`
:throws: an exception if the edge does not belong to the graph attached to the property
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE	
		sipCpp->pushBackEdgeEltValue(*a0, a1);
#else
		sipCpp->pushBackEdgeEltValue(*a0, *a1);
#endif			
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End
  
//=========================================================================================== 
  
	void popBackEdgeEltValue(const tlp::edge edge);
%Docstring	
tlp.CoordVectorProperty.popBackEdgeEltValue(edge)

Removes the value at the end of the list (if not empty) attached to a particular edge. The size of the list is decremented by one.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:throws: an exception if the edge does not belong to the graph attached to the property
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		sipCpp->popBackEdgeEltValue(*a0);	
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End

//===========================================================================================
  
  	void resizeEdgeValue(const tlp::edge edge, unsigned int size);
%Docstring	
tlp.CoordVectorProperty.resizeEdgeValue(edge, size)

Resizes the list attached to a particular edge. A default value will be assigned to new elements (if any).

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param size: the new size of the list
:type size: integer
:throws: an exception if the edge does not belong to the graph attached to the property
%End
  	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		sipCpp->resizeEdgeValue(*a0, a1);	
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End  	
  	
//===========================================================================================  	
  	
	void resizeEdgeValue(const tlp::edge edge, unsigned int size, tlp::Coord val);
%Docstring	
tlp.CoordVectorProperty.resizeEdgeValue(edge, size, val)

Resizes the list attached to a particular edge. The value given in paramater will be assigned to new elements (if any).

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param size: the new size of the list
:type size: integer
:param val: the value to assign on new elements in the list
:type val: :class:`tlp.Coord`
:throws: an exception if the node does not belong to the graph attached to the property
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE	
		sipCpp->resizeEdgeValue(*a0, a1, a2);
#else
		sipCpp->resizeEdgeValue(*a0, a1, *a2);
#endif			
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End    
    
//===========================================================================================    
    
	std::vector<tlp::Coord> __getitem__(const tlp::node node) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
     	sipRes = new std::vector<tlp::Coord>(sipCpp->getNodeValue(*a0));
     } else {
     	sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
     }
%End

//===========================================================================================

	void __setitem__(const tlp::node node, const std::vector<tlp::Coord> &val) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
     	sipCpp->setNodeValue(*a0, *a1);
     } else {
     	sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
     }
%End

//===========================================================================================

	std::vector<tlp::Coord> __getitem__(const tlp::edge edge) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
     	sipRes = new std::vector<tlp::Coord>(sipCpp->getEdgeValue(*a0));
     } else {
     	sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
     }
%End

//===========================================================================================

	void __setitem__(const tlp::edge edge, const std::vector<tlp::Coord> &val) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
     	sipCpp->setEdgeValue(*a0, *a1);
     } else {
     	sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
     }
%End

//===========================================================================================

	SIP_PYOBJECT __repr__() const;
%MethodCode
	std::ostringstream oss;
	oss << "<Coord vector property " << sipCpp->getName() << ">";
	std::string s = oss.str();
#if PY_MAJOR_VERSION >= 3
    sipRes = PyUnicode_FromString(s.c_str());
#else
	sipRes = PyString_FromString(s.c_str());
#endif
%End

//===========================================================================================	
	
	virtual void erase(const tlp::node node) ;
	
//===========================================================================================

	virtual void erase(const tlp::edge edge) ;

//===========================================================================================

	virtual std::string getTypename() const ;

//===========================================================================================

	const std::string& getName() const;

//===========================================================================================

	virtual std::string getNodeDefaultStringValue() const ;
	
//===========================================================================================

	virtual std::string getEdgeDefaultStringValue() const ;
	
//===========================================================================================

	virtual std::string getNodeStringValue(const tlp::node node) const ;

//===========================================================================================

	virtual std::string getEdgeStringValue(const tlp::edge edge) const ;

//===========================================================================================

	virtual bool setNodeStringValue(const tlp::node node, const std::string & val);

//===========================================================================================

	virtual bool setEdgeStringValue(const tlp::edge edge, const std::string & val);

//===========================================================================================

	virtual bool setAllNodeStringValue(const std::string & val);

//===========================================================================================

	virtual bool setAllEdgeStringValue(const std::string & val);

//===========================================================================================

	virtual tlp::Iterator<tlp::node>* getNonDefaultValuatedNodes(const tlp::Graph* subgraph= NULL) const ;

//===========================================================================================

	virtual tlp::Iterator<tlp::edge>* getNonDefaultValuatedEdges(const tlp::Graph* subgraph= NULL) const ;
	
//===========================================================================================

    virtual bool copy(tlp::node src, tlp::node dst, tlp::CoordVectorProperty* prop, bool ifNotDefault=false);
%Docstring
tlp.CoordVectorProperty.copy(nodeDst, nodeSrc, prop[, ifNotDefault=False])

.. versionadded:: 3.8

Copies the value hold by a property on a node to another node on this property.

:param nodeDst: the node to copy the value to.
:type nodeDst: :class:`tlp.node`
:param nodeSrc: the node to copy the value from.
:type nodeSrc: :class:`tlp.node`
:param prop: the property holding the value to copy.
:type prop: :class:`tlp.CoordVectorProperty`
:param ifNotDefault: whether to ignore default-valuated nodes or not. Defaults to :const:`False`.
:type ifNotDefault: boolean
%End

//===========================================================================================

    virtual bool copy(tlp::edge src, tlp::edge dst, tlp::CoordVectorProperty* prop, bool ifNotDefault=false);
%Docstring
tlp.CoordVectorProperty.copy(edgeDst, edgeSrc, prop[, ifNotDefault=False])

.. versionadded:: 3.8

Copies the value hold by a property on an edge to another edge on this property.

:param edgeDst: the node to copy the value to.
:type edgeDst: :class:`tlp.edge`
:param edgeSrc: the node to copy the value from.
:type edgeSrc: :class:`tlp.edge`
:param prop: the property holding the value to copy.
:type prop: :class:`tlp.CoordVectorProperty`
:param ifNotDefault: whether to ignore default-valuated nodes or not. Defaults to :const:`False`.
:type ifNotDefault: boolean
%End

//===========================================================================================

    virtual void copy(tlp::CoordVectorProperty* prop);
%Docstring
tlp.CoordVectorProperty.copy(prop)

.. versionadded:: 3.8

Copies the values hold by a property on this property.

:param prop: the property to copy
:type prop: :class:`tlp.CoordVectorProperty`
%End

//===========================================================================================
	
};

};
