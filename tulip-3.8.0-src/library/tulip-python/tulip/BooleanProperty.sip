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

class BooleanProperty : tlp::PropertyInterface /NoDefaultCtors/ {
%TypeHeaderCode
#include <tulip/BooleanProperty.h>
%End

%Docstring
Bases: :class:`tlp.PropertyInterface`
%End

public :
	
//===========================================================================================
	
	BooleanProperty(tlp::Graph *graph, std::string name="");

//===========================================================================================
		
	void setAllNodeValue(const bool &val);
%Docstring
tlp.BooleanProperty.setAllNodeValue(val)

Sets the same value on the whole set of nodes.

:param val: the value to set on the nodes.
:type val: boolean
%End

//===========================================================================================

	void setAllEdgeValue(const bool &val);
%Docstring
tlp.BooleanProperty.setAllEdgeValue(val)

Sets the same value on the whole set of edges.

:param val: the value to set on the edges.
:type val: boolean
%End
	
//===========================================================================================	
	
	bool getNodeDefaultValue();
%Docstring
tlp.BooleanProperty.getNodeDefaultValue()

Returns the default value associated to the nodes.

:rtype: boolean
%End	
	
//===========================================================================================	
	
	bool getEdgeDefaultValue();
%Docstring
tlp.BooleanProperty.getEdgeDefaultValue()

Returns the default value associated to the edges.

:rtype: boolean
%End

//===========================================================================================

	const bool getNodeValue(const tlp::node node);
%Docstring
tlp.BooleanProperty.getNodeValue(node)

Returns the value associated to a particular node.

:param node: an existing node
:type node: :class:`tlp.node`
:rtype: boolean
:throws: an exception if the node does not belong to the graph attached to the property
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE	
		sipRes = sipCpp->getNodeValue(*a0);
#else
		sipRes = new bool(sipCpp->getNodeValue(*a0));
#endif		
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End

//===========================================================================================

	const bool getEdgeValue(const tlp::edge edge);
%Docstring
tlp.BooleanProperty.getEdgeValue(edge) 

Returns the value associated to a particular edge.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:rtype: boolean
:throws: an exception if the edge does not belong to the graph attached to the property
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE	
		sipRes = sipCpp->getEdgeValue(*a0);
#else
		sipRes = new bool(sipCpp->getEdgeValue(*a0));
#endif		
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End

//===========================================================================================

	void setNodeValue(const tlp::node node, const bool &val);
%Docstring
tlp.BooleanProperty.setNodeValue(node, val)

Sets the value of a particular node.

:param node: an existing node
:type node: :class:`tlp.node`
:param val: the value to set on the node
:type val: boolean
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

	void setEdgeValue(const tlp::edge edge, const bool &val);
%Docstring
tlp.BooleanProperty.setEdgeValue(edge, val)

Sets the value of a particular edge.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param val: the value to set on the edge
:type val: boolean
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

    bool __getitem__(const tlp::node node) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE		
        sipRes = sipCpp->getNodeValue(*a0);
#else
        sipRes = new bool(sipCpp->getNodeValue(*a0));
#endif     	
    } else {
    	sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
    }
%End

//===========================================================================================

	void __setitem__(const tlp::node node, const bool &val) const;
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

	bool __getitem__(const tlp::edge edge) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE		
     	sipRes = sipCpp->getEdgeValue(*a0);
#else
		sipRes = new bool(sipCpp->getEdgeValue(*a0));
#endif     	
    } else {
    	sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
    }
     
%End

//===========================================================================================

	void __setitem__(const tlp::edge edge, const bool &val) const;
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
	oss << "<Boolean property " << sipCpp->getName() << ">";
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

    virtual bool copy(tlp::node dst, tlp::node src, tlp::BooleanProperty* prop, bool ifNotDefault=false);
%Docstring
tlp.BooleanProperty.copy(nodeDst, nodeSrc, prop[, ifNotDefault=False])

.. versionadded:: 3.8

Copies the value hold by a property on a node to another node on this property.

:param nodeDst: the node to copy the value to.
:type nodeDst: :class:`tlp.node`
:param nodeSrc: the node to copy the value from.
:type nodeSrc: :class:`tlp.node`
:param prop: the property holding the value to copy.
:type prop: :class:`tlp.BooleanProperty`
:param ifNotDefault: whether to ignore default-valuated nodes or not. Defaults to :const:`False`.
:type ifNotDefault: boolean
%End


