/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Fri Apr 26 16:33:30 2013
 */

#include "sipAPItulip.h"

#line 30 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/PluginContext.sip"
#include <tulip/PluginContext.h>
#line 12 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpAlgorithmContext.cpp"

#line 28 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithParameter.sip"
#include <tulip/WithParameter.h>
#include <tulip/ColorScale.h>
#include <tulip/StringCollection.h>
#include <tulip/IntegerProperty.h>
#include <tulip/LayoutProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ColorProperty.h>
#line 28 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
#include <tulip/WithDependency.h>
#line 31 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/PluginProgress.sip"
#include <tulip/PluginProgress.h>
#line 112 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/Graph.sip"
#include <tulip/Graph.h>
#line 30 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpAlgorithmContext.cpp"
#line 28 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithParameter.sip"
#include <tulip/WithParameter.h>
#include <tulip/ColorScale.h>
#include <tulip/StringCollection.h>
#include <tulip/IntegerProperty.h>
#include <tulip/LayoutProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ColorProperty.h>
#line 28 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
#include <tulip/WithDependency.h>
#line 31 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/PluginProgress.sip"
#include <tulip/PluginProgress.h>
#line 45 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpAlgorithmContext.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_AlgorithmContext(void *, const sipTypeDef *);}
static void *cast_tlp_AlgorithmContext(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_AlgorithmContext)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_AlgorithmContext(void *, int);}
static void release_tlp_AlgorithmContext(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::AlgorithmContext *>(sipCppV);
}


extern "C" {static void assign_tlp_AlgorithmContext(void *, SIP_SSIZE_T, const void *);}
static void assign_tlp_AlgorithmContext(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<tlp::AlgorithmContext *>(sipDst)[sipDstIdx] = *reinterpret_cast<const tlp::AlgorithmContext *>(sipSrc);
}


extern "C" {static void *array_tlp_AlgorithmContext(SIP_SSIZE_T);}
static void *array_tlp_AlgorithmContext(SIP_SSIZE_T sipNrElem)
{
    return new tlp::AlgorithmContext[sipNrElem];
}


extern "C" {static void *copy_tlp_AlgorithmContext(const void *, SIP_SSIZE_T);}
static void *copy_tlp_AlgorithmContext(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new tlp::AlgorithmContext(reinterpret_cast<const tlp::AlgorithmContext *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_tlp_AlgorithmContext(sipSimpleWrapper *);}
static void dealloc_tlp_AlgorithmContext(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_AlgorithmContext(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_tlp_AlgorithmContext(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_AlgorithmContext(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    tlp::AlgorithmContext *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new tlp::AlgorithmContext();

            return sipCpp;
        }
    }

    {
        const tlp::AlgorithmContext * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_AlgorithmContext, &a0))
        {
            sipCpp = new tlp::AlgorithmContext(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_tlp_AlgorithmContext_dataSet(void *, PyObject *);}
static PyObject *varget_tlp_AlgorithmContext_dataSet(void *sipSelf, PyObject *)
{
    tlp::DataSet *sipVal;
    tlp::AlgorithmContext *sipCpp = reinterpret_cast<tlp::AlgorithmContext *>(sipSelf);

    sipVal = sipCpp->dataSet;

    return sipConvertFromType(sipVal,sipType_tlp_DataSet, NULL);
}


extern "C" {static int varset_tlp_AlgorithmContext_dataSet(void *, PyObject *, PyObject *);}
static int varset_tlp_AlgorithmContext_dataSet(void *sipSelf, PyObject *sipPy, PyObject *)
{
    tlp::DataSet *sipVal;
    tlp::AlgorithmContext *sipCpp = reinterpret_cast<tlp::AlgorithmContext *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<tlp::DataSet *>(sipForceConvertToType(sipPy,sipType_tlp_DataSet,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->dataSet = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_tlp_AlgorithmContext_graph(void *, PyObject *);}
static PyObject *varget_tlp_AlgorithmContext_graph(void *sipSelf, PyObject *)
{
    tlp::Graph *sipVal;
    tlp::AlgorithmContext *sipCpp = reinterpret_cast<tlp::AlgorithmContext *>(sipSelf);

    sipVal = sipCpp->graph;

    return sipConvertFromType(sipVal,sipType_tlp_Graph, NULL);
}


extern "C" {static int varset_tlp_AlgorithmContext_graph(void *, PyObject *, PyObject *);}
static int varset_tlp_AlgorithmContext_graph(void *sipSelf, PyObject *sipPy, PyObject *)
{
    tlp::Graph *sipVal;
    tlp::AlgorithmContext *sipCpp = reinterpret_cast<tlp::AlgorithmContext *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<tlp::Graph *>(sipForceConvertToType(sipPy,sipType_tlp_Graph,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->graph = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_tlp_AlgorithmContext_pluginProgress(void *, PyObject *);}
static PyObject *varget_tlp_AlgorithmContext_pluginProgress(void *sipSelf, PyObject *)
{
    tlp::PluginProgress *sipVal;
    tlp::AlgorithmContext *sipCpp = reinterpret_cast<tlp::AlgorithmContext *>(sipSelf);

    sipVal = sipCpp->pluginProgress;

    return sipConvertFromType(sipVal,sipType_tlp_PluginProgress, NULL);
}


extern "C" {static int varset_tlp_AlgorithmContext_pluginProgress(void *, PyObject *, PyObject *);}
static int varset_tlp_AlgorithmContext_pluginProgress(void *sipSelf, PyObject *sipPy, PyObject *)
{
    tlp::PluginProgress *sipVal;
    tlp::AlgorithmContext *sipCpp = reinterpret_cast<tlp::AlgorithmContext *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<tlp::PluginProgress *>(sipForceConvertToType(sipPy,sipType_tlp_PluginProgress,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->pluginProgress = sipVal;

    return 0;
}

sipVariableDef variables_tlp_AlgorithmContext[] = {
    {InstanceVariable, sipName_dataSet, (PyMethodDef *)varget_tlp_AlgorithmContext_dataSet, (PyMethodDef *)varset_tlp_AlgorithmContext_dataSet, NULL, NULL},
    {InstanceVariable, sipName_graph, (PyMethodDef *)varget_tlp_AlgorithmContext_graph, (PyMethodDef *)varset_tlp_AlgorithmContext_graph, NULL, NULL},
    {InstanceVariable, sipName_pluginProgress, (PyMethodDef *)varget_tlp_AlgorithmContext_pluginProgress, (PyMethodDef *)varset_tlp_AlgorithmContext_pluginProgress, NULL, NULL},
};


sipClassTypeDef sipTypeDef_tulip_tlp_AlgorithmContext = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__AlgorithmContext,
        {0}
    },
    {
        sipNameNr_AlgorithmContext,
        {21, 255, 0},
        0, 0,
        0, 0,
        3, variables_tlp_AlgorithmContext,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    init_tlp_AlgorithmContext,
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
    dealloc_tlp_AlgorithmContext,
    assign_tlp_AlgorithmContext,
    array_tlp_AlgorithmContext,
    copy_tlp_AlgorithmContext,
    release_tlp_AlgorithmContext,
    cast_tlp_AlgorithmContext,
    0,
    0,
    0
};
