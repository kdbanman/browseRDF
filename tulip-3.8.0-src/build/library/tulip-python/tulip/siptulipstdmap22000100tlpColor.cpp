/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Fri Apr 26 16:33:30 2013
 */

#include "sipAPItulip.h"

#line 215 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/../stl/map.sip"
#include <map>
#line 12 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdmap22000100tlpColor.cpp"

#line 30 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/Color.sip"
#include <tulip/Color.h>
#line 16 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdmap22000100tlpColor.cpp"


extern "C" {static void assign_std_map_2200_0100tlp_Color(void *, SIP_SSIZE_T, const void *);}
static void assign_std_map_2200_0100tlp_Color(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<std::map<float,tlp::Color> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const std::map<float,tlp::Color> *>(sipSrc);
}


extern "C" {static void *array_std_map_2200_0100tlp_Color(SIP_SSIZE_T);}
static void *array_std_map_2200_0100tlp_Color(SIP_SSIZE_T sipNrElem)
{
    return new std::map<float,tlp::Color>[sipNrElem];
}


extern "C" {static void *copy_std_map_2200_0100tlp_Color(const void *, SIP_SSIZE_T);}
static void *copy_std_map_2200_0100tlp_Color(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new std::map<float,tlp::Color>(reinterpret_cast<const std::map<float,tlp::Color> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_std_map_2200_0100tlp_Color(void *, int);}
static void release_std_map_2200_0100tlp_Color(void *ptr, int)
{
    delete reinterpret_cast<std::map<float,tlp::Color> *>(ptr);
}



extern "C" {static int convertTo_std_map_2200_0100tlp_Color(PyObject *, void **, int *, PyObject *);}
static int convertTo_std_map_2200_0100tlp_Color(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    std::map<float,tlp::Color> **sipCppPtr = reinterpret_cast<std::map<float,tlp::Color> **>(sipCppPtrV);

#line 219 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/../stl/map.sip"
	
	PyObject *key = NULL;
	PyObject *val = NULL;
	Py_ssize_t pos = 0;

	if (sipIsErr == NULL) {
		if (!PyDict_Check(sipPy)) {
			return 0;
		}
		while (PyDict_Next(sipPy, &pos, &key, &val)) {
			bool ok = PyFloat_Check(key);
			ok = ok && sipCanConvertToType(val, sipType_tlp_Color, SIP_NOT_NONE);
			if (!ok) {
				return 0;
			}
		}
		return 1;
	}

	
	std::map <float, tlp::Color> *map = new std::map<float, tlp::Color>();
	
	while (PyDict_Next(sipPy, &pos, &key, &val)) {
		int t2State = 0;
		
		float t1 = PyFloat_AsDouble(key);
		tlp::Color *t2 = reinterpret_cast<tlp::Color *>(sipConvertToType(val, sipType_tlp_Color, sipTransferObj, SIP_NOT_NONE, &t2State, sipIsErr));
		
		if (*sipIsErr) {
			delete map;		
			sipReleaseType(t2, sipType_tlp_Color, t2State);
			return 0;
		}
		
		(*map)[t1] = *t2;
		
		sipReleaseType(t2, sipType_tlp_Color, t2State);
	}
	
	*sipCppPtr = map;
	return sipGetState(sipTransferObj);
#line 96 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdmap22000100tlpColor.cpp"
}


extern "C" {static PyObject *convertFrom_std_map_2200_0100tlp_Color(void *, PyObject *);}
static PyObject *convertFrom_std_map_2200_0100tlp_Color(void *sipCppV,PyObject *sipTransferObj)
{
   std::map<float,tlp::Color> *sipCpp = reinterpret_cast<std::map<float,tlp::Color> *>(sipCppV);

#line 263 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/../stl/map.sip"
	PyObject *pyDict = NULL;
	pyDict = PyDict_New();
	if (pyDict == NULL) {
		return NULL;
	}
	
	for (std::map<float, tlp::Color>::const_iterator it = sipCpp->begin(); it != sipCpp->end(); ++it) {
		PyObject *key = NULL;
		PyObject *val = NULL;
		float cppKey = it->first;
		tlp::Color *cppVal = new tlp::Color(it->second);
		
		key = PyFloat_FromDouble(cppKey);
		val = sipConvertFromNewType(cppVal, sipType_tlp_Color, sipTransferObj);
		
		if (key == NULL || val == NULL || PyDict_SetItem(pyDict, key, val) < 0) {
			Py_DECREF(pyDict);
			
			if (key) {
				Py_DECREF(key);
			} 
			
			if (val != NULL) {
				Py_DECREF(val);
			} else {
				delete cppVal;
			}
			
			return NULL;
		}
		
		Py_DECREF(key);
		Py_DECREF(val);
	}
	
	return pyDict;
#line 142 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdmap22000100tlpColor.cpp"
}


sipMappedTypeDef sipTypeDef_tulip_std_map_2200_0100tlp_Color = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1342,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_std_map_2200_0100tlp_Color,
    array_std_map_2200_0100tlp_Color,
    copy_std_map_2200_0100tlp_Color,
    release_std_map_2200_0100tlp_Color,
    convertTo_std_map_2200_0100tlp_Color,
    convertFrom_std_map_2200_0100tlp_Color
};