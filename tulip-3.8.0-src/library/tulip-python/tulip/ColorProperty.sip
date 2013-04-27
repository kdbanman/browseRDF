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

class ColorProperty : tlp::PropertyInterface /NoDefaultCtors/ {
%TypeHeaderCode
#include <tulip/ColorProperty.h>
%End

%Docstring
Bases: :class:`tlp.PropertyInterface`
%End

public :
	
//===========================================================================================
	
	ColorProperty(tlp::Graph *graph, std::string name="");

//===========================================================================================
		
	void setAllNodeValue(const tlp::Color &val);
%Docstring
tlp.ColorProperty.setAllNodeValue(val)

Sets the same value on the whole set of nodes.

:param val: the value to set on the nodes.
:type val: :class:`tlp.Color`
%End

//===========================================================================================

	void setAllEdgeValue(const tlp::Color &val);
%Docstring
tlp.ColorProperty.setAllEdgeValue(val)

Sets the same value on the whole set of edges.

:param val: the value to set on the edges.
:type val: :class:`tlp.Color`
%End
	
//===========================================================================================	
	
	tlp::Color getNodeDefaultValue();
%Docstring
tlp.ColorProperty.getNodeDefaultValue()

Returns the default value associated to the nodes.

:rtype: :class:`tlp.Color`
%End	
	
//===========================================================================================	
	
	tlp::Color getEdgeDefaultValue();
%Docstring
tlp.ColorProperty.getEdgeDefaultValue()

Returns the default value associated to the edges.

:rtype: :class:`tlp.Color`
%End

//===========================================================================================

	const tlp::Color getNodeValue(const tlp::node node);
%Docstring
tlp.ColorProperty.getNodeValue(node)

Returns the value associated to a particular node.

:param node: an existing node
:type node: :class:`tlp.node`
:rtype: :class:`tlp.Color`
:throws: an exception if the node does not belong to the graph attached to the property
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE	
		sipRes = sipCpp->getNodeValue(*a0);
#else
		sipRes = new tlp::Color(sipCpp->getNodeValue(*a0));
#endif		
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End

//===========================================================================================

	const tlp::Color getEdgeValue(const tlp::edge edge);
%Docstring
tlp.ColorProperty.getEdgeValue(edge) 

Returns the value associated to a particular edge.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:rtype: :class:`tlp.Color`
:throws: an exception if the edge does not belong to the graph attached to the property
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE	
		sipRes = sipCpp->getEdgeValue(*a0);
#else
		sipRes = new tlp::Color(sipCpp->getEdgeValue(*a0));
#endif		
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End

//===========================================================================================

	void setNodeValue(const tlp::node node, const tlp::Color &val);
%Docstring
tlp.ColorProperty.setNodeValue(node, val)

Sets the value of a particular node.

:param node: an existing node
:type node: :class:`tlp.node`
:param val: the value to set on the node
:type val: :class:`tlp.Color`
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

	void setEdgeValue(const tlp::edge edge, const tlp::Color &val);
%Docstring
tlp.ColorProperty.setEdgeValue(edge, val)

Sets the value of a particular edge.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param val: the value to set on the edge
:type val: :class:`tlp.Color`
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

    tlp::Color __getitem__(const tlp::node node) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE		
        sipRes = sipCpp->getNodeValue(*a0);
#else
        sipRes = new tlp::Color(sipCpp->getNodeValue(*a0));
#endif     	
    } else {
    	sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
    }
%End

//===========================================================================================

	void __setitem__(const tlp::node node, const tlp::Color &val) const;
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

	tlp::Color __getitem__(const tlp::edge edge) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
#ifdef PROPERTY_BASE_TYPE		
     	sipRes = sipCpp->getEdgeValue(*a0);
#else
		sipRes = new tlp::Color(sipCpp->getEdgeValue(*a0));
#endif     	
    } else {
    	sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
    }
     
%End

//===========================================================================================

	void __setitem__(const tlp::edge edge, const tlp::Color &val) const;
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
	oss << "<Color property " << sipCpp->getName() << ">";
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

    virtual bool copy(tlp::node dst, tlp::node src, tlp::ColorProperty* prop, bool ifNotDefault=false);
%Docstring
tlp.ColorProperty.copy(nodeDst, nodeSrc, prop[, ifNotDefault=False])

