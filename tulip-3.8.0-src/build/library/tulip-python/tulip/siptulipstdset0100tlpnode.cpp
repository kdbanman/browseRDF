/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Mon Apr 29 01:46:10 2013
 */

#include "sipAPItulip.h"

#line 29 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/set.sip"
#include <set>
#line 12 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdset0100tlpnode.cpp"

#line 29 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Node.sip"
#include <tulip/Node.h>
#line 16 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdset0100tlpnode.cpp"


extern "C" {static void assign_std_set_0100tlp_node(void *, SIP_SSIZE_T, const void *);}
static void assign_std_set_0100tlp_node(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<std::set<tlp::node> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const std::set<tlp::node> *>(sipSrc);
}


extern "C" {static void *array_std_set_0100tlp_node(SIP_SSIZE_T);}
static void *array_std_set_0100tlp_node(SIP_SSIZE_T sipNrElem)
{
    return new std::set<tlp::node>[sipNrElem];
}


extern "C" {static void *copy_std_set_0100tlp_node(const void *, SIP_SSIZE_T);}
static void *copy_std_set_0100tlp_node(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new std::set<tlp::node>(reinterpret_cast<const std::set<tlp::node> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_std_set_0100tlp_node(void *, int);}
static void release_std_set_0100tlp_node(void *ptr, int)
{
    delete reinterpret_cast<std::set<tlp::node> *>(ptr);
}



extern "C" {static int convertTo_std_set_0100tlp_node(PyObject *, void **, int *, PyObject *);}
static int convertTo_std_set_0100tlp_node(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    std::set<tlp::node> **sipCppPtr = reinterpret_cast<std::set<tlp::node> **>(sipCppPtrV);

#line 34 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/set.sip"

   // Check if type is compatible
   if (sipIsErr == NULL) {
   	   if (!PyList_Check(sipPy)) {
          return 0;
       }
       for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
            PyObject *item = PyList_GET_ITEM(sipPy, i);
            if (!sipCanConvertToType(item, sipType_tlp_node, SIP_NOT_NONE)) {
                printErrorMessage("TypeError : object in list of type " + std::string(item->ob_type->tp_name) + " can not be converted to tlp::node");
                return 0;
            }
       }
       return 1;
   }
 
   // Convert Python list of tlp::node to  std::set<tlp::node>
   std::set<tlp::node> *s = new std::set<tlp::node>();
   
   for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
       int state;
       tlp::node* p = reinterpret_cast<tlp::node*>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_tlp_node, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

	   if (*sipIsErr) {
          sipReleaseType(p, sipType_tlp_node, state);
          delete s;
          return 0;
       }		

       s->insert(*p);

       sipReleaseType(p, sipType_tlp_node, state);       
   }

   *sipCppPtr = s;
   return sipGetState(sipTransferObj);
#line 91 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdset0100tlpnode.cpp"
}


extern "C" {static PyObject *convertFrom_std_set_0100tlp_node(void *, PyObject *);}
static PyObject *convertFrom_std_set_0100tlp_node(void *sipCppV,PyObject *sipTransferObj)
{
   std::set<tlp::node> *sipCpp = reinterpret_cast<std::set<tlp::node> *>(sipCppV);

#line 75 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/set.sip"
   PyObject *l;

   // Create the Python list of the correct length.
   if ((l = PyList_New(sipCpp -> size())) == NULL) {
       return NULL;
   }

   // Go through each element in the C++ instance and convert it to a
   // wrapped P2d.
   int i = 0;
   for (std::set<tlp::node>::iterator it = sipCpp->begin(); it != sipCpp->end(); ++it) {
       tlp::node *cpp = new tlp::node(*it);
       PyObject *pobj;

       // Get the Python wrapper for the Type instance, creating a new
       // one if necessary, and handle any ownership transfer.
       if ((pobj = sipConvertFromNewType(cpp, sipType_tlp_node, sipTransferObj)) == NULL) {
           // There was an error so garbage collect the Python list.
           Py_XDECREF(l);
           return NULL;
       }

       // Add the wrapper to the list.
       PyList_SET_ITEM(l, i++, pobj);
   }

   // Return the Python list.
   return l;
#line 129 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdset0100tlpnode.cpp"
}


sipMappedTypeDef sipTypeDef_tulip_std_set_0100tlp_node = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_4172,
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
    assign_std_set_0100tlp_node,
    array_std_set_0100tlp_node,
    copy_std_set_0100tlp_node,
    release_std_set_0100tlp_node,
    convertTo_std_set_0100tlp_node,
    convertFrom_std_set_0100tlp_node
};
