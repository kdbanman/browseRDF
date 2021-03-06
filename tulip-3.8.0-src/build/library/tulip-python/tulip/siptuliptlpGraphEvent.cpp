/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:11:08 2013
 */

#include "sipAPItulip.h"

#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/WithParameter.sip"
#include <tulip/WithParameter.h>
#include <tulip/ColorScale.h>
#include <tulip/StringCollection.h>
#include <tulip/IntegerProperty.h>
#include <tulip/LayoutProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ColorProperty.h>
#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
#include <tulip/WithDependency.h>
#line 31 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/PluginProgress.sip"
#include <tulip/PluginProgress.h>
#line 5 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/GraphEvent.sip"
#include <tulip/Graph.h>
#line 26 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpGraphEvent.cpp"

#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/WithParameter.sip"
#include <tulip/WithParameter.h>
#include <tulip/ColorScale.h>
#include <tulip/StringCollection.h>
#include <tulip/IntegerProperty.h>
#include <tulip/LayoutProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ColorProperty.h>
#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
#include <tulip/WithDependency.h>
#line 31 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/PluginProgress.sip"
#include <tulip/PluginProgress.h>
#line 112 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Graph.sip"
#include <tulip/Graph.h>
#line 44 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpGraphEvent.cpp"
#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/WithParameter.sip"
#include <tulip/WithParameter.h>
#include <tulip/ColorScale.h>
#include <tulip/StringCollection.h>
#include <tulip/IntegerProperty.h>
#include <tulip/LayoutProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ColorProperty.h>
#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
#include <tulip/WithDependency.h>
#line 31 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/PluginProgress.sip"
#include <tulip/PluginProgress.h>
#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Observable.sip"
#include <tulip/Observable.h>
#line 61 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpGraphEvent.cpp"
#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 65 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpGraphEvent.cpp"
#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Edge.sip"
#include <tulip/tulipconf.h>
#include <tulip/Edge.h>
#line 69 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpGraphEvent.cpp"
#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Node.sip"
#include <tulip/Node.h>
#line 72 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpGraphEvent.cpp"
#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/WithParameter.sip"
#include <tulip/WithParameter.h>
#include <tulip/ColorScale.h>
#include <tulip/StringCollection.h>
#include <tulip/IntegerProperty.h>
#include <tulip/LayoutProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ColorProperty.h>
#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
#include <tulip/WithDependency.h>
#line 31 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/PluginProgress.sip"
#include <tulip/PluginProgress.h>
#line 54 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Observable.sip"
#include <tulip/Observable.h>
#line 89 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpGraphEvent.cpp"


class siptlp_GraphEvent : public tlp::GraphEvent
{
public:
    siptlp_GraphEvent(const tlp::Graph&,tlp::GraphEvent::GraphEventType,uint,tlp::Event::EventType);
    siptlp_GraphEvent(const tlp::Graph&,tlp::GraphEvent::GraphEventType,const tlp::Graph *);
    siptlp_GraphEvent(const tlp::Graph&,tlp::GraphEvent::GraphEventType,const std::string&,tlp::Event::EventType);
    siptlp_GraphEvent(const tlp::GraphEvent&);
    ~siptlp_GraphEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    siptlp_GraphEvent(const siptlp_GraphEvent &);
    siptlp_GraphEvent &operator = (const siptlp_GraphEvent &);
};

siptlp_GraphEvent::siptlp_GraphEvent(const tlp::Graph& a0,tlp::GraphEvent::GraphEventType a1,uint a2,tlp::Event::EventType a3): tlp::GraphEvent(a0,a1,a2,a3), sipPySelf(0)
{
}

siptlp_GraphEvent::siptlp_GraphEvent(const tlp::Graph& a0,tlp::GraphEvent::GraphEventType a1,const tlp::Graph *a2): tlp::GraphEvent(a0,a1,a2), sipPySelf(0)
{
}

siptlp_GraphEvent::siptlp_GraphEvent(const tlp::Graph& a0,tlp::GraphEvent::GraphEventType a1,const std::string& a2,tlp::Event::EventType a3): tlp::GraphEvent(a0,a1,a2,a3), sipPySelf(0)
{
}

siptlp_GraphEvent::siptlp_GraphEvent(const tlp::GraphEvent& a0): tlp::GraphEvent(a0), sipPySelf(0)
{
}

