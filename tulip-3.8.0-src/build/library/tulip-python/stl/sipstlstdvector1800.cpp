/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Mon Apr 29 01:46:05 2013
 */

#include "sipAPIstl.h"

#line 250 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/stl/vector.sip"
#include <vector>
#line 12 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/stl/sipstlstdvector1800.cpp"



extern "C" {static void assign_std_vector_1800(void *, SIP_SSIZE_T, const void *);}
static void assign_std_vector_1800(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<std::vector<int> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const std::vector<int> *>(sipSrc);
}


extern "C" {static void *array_std_vector_1800(SIP_SSIZE_T);}
static void *array_std_vector_1800(SIP_SSIZE_T sipNrElem)
{
    return new std::vector<int>[sipNrElem];
}


extern "C" {static void *copy_std_vector_1800(const void *, SIP_SSIZE_T);}
static void *copy_std_vector_1800(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new std::vector<int>(reinterpret_cast<const std::vector<int> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_std_vector_1800(void *, int);}
static void release_std_vector_1800(void *ptr, int)
{
    delete reinterpret_cast<std::vector<int> *>(ptr);
}



extern "C" {static int convertTo_std_vector_1800(PyObject *, void **, int *, PyObject *);}
static int convertTo_std_vector_1800(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    std::vector<int> **sipCppPtr = reinterpret_cast<std::vector<int> **>(sipCppPtrV);

#line 273 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/stl/vector.sip"
   // Check if type is compatible
   if (sipIsErr == NULL) {
   	   if (!PyList_Check(sipPy)) {
          return 0;
       }
       for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
            PyObject *item = PyList_GET_ITEM(sipPy, i);
            if (!PyLong_Check(item)) {
                printErrorMessage("TypeError : object in list of type " + std::string(item->ob_type->tp_name) + " can not be converted to int");
                return 0;
            }
       }
       return 1;
   }
 
   // Convert Python list of integers to a std::vector<int>
   std::vector<int> *v = new std::vector<int>();
   v->reserve(PyList_GET_SIZE(sipPy));
   for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
       v->push_back(PyLong_AsLong(PyList_GET_ITEM(sipPy, i)));
   }

   *sipCppPtr = v;
   return sipGetState(sipTransferObj);
#line 76 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/stl/sipstlstdvector1800.cpp"
}


extern "C" {static PyObject *convertFrom_std_vector_1800(void *, PyObject *);}
static PyObject *convertFrom_std_vector_1800(void *sipCppV,PyObject *)
{
   std::vector<int> *sipCpp = reinterpret_cast<std::vector<int> *>(sipCppV);

#line 254 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/stl/vector.sip"
   PyObject *l;

   // Create the Python list of the correct length.
   if ((l = PyList_New(sipCpp -> size())) == NULL) {
       return NULL;
   }

   // Go through each element in the C++ instance and convert it to a
   // wrapped object.
   for (int i = 0; i < (int)sipCpp -> size(); ++i) {
       // Add the wrapper to the list.
       PyList_SET_ITEM(l, i, PyLong_FromLong(sipCpp -> at(i)));
   }

   // Return the Python list.
   return l;
#line 102 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/stl/sipstlstdvector1800.cpp"
}


sipMappedTypeDef sipTypeDef_stl_std_vector_1800 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_77,
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
    assign_std_vector_1800,
    array_std_vector_1800,
    copy_std_vector_1800,
    release_std_vector_1800,
    convertTo_std_vector_1800,
    convertFrom_std_vector_1800
};
