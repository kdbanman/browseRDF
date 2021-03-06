/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:11:08 2013
 */

#include "sipAPItulip.h"

#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Edge.sip"
#include <tulip/tulipconf.h>
#include <tulip/Edge.h>
#line 13 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpedge.cpp"



PyDoc_STRVAR(doc_tlp_edge_isValid, "tlp.edge.isValid()\n"
    "\n"
    "Returns :const:`True` if the edge is a valid one, meaning it is attached to a graph.\n"
    "\n"
    ":rtype: boolean ");

extern "C" {static PyObject *meth_tlp_edge_isValid(PyObject *, PyObject *);}
static PyObject *meth_tlp_edge_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::edge *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_edge, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_edge, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static long slot_tlp_edge___hash__(PyObject *);}
static long slot_tlp_edge___hash__(PyObject *sipSelf)
{
    tlp::edge *sipCpp = reinterpret_cast<tlp::edge *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_edge));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 72 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Edge.sip"
        return static_cast<long>(sipCpp->id);
#line 63 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpedge.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_tlp_edge___repr__(PyObject *);}
static PyObject *slot_tlp_edge___repr__(PyObject *sipSelf)
{
    tlp::edge *sipCpp = reinterpret_cast<tlp::edge *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_edge));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 60 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Edge.sip"
		std::ostringstream oss;
		oss << "<edge " << sipCpp->id << ">";
        std::string s = oss.str();
#if PY_MAJOR_VERSION >= 3
        sipRes = PyUnicode_FromString(s.c_str());
#else
        sipRes = PyString_FromString(s.c_str());
#endif
#line 95 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpedge.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_tlp_edge___ne__(PyObject *,PyObject *);}
static PyObject *slot_tlp_edge___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    tlp::edge *sipCpp = reinterpret_cast<tlp::edge *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_edge));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const tlp::edge * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_tlp_edge, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->tlp::edge::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,ne_slot,sipType_tlp_edge,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_tlp_edge___eq__(PyObject *,PyObject *);}
static PyObject *slot_tlp_edge___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    tlp::edge *sipCpp = reinterpret_cast<tlp::edge *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_edge));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const tlp::edge * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_tlp_edge, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->tlp::edge::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,eq_slot,sipType_tlp_edge,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_edge(void *, const sipTypeDef *);}
static void *cast_tlp_edge(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_edge)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_edge(void *, int);}
static void release_tlp_edge(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::edge *>(sipCppV);
}


extern "C" {static void assign_tlp_edge(void *, SIP_SSIZE_T, const void *);}
static void assign_tlp_edge(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<tlp::edge *>(sipDst)[sipDstIdx] = *reinterpret_cast<const tlp::edge *>(sipSrc);
}


extern "C" {static void *array_tlp_edge(SIP_SSIZE_T);}
static void *array_tlp_edge(SIP_SSIZE_T sipNrElem)
{
    return new tlp::edge[sipNrElem];
}


extern "C" {static void *copy_tlp_edge(const void *, SIP_SSIZE_T);}
static void *copy_tlp_edge(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new tlp::edge(reinterpret_cast<const tlp::edge *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_tlp_edge(sipSimpleWrapper *);}
static void dealloc_tlp_edge(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_edge(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_tlp_edge(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_edge(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    tlp::edge *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new tlp::edge();

            return sipCpp;
        }
    }

    {
        uint a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "u", &a0))
        {
            sipCpp = new tlp::edge(a0);

            return sipCpp;
        }
    }

    {
        const tlp::edge * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_edge, &a0))
        {
            sipCpp = new tlp::edge(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_tlp_edge[] = {
    {(void *)slot_tlp_edge___hash__, hash_slot},
    {(void *)slot_tlp_edge___repr__, repr_slot},
    {(void *)slot_tlp_edge___ne__, ne_slot},
    {(void *)slot_tlp_edge___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_tlp_edge[] = {
    {SIP_MLNAME_CAST(sipName_isValid), meth_tlp_edge_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_edge_isValid)}
};


extern "C" {static PyObject *varget_tlp_edge_id(void *, PyObject *);}
static PyObject *varget_tlp_edge_id(void *sipSelf, PyObject *)
{
    uint sipVal;
    tlp::edge *sipCpp = reinterpret_cast<tlp::edge *>(sipSelf);

    sipVal = sipCpp->id;

    return PyLong_FromUnsignedLong(sipVal);
}


extern "C" {static int varset_tlp_edge_id(void *, PyObject *, PyObject *);}
static int varset_tlp_edge_id(void *sipSelf, PyObject *sipPy, PyObject *)
{
    uint sipVal;
    tlp::edge *sipCpp = reinterpret_cast<tlp::edge *>(sipSelf);

    sipVal = (uint)sipLong_AsUnsignedLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->id = sipVal;

    return 0;
}

sipVariableDef variables_tlp_edge[] = {
    {InstanceVariable, sipName_id, (PyMethodDef *)varget_tlp_edge_id, (PyMethodDef *)varset_tlp_edge_id, NULL, NULL},
};

PyDoc_STRVAR(doc_tlp_edge, "An instance of this class represent an edge in a Tulip graph. It encapsulates an integer identifier.\n"
    "Use specific methods in the :class:`tlp.Graph` class to get references on such objects (\n"
    "for instance :meth:`tlp.Graph.addEdge`, :meth:`tlp.Graph.getEdges`, :meth:`tlp.Graph.getInEdges`, ...).\n"
    "Edge objects can be used as keys in a Python dictionnary.\n"
    "\n"
    "The edge identifier can be accessed through the **id** class member.");


sipClassTypeDef sipTypeDef_tulip_tlp_edge = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__edge,
        {0}
    },
    {
        sipNameNr_edge,
        {21, 255, 0},
        1, methods_tlp_edge,
        0, 0,
        1, variables_tlp_edge,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_tlp_edge,
    -1,
    -1,
    0,
    slots_tlp_edge,
    init_tlp_edge,
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
    dealloc_tlp_edge,
    assign_tlp_edge,
    array_tlp_edge,
    copy_tlp_edge,
    release_tlp_edge,
    cast_tlp_edge,
    0,
    0,
    0
};
