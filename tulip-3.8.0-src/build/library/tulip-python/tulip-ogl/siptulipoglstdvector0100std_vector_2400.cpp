/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Fri Apr 26 16:35:20 2013
 */

#include "sipAPItulipogl.h"

#line 37 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/../tulip/../stl/vector.sip"
#include <vector>
#line 12 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipoglstdvector0100std_vector_2400.cpp"

#line 191 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/../tulip/../stl/vector.sip"
#include <vector>
#line 16 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipoglstdvector0100std_vector_2400.cpp"


extern "C" {static void assign_std_vector_0100std_vector_2400(void *, SIP_SSIZE_T, const void *);}
static void assign_std_vector_0100std_vector_2400(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<std::vector<std_vector_2400> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const std::vector<std_vector_2400> *>(sipSrc);
}


extern "C" {static void *array_std_vector_0100std_vector_2400(SIP_SSIZE_T);}
static void *array_std_vector_0100std_vector_2400(SIP_SSIZE_T sipNrElem)
{
    return new std::vector<std_vector_2400>[sipNrElem];
}


extern "C" {static void *copy_std_vector_0100std_vector_2400(const void *, SIP_SSIZE_T);}
static void *copy_std_vector_0100std_vector_2400(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new std::vector<std_vector_2400>(reinterpret_cast<const std::vector<std_vector_2400> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_std_vector_0100std_vector_2400(void *, int);}
static void release_std_vector_0100std_vector_2400(void *ptr, int)
{
    delete reinterpret_cast<std::vector<std_vector_2400> *>(ptr);
}



extern "C" {static int convertTo_std_vector_0100std_vector_2400(PyObject *, void **, int *, PyObject *);}
static int convertTo_std_vector_0100std_vector_2400(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    std::vector<std_vector_2400> **sipCppPtr = reinterpret_cast<std::vector<std_vector_2400> **>(sipCppPtrV);

#line 71 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/../tulip/../stl/vector.sip"

   // Check if type is compatible
   if (sipIsErr == NULL) {
   	   if (!PyList_Check(sipPy)) {
          return 0;
       }
       for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
            PyObject *item = PyList_GET_ITEM(sipPy, i);
            if (!sipCanConvertToType(item, sipType_std_vector_2400, SIP_NOT_NONE)) {
                printErrorMessage("TypeError : object in list of type " + std::string(item->ob_type->tp_name) + " can not be converted to std_vector_2400");
                return 0;
            }
       }
       return 1;
   }
 
   // Convert Python list of std_vector_2400 to  std::vector<std_vector_2400>
   std::vector<std_vector_2400> *v = new std::vector<std_vector_2400>();
   v->reserve(PyList_GET_SIZE(sipPy));
   for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
       int state;
       std_vector_2400* p = reinterpret_cast<std_vector_2400*>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_std_vector_2400, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

	   if (*sipIsErr) {
          sipReleaseType(p, sipType_std_vector_2400, state);
          delete v;
          return 0;
       }		

       v->push_back(*p);

       sipReleaseType(p, sipType_std_vector_2400, state);       
   }

   *sipCppPtr = v;
   return sipGetState(sipTransferObj);
#line 91 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipoglstdvector0100std_vector_2400.cpp"
}


extern "C" {static PyObject *convertFrom_std_vector_0100std_vector_2400(void *, PyObject *);}
static PyObject *convertFrom_std_vector_0100std_vector_2400(void *sipCppV,PyObject *sipTransferObj)
{
   std::vector<std_vector_2400> *sipCpp = reinterpret_cast<std::vector<std_vector_2400> *>(sipCppV);

#line 41 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/../tulip/../stl/vector.sip"
   PyObject *l;

   // Create the Python list of the correct length.
   if ((l = PyList_New(sipCpp -> size())) == NULL) {
       return NULL;
   }

   // Go through each element in the C++ instance and convert it to a
   // wrapped P2d.
   for (int i = 0; i < (int)sipCpp -> size(); ++i) {
       std_vector_2400 *cpp = new std_vector_2400(sipCpp -> at(i));
       PyObject *pobj;

       // Get the Python wrapper for the Type instance, creating a new
       // one if necessary, and handle any ownership transfer.
       if ((pobj = sipConvertFromNewType(cpp, sipType_std_vector_2400, sipTransferObj)) == NULL) {
           // There was an error so garbage collect the Python list.
           Py_XDECREF(l);
           return NULL;
       }

       // Add the wrapper to the list.
       PyList_SET_ITEM(l, i, pobj);
   }

   // Return the Python list.
   return l;
#line 128 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipoglstdvector0100std_vector_2400.cpp"
}


sipMappedTypeDef sipTypeDef_tulipogl_std_vector_0100std_vector_2400 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_795,
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
    assign_std_vector_0100std_vector_2400,
    array_std_vector_0100std_vector_2400,
    copy_std_vector_0100std_vector_2400,
    release_std_vector_0100std_vector_2400,
    convertTo_std_vector_0100std_vector_2400,
    convertFrom_std_vector_0100std_vector_2400
};
