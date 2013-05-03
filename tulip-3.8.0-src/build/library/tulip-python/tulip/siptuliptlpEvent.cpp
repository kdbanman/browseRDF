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
#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Observable.sip"
#include <tulip/Observable.h>
#line 26 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpEvent.cpp"

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
#line 44 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpEvent.cpp"


class siptlp_Event : public tlp::Event
{
public:
    siptlp_Event(const tlp::Observable&,tlp::Event::EventType);
    siptlp_Event(const tlp::Event&);
    ~siptlp_Event();

public:
    sipSimpleWrapper *sipPySelf;

private:
    siptlp_Event(const siptlp_Event &);
    siptlp_Event &operator = (const siptlp_Event &);
};

siptlp_Event::siptlp_Event(const tlp::Observable& a0,tlp::Event::EventType a1): tlp::Event(a0,a1), sipPySelf(0)
{
}

siptlp_Event::siptlp_Event(const tlp::Event& a0): tlp::Event(a0), sipPySelf(0)
{
}

siptlp_Event::~siptlp_Event()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_tlp_Event_sender(PyObject *, PyObject *);}
static PyObject *meth_tlp_Event_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Event *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Event, &sipCpp))
        {
            tlp::Observable *sipRes;

            sipRes = sipCpp->sender();

            return sipConvertFromType(sipRes,sipType_tlp_Observable,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Event, sipName_sender, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Event_type(PyObject *, PyObject *);}
static PyObject *meth_tlp_Event_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Event *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Event, &sipCpp))
        {
            tlp::Event::EventType sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(sipRes,sipType_tlp_Event_EventType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Event, sipName_type, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_Event(void *, const sipTypeDef *);}
static void *cast_tlp_Event(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_Event)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_Event(void *, int);}
static void release_tlp_Event(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<siptlp_Event *>(sipCppV);
    else
        delete reinterpret_cast<tlp::Event *>(sipCppV);
}


extern "C" {static void dealloc_tlp_Event(sipSimpleWrapper *);}
static void dealloc_tlp_Event(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<siptlp_Event *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_Event(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_tlp_Event(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_Event(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    siptlp_Event *sipCpp = 0;

    {
        const tlp::Observable * a0;
        tlp::Event::EventType a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9E", sipType_tlp_Observable, &a0, sipType_tlp_Event_EventType, &a1))
        {
            sipCpp = new siptlp_Event(*a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::Event * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_Event, &a0))
        {
            sipCpp = new siptlp_Event(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_tlp_Event[] = {
    {SIP_MLNAME_CAST(sipName_sender), meth_tlp_Event_sender, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_type), meth_tlp_Event_type, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_tlp_Event[] = {
    {sipName_TLP_DELETE, tlp::Event::TLP_DELETE, 52},
    {sipName_TLP_INFORMATION, tlp::Event::TLP_INFORMATION, 52},
    {sipName_TLP_INVALID, tlp::Event::TLP_INVALID, 52},
    {sipName_TLP_MODIFICATION, tlp::Event::TLP_MODIFICATION, 52},
};


sipClassTypeDef sipTypeDef_tulip_tlp_Event = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_tlp__Event,
        {0}
    },
    {
        sipNameNr_Event,
        {21, 255, 0},
        2, methods_tlp_Event,
        4, enummembers_tlp_Event,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    init_tlp_Event,
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
    dealloc_tlp_Event,
    0,
    0,
    0,
    release_tlp_Event,
    cast_tlp_Event,
    0,
    0,
    0
};
