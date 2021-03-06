/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:11:08 2013
 */

#include "sipAPItulip.h"

#line 37 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"
#include <vector>
#line 12 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100tlpEvent.cpp"

#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/WithParameter.sip"
#include <tulip/WithParameter.h>
#include <tulip/ColorScale.h>
#include <tulip/StringCollection.h>
#include <tulip/IntegerProperty.h>
#include <tulip/LayoutProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ColorProperty.h>
#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
#include <tulip/WithDependency.h>
#line 31 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/PluginProgress.sip"
#include <tulip/PluginProgress.h>
#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Observable.sip"
#include <tulip/Observable.h>
#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100tlpEvent.cpp"


extern "C" {static void assign_std_vector_0100tlp_Event(void *, SIP_SSIZE_T, const void *);}
static void assign_std_vector_0100tlp_Event(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<std::vector<tlp::Event> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const std::vector<tlp::Event> *>(sipSrc);
}


extern "C" {static void *array_std_vector_0100tlp_Event(SIP_SSIZE_T);}
static void *array_std_vector_0100tlp_Event(SIP_SSIZE_T sipNrElem)
{
    return new std::vector<tlp::Event>[sipNrElem];
}


extern "C" {static void *copy_std_vector_0100tlp_Event(const void *, SIP_SSIZE_T);}
static void *copy_std_vector_0100tlp_Event(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new std::vector<tlp::Event>(reinterpret_cast<const std::vector<tlp::Event> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_std_vector_0100tlp_Event(void *, int);}
static void release_std_vector_0100tlp_Event(void *ptr, int)
{
    delete reinterpret_cast<std::vector<tlp::Event> *>(ptr);
}



extern "C" {static int convertTo_std_vector_0100tlp_Event(PyObject *, void **, int *, PyObject *);}
static int convertTo_std_vector_0100tlp_Event(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    std::vector<tlp::Event> **sipCppPtr = reinterpret_cast<std::vector<tlp::Event> **>(sipCppPtrV);

#line 71 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"

   // Check if type is compatible
   if (sipIsErr == NULL) {
   	   if (!PyList_Check(sipPy)) {
          return 0;
       }
       for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
            PyObject *item = PyList_GET_ITEM(sipPy, i);
            if (!sipCanConvertToType(item, sipType_tlp_Event, SIP_NOT_NONE)) {
                printErrorMessage("TypeError : object in list of type " + std::string(item->ob_type->tp_name) + " can not be converted to tlp::Event");
                return 0;
            }
       }
       return 1;
   }
 
   // Convert Python list of tlp::Event to  std::vector<tlp::Event>
   std::vector<tlp::Event> *v = new std::vector<tlp::Event>();
   v->reserve(PyList_GET_SIZE(sipPy));
   for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
       int state;
       tlp::Event* p = reinterpret_cast<tlp::Event*>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_tlp_Event, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

	   if (*sipIsErr) {
          sipReleaseType(p, sipType_tlp_Event, state);
          delete v;
          return 0;
       }		

       v->push_back(*p);

       sipReleaseType(p, sipType_tlp_Event, state);       
   }

   *sipCppPtr = v;
   return sipGetState(sipTransferObj);
#line 105 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100tlpEvent.cpp"
}


extern "C" {static PyObject *convertFrom_std_vector_0100tlp_Event(void *, PyObject *);}
static PyObject *convertFrom_std_vector_0100tlp_Event(void *sipCppV,PyObject *sipTransferObj)
{
   std::vector<tlp::Event> *sipCpp = reinterpret_cast<std::vector<tlp::Event> *>(sipCppV);

#line 41 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"
   PyObject *l;

   // Create the Python list of the correct length.
   if ((l = PyList_New(sipCpp -> size())) == NULL) {
       return NULL;
   }

   // Go through each element in the C++ instance and convert it to a
   // wrapped P2d.
   for (int i = 0; i < (int)sipCpp -> size(); ++i) {
       tlp::Event *cpp = new tlp::Event(sipCpp -> at(i));
       PyObject *pobj;

       // Get the Python wrapper for the Type instance, creating a new
       // one if necessary, and handle any ownership transfer.
       if ((pobj = sipConvertFromNewType(cpp, sipType_tlp_Event, sipTransferObj)) == NULL) {
           // There was an error so garbage collect the Python list.
           Py_XDECREF(l);
           return NULL;
       }

       // Add the wrapper to the list.
       PyList_SET_ITEM(l, i, pobj);
   }

   // Return the Python list.
   return l;
#line 142 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100tlpEvent.cpp"
}


sipMappedTypeDef sipTypeDef_tulip_std_vector_0100tlp_Event = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_2309,
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
    assign_std_vector_0100tlp_Event,
    array_std_vector_0100tlp_Event,
    copy_std_vector_0100tlp_Event,
    release_std_vector_0100tlp_Event,
    convertTo_std_vector_0100tlp_Event,
    convertFrom_std_vector_0100tlp_Event
};
