/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Fri Apr 26 16:33:30 2013
 */

#include "sipAPItulip.h"

#line 45 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/MapIterator.sip"
#include <tulip/MapIterator.h>
#line 12 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpNodeMapIterator.cpp"

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
#line 30 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpNodeMapIterator.cpp"
#line 29 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/Node.sip"
#include <tulip/Node.h>
#line 33 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpNodeMapIterator.cpp"
#line 31 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/Iterator.sip"
#include <tulip/Iterator.h>
#line 36 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpNodeMapIterator.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_NodeMapIterator(void *, const sipTypeDef *);}
static void *cast_tlp_NodeMapIterator(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_tlp_NodeMapIterator)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_tlp_IteratorNode)->ctd_cast((tlp::IteratorNode *)(tlp::NodeMapIterator *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_NodeMapIterator(void *, int);}
static void release_tlp_NodeMapIterator(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::NodeMapIterator *>(sipCppV);
}


extern "C" {static void dealloc_tlp_NodeMapIterator(sipSimpleWrapper *);}
static void dealloc_tlp_NodeMapIterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_NodeMapIterator(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_tlp_NodeMapIterator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_NodeMapIterator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    tlp::NodeMapIterator *sipCpp = 0;

    {
        tlp::Graph * a0;
        tlp::node * a1;
        tlp::node * a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8J9J9", sipType_tlp_Graph, &a0, sipType_tlp_node, &a1, sipType_tlp_node, &a2))
        {
            sipCpp = new tlp::NodeMapIterator(a0,*a1,*a2);

            return sipCpp;
        }
    }

    {
        const tlp::NodeMapIterator * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_NodeMapIterator, &a0))
        {
            sipCpp = new tlp::NodeMapIterator(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_tlp_NodeMapIterator[] = {{67, 255, 1}};


sipClassTypeDef sipTypeDef_tulip_tlp_NodeMapIterator = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__NodeMapIterator,
        {0}
    },
    {
        sipNameNr_NodeMapIterator,
        {21, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_tlp_NodeMapIterator,
    0,
    init_tlp_NodeMapIterator,
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
    dealloc_tlp_NodeMapIterator,
    0,
    0,
    0,
    release_tlp_NodeMapIterator,
    cast_tlp_NodeMapIterator,
    0,
    0,
    0
};
