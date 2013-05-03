/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:11:08 2013
 */

#include "sipAPItulip.h"


#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 14 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpDataSet.cpp"
#line 37 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"
#include <vector>
#line 17 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpDataSet.cpp"


PyDoc_STRVAR(doc_tlp_DataSet_exist, "tlp.DataSet.exist(key)\n"
    "\n"
    "Checks if the data set contains a value associated to a particular key.\n"
    "\n"
    ":param key: the key to check\n"
    ":type key: string\n"
    ":rtype: boolean");

extern "C" {static PyObject *meth_tlp_DataSet_exist(PyObject *, PyObject *);}
static PyObject *meth_tlp_DataSet_exist(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        const tlp::DataSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_tlp_DataSet, &sipCpp, sipType_std_string,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->exist(*a0);
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataSet, sipName_exist, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_DataSet_remove, "tlp.DataSet.remove(key)\n"
    "\n"
    "Remove the value associated to a particular key from the data set if it exists.\n"
    "\n"
    ":param key: the key of the value to remove.\n"
    ":type key: string");

extern "C" {static PyObject *meth_tlp_DataSet_remove(PyObject *, PyObject *);}
static PyObject *meth_tlp_DataSet_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        tlp::DataSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_tlp_DataSet, &sipCpp, sipType_std_string,&a0, &a0State))
        {
            sipCpp->remove(*a0);
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataSet, sipName_remove, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_DataSet_size, "tlp.DataSet.size()\n"
    "\n"
    "Returns the number of values stored in the data set.\n"
    "\n"
    ":rtype: integer");

extern "C" {static PyObject *meth_tlp_DataSet_size(PyObject *, PyObject *);}
static PyObject *meth_tlp_DataSet_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::DataSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_DataSet, &sipCpp))
        {
            uint sipRes;

            sipRes = sipCpp->size();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataSet, sipName_size, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_DataSet_getKeys, "tlp.DataSet.getKeys()\n"
    "\n"
    "Returns the list of keys associated to the values stored in the data set.\n"
    "\n"
    ":rtype: list of string");

extern "C" {static PyObject *meth_tlp_DataSet_getKeys(PyObject *, PyObject *);}
static PyObject *meth_tlp_DataSet_getKeys(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::DataSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_DataSet, &sipCpp))
        {
            std::vector<std::string> *sipRes = 0;

#line 120 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Reflect.sip"
	std::vector<std::string> ret;
	tlp::Iterator< std::pair<std::string, tlp::DataType*> > *it = sipCpp->getValues();
	while (it->hasNext()) {
		ret.push_back(it->next().first);
	}
	delete it;
	sipRes = new std::vector<std::string>(ret);
#line 147 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpDataSet.cpp"

            return sipConvertFromNewType(sipRes,sipType_std_vector_0100std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataSet, sipName_getKeys, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_tlp_DataSet___getitem__(PyObject *,PyObject *);}
static PyObject *slot_tlp_DataSet___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    tlp::DataSet *sipCpp = reinterpret_cast<tlp::DataSet *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_DataSet));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_std_string,&a0, &a0State))
        {
            PyObject * sipRes = 0;
            int sipIsErr = 0;

#line 242 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Reflect.sip"
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
#line 329 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpDataSet.cpp"
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataSet, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static int slot_tlp_DataSet___setitem__(PyObject *,PyObject *);}
static int slot_tlp_DataSet___setitem__(PyObject *sipSelf,PyObject *sipArgs)
{
    tlp::DataSet *sipCpp = reinterpret_cast<tlp::DataSet *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_DataSet));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        PyObject * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1P0", sipType_std_string,&a0, &a0State, &a1))
        {
            int sipIsErr = 0;

#line 131 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Reflect.sip"
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
#line 472 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpDataSet.cpp"
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);

            if (sipIsErr)
                return -1;

            return 0;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_DataSet, sipName___setitem__, NULL);

    return -1;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_DataSet(void *, const sipTypeDef *);}
static void *cast_tlp_DataSet(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_DataSet)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_DataSet(void *, int);}
static void release_tlp_DataSet(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::DataSet *>(sipCppV);
}