.. versionadded:: 3.8

Copies the value hold by a property on a node to another node on this property.

:param nodeDst: the node to copy the value to.
:type nodeDst: :class:`tlp.node`
:param nodeSrc: the node to copy the value from.
:type nodeSrc: :class:`tlp.node`
:param prop: the property holding the value to copy.
:type prop: :class:`tlp.ColorProperty`
:param ifNotDefault: whether to ignore default-valuated nodes or not. Defaults to :const:`False`.
:type ifNotDefault: boolean
%End


//===========================================================================================

    virtual bool copy(tlp::edge src, tlp::edge dst, tlp::ColorProperty* prop, bool ifNotDefault=false);
%Docstring
tlp.ColorProperty.copy(edgeDst, edgeSrc, prop[, ifNotDefault=False])

.. versionadded:: 3.8

Copies the value hold by a property on an edge to another edge on this property.

:param edgeDst: the node to copy the value to.
:type edgeDst: :class:`tlp.edge`
:param edgeSrc: the node to copy the value from.
:type edgeSrc: :class:`tlp.edge`
:param prop: the property holding the value to copy.
:type prop: :class:`tlp.ColorProperty`
:param ifNotDefault: whether to ignore default-valuated nodes or not. Defaults to :const:`False`.
:type ifNotDefault: boolean
%End

//===========================================================================================

    virtual void copy(tlp::ColorProperty* prop);
%Docstring
tlp.ColorProperty.copy(prop)

.. versionadded:: 3.8

Copies the values hold by a property on this property.

:param prop: the property to copy
:type prop: :class:`tlp.ColorProperty`
%End
//===========================================================================================
	


//===========================================================================================
	
};

class ColorVectorProperty : tlp::PropertyInterface /NoDefaultCtors/ {
%TypeHeaderCode
#include <tulip/ColorProperty.h>
%End

%Docstring
Bases: :class:`tlp.PropertyInterface`
%End

public :

//===========================================================================================

	ColorVectorProperty (tlp::Graph *graph, std::string name="");
  	
//===========================================================================================	
 
	const std::vector<tlp::Color> getNodeDefaultValue();
%Docstring
tlp.ColorVectorProperty.getNodeDefaultValue()

Returns the default list of values associated to the nodes.

:rtype: list of :class:`tlp.Color`
%End
	
//===========================================================================================	
	
	const std::vector<tlp::Color> getEdgeDefaultValue();
%Docstring
tlp.ColorVectorProperty.getEdgeDefaultValue()

Returns the default list of values associated to the edges.

:rtype: list of :class:`tlp.Color`
%End

//===========================================================================================

	const std::vector<tlp::Color> getNodeValue(const tlp::node node);
%Docstring
tlp.ColorVectorProperty.getNodeValue(node)

Returns the list of values associated to a particular node.

:param node: an existing node
:type node: :class:`tlp.node`
:rtype: list of :class:`tlp.Color`
:throws: an exception if the node does not belong to the graph attached to the property
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		sipRes = new std::vector<tlp::Color>(sipCpp->getNodeValue(*a0));
	} else {
		sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
	}
%End	

//===========================================================================================

	const std::vector<tlp::Color> getEdgeValue(const tlp::edge edge);
%Docstring
tlp.ColorVectorProperty.getEdgeValue(edge)

Returns the list of values associated to a particular edge.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:rtype: list of :class:`tlp.Color`
:throws: an exception if the edge does not belong to the graph attached to the property
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		sipRes = new std::vector<tlp::Color>(sipCpp->getEdgeValue(*a0));
	} else {
		sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
	}
%End	

//===========================================================================================

	void setNodeValue(const tlp::node node, const std::vector<tlp::Color> &val);
%Docstring
tlp.ColorVectorProperty.setNodeValue(node, val)

Sets the list of values of a particular node.

:param node: an existing node
:type node: :class:`tlp.node`
:param val: the list of values to set on the node
:type val: list of :class:`tlp.Color`
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

	void setEdgeValue(const tlp::edge edge, const std::vector<tlp::Color> &val);
%Docstring
tlp.ColorVectorProperty.setEdgeValue(edge, val)

Sets the list of values of a particular edge.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param val: the list of values to set on the edge
:type val: list of :class:`tlp.Color`
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

	void setAllNodeValue(const std::vector<tlp::Color> &val);
