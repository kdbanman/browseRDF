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
#line 54 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Observable.sip"
#include <tulip/Observable.h>
#line 26 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpObservable.cpp"

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
#line 44 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpObservable.cpp"
#line 37 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"
#include <vector>
#line 47 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpObservable.cpp"
#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Node.sip"
#include <tulip/Node.h>
#line 50 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpObservable.cpp"


class siptlp_Observable : public tlp::Observable
{
public:
    siptlp_Observable(const tlp::Observable&);
    siptlp_Observable();
    virtual ~siptlp_Observable();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtectVirt_treatEvents(bool,const std::vector<tlp::Event>&);
    void sipProtectVirt_treatEvent(bool,const tlp::Event&);
    void sipProtect_sendEvent(const tlp::Event&);
    void sipProtect_observableDeleted();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void treatEvents(const std::vector<tlp::Event>&);
    void treatEvent(const tlp::Event&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    siptlp_Observable(const siptlp_Observable &);
    siptlp_Observable &operator = (const siptlp_Observable &);

    char sipPyMethods[2];
};

siptlp_Observable::siptlp_Observable(const tlp::Observable& a0): tlp::Observable(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_Observable::siptlp_Observable(): tlp::Observable(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_Observable::~siptlp_Observable()
{
    sipCommonDtor(sipPySelf);
}

void siptlp_Observable::treatEvents(const std::vector<tlp::Event>& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_treatEvents);

    if (!sipMeth)
    {
        tlp::Observable::treatEvents(a0);
        return;
    }

    extern void sipVH_tulip_1(sip_gilstate_t,PyObject *,const std::vector<tlp::Event>&);

    sipVH_tulip_1(sipGILState,sipMeth,a0);
}

void siptlp_Observable::treatEvent(const tlp::Event& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_treatEvent);

    if (!sipMeth)
    {
        tlp::Observable::treatEvent(a0);
        return;
    }

    extern void sipVH_tulip_0(sip_gilstate_t,PyObject *,const tlp::Event&);

    sipVH_tulip_0(sipGILState,sipMeth,a0);
}

void siptlp_Observable::sipProtectVirt_treatEvents(bool sipSelfWasArg,const std::vector<tlp::Event>& a0)
{
    (sipSelfWasArg ? tlp::Observable::treatEvents(a0) : treatEvents(a0));
}

void siptlp_Observable::sipProtectVirt_treatEvent(bool sipSelfWasArg,const tlp::Event& a0)
{
    (sipSelfWasArg ? tlp::Observable::treatEvent(a0) : treatEvent(a0));
}

void siptlp_Observable::sipProtect_sendEvent(const tlp::Event& a0)
{
    tlp::Observable::sendEvent(a0);
}

void siptlp_Observable::sipProtect_observableDeleted()
{
    tlp::Observable::observableDeleted();
}


extern "C" {static PyObject *meth_tlp_Observable_getObject(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_getObject(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::node * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_tlp_node, &a0))
        {
            tlp::Observable *sipRes;

            sipRes = tlp::Observable::getObject(*a0);

            return sipConvertFromType(sipRes,sipType_tlp_Observable,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_getObject, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Observable_isAlive(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_isAlive(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::node * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_tlp_node, &a0))
        {
            bool sipRes;

            sipRes = tlp::Observable::isAlive(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_isAlive, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Observable_addObserver(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_addObserver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Observable * a0;
        const tlp::Observable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_tlp_Observable, &sipCpp, sipType_tlp_Observable, &a0))
        {
            sipCpp->addObserver(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_addObserver, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Observable_addListener(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_addListener(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Observable * a0;
        const tlp::Observable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_tlp_Observable, &sipCpp, sipType_tlp_Observable, &a0))
        {
            sipCpp->addListener(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_addListener, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Observable_removeObserver(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_removeObserver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Observable * a0;
        const tlp::Observable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_tlp_Observable, &sipCpp, sipType_tlp_Observable, &a0))
        {
            sipCpp->removeObserver(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_removeObserver, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Observable_removeListener(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_removeListener(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Observable * a0;
        const tlp::Observable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_tlp_Observable, &sipCpp, sipType_tlp_Observable, &a0))
        {
            sipCpp->removeListener(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_removeListener, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Observable_holdObservers(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_holdObservers(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            tlp::Observable::holdObservers();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_holdObservers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Observable_unholdObservers(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_unholdObservers(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            tlp::Observable::unholdObservers();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_unholdObservers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Observable_observersHoldCounter(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_observersHoldCounter(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            uint sipRes;

            sipRes = tlp::Observable::observersHoldCounter();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_observersHoldCounter, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Observable_treatEvents(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_treatEvents(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const std::vector<tlp::Event> * a0;
        int a0State = 0;
        siptlp_Observable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_tlp_Observable, &sipCpp, sipType_std_vector_0100tlp_Event,&a0, &a0State))
        {
            sipCpp->sipProtectVirt_treatEvents(sipSelfWasArg,*a0);
            sipReleaseType(const_cast<std::vector<tlp::Event> *>(a0),sipType_std_vector_0100tlp_Event,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_treatEvents, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Observable_treatEvent(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_treatEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const tlp::Event * a0;
        siptlp_Observable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_tlp_Observable, &sipCpp, sipType_tlp_Event, &a0))
        {
            sipCpp->sipProtectVirt_treatEvent(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_treatEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Observable_sendEvent(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_sendEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Event * a0;
        siptlp_Observable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_tlp_Observable, &sipCpp, sipType_tlp_Event, &a0))
        {
            sipCpp->sipProtect_sendEvent(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_sendEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Observable_observableDeleted(PyObject *, PyObject *);}
static PyObject *meth_tlp_Observable_observableDeleted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        siptlp_Observable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Observable, &sipCpp))
        {
            sipCpp->sipProtect_observableDeleted();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Observable, sipName_observableDeleted, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_Observable(void *, const sipTypeDef *);}
static void *cast_tlp_Observable(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_Observable)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_Observable(void *, int);}
static void release_tlp_Observable(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<siptlp_Observable *>(sipCppV);
}


extern "C" {static void dealloc_tlp_Observable(sipSimpleWrapper *);}
static void dealloc_tlp_Observable(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<siptlp_Observable *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_Observable(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_tlp_Observable(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_Observable(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    siptlp_Observable *sipCpp = 0;

    {
        const tlp::Observable * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_Observable, &a0))
        {
            sipCpp = new siptlp_Observable(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new siptlp_Observable();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_tlp_Observable[] = {
    {SIP_MLNAME_CAST(sipName_addListener), meth_tlp_Observable_addListener, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_addObserver), meth_tlp_Observable_addObserver, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getObject), meth_tlp_Observable_getObject, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_holdObservers), meth_tlp_Observable_holdObservers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isAlive), meth_tlp_Observable_isAlive, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_observableDeleted), meth_tlp_Observable_observableDeleted, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_observersHoldCounter), meth_tlp_Observable_observersHoldCounter, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeListener), meth_tlp_Observable_removeListener, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeObserver), meth_tlp_Observable_removeObserver, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_sendEvent), meth_tlp_Observable_sendEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_treatEvent), meth_tlp_Observable_treatEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_treatEvents), meth_tlp_Observable_treatEvents, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_unholdObservers), meth_tlp_Observable_unholdObservers, METH_VARARGS, NULL}
};


sipClassTypeDef sipTypeDef_tulip_tlp_Observable = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__Observable,
        {0}
    },
    {
        sipNameNr_Observable,
        {21, 255, 0},
        13, methods_tlp_Observable,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    init_tlp_Observable,
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
    dealloc_tlp_Observable,
    0,
    0,
    0,
    release_tlp_Observable,
    cast_tlp_Observable,
    0,
    0,
    0
};