//===========================================================================================

    virtual bool copy(tlp::edge src, tlp::edge dst, tlp::BooleanProperty* prop, bool ifNotDefault=false);
%Docstring
tlp.BooleanProperty.copy(edgeDst, edgeSrc, prop[, ifNotDefault=False])

.. versionadded:: 3.8

Copies the value hold by a property on an edge to another edge on this property.

:param edgeDst: the node to copy the value to.
:type edgeDst: :class:`tlp.edge`
:param edgeSrc: the node to copy the value from.
:type edgeSrc: :class:`tlp.edge`
:param prop: the property holding the value to copy.
:type prop: :class:`tlp.BooleanProperty`
:param ifNotDefault: whether to ignore default-valuated nodes or not. Defaults to :const:`False`.
:type ifNotDefault: boolean
%End

//===========================================================================================

    virtual void copy(tlp::BooleanProperty* prop);
%Docstring
tlp.BooleanProperty.copy(prop)

.. versionadded:: 3.8

Copies the values hold by a property on this property.

:param prop: the property to copy
:type prop: :class:`tlp.BooleanProperty`
%End
//===========================================================================================
	

	void reverse();
%Docstring
tlp.BooleanProperty.reverse()

Reverses all values associated to graph elements,
i.e :const:`True` => :const:`False`, :const:`False` => :const:`True` .
%End

//===========================================================================================

	void reverseEdgeDirection();
%Docstring
tlp.BooleanProperty.reverseEdgeDirection()

Reverses all the direction of edges in the attached graph
which are set to :const:`True` in this boolean property.
%End
	
//===========================================================================================
	
	tlp::Iterator<tlp::node> *getNodesEqualTo(const bool val, tlp::Graph *graph = 0);
%Docstring	
tlp.BooleanProperty.getNodesEqualTo(val[, graph = None])

Returns an iterator through all nodes belonging to the attached graph
whose associated value is equal to the one given in parameter.

:param val: a value
:type val: boolean
:param graph: a sub-graph can be given in parameter, in that case returns an iterator on nodes only belonging to that sub-graph
:type graph: :class:`tlp.Graph`
:rtype: :class:`tlp.IteratorNode` 
%End   
	
//===========================================================================================	
		
	tlp::Iterator<tlp::edge> *getEdgesEqualTo(const bool val, tlp::Graph *graph = 0);
%Docstring	
tlp.BooleanProperty.getEdgesEqualTo(val[, graph = None])

Returns an iterator through all edges belonging to the attached graph
whose associated value is equal to the one given in parameter.

:param val: a value
:type val: boolean
:param graph: a sub-graph can be given in parameter, in that case returns an iterator on edges only belonging to that sub-graph
:type graph: :class:`tlp.Graph`
:rtype: :class:`tlp.IteratorEdge` 
%End 	


//===========================================================================================
	
};

class BooleanVectorProperty : tlp::PropertyInterface /NoDefaultCtors/ {
%TypeHeaderCode
#include <tulip/BooleanProperty.h>
%End

%Docstring
Bases: :class:`tlp.PropertyInterface`
%End

public :

//===========================================================================================

	BooleanVectorProperty (tlp::Graph *graph, std::string name="");
  	
//===========================================================================================	
 
	const std::vector<bool> getNodeDefaultValue();
%Docstring
tlp.BooleanVectorProperty.getNodeDefaultValue()

Returns the default list of values associated to the nodes.

:rtype: list of boolean
%End
	
//===========================================================================================	
	
	const std::vector<bool> getEdgeDefaultValue();
%Docstring
tlp.BooleanVectorProperty.getEdgeDefaultValue()

Returns the default list of values associated to the edges.

:rtype: list of boolean
%End

//===========================================================================================

	const std::vector<bool> getNodeValue(const tlp::node node);
%Docstring
tlp.BooleanVectorProperty.getNodeValue(node)

Returns the list of values associated to a particular node.

:param node: an existing node
:type node: :class:`tlp.node`
:rtype: list of boolean
:throws: an exception if the node does not belong to the graph attached to the property
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		sipRes = new std::vector<bool>(sipCpp->getNodeValue(*a0));
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End	

//===========================================================================================