siptlp_GraphEvent::~siptlp_GraphEvent()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_tlp_GraphEvent_getGraph(PyObject *, PyObject *);}
static PyObject *meth_tlp_GraphEvent_getGraph(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::GraphEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GraphEvent, &sipCpp))
        {
            tlp::Graph *sipRes;

            sipRes = sipCpp->getGraph();

            return sipConvertFromType(sipRes,sipType_tlp_Graph,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphEvent, sipName_getGraph, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_GraphEvent_getNode(PyObject *, PyObject *);}
static PyObject *meth_tlp_GraphEvent_getNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::GraphEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GraphEvent, &sipCpp))
        {
            tlp::node *sipRes;

            sipRes = new tlp::node(sipCpp->getNode());

            return sipConvertFromNewType(sipRes,sipType_tlp_node,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphEvent, sipName_getNode, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_GraphEvent_getEdge(PyObject *, PyObject *);}
static PyObject *meth_tlp_GraphEvent_getEdge(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::GraphEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GraphEvent, &sipCpp))
        {
            tlp::edge *sipRes;

            sipRes = new tlp::edge(sipCpp->getEdge());

            return sipConvertFromNewType(sipRes,sipType_tlp_edge,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphEvent, sipName_getEdge, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_GraphEvent_getSubGraph(PyObject *, PyObject *);}
static PyObject *meth_tlp_GraphEvent_getSubGraph(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::GraphEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GraphEvent, &sipCpp))
        {
            const tlp::Graph *sipRes;

            sipRes = sipCpp->getSubGraph();

            return sipConvertFromType(const_cast<tlp::Graph *>(sipRes),sipType_tlp_Graph,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphEvent, sipName_getSubGraph, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_GraphEvent_getAttributeName(PyObject *, PyObject *);}
static PyObject *meth_tlp_GraphEvent_getAttributeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::GraphEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GraphEvent, &sipCpp))
        {
            std::string *sipRes;

            sipRes = new std::string(sipCpp->getAttributeName());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphEvent, sipName_getAttributeName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_GraphEvent_getPropertyName(PyObject *, PyObject *);}
static PyObject *meth_tlp_GraphEvent_getPropertyName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::GraphEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GraphEvent, &sipCpp))
        {
            std::string *sipRes;

            sipRes = new std::string(sipCpp->getPropertyName());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphEvent, sipName_getPropertyName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_GraphEvent_getType(PyObject *, PyObject *);}
static PyObject *meth_tlp_GraphEvent_getType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::GraphEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GraphEvent, &sipCpp))
        {
            tlp::GraphEvent::GraphEventType sipRes;

            sipRes = sipCpp->getType();

            return sipConvertFromEnum(sipRes,sipType_tlp_GraphEvent_GraphEventType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GraphEvent, sipName_getType, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_GraphEvent(void *, const sipTypeDef *);}
static void *cast_tlp_GraphEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_tlp_GraphEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_tlp_Event)->ctd_cast((tlp::Event *)(tlp::GraphEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_GraphEvent(void *, int);}
static void release_tlp_GraphEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<siptlp_GraphEvent *>(sipCppV);
    else
        delete reinterpret_cast<tlp::GraphEvent *>(sipCppV);
}


