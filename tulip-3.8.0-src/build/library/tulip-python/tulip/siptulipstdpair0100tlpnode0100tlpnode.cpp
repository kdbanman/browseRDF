/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:11:08 2013
 */

#include "sipAPItulip.h"

#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/pair.sip"
#include <utility>
#line 12 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdpair0100tlpnode0100tlpnode.cpp"

#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Node.sip"
#include <tulip/Node.h>
#line 16 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdpair0100tlpnode0100tlpnode.cpp"


extern "C" {static void assign_std_pair_0100tlp_node_0100tlp_node(void *, SIP_SSIZE_T, const void *);}
static void assign_std_pair_0100tlp_node_0100tlp_node(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<std::pair<tlp::node,tlp::node> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const std::pair<tlp::node,tlp::node> *>(sipSrc);
}


extern "C" {static void *array_std_pair_0100tlp_node_0100tlp_node(SIP_SSIZE_T);}
static void *array_std_pair_0100tlp_node_0100tlp_node(SIP_SSIZE_T sipNrElem)
{
    return new std::pair<tlp::node,tlp::node>[sipNrElem];
}


extern "C" {static void *copy_std_pair_0100tlp_node_0100tlp_node(const void *, SIP_SSIZE_T);}
static void *copy_std_pair_0100tlp_node_0100tlp_node(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new std::pair<tlp::node,tlp::node>(reinterpret_cast<const std::pair<tlp::node,tlp::node> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_std_pair_0100tlp_node_0100tlp_node(void *, int);}
static void release_std_pair_0100tlp_node_0100tlp_node(void *ptr, int)
{
    delete reinterpret_cast<std::pair<tlp::node,tlp::node> *>(ptr);
}



extern "C" {static int convertTo_std_pair_0100tlp_node_0100tlp_node(PyObject *, void **, int *, PyObject *);}
static int convertTo_std_pair_0100tlp_node_0100tlp_node(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    std::pair<tlp::node,tlp::node> **sipCppPtr = reinterpret_cast<std::pair<tlp::node,tlp::node> **>(sipCppPtrV);

#line 33 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/pair.sip"
	PyObject *itm1 = NULL;
	PyObject *itm2 = NULL;
	
	if (sipIsErr == NULL) {
		if (!(PyTuple_Check(sipPy) && PyTuple_Size(sipPy) == 2))
			return 0;
	
		itm1 = PyTuple_GetItem(sipPy, 0);
		itm2 = PyTuple_GetItem(sipPy, 1);
	
		bool ok = sipCanConvertToType(itm1, sipType_tlp_node, SIP_NOT_NONE);
		ok = ok && sipCanConvertToType(itm2, sipType_tlp_node, SIP_NOT_NONE);
				
		if (!ok) {
			return 0;
		}
		
		return 1;
	}

	itm1 = PyTuple_GetItem(sipPy, 0);
	itm2 = PyTuple_GetItem(sipPy, 1);
	
	int t1State = 0;
	int t2State = 0;
	
	tlp::node *t1 = reinterpret_cast<tlp::node *>(sipConvertToType(itm1, sipType_tlp_node, sipTransferObj, SIP_NOT_NONE, &t1State, sipIsErr));
	tlp::node *t2 = reinterpret_cast<tlp::node *>(sipConvertToType(itm2, sipType_tlp_node, sipTransferObj, SIP_NOT_NONE, &t2State, sipIsErr));

	if (*sipIsErr) {
		sipReleaseType(t1, sipType_tlp_node, t1State);
		sipReleaseType(t2, sipType_tlp_node, t2State);	
		return 0;
	}

	std::pair<tlp::node, tlp::node> *p = new std::pair<tlp::node, tlp::node>(*t1, *t2);
	
	sipReleaseType(t1, sipType_tlp_node, t1State);
	sipReleaseType(t2, sipType_tlp_node, t2State);

	*sipCppPtr = p;
	return sipGetState(sipTransferObj);
#line 97 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdpair0100tlpnode0100tlpnode.cpp"
}


extern "C" {static PyObject *convertFrom_std_pair_0100tlp_node_0100tlp_node(void *, PyObject *);}
static PyObject *convertFrom_std_pair_0100tlp_node_0100tlp_node(void *sipCppV,PyObject *sipTransferObj)
{
   std::pair<tlp::node,tlp::node> *sipCpp = reinterpret_cast<std::pair<tlp::node,tlp::node> *>(sipCppV);

#line 78 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/pair.sip"
	PyObject *pyTuple = PyTuple_New(2);
	
	if (pyTuple == NULL) {
		return 0;
	}
	
	PyObject *pyFirst = NULL;
	PyObject *pySecond = NULL;
	
	tlp::node *first = new tlp::node(sipCpp->first);
	tlp::node *second = new tlp::node(sipCpp->second);
	
	pyFirst = sipConvertFromNewType(first, sipType_tlp_node, sipTransferObj);
	pySecond = sipConvertFromNewType(second, sipType_tlp_node, sipTransferObj);
	
	if (pyFirst == NULL || pySecond == NULL || PyTuple_SetItem(pyTuple, 0, pyFirst)) {
		if (pyFirst) 
			Py_XDECREF(pyFirst);
		else
			delete first;
		if (pySecond)
			Py_XDECREF(pySecond);
		else
			delete second;
		Py_XDECREF(pyTuple);
		
		return 0;
	}
	
	if (PyTuple_SetItem(pyTuple, 1, pySecond)) {
		Py_XDECREF(pySecond);
		Py_XDECREF(pyTuple);
		
		return 0;
	}
	
	return pyTuple;
#line 144 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdpair0100tlpnode0100tlpnode.cpp"
}


sipMappedTypeDef sipTypeDef_tulip_std_pair_0100tlp_node_0100tlp_node = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_439,
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
    assign_std_pair_0100tlp_node_0100tlp_node,
    array_std_pair_0100tlp_node_0100tlp_node,
    copy_std_pair_0100tlp_node_0100tlp_node,
    release_std_pair_0100tlp_node_0100tlp_node,
    convertTo_std_pair_0100tlp_node_0100tlp_node,
    convertFrom_std_pair_0100tlp_node_0100tlp_node
};
