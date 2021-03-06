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

%ModuleHeaderCode
#include <tulip/ColorScale.h>
%End

namespace tlp {


struct DataSet {

%Docstring
This class is used to store a set of parameters to transmit to a Tulip algorithm.
Below is an exhaustive list of data types that can be stored in a Tulip data set:

	* boolean
	* integer 
	* float
	* string
	* :class:`tlp.Coord`
	* :class:`tlp.Color`
	* :class:`tlp.Size`
	* :class:`tlp.DataSet`
	* :class:`tlp.ColorScale`
	* :class:`tlp.StringCollection`
	* :class:`tlp.BooleanProperty`
	* :class:`tlp.ColorProperty`
	* :class:`tlp.DoubleProperty`
	* :class:`tlp.IntegerProperty`
	* :class:`tlp.LayoutProperty`
	* :class:`tlp.SizeProperty`
	* :class:`tlp.StringProperty`
	* :class:`tlp.PropertyInterface`

If you try to store an unsupported data type, an exception will be thrown.	
Each value stored in a data set is associated to a string key. Reading / Writing a value in 
a data set is done through the [] operator as illustrated below::

	# data set creation
	dataSet = tlp.DataSet()
	
	# writing integer values
	dataSet["height"] = 100
	dataSet["width"] = 300
	
	# reading integer values
	area = dataSet["height"] * dataSet["width"] 

When reading a data set value, a reference is returned not a copy.

%End

	DataSet();
	
	DataSet(const tlp::DataSet &set);

	bool exist(const std::string &str) const;
%Docstring
tlp.DataSet.exist(key)

Checks if the data set contains a value associated to a particular key.

:param key: the key to check
:type key: string
:rtype: boolean
%End

	void remove(const std::string &str);
%Docstring
tlp.DataSet.remove(key)

Remove the value associated to a particular key from the data set if it exists.

:param key: the key of the value to remove.
:type key: string
%End
	
	unsigned int size() const;
%Docstring
tlp.DataSet.size()

Returns the number of values stored in the data set.

:rtype: integer
%End
	
	std::vector<std::string> getKeys() const;
%Docstring
tlp.DataSet.getKeys()

Returns the list of keys associated to the values stored in the data set.

:rtype: list of string
%End	
	
%MethodCode
	std::vector<std::string> ret;
	tlp::Iterator< std::pair<std::string, tlp::DataType*> > *it = sipCpp->getValues();
	while (it->hasNext()) {
		ret.push_back(it->next().first);
	}
	delete it;
	sipRes = new std::vector<std::string>(ret);
%End	
	
