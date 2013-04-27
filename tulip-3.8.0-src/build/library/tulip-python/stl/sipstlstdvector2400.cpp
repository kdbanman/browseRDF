/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Fri Apr 26 16:32:47 2013
 */

#include "sipAPIstl.h"

#line 191 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/stl/vector.sip"
#include <vector>
#line 12 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/stl/sipstlstdvector2400.cpp"



extern "C" {static void assign_std_vector_2400(void *, SIP_SSIZE_T, const void *);}
static void assign_std_vector_2400(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<std::vector<double> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const std::vector<double> *>(sipSrc);
}


extern "C" {static void *array_std_vector_2400(SIP_SSIZE_T);}
static void *array_std_vector_2400(SIP_SSIZE_T sipNrElem)
{
    return new std::vector<double>[sipNrElem];
}


extern "C" {static void *copy_std_vector_2400(const void *, SIP_SSIZE_T);}
static void *copy_std_vector_2400(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new std::vector<double>(reinterpret_cast<const std::vector<double> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_std_vector_2400(void *, int);}
static void release_std_vector_2400(void *ptr, int)
{
    delete reinterpret_cast<std::vector<double> *>(ptr);
}



extern "C" {static int convertTo_std_vector_2400(PyObject *, void **, int *, PyObject *);}
static int convertTo_std_vector_2400(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    std::vector<double> **sipCppPtr = reinterpret_cast<std::vector<double> **>(sipCppPtrV);

#line 214 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/stl/vector.sip"
   // Check if type is compatible
   if (sipIsErr == NULL) {
   	   if (!PyList_Check(sipPy)) {
          return 0;
       }
       for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
            PyObject *item = PyList_GET_ITEM(sipPy, i);
            if (!PyNumber_Check(item)) {
                printErrorMessage("TypeError : object in list of type " + std::string(item->ob_type->tp_name) + " can not be converted to double");
                return 0;
            }
       }
       return 1;
   }
 
   // Convert Python list of numbers to a std::vector<double>
   std::vector<double> *v = new std::vector<double>();
   v->reserve(PyList_GET_SIZE(sipPy));
   for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
       PyObject *f = PyNumber_Float(PyList_GET_ITEM(sipPy, i));
       v->push_back(PyFloat_AsDouble(f));
       Py_XDECREF(f);       
   }

   *sipCppPtr = v;
   return sipGetState(sipTransferObj);
#line 78 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/stl/sipstlstdvector2400.cpp"
}


extern "C" {static PyObject *convertFrom_std_vector_2400(void *, PyObject *);}
static PyObject *convertFrom_std_vector_2400(void *sipCppV,PyObject *)
{
   std::vector<double> *sipCpp = reinterpret_cast<std::vector<double> *>(sipCppV);

#line 195 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/stl/vector.sip"
   PyObject *l;

   // Create the Python list of the correct length.
   if ((l = PyList_New(sipCpp -> size())) == NULL) {
       return NULL;
   }

   // Go through each element in the C++ instance and convert it to a
   // wrapped object.
   for (int i = 0; i < (int)sipCpp -> size(); ++i) {
       // Add the wrapper to the list.
       PyList_SET_ITEM(l, i, PyFloat_FromDouble(sipCpp -> at(i)));
   }

   // Return the Python list.
   return l;
#line 104 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/stl/sipstlstdvector2400.cpp"
}


sipMappedTypeDef sipTypeDef_stl_std_vector_2400 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_21,
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
    assign_std_vector_2400,
    array_std_vector_2400,
    copy_std_vector_2400,
    release_std_vector_2400,
    convertTo_std_vector_2400,
    convertFrom_std_vector_2400
};