	const std::vector<bool> getEdgeValue(const tlp::edge edge);
%Docstring
tlp.BooleanVectorProperty.getEdgeValue(edge)

Returns the list of values associated to a particular edge.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:rtype: list of boolean
:throws: an exception if the edge does not belong to the graph attached to the property
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		sipRes = new std::vector<bool>(sipCpp->getEdgeValue(*a0));
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End	

//===========================================================================================

	void setNodeValue(const tlp::node node, const std::vector<bool> &val);
%Docstring
tlp.BooleanVectorProperty.setNodeValue(node, val)

Sets the list of values of a particular node.

:param node: an existing node
:type node: :class:`tlp.node`
:param val: the list of values to set on the node
:type val: list of boolean
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

	void setEdgeValue(const tlp::edge edge, const std::vector<bool> &val);
%Docstring
tlp.BooleanVectorProperty.setEdgeValue(edge, val)

Sets the list of values of a particular edge.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param val: the list of values to set on the edge
:type val: list of boolean
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

	void setAllNodeValue(const std::vector<bool> &val);
%Docstring
tlp.BooleanVectorProperty.setAllNodeValue(val)

Sets the same list of values on the whole set of nodes.

:param val: the list of values to set on the nodes
:type val: list of boolean 
%End

//===========================================================================================

	void setAllEdgeValue(const std::vector<bool> &val);
%Docstring
tlp.BooleanVectorProperty.setAllEdgeValue(val)

Sets the same list of values on the whole set of edges.

:param val: the list of values to set on the edges
:type val: list of boolean 
%End
	
//===========================================================================================
	
	void setNodeEltValue(const tlp::node node, unsigned int index, const bool &val);
%Docstring	
tlp.BooleanVectorProperty.setNodeEltValue(node, index, val)

Sets the value in the list attached to a particular node at the given index.

:param node: an existing node
:type node: :class:`tlp.node`
:param index: the index in the list
:type index: integer
:param val: the value to set in the list
:type val: boolean
:throws: an exception if the node does not belong to the graph attached to the property or if the list attached to the node has a size smaller than the given index.
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		const std::vector<bool> &v = sipCpp->getNodeValue(*a0);
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
 
    const bool getNodeEltValue(const tlp::node node, unsigned int index);
%Docstring	
tlp.BooleanVectorProperty.getNodeEltValue(node, index)

Returns the value in the list attached to a particular node at the given index.

:param node: an existing node
:type node: :class:`tlp.node`
:param index: the index in the list
:type index: integer
:rtype: boolean
:throws: an exception if the node does not belong to the graph attached to the property or if the list attached to the node has a size smaller than the given index.
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		const std::vector<bool> &v = sipCpp->getNodeValue(*a0);
		if (a1 < v.size()) {
#ifdef PROPERTY_BASE_TYPE		
			sipRes = sipCpp->getNodeEltValue(*a0, a1);
#else
			sipRes = new bool(sipCpp->getNodeEltValue(*a0, a1));
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
  
  	void pushBackNodeEltValue(const tlp::node node, const bool& val);
%Docstring	
tlp.BooleanVectorProperty.pushBackNodeEltValue(node, val)

Inserts a value at the end of the list attached to a particular node. The size of the list is incremented by one.

:param node: an existing node
:type node: :class:`tlp.node`
:param val: the value to add in the list
:type val: boolean
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
tlp.BooleanVectorProperty.popBackNodeEltValue(node)

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
tlp.BooleanVectorProperty.resizeNodeValue(node, size)

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
	
	void resizeNodeValue(const tlp::node node, unsigned int size, bool elt);
%Docstring	
tlp.BooleanVectorProperty.resizeNodeValue(node, size, val)

Resizes the list attached to a particular node. The value given in paramater will be assigned to new elements (if any).

:param node: an existing node
:type node: :class:`tlp.node`
:param size: the new size of the list
:type size: integer
:param val: the value to assign on new elements in the list
:type val: boolean
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
	
	void setEdgeEltValue(const tlp::edge edge, unsigned int index, const bool &val);
%Docstring	
tlp.BooleanVectorProperty.setEdgeEltValue(edge, index, val)

Sets the value in the list attached to a particular edge at the given index.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param index: the index in the list
:type index: integer
:param val: the value to set in the list
:type val: boolean
:throws: an exception if the edge does not belong to the graph attached to the property or if the list attached to the edge has a size smaller than the given index.
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		const std::vector<bool> &v = sipCpp->getEdgeValue(*a0);
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
  
    const bool getEdgeEltValue(const tlp::edge edge, unsigned int index);
%Docstring	
tlp.BooleanVectorProperty.getEdgeEltValue(edge, index)

Returns the value in the list attached to a particular edge at the given index.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param index: the index in the list
:type index: integer
:rtype: boolean
:throws: an exception if the edge does not belong to the graph attached to the property or if the list attached to the edge has a size smaller than the given index.
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		const std::vector<bool> &v = sipCpp->getEdgeValue(*a0);
		if (a1 < v.size()) {
#ifdef PROPERTY_BASE_TYPE		
			sipRes = sipCpp->getEdgeEltValue(*a0, a1);
#else
			sipRes = new bool(sipCpp->getEdgeEltValue(*a0, a1));
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

	void pushBackEdgeEltValue(const tlp::edge edge, const bool &val);
%Docstring	
tlp.BooleanVectorProperty.pushBackEdgeEltValue(edge, val)

Inserts a value at the end of the list attached to a particular edge. The size of the list is incremented by one.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param val: the value to add in the list
:type val: boolean
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
tlp.BooleanVectorProperty.popBackEdgeEltValue(edge)

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
tlp.BooleanVectorProperty.resizeEdgeValue(edge, size)

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
  	
	void resizeEdgeValue(const tlp::edge edge, unsigned int size, bool val);
%Docstring	
tlp.BooleanVectorProperty.resizeEdgeValue(edge, size, val)

Resizes the list attached to a particular edge. The value given in paramater will be assigned to new elements (if any).

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param size: the new size of the list
:type size: integer
:param val: the value to assign on new elements in the list
:type val: boolean
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
    
	std::vector<bool> __getitem__(const tlp::node node) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
     	sipRes = new std::vector<bool>(sipCpp->getNodeValue(*a0));
     } else {
     	sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
     }
%End

//===========================================================================================

	void __setitem__(const tlp::node node, const std::vector<bool> &val) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
     	sipCpp->setNodeValue(*a0, *a1);
     } else {
     	sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
     }
%End

//===========================================================================================