extern "C" {static void dealloc_tlp_GraphEvent(sipSimpleWrapper *);}
static void dealloc_tlp_GraphEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<siptlp_GraphEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_GraphEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_tlp_GraphEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_GraphEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    siptlp_GraphEvent *sipCpp = 0;

    {
        const tlp::Graph * a0;
        tlp::GraphEvent::GraphEventType a1;
        uint a2;
        tlp::Event::EventType a3 = tlp::Event::TLP_MODIFICATION;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9Eu|E", sipType_tlp_Graph, &a0, sipType_tlp_GraphEvent_GraphEventType, &a1, &a2, sipType_tlp_Event_EventType, &a3))
        {
            sipCpp = new siptlp_GraphEvent(*a0,a1,a2,a3);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::Graph * a0;
        tlp::GraphEvent::GraphEventType a1;
        const tlp::Graph * a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9EJ8", sipType_tlp_Graph, &a0, sipType_tlp_GraphEvent_GraphEventType, &a1, sipType_tlp_Graph, &a2))
        {
            sipCpp = new siptlp_GraphEvent(*a0,a1,a2);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::Graph * a0;
        tlp::GraphEvent::GraphEventType a1;
        const std::string * a2;
        int a2State = 0;
        tlp::Event::EventType a3 = tlp::Event::TLP_MODIFICATION;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9EJ1|E", sipType_tlp_Graph, &a0, sipType_tlp_GraphEvent_GraphEventType, &a1, sipType_std_string,&a2, &a2State, sipType_tlp_Event_EventType, &a3))
        {
            sipCpp = new siptlp_GraphEvent(*a0,a1,*a2,a3);
            sipReleaseType(const_cast<std::string *>(a2),sipType_std_string,a2State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::GraphEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_GraphEvent, &a0))
        {
            sipCpp = new siptlp_GraphEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_tlp_GraphEvent[] = {{51, 255, 1}};


static PyMethodDef methods_tlp_GraphEvent[] = {
    {SIP_MLNAME_CAST(sipName_getAttributeName), meth_tlp_GraphEvent_getAttributeName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getEdge), meth_tlp_GraphEvent_getEdge, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getGraph), meth_tlp_GraphEvent_getGraph, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getNode), meth_tlp_GraphEvent_getNode, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getPropertyName), meth_tlp_GraphEvent_getPropertyName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getSubGraph), meth_tlp_GraphEvent_getSubGraph, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getType), meth_tlp_GraphEvent_getType, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_tlp_GraphEvent[] = {
    {sipName_TLP_ADD_EDGE, tlp::GraphEvent::TLP_ADD_EDGE, 57},
    {sipName_TLP_ADD_EDGES, tlp::GraphEvent::TLP_ADD_EDGES, 57},
    {sipName_TLP_ADD_INHERITED_PROPERTY, tlp::GraphEvent::TLP_ADD_INHERITED_PROPERTY, 57},
    {sipName_TLP_ADD_LOCAL_PROPERTY, tlp::GraphEvent::TLP_ADD_LOCAL_PROPERTY, 57},
    {sipName_TLP_ADD_NODE, tlp::GraphEvent::TLP_ADD_NODE, 57},
    {sipName_TLP_ADD_NODES, tlp::GraphEvent::TLP_ADD_NODES, 57},
    {sipName_TLP_ADD_SUBGRAPH, tlp::GraphEvent::TLP_ADD_SUBGRAPH, 57},
    {sipName_TLP_AFTER_DEL_INHERITED_PROPERTY, tlp::GraphEvent::TLP_AFTER_DEL_INHERITED_PROPERTY, 57},
    {sipName_TLP_AFTER_DEL_LOCAL_PROPERTY, tlp::GraphEvent::TLP_AFTER_DEL_LOCAL_PROPERTY, 57},
    {sipName_TLP_AFTER_SET_ATTRIBUTE, tlp::GraphEvent::TLP_AFTER_SET_ATTRIBUTE, 57},
    {sipName_TLP_AFTER_SET_ENDS, tlp::GraphEvent::TLP_AFTER_SET_ENDS, 57},
    {sipName_TLP_BEFORE_DEL_INHERITED_PROPERTY, tlp::GraphEvent::TLP_BEFORE_DEL_INHERITED_PROPERTY, 57},
    {sipName_TLP_BEFORE_DEL_LOCAL_PROPERTY, tlp::GraphEvent::TLP_BEFORE_DEL_LOCAL_PROPERTY, 57},
    {sipName_TLP_BEFORE_SET_ATTRIBUTE, tlp::GraphEvent::TLP_BEFORE_SET_ATTRIBUTE, 57},
    {sipName_TLP_BEFORE_SET_ENDS, tlp::GraphEvent::TLP_BEFORE_SET_ENDS, 57},
    {sipName_TLP_DEL_EDGE, tlp::GraphEvent::TLP_DEL_EDGE, 57},
    {sipName_TLP_DEL_NODE, tlp::GraphEvent::TLP_DEL_NODE, 57},
    {sipName_TLP_DEL_SUBGRAPH, tlp::GraphEvent::TLP_DEL_SUBGRAPH, 57},
    {sipName_TLP_REMOVE_ATTRIBUTE, tlp::GraphEvent::TLP_REMOVE_ATTRIBUTE, 57},
    {sipName_TLP_REVERSE_EDGE, tlp::GraphEvent::TLP_REVERSE_EDGE, 57},
};


sipClassTypeDef sipTypeDef_tulip_tlp_GraphEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_tlp__GraphEvent,
        {0}
    },
    {
        sipNameNr_GraphEvent,
        {21, 255, 0},
        7, methods_tlp_GraphEvent,
        20, enummembers_tlp_GraphEvent,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_tlp_GraphEvent,
    0,
    init_tlp_GraphEvent,
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
    dealloc_tlp_GraphEvent,
    0,
    0,
    0,
    release_tlp_GraphEvent,
    cast_tlp_GraphEvent,
    0,
    0,
    0
};
