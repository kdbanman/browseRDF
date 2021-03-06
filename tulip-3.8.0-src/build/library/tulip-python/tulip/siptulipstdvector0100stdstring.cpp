/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:11:08 2013
 */

#include "sipAPItulip.h"

#line 37 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"
#include <vector>
#line 12 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100stdstring.cpp"

#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 17 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100stdstring.cpp"


extern "C" {static void assign_std_vector_0100std_string(void *, SIP_SSIZE_T, const void *);}
static void assign_std_vector_0100std_string(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<std::vector<std::string> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const std::vector<std::string> *>(sipSrc);
}


extern "C" {static void *array_std_vector_0100std_string(SIP_SSIZE_T);}
static void *array_std_vector_0100std_string(SIP_SSIZE_T sipNrElem)
{
    return new std::vector<std::string>[sipNrElem];
}


extern "C" {static void *copy_std_vector_0100std_string(const void *, SIP_SSIZE_T);}
static void *copy_std_vector_0100std_string(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new std::vector<std::string>(reinterpret_cast<const std::vector<std::string> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_std_vector_0100std_string(void *, int);}
static void release_std_vector_0100std_string(void *ptr, int)
{
    delete reinterpret_cast<std::vector<std::string> *>(ptr);
}



extern "C" {static int convertTo_std_vector_0100std_string(PyObject *, void **, int *, PyObject *);}
static int convertTo_std_vector_0100std_string(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    std::vector<std::string> **sipCppPtr = reinterpret_cast<std::vector<std::string> **>(sipCppPtrV);

#line 71 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"

   // Check if type is compatible
   if (sipIsErr == NULL) {
   	   if (!PyList_Check(sipPy)) {
          return 0;
       }
       for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
            PyObject *item = PyList_GET_ITEM(sipPy, i);
            if (!sipCanConvertToType(item, sipType_std_string, SIP_NOT_NONE)) {
                printErrorMessage("TypeError : object in list of type " + std::string(item->ob_type->tp_name) + " can not be converted to std::string");
                return 0;
            }
       }
       return 1;
   }
 
   // Convert Python list of std::string to  std::vector<std::string>
   std::vector<std::string> *v = new std::vector<std::string>();
   v->reserve(PyList_GET_SIZE(sipPy));
   for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
       int state;
       std::string* p = reinterpret_cast<std::string*>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_std_string, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

	   if (*sipIsErr) {
          sipReleaseType(p, sipType_std_string, state);
          delete v;
          return 0;
       }		

       v->push_back(*p);

       sipReleaseType(p, sipType_std_string, state);       
   }

   *sipCppPtr = v;
   return sipGetState(sipTransferObj);
#line 92 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100stdstring.cpp"
}


extern "C" {static PyObject *convertFrom_std_vector_0100std_string(void *, PyObject *);}
static PyObject *convertFrom_std_vector_0100std_string(void *sipCppV,PyObject *sipTransferObj)
{
   std::vector<std::string> *sipCpp = reinterpret_cast<std::vector<std::string> *>(sipCppV);

#line 41 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"
   PyObject *l;

   // Create the Python list of the correct length.
   if ((l = PyList_New(sipCpp -> size())) == NULL) {
       return NULL;
   }

   // Go through each element in the C++ instance and convert it to a
   // wrapped P2d.
   for (int i = 0; i < (int)sipCpp -> size(); ++i) {
       std::string *cpp = new std::string(sipCpp -> at(i));
       PyObject *pobj;

       // Get the Python wrapper for the Type instance, creating a new
       // one if necessary, and handle any ownership transfer.
       if ((pobj = sipConvertFromNewType(cpp, sipType_std_string, sipTransferObj)) == NULL) {
           // There was an error so garbage collect the Python list.
           Py_XDECREF(l);
           return NULL;
       }

       // Add the wrapper to the list.
       PyList_SET_ITEM(l, i, pobj);
   }

   // Return the Python list.
   return l;
#line 129 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100stdstring.cpp"
}


sipMappedTypeDef sipTypeDef_tulip_std_vector_0100std_string = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1984,
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
    assign_std_vector_0100std_string,
    array_std_vector_0100std_string,
    copy_std_vector_0100std_string,
    release_std_vector_0100std_string,
    convertTo_std_vector_0100std_string,
    convertFrom_std_vector_0100std_string
};
