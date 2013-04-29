/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Mon Apr 29 01:46:10 2013
 */

#include "sipAPItulip.h"

#line 37 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"
#include <vector>
#line 12 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100tlpedge.cpp"

#line 30 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Edge.sip"
#include <tulip/tulipconf.h>
#include <tulip/Edge.h>
#line 17 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100tlpedge.cpp"


extern "C" {static void assign_std_vector_0100tlp_edge(void *, SIP_SSIZE_T, const void *);}
static void assign_std_vector_0100tlp_edge(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<std::vector<tlp::edge> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const std::vector<tlp::edge> *>(sipSrc);
}


extern "C" {static void *array_std_vector_0100tlp_edge(SIP_SSIZE_T);}
static void *array_std_vector_0100tlp_edge(SIP_SSIZE_T sipNrElem)
{
    return new std::vector<tlp::edge>[sipNrElem];
}


extern "C" {static void *copy_std_vector_0100tlp_edge(const void *, SIP_SSIZE_T);}
static void *copy_std_vector_0100tlp_edge(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new std::vector<tlp::edge>(reinterpret_cast<const std::vector<tlp::edge> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_std_vector_0100tlp_edge(void *, int);}
static void release_std_vector_0100tlp_edge(void *ptr, int)
{
    delete reinterpret_cast<std::vector<tlp::edge> *>(ptr);
}



extern "C" {static int convertTo_std_vector_0100tlp_edge(PyObject *, void **, int *, PyObject *);}
static int convertTo_std_vector_0100tlp_edge(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    std::vector<tlp::edge> **sipCppPtr = reinterpret_cast<std::vector<tlp::edge> **>(sipCppPtrV);

#line 71 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"

   // Check if type is compatible
   if (sipIsErr == NULL) {
   	   if (!PyList_Check(sipPy)) {
          return 0;
       }
       for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
            PyObject *item = PyList_GET_ITEM(sipPy, i);
            if (!sipCanConvertToType(item, sipType_tlp_edge, SIP_NOT_NONE)) {
                printErrorMessage("TypeError : object in list of type " + std::string(item->ob_type->tp_name) + " can not be converted to tlp::edge");
                return 0;
            }
       }
       return 1;
   }
 
   // Convert Python list of tlp::edge to  std::vector<tlp::edge>
   std::vector<tlp::edge> *v = new std::vector<tlp::edge>();
   v->reserve(PyList_GET_SIZE(sipPy));
   for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
       int state;
       tlp::edge* p = reinterpret_cast<tlp::edge*>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_tlp_edge, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

	   if (*sipIsErr) {
          sipReleaseType(p, sipType_tlp_edge, state);
          delete v;
          return 0;
       }		

       v->push_back(*p);

       sipReleaseType(p, sipType_tlp_edge, state);       
   }

   *sipCppPtr = v;
   return sipGetState(sipTransferObj);
#line 92 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100tlpedge.cpp"
}


extern "C" {static PyObject *convertFrom_std_vector_0100tlp_edge(void *, PyObject *);}
static PyObject *convertFrom_std_vector_0100tlp_edge(void *sipCppV,PyObject *sipTransferObj)
{
   std::vector<tlp::edge> *sipCpp = reinterpret_cast<std::vector<tlp::edge> *>(sipCppV);

#line 41 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"
   PyObject *l;

   // Create the Python list of the correct length.
   if ((l = PyList_New(sipCpp -> size())) == NULL) {
       return NULL;
   }

   // Go through each element in the C++ instance and convert it to a
   // wrapped P2d.
   for (int i = 0; i < (int)sipCpp -> size(); ++i) {
       tlp::edge *cpp = new tlp::edge(sipCpp -> at(i));
       PyObject *pobj;

       // Get the Python wrapper for the Type instance, creating a new
       // one if necessary, and handle any ownership transfer.
       if ((pobj = sipConvertFromNewType(cpp, sipType_tlp_edge, sipTransferObj)) == NULL) {
           // There was an error so garbage collect the Python list.
           Py_XDECREF(l);
           return NULL;
       }

       // Add the wrapper to the list.
       PyList_SET_ITEM(l, i, pobj);
   }

   // Return the Python list.
   return l;
#line 129 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100tlpedge.cpp"
}


sipMappedTypeDef sipTypeDef_tulip_std_vector_0100tlp_edge = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_2597,
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
    assign_std_vector_0100tlp_edge,
    array_std_vector_0100tlp_edge,
    copy_std_vector_0100tlp_edge,
    release_std_vector_0100tlp_edge,
    convertTo_std_vector_0100tlp_edge,
    convertFrom_std_vector_0100tlp_edge
};