	void __setitem__(const std::string &attributeName, SIP_PYOBJECT po);
%MethodCode
		tlp::DataType* dataType = sipCpp->getData(*a0);
		int state=0, iserr=0;
		if (PyBool_Check(a1)) {
			long l = PyLong_AsLong(a1);
			sipCpp->set<bool>(*a0, (l > 0));
#if PY_MAJOR_VERSION < 3
		} else if (PyInt_CheckExact(a1) || PyLong_Check(a1)) {
			if (dataType && dataType->getTypeName() == std::string(typeid(int).name())) {
				sipCpp->set(*a0, static_cast<int>(PyInt_AsLong(a1)));
			} else if (dataType && dataType->getTypeName() == std::string(typeid(unsigned int).name())) {
				sipCpp->set(*a0, static_cast<unsigned int>(PyInt_AsLong(a1)));
			} else if (dataType && dataType->getTypeName() == std::string(typeid(float).name())) {
				sipCpp->set(*a0, static_cast<float>(PyInt_AsLong(a1)));
			} else if (dataType && dataType->getTypeName() == std::string(typeid(double).name())) {
				sipCpp->set(*a0, static_cast<double>(PyInt_AsLong(a1)));		
			} else {
				sipCpp->set(*a0, PyInt_AsLong(a1));
            }
#else
        } else if (PyLong_Check(a1)) {
            if (dataType && dataType->getTypeName() == std::string(typeid(int).name())) {
                sipCpp->set(*a0, static_cast<int>(PyLong_AsLong(a1)));
            } else if (dataType && dataType->getTypeName() == std::string(typeid(unsigned int).name())) {
                sipCpp->set(*a0, static_cast<unsigned int>(PyLong_AsLong(a1)));
            } else if (dataType && dataType->getTypeName() == std::string(typeid(float).name())) {
                sipCpp->set(*a0, static_cast<float>(PyLong_AsLong(a1)));
            } else if (dataType && dataType->getTypeName() == std::string(typeid(double).name())) {
                sipCpp->set(*a0, static_cast<double>(PyLong_AsLong(a1)));
            } else {
                sipCpp->set(*a0, PyLong_AsLong(a1));
            }
#endif
		} else if (PyFloat_Check(a1)) {
			if (dataType && dataType->getTypeName() == std::string(typeid(float).name())) {
				sipCpp->set(*a0, static_cast<float>(PyFloat_AsDouble(a1)));
			} else {
				sipCpp->set(*a0, PyFloat_AsDouble(a1));
			}
		} else if (sipCanConvertToType(a1, sipType_std_string, SIP_NOT_NONE)) {		
			std::string *s = reinterpret_cast<std::string *>(sipConvertToType(a1, sipType_std_string, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, *s);	
		} else if (sipCanConvertToType(a1, sipType_tlp_Coord, SIP_NOT_NONE)) {		
			tlp::Coord *c = reinterpret_cast<tlp::Coord *>(sipConvertToType(a1, sipType_tlp_Coord, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, *c);
		} else if (sipCanConvertToType(a1, sipType_tlp_Color, SIP_NOT_NONE)) {		
			tlp::Color *c = reinterpret_cast<tlp::Color *>(sipConvertToType(a1, sipType_tlp_Color, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, *c);
		} else if (sipCanConvertToType(a1, sipType_tlp_Size, SIP_NOT_NONE)) {		
			tlp::Size *s = reinterpret_cast<tlp::Size *>(sipConvertToType(a1, sipType_tlp_Size, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, *s);
		} else if (sipCanConvertToType(a1, sipType_tlp_DataSet, SIP_NOT_NONE)) {		
			tlp::DataSet *ds = reinterpret_cast<tlp::DataSet *>(sipConvertToType(a1, sipType_tlp_DataSet, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, *ds);	
		} else if (sipCanConvertToType(a1, sipType_tlp_ColorScale, SIP_NOT_NONE)) {		
			tlp::ColorScale *cs = reinterpret_cast<tlp::ColorScale *>(sipConvertToType(a1, sipType_tlp_ColorScale, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, *cs);
		} else if (sipCanConvertToType(a1, sipType_tlp_StringCollection, SIP_NOT_NONE)) {		
			tlp::StringCollection *sc = reinterpret_cast<tlp::StringCollection *>(sipConvertToType(a1, sipType_tlp_StringCollection, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, *sc);		
		} else if (sipCanConvertToType(a1, sipType_tlp_BooleanProperty, SIP_NOT_NONE)) {		
			tlp::BooleanProperty *p = reinterpret_cast<tlp::BooleanProperty *>(sipConvertToType(a1, sipType_tlp_BooleanProperty, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, p);
		} else if (sipCanConvertToType(a1, sipType_tlp_ColorProperty, SIP_NOT_NONE)) {		
			tlp::ColorProperty *p = reinterpret_cast<tlp::ColorProperty *>(sipConvertToType(a1, sipType_tlp_ColorProperty, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, p);
		} else if (sipCanConvertToType(a1, sipType_tlp_DoubleProperty, SIP_NOT_NONE)) {		
			tlp::DoubleProperty *p = reinterpret_cast<tlp::DoubleProperty *>(sipConvertToType(a1, sipType_tlp_DoubleProperty, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, p);
		} else if (sipCanConvertToType(a1, sipType_tlp_IntegerProperty, SIP_NOT_NONE)) {		
			tlp::IntegerProperty *p = reinterpret_cast<tlp::IntegerProperty *>(sipConvertToType(a1, sipType_tlp_IntegerProperty, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, p);
		} else if (sipCanConvertToType(a1, sipType_tlp_LayoutProperty, SIP_NOT_NONE)) {		
			tlp::LayoutProperty *p = reinterpret_cast<tlp::LayoutProperty *>(sipConvertToType(a1, sipType_tlp_LayoutProperty, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, p);
		} else if (sipCanConvertToType(a1, sipType_tlp_SizeProperty, SIP_NOT_NONE)) {		
			tlp::SizeProperty *p = reinterpret_cast<tlp::SizeProperty *>(sipConvertToType(a1, sipType_tlp_SizeProperty, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, p);
		} else if (sipCanConvertToType(a1, sipType_tlp_StringProperty, SIP_NOT_NONE)) {		
			tlp::StringProperty *p = reinterpret_cast<tlp::StringProperty *>(sipConvertToType(a1, sipType_tlp_StringProperty, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, p);							
		} else if (sipCanConvertToType(a1, sipType_tlp_PropertyInterface, SIP_NOT_NONE)) {		
			tlp::PropertyInterface *p = reinterpret_cast<tlp::PropertyInterface *>(sipConvertToType(a1, sipType_tlp_PropertyInterface, NULL, SIP_NOT_NONE, &state, &iserr));
			sipCpp->set(*a0, p);
		} else if (sipCanConvertToType(a1, sipType_std_vector_0100tlp_node, SIP_NOT_NONE)) {    
    		std::vector<tlp::node> *p = reinterpret_cast<std::vector<tlp::node> *>(sipConvertToType(a1, sipType_std_vector_0100tlp_node, NULL, SIP_NOT_NONE, &state, &iserr));
    		sipCpp->set(*a0, *p);
    	} else if (sipCanConvertToType(a1, sipType_std_vector_0100tlp_edge, SIP_NOT_NONE)) {    
    		std::vector<tlp::edge> *p = reinterpret_cast<std::vector<tlp::edge> *>(sipConvertToType(a1, sipType_std_vector_0100tlp_edge, NULL, SIP_NOT_NONE, &state, &iserr));
    		sipCpp->set(*a0, *p);
    	} else if (sipCanConvertToType(a1, sipType_std_vector_0100tlp_Coord, SIP_NOT_NONE)) {    
    		std::vector<tlp::Coord> *p = reinterpret_cast<std::vector<tlp::Coord> *>(sipConvertToType(a1, sipType_std_vector_0100tlp_Coord, NULL, SIP_NOT_NONE, &state, &iserr));
    		sipCpp->set(*a0, *p);
    	} else if (sipCanConvertToType(a1, sipType_std_vector_0100tlp_Color, SIP_NOT_NONE)) {    
    		std::vector<tlp::Color> *p = reinterpret_cast<std::vector<tlp::Color> *>(sipConvertToType(a1, sipType_std_vector_0100tlp_Color, NULL, SIP_NOT_NONE, &state, &iserr));
    		sipCpp->set(*a0, *p);	
    	} else if (sipCanConvertToType(a1, sipType_std_vector_0100tlp_Size, SIP_NOT_NONE)) {    
    		std::vector<tlp::Size> *p = reinterpret_cast<std::vector<tlp::Size> *>(sipConvertToType(a1, sipType_std_vector_0100tlp_Size, NULL, SIP_NOT_NONE, &state, &iserr));
    		sipCpp->set(*a0, *p);				
		} else {
			sipIsErr = 1;
			std::string msg = "Object of type ";
			msg += std::string(a1->ob_type->tp_name);
			msg += " can not be store in a Tulip dataset.";
			PyErr_SetString(PyExc_Exception, msg.c_str());
		}
		delete dataType;
%End
	
	
	SIP_PYOBJECT __getitem__(const std::string &attributeName);
%MethodCode
	bool ok = false;
	tlp::Iterator< std::pair<std::string, tlp::DataType*> > *it = sipCpp->getValues();
	tlp::DataType* dataType = NULL;
	while (it->hasNext()) {
		std::pair<std::string, tlp::DataType*> p = it->next();
		if (p.first == *a0) {
			dataType = p.second;
		}
	}
	delete it;
	
	if (dataType) {
		 
		if (dataType->getTypeName() == std::string(typeid(bool).name())) {
			ok = true;
			sipRes = PyBool_FromLong(*(reinterpret_cast<bool*>(dataType->value)));
			
		} else if (dataType->getTypeName() == std::string(typeid(int).name())) {
			ok = true;
			sipRes = PyLong_FromLong(*(reinterpret_cast<int*>(dataType->value)));
			
		} else if (dataType->getTypeName() == std::string(typeid(long).name())) {
			ok = true;
			sipRes = PyLong_FromLong(*(reinterpret_cast<long*>(dataType->value)));
			
		} else if (dataType->getTypeName() == std::string(typeid(short).name())) {
			ok = true;
			sipRes = PyLong_FromLong(*(reinterpret_cast<short*>(dataType->value)));
			
		} else if (dataType->getTypeName() == std::string(typeid(unsigned int).name())) {
			ok = true;
			sipRes = PyLong_FromUnsignedLong(*(reinterpret_cast<unsigned int*>(dataType->value)));
			
		} else if (dataType->getTypeName() == std::string(typeid(unsigned long).name())) {
			ok = true;
			sipRes = PyLong_FromUnsignedLong(*(reinterpret_cast<unsigned long*>(dataType->value)));
							
		} else if (dataType->getTypeName() == std::string(typeid(unsigned short).name())) {
			ok = true;
			sipRes = PyLong_FromUnsignedLong(*(reinterpret_cast<unsigned short*>(dataType->value)));
			
		} else if (dataType->getTypeName() == std::string(typeid(double).name())) {
			ok = true;
			sipRes = PyFloat_FromDouble(*(reinterpret_cast<double*>(dataType->value)));
			
		} else if (dataType->getTypeName() == std::string(typeid(float).name())) {
			ok = true;
			sipRes = PyFloat_FromDouble(*(reinterpret_cast<float*>(dataType->value)));
			
		} else if (dataType->getTypeName() == std::string(typeid(std::string).name())) {
			ok = true;
#if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromString((*(reinterpret_cast<std::string*>(dataType->value))).c_str());
#else
            sipRes = PyString_FromString((*(reinterpret_cast<std::string*>(dataType->value))).c_str());
#endif
		} else if (dataType->getTypeName() == std::string(typeid(tlp::DataSet).name())) {
			ok = true;
			sipRes = sipConvertFromType(reinterpret_cast<tlp::DataSet *>(dataType->value), sipType_tlp_DataSet, NULL);
		} else if (dataType->getTypeName() == std::string(typeid(tlp::Coord).name())) {
			ok = true;
			sipRes = sipConvertFromType(reinterpret_cast<tlp::Coord *>(dataType->value), sipType_tlp_Coord, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(tlp::Color).name())) {
			ok = true;
			sipRes = sipConvertFromType(reinterpret_cast<tlp::Color *>(dataType->value), sipType_tlp_Color, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(tlp::Size).name())) {
			ok = true;
			sipRes = sipConvertFromType(reinterpret_cast<tlp::Size *>(dataType->value), sipType_tlp_Size, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(tlp::ColorScale).name())) {
			ok = true;
			sipRes = sipConvertFromType(reinterpret_cast<tlp::ColorScale *>(dataType->value), sipType_tlp_ColorScale, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(tlp::StringCollection).name())) {
			ok = true;
			sipRes = sipConvertFromType(reinterpret_cast<tlp::StringCollection *>(dataType->value), sipType_tlp_StringCollection, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(tlp::PropertyInterface*).name())) {
			ok = true;
			sipRes = sipConvertFromType(*(reinterpret_cast<tlp::PropertyInterface **>(dataType->value)), sipType_tlp_PropertyInterface, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(tlp::BooleanProperty*).name())) {
			ok = true;
			sipRes = sipConvertFromType(*(reinterpret_cast<tlp::BooleanProperty **>(dataType->value)), sipType_tlp_BooleanProperty, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(tlp::ColorProperty*).name())) {
			ok = true;
			sipRes = sipConvertFromType(*(reinterpret_cast<tlp::ColorProperty **>(dataType->value)), sipType_tlp_ColorProperty, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(tlp::DoubleProperty*).name())) {
			ok = true;
			sipRes = sipConvertFromType(*(reinterpret_cast<tlp::DoubleProperty **>(dataType->value)), sipType_tlp_DoubleProperty, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(tlp::IntegerProperty*).name())) {
			ok = true;
			sipRes = sipConvertFromType(*(reinterpret_cast<tlp::IntegerProperty **>(dataType->value)), sipType_tlp_IntegerProperty, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(tlp::LayoutProperty*).name())) {
			ok = true;
			sipRes = sipConvertFromType(*(reinterpret_cast<tlp::LayoutProperty **>(dataType->value)), sipType_tlp_LayoutProperty, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(tlp::SizeProperty*).name())) {
			ok = true;
			sipRes = sipConvertFromType(*(reinterpret_cast<tlp::SizeProperty **>(dataType->value)), sipType_tlp_SizeProperty, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(tlp::StringProperty*).name())) {
			ok = true;
			sipRes = sipConvertFromType(*(reinterpret_cast<tlp::StringProperty **>(dataType->value)), sipType_tlp_StringProperty, NULL);
			
		} else if (dataType->getTypeName() == std::string(typeid(std::vector<tlp::node>).name())) {
    		ok = true;
    		sipRes = sipConvertFromType(reinterpret_cast<std::vector<tlp::node> *>(dataType->value), sipType_std_vector_0100tlp_node, NULL);
    		
  		} else if (dataType->getTypeName() == std::string(typeid(std::set<tlp::node>).name())) {
    		ok = true;
    		sipRes = sipConvertFromType(reinterpret_cast<std::set<tlp::node> *>(dataType->value), sipType_std_set_0100tlp_node, NULL);
    		
  		} else if (dataType->getTypeName() == std::string(typeid(std::vector<tlp::edge>).name())) {
    		ok = true;
    		sipRes = sipConvertFromType(reinterpret_cast<std::vector<tlp::edge> *>(dataType->value), sipType_std_vector_0100tlp_edge, NULL);
    		
  		} else if (dataType->getTypeName() == std::string(typeid(std::set<tlp::edge>).name())) {
    		ok = true;
    		sipRes = sipConvertFromType(reinterpret_cast<std::set<tlp::edge> *>(dataType->value), sipType_std_set_0100tlp_edge, NULL);
    		
  		} else if (dataType->getTypeName() == std::string(typeid(std::vector<tlp::Coord>).name())) {
    		ok = true;
    		sipRes = sipConvertFromType(reinterpret_cast<std::vector<tlp::Coord> *>(dataType->value), sipType_std_vector_0100tlp_Coord, NULL);
    		
  		} else if (dataType->getTypeName() == std::string(typeid(std::vector<tlp::Color>).name())) {
    		ok = true;
    		sipRes = sipConvertFromType(reinterpret_cast<std::vector<tlp::Color> *>(dataType->value), sipType_std_vector_0100tlp_Color, NULL);
    		
  		} else if (dataType->getTypeName() == std::string(typeid(std::vector<tlp::Size>).name())) {
    		ok = true;
    		sipRes = sipConvertFromType(reinterpret_cast<std::vector<tlp::Size> *>(dataType->value), sipType_std_vector_0100tlp_Size, NULL);
    		
  		}
	}
	
	if (!ok) {
		std::ostringstream oss;
		oss << "Dataset entry \"" << *a0 << "\" does not exist.";
		sipRes = NULL;
		sipIsErr = 1;
		PyErr_SetString(PyExc_AttributeError, oss.str().c_str());
	}
%End	

};
};