%Docstring
tlp.ColorVectorProperty.setAllNodeValue(val)

Sets the same list of values on the whole set of nodes.

:param val: the list of values to set on the nodes
:type val: list of :class:`tlp.Color` 
%End

//===========================================================================================

	void setAllEdgeValue(const std::vector<tlp::Color> &val);
%Docstring
tlp.ColorVectorProperty.setAllEdgeValue(val)

Sets the same list of values on the whole set of edges.

:param val: the list of values to set on the edges
:type val: list of :class:`tlp.Color` 
%End
	
//===========================================================================================
	
	void setNodeEltValue(const tlp::node node, unsigned int index, const tlp::Color &val);
%Docstring	
tlp.ColorVectorProperty.setNodeEltValue(node, index, val)

Sets the value in the list attached to a particular node at the given index.

:param node: an existing node
:type node: :class:`tlp.node`
:param index: the index in the list
:type index: integer
:param val: the value to set in the list
:type val: :class:`tlp.Color`
:throws: an exception if the node does not belong to the graph attached to the property or if the list attached to the node has a size smaller than the given index.
%End	
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		const std::vector<tlp::Color> &v = sipCpp->getNodeValue(*a0);
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
 
    const tlp::Color getNodeEltValue(const tlp::node node, unsigned int index);
%Docstring	
tlp.ColorVectorProperty.getNodeEltValue(node, index)

Returns the value in the list attached to a particular node at the given index.

:param node: an existing node
:type node: :class:`tlp.node`
:param index: the index in the list
:type index: integer
:rtype: :class:`tlp.Color`
:throws: an exception if the node does not belong to the graph attached to the property or if the list attached to the node has a size smaller than the given index.
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		const std::vector<tlp::Color> &v = sipCpp->getNodeValue(*a0);
		if (a1 < v.size()) {
#ifdef PROPERTY_BASE_TYPE		
			sipRes = sipCpp->getNodeEltValue(*a0, a1);
#else
			sipRes = new tlp::Color(sipCpp->getNodeEltValue(*a0, a1));
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
  
  	void pushBackNodeEltValue(const tlp::node node, const tlp::Color& val);
%Docstring	
tlp.ColorVectorProperty.pushBackNodeEltValue(node, val)

Inserts a value at the end of the list attached to a particular node. The size of the list is incremented by one.

:param node: an existing node
:type node: :class:`tlp.node`
:param val: the value to add in the list
:type val: :class:`tlp.Color`
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
tlp.ColorVectorProperty.popBackNodeEltValue(node)

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
tlp.ColorVectorProperty.resizeNodeValue(node, size)

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
	
	void resizeNodeValue(const tlp::node node, unsigned int size, tlp::Color elt);
%Docstring	
tlp.ColorVectorProperty.resizeNodeValue(node, size, val)

Resizes the list attached to a particular node. The value given in paramater will be assigned to new elements (if any).

:param node: an existing node
:type node: :class:`tlp.node`
:param size: the new size of the list
:type size: integer
:param val: the value to assign on new elements in the list
:type val: :class:`tlp.Color`
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
	
	void setEdgeEltValue(const tlp::edge edge, unsigned int index, const tlp::Color &val);
%Docstring	
tlp.ColorVectorProperty.setEdgeEltValue(edge, index, val)

Sets the value in the list attached to a particular edge at the given index.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param index: the index in the list
:type index: integer
:param val: the value to set in the list
:type val: :class:`tlp.Color`
:throws: an exception if the edge does not belong to the graph attached to the property or if the list attached to the edge has a size smaller than the given index.
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		const std::vector<tlp::Color> &v = sipCpp->getEdgeValue(*a0);
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
  
    const tlp::Color getEdgeEltValue(const tlp::edge edge, unsigned int index);
%Docstring	
tlp.ColorVectorProperty.getEdgeEltValue(edge, index)

Returns the value in the list attached to a particular edge at the given index.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param index: the index in the list
:type index: integer
:rtype: :class:`tlp.Color`
:throws: an exception if the edge does not belong to the graph attached to the property or if the list attached to the edge has a size smaller than the given index.
%End
	
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
		const std::vector<tlp::Color> &v = sipCpp->getEdgeValue(*a0);
		if (a1 < v.size()) {
#ifdef PROPERTY_BASE_TYPE		
			sipRes = sipCpp->getEdgeEltValue(*a0, a1);
#else
			sipRes = new tlp::Color(sipCpp->getEdgeEltValue(*a0, a1));
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

	void pushBackEdgeEltValue(const tlp::edge edge, const tlp::Color &val);
%Docstring	
tlp.ColorVectorProperty.pushBackEdgeEltValue(edge, val)

Inserts a value at the end of the list attached to a particular edge. The size of the list is incremented by one.

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param val: the value to add in the list
:type val: :class:`tlp.Color`
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
tlp.ColorVectorProperty.popBackEdgeEltValue(edge)

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
tlp.ColorVectorProperty.resizeEdgeValue(edge, size)

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
  	
	void resizeEdgeValue(const tlp::edge edge, unsigned int size, tlp::Color val);
%Docstring	
tlp.ColorVectorProperty.resizeEdgeValue(edge, size, val)

Resizes the list attached to a particular edge. The value given in paramater will be assigned to new elements (if any).

:param edge: an existing edge
:type edge: :class:`tlp.edge`
:param size: the new size of the list
:type size: integer
:param val: the value to assign on new elements in the list
:type val: :class:`tlp.Color`
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
    
	std::vector<tlp::Color> __getitem__(const tlp::node node) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
     	sipRes = new std::vector<tlp::Color>(sipCpp->getNodeValue(*a0));
     } else {
     	sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
     }
%End

//===========================================================================================

	void __setitem__(const tlp::node node, const std::vector<tlp::Color> &val) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
     	sipCpp->setNodeValue(*a0, *a1);
     } else {
     	sipIsErr = throwInvalidNodeException(sipCpp->getGraph(), *a0);
     }
