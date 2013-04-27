/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Fri Apr 26 16:33:30 2013
 */

#include "sipAPItulip.h"

#line 37 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"
#include <vector>
#line 12 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100tlpCoord.cpp"

#line 33 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/Coord.sip"
#include <tulip/Coord.h>
#line 16 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100tlpCoord.cpp"


extern "C" {static void assign_std_vector_0100tlp_Coord(void *, SIP_SSIZE_T, const void *);}
static void assign_std_vector_0100tlp_Coord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<std::vector<tlp::Coord> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const std::vector<tlp::Coord> *>(sipSrc);
}


extern "C" {static void *array_std_vector_0100tlp_Coord(SIP_SSIZE_T);}
static void *array_std_vector_0100tlp_Coord(SIP_SSIZE_T sipNrElem)
{
    return new std::vector<tlp::Coord>[sipNrElem];
}


extern "C" {static void *copy_std_vector_0100tlp_Coord(const void *, SIP_SSIZE_T);}
static void *copy_std_vector_0100tlp_Coord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new std::vector<tlp::Coord>(reinterpret_cast<const std::vector<tlp::Coord> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_std_vector_0100tlp_Coord(void *, int);}
static void release_std_vector_0100tlp_Coord(void *ptr, int)
{
    delete reinterpret_cast<std::vector<tlp::Coord> *>(ptr);
}



extern "C" {static int convertTo_std_vector_0100tlp_Coord(PyObject *, void **, int *, PyObject *);}
static int convertTo_std_vector_0100tlp_Coord(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    std::vector<tlp::Coord> **sipCppPtr = reinterpret_cast<std::vector<tlp::Coord> **>(sipCppPtrV);

#line 71 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"

   // Check if type is compatible
   if (sipIsErr == NULL) {
   	   if (!PyList_Check(sipPy)) {
          return 0;
       }
       for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
            PyObject *item = PyList_GET_ITEM(sipPy, i);
            if (!sipCanConvertToType(item, sipType_tlp_Coord, SIP_NOT_NONE)) {
                printErrorMessage("TypeError : object in list of type " + std::string(item->ob_type->tp_name) + " can not be converted to tlp::Coord");
                return 0;
            }
       }
       return 1;
   }
 
   // Convert Python list of tlp::Coord to  std::vector<tlp::Coord>
   std::vector<tlp::Coord> *v = new std::vector<tlp::Coord>();
   v->reserve(PyList_GET_SIZE(sipPy));
   for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i) {
       int state;
       tlp::Coord* p = reinterpret_cast<tlp::Coord*>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_tlp_Coord, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

	   if (*sipIsErr) {
          sipReleaseType(p, sipType_tlp_Coord, state);
          delete v;
          return 0;
       }		

       v->push_back(*p);

       sipReleaseType(p, sipType_tlp_Coord, state);       
   }

   *sipCppPtr = v;
   return sipGetState(sipTransferObj);
#line 91 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100tlpCoord.cpp"
}


extern "C" {static PyObject *convertFrom_std_vector_0100tlp_Coord(void *, PyObject *);}
static PyObject *convertFrom_std_vector_0100tlp_Coord(void *sipCppV,PyObject *sipTransferObj)
{
   std::vector<tlp::Coord> *sipCpp = reinterpret_cast<std::vector<tlp::Coord> *>(sipCppV);

#line 41 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"
   PyObject *l;

   // Create the Python list of the correct length.
   if ((l = PyList_New(sipCpp -> size())) == NULL) {
       return NULL;
   }

   // Go through each element in the C++ instance and convert it to a
   // wrapped P2d.
   for (int i = 0; i < (int)sipCpp -> size(); ++i) {
       tlp::Coord *cpp = new tlp::Coord(sipCpp -> at(i));
       PyObject *pobj;

       // Get the Python wrapper for the Type instance, creating a new
       // one if necessary, and handle any ownership transfer.
       if ((pobj = sipConvertFromNewType(cpp, sipType_tlp_Coord, sipTransferObj)) == NULL) {
           // There was an error so garbage collect the Python list.
           Py_XDECREF(l);
           return NULL;
       }

       // Add the wrapper to the list.
       PyList_SET_ITEM(l, i, pobj);
   }

   // Return the Python list.
   return l;
#line 128 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptulipstdvector0100tlpCoord.cpp"
}


sipMappedTypeDef sipTypeDef_tulip_std_vector_0100tlp_Coord = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_2357,
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
    assign_std_vector_0100tlp_Coord,
    array_std_vector_0100tlp_Coord,
    copy_std_vector_0100tlp_Coord,
    release_std_vector_0100tlp_Coord,
    convertTo_std_vector_0100tlp_Coord,
    convertFrom_std_vector_0100tlp_Coord
};
