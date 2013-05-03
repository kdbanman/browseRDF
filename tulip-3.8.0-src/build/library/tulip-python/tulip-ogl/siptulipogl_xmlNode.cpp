/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:12:56 2013
 */

#include "sipAPItulipogl.h"

#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip-ogl/GlSimpleEntity.sip"
#include <libxml/tree.h>
#line 12 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogl_xmlNode.cpp"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast__xmlNode(void *, const sipTypeDef *);}
static void *cast__xmlNode(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType__xmlNode)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release__xmlNode(void *, int);}
static void release__xmlNode(void *sipCppV,int)
{
    delete reinterpret_cast<_xmlNode *>(sipCppV);
}


extern "C" {static void assign__xmlNode(void *, SIP_SSIZE_T, const void *);}
static void assign__xmlNode(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<_xmlNode *>(sipDst)[sipDstIdx] = *reinterpret_cast<const _xmlNode *>(sipSrc);
}


extern "C" {static void *array__xmlNode(SIP_SSIZE_T);}
static void *array__xmlNode(SIP_SSIZE_T sipNrElem)
{
    return new _xmlNode[sipNrElem];
}


extern "C" {static void *copy__xmlNode(const void *, SIP_SSIZE_T);}
static void *copy__xmlNode(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new _xmlNode(reinterpret_cast<const _xmlNode *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc__xmlNode(sipSimpleWrapper *);}
static void dealloc__xmlNode(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release__xmlNode(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init__xmlNode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init__xmlNode(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    _xmlNode *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new _xmlNode();

            return sipCpp;
        }
    }

    {
        const _xmlNode * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType__xmlNode, &a0))
        {
            sipCpp = new _xmlNode(*a0);

            return sipCpp;
        }
    }

    return NULL;
}

PyDoc_STRVAR(doc__xmlNode, "\1_xmlNode()\n"
    "_xmlNode(_xmlNode)");


sipClassTypeDef sipTypeDef_tulipogl__xmlNode = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr__xmlNode,
        {0}
    },
    {
        sipNameNr__xmlNode,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc__xmlNode,
    -1,
    -1,
    0,
    0,
    init__xmlNode,
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
    dealloc__xmlNode,
    assign__xmlNode,
    array__xmlNode,
    copy__xmlNode,
    release__xmlNode,
    cast__xmlNode,
    0,
    0,
    0
};