%End

//===========================================================================================

	std::vector<tlp::Color> __getitem__(const tlp::edge edge) const;
%MethodCode
	if (sipCpp->getGraph()->isElement(*a0)) {
     	sipRes = new std::vector<tlp::Color>(sipCpp->getEdgeValue(*a0));
     } else {
     	sipIsErr = throwInvalidEdgeException(sipCpp->getGraph(), *a0);
     }
%End

//===========================================================================================

	void __setitem__(const tlp::edge edge, const std::vector<tlp::Color> &val) const;
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
	oss << "<Color vector property " << sipCpp->getName() << ">";
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

    virtual bool copy(tlp::node src, tlp::node dst, tlp::ColorVectorProperty* prop, bool ifNotDefault=false);
%Docstring
tlp.ColorVectorProperty.copy(nodeDst, nodeSrc, prop[, ifNotDefault=False])

.. versionadded:: 3.8

Copies the value hold by a property on a node to another node on this property.

:param nodeDst: the node to copy the value to.
:type nodeDst: :class:`tlp.node`
:param nodeSrc: the node to copy the value from.
:type nodeSrc: :class:`tlp.node`
:param prop: the property holding the value to copy.
:type prop: :class:`tlp.ColorVectorProperty`
:param ifNotDefault: whether to ignore default-valuated nodes or not. Defaults to :const:`False`.
:type ifNotDefault: boolean
%End

//===========================================================================================

    virtual bool copy(tlp::edge src, tlp::edge dst, tlp::ColorVectorProperty* prop, bool ifNotDefault=false);
%Docstring
tlp.ColorVectorProperty.copy(edgeDst, edgeSrc, prop[, ifNotDefault=False])

.. versionadded:: 3.8

Copies the value hold by a property on an edge to another edge on this property.

:param edgeDst: the node to copy the value to.
:type edgeDst: :class:`tlp.edge`
:param edgeSrc: the node to copy the value from.
:type edgeSrc: :class:`tlp.edge`
:param prop: the property holding the value to copy.
:type prop: :class:`tlp.ColorVectorProperty`
:param ifNotDefault: whether to ignore default-valuated nodes or not. Defaults to :const:`False`.
:type ifNotDefault: boolean
%End

//===========================================================================================

    virtual void copy(tlp::ColorVectorProperty* prop);
%Docstring
tlp.ColorVectorProperty.copy(prop)

.. versionadded:: 3.8

Copies the values hold by a property on this property.

:param prop: the property to copy
:type prop: :class:`tlp.ColorVectorProperty`
%End

//===========================================================================================
	
};

};