	std::vector<bool> __getitem__(const tlp::edge edge) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
     	sipRes = new std::vector<bool>(sipCpp->getEdgeValue(*a0));
     } else {
     	sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
     }
%End

//===========================================================================================

	void __setitem__(const tlp::edge edge, const std::vector<bool> &val) const;
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
	oss << "<Boolean vector property " << sipCpp->getName() << ">";
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

    virtual bool copy(tlp::node src, tlp::node dst, tlp::BooleanVectorProperty* prop, bool ifNotDefault=false);
%Docstring
tlp.BooleanVectorProperty.copy(nodeDst, nodeSrc, prop[, ifNotDefault=False])

.. versionadded:: 3.8

Copies the value hold by a property on a node to another node on this property.

:param nodeDst: the node to copy the value to.
:type nodeDst: :class:`tlp.node`
:param nodeSrc: the node to copy the value from.
:type nodeSrc: :class:`tlp.node`
:param prop: the property holding the value to copy.
:type prop: :class:`tlp.BooleanVectorProperty`
:param ifNotDefault: whether to ignore default-valuated nodes or not. Defaults to :const:`False`.
:type ifNotDefault: boolean
%End

//===========================================================================================

    virtual bool copy(tlp::edge src, tlp::edge dst, tlp::BooleanVectorProperty* prop, bool ifNotDefault=false);
%Docstring
tlp.BooleanVectorProperty.copy(edgeDst, edgeSrc, prop[, ifNotDefault=False])

.. versionadded:: 3.8

Copies the value hold by a property on an edge to another edge on this property.

:param edgeDst: the node to copy the value to.
:type edgeDst: :class:`tlp.edge`
:param edgeSrc: the node to copy the value from.
:type edgeSrc: :class:`tlp.edge`
:param prop: the property holding the value to copy.
:type prop: :class:`tlp.BooleanVectorProperty`
:param ifNotDefault: whether to ignore default-valuated nodes or not. Defaults to :const:`False`.
:type ifNotDefault: boolean
%End

//===========================================================================================

    virtual void copy(tlp::BooleanVectorProperty* prop);
%Docstring
tlp.BooleanVectorProperty.copy(prop)

.. versionadded:: 3.8

Copies the values hold by a property on this property.

:param prop: the property to copy
:type prop: :class:`tlp.BooleanVectorProperty`
%End

//===========================================================================================
	
};

};
