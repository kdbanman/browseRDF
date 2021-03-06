/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:11:08 2013
 */

#include "sipAPItulip.h"

#line 31 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Iterator.sip"
#include <tulip/Iterator.h>
#line 12 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpIteratorEdge.cpp"

#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Edge.sip"
#include <tulip/tulipconf.h>
#include <tulip/Edge.h>
#line 17 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpIteratorEdge.cpp"


extern "C" {static PyObject *meth_tlp_IteratorEdge_next(PyObject *, PyObject *);}
static PyObject *meth_tlp_IteratorEdge_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::IteratorEdge *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_IteratorEdge, &sipCpp))
        {
            tlp::edge *sipRes = 0;
            int sipIsErr = 0;

#line 39 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Iterator.sip"
    if (sipCpp->hasNext()) {
// if iterator is on base types (int, double, pointers, ...),
// ITERATOR_NO_COPY has to be defined when compiling the generated bindings file    
#ifdef ITERATOR_NO_COPY
    	sipRes = sipCpp->next();
#else
    	sipRes = new tlp::edge(sipCpp->next());
#endif
    } else {
        PyErr_SetString(PyExc_Exception, "tlp::IteratorEdge : next() has been called but there is no more elements to iterate on.");
        sipIsErr = -1;
    }
#line 46 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpIteratorEdge.cpp"

            if (sipIsErr)
                return 0;

            return sipConvertFromNewType(sipRes,sipType_tlp_edge,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_IteratorEdge, sipName_next, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_IteratorEdge_hasNext(PyObject *, PyObject *);}
static PyObject *meth_tlp_IteratorEdge_hasNext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::IteratorEdge *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_IteratorEdge, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasNext();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_IteratorEdge, sipName_hasNext, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_tlp_IteratorEdge___next__(PyObject *);}
static PyObject *slot_tlp_IteratorEdge___next__(PyObject *sipSelf)
{
    tlp::IteratorEdge *sipCpp = reinterpret_cast<tlp::IteratorEdge *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_IteratorEdge));

    if (!sipCpp)
        return 0;


    {
        {
            tlp::edge *sipRes = 0;

#line 62 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Iterator.sip"
    if (sipCpp->hasNext()) {
// if iterator is on base types (int, double, pointers, ...),
// ITERATOR_NO_COPY has to be defined when compiling the generated bindings file    
#ifdef ITERATOR_NO_COPY
    	sipRes = sipCpp->next();
#else
    	sipRes = new tlp::edge(sipCpp->next());
#endif
    } else {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
#line 113 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpIteratorEdge.cpp"

            return sipConvertFromNewType(sipRes,sipType_tlp_edge,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_tlp_IteratorEdge___iter__(PyObject *);}
static PyObject *slot_tlp_IteratorEdge___iter__(PyObject *sipSelf)
{
    tlp::IteratorEdge *sipCpp = reinterpret_cast<tlp::IteratorEdge *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_IteratorEdge));

    if (!sipCpp)
        return 0;


    {
        {
            tlp::IteratorEdge *sipRes = 0;

#line 57 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Iterator.sip"
    sipRes = sipCpp;
#line 138 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpIteratorEdge.cpp"

            return sipConvertFromType(sipRes,sipType_tlp_IteratorEdge,NULL);
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_IteratorEdge(void *, const sipTypeDef *);}
static void *cast_tlp_IteratorEdge(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_IteratorEdge)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_IteratorEdge(void *, int);}
static void release_tlp_IteratorEdge(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::IteratorEdge *>(sipCppV);
}


extern "C" {static void dealloc_tlp_IteratorEdge(sipSimpleWrapper *);}
static void dealloc_tlp_IteratorEdge(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_IteratorEdge(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's Python slots. */
static sipPySlotDef slots_tlp_IteratorEdge[] = {
    {(void *)slot_tlp_IteratorEdge___next__, next_slot},
    {(void *)slot_tlp_IteratorEdge___iter__, iter_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_tlp_IteratorEdge[] = {
    {SIP_MLNAME_CAST(sipName_hasNext), meth_tlp_IteratorEdge_hasNext, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_next), meth_tlp_IteratorEdge_next, METH_VARARGS, NULL}
};


sipClassTypeDef sipTypeDef_tulip_tlp_IteratorEdge = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_tlp__IteratorEdge,
        {0}
    },
    {
        sipNameNr_IteratorEdge,
        {21, 255, 0},
        2, methods_tlp_IteratorEdge,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    slots_tlp_IteratorEdge,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_tlp_IteratorEdge,
    0,
    0,
    0,
    release_tlp_IteratorEdge,
    cast_tlp_IteratorEdge,
    0,
    0,
    0
};