extern "C" {static void assign_tlp_DataSet(void *, SIP_SSIZE_T, const void *);}
static void assign_tlp_DataSet(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<tlp::DataSet *>(sipDst)[sipDstIdx] = *reinterpret_cast<const tlp::DataSet *>(sipSrc);
}


extern "C" {static void *array_tlp_DataSet(SIP_SSIZE_T);}
static void *array_tlp_DataSet(SIP_SSIZE_T sipNrElem)
{
    return new tlp::DataSet[sipNrElem];
}


extern "C" {static void *copy_tlp_DataSet(const void *, SIP_SSIZE_T);}
static void *copy_tlp_DataSet(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new tlp::DataSet(reinterpret_cast<const tlp::DataSet *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_tlp_DataSet(sipSimpleWrapper *);}
static void dealloc_tlp_DataSet(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_DataSet(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_tlp_DataSet(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_DataSet(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    tlp::DataSet *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new tlp::DataSet();

            return sipCpp;
        }
    }

    {
        const tlp::DataSet * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_DataSet, &a0))
        {
            sipCpp = new tlp::DataSet(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_tlp_DataSet[] = {
    {(void *)slot_tlp_DataSet___getitem__, getitem_slot},
    {(void *)slot_tlp_DataSet___setitem__, setitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_tlp_DataSet[] = {
    {SIP_MLNAME_CAST(sipName_exist), meth_tlp_DataSet_exist, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_DataSet_exist)},
    {SIP_MLNAME_CAST(sipName_getKeys), meth_tlp_DataSet_getKeys, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_DataSet_getKeys)},
    {SIP_MLNAME_CAST(sipName_remove), meth_tlp_DataSet_remove, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_DataSet_remove)},
    {SIP_MLNAME_CAST(sipName_size), meth_tlp_DataSet_size, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_DataSet_size)}
};

PyDoc_STRVAR(doc_tlp_DataSet, "This class is used to store a set of parameters to transmit to a Tulip algorithm.\n"
    "Below is an exhaustive list of data types that can be stored in a Tulip data set:\n"
    "\n"
    "	* boolean\n"
    "	* integer \n"
    "	* float\n"
    "	* string\n"
    "	* :class:`tlp.Coord`\n"
    "	* :class:`tlp.Color`\n"
    "	* :class:`tlp.Size`\n"
    "	* :class:`tlp.DataSet`\n"
    "	* :class:`tlp.ColorScale`\n"
    "	* :class:`tlp.StringCollection`\n"
    "	* :class:`tlp.BooleanProperty`\n"
    "	* :class:`tlp.ColorProperty`\n"
    "	* :class:`tlp.DoubleProperty`\n"
    "	* :class:`tlp.IntegerProperty`\n"
    "	* :class:`tlp.LayoutProperty`\n"
    "	* :class:`tlp.SizeProperty`\n"
    "	* :class:`tlp.StringProperty`\n"
    "	* :class:`tlp.PropertyInterface`\n"
    "\n"
    "If you try to store an unsupported data type, an exception will be thrown.	\n"
    "Each value stored in a data set is associated to a string key. Reading / Writing a value in \n"
    "a data set is done through the [] operator as illustrated below::\n"
    "\n"
    "	# data set creation\n"
    "	dataSet = tlp.DataSet()\n"
    "	\n"
    "	# writing integer values\n"
    "	dataSet[\"height\"] = 100\n"
    "	dataSet[\"width\"] = 300\n"
    "	\n"
    "	# reading integer values\n"
    "	area = dataSet[\"height\"] * dataSet[\"width\"] \n"
    "\n"
    "When reading a data set value, a reference is returned not a copy.\n"
    "");


sipClassTypeDef sipTypeDef_tulip_tlp_DataSet = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__DataSet,
        {0}
    },
    {
        sipNameNr_DataSet,
        {21, 255, 0},
        4, methods_tlp_DataSet,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_tlp_DataSet,
    -1,
    -1,
    0,
    slots_tlp_DataSet,
    init_tlp_DataSet,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_tlp_DataSet,
    assign_tlp_DataSet,
    array_tlp_DataSet,
    copy_tlp_DataSet,
    release_tlp_DataSet,
    cast_tlp_DataSet,
    0,
    0,
    0
};
