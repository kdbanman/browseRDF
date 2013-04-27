/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Fri Apr 26 16:33:30 2013
 */

#include "sipAPItulip.h"

#line 24 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/ObservableProperty.sip"
#include <tulip/ObservableProperty.h>
#line 12 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpPropertyObserver.cpp"

#line 30 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/PropertyInterface.sip"
#include <tulip/PropertyInterface.h>
#line 16 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpPropertyObserver.cpp"
#line 30 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/Edge.sip"
#include <tulip/tulipconf.h>
#include <tulip/Edge.h>
#line 20 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpPropertyObserver.cpp"
#line 29 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/Node.sip"
#include <tulip/Node.h>
#line 23 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpPropertyObserver.cpp"


class siptlp_PropertyObserver : public tlp::PropertyObserver
{
public:
    siptlp_PropertyObserver();
    siptlp_PropertyObserver(const tlp::PropertyObserver&);
    virtual ~siptlp_PropertyObserver();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void beforeSetNodeValue(tlp::PropertyInterface *,const tlp::node);
    void afterSetNodeValue(tlp::PropertyInterface *,const tlp::node);
    void beforeSetEdgeValue(tlp::PropertyInterface *,const tlp::edge);
    void afterSetEdgeValue(tlp::PropertyInterface *,const tlp::edge);
    void beforeSetAllNodeValue(tlp::PropertyInterface *);
    void afterSetAllNodeValue(tlp::PropertyInterface *);
    void beforeSetAllEdgeValue(tlp::PropertyInterface *);
    void afterSetAllEdgeValue(tlp::PropertyInterface *);
    void destroy(tlp::PropertyInterface *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    siptlp_PropertyObserver(const siptlp_PropertyObserver &);
    siptlp_PropertyObserver &operator = (const siptlp_PropertyObserver &);

    char sipPyMethods[9];
};

siptlp_PropertyObserver::siptlp_PropertyObserver(): tlp::PropertyObserver(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_PropertyObserver::siptlp_PropertyObserver(const tlp::PropertyObserver& a0): tlp::PropertyObserver(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_PropertyObserver::~siptlp_PropertyObserver()
{
    sipCommonDtor(sipPySelf);
}

void siptlp_PropertyObserver::beforeSetNodeValue(tlp::PropertyInterface *a0,const tlp::node a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_beforeSetNodeValue);

    if (!sipMeth)
    {
        tlp::PropertyObserver::beforeSetNodeValue(a0,a1);
        return;
    }

    extern void sipVH_tulip_73(sip_gilstate_t,PyObject *,tlp::PropertyInterface *,const tlp::node);

    sipVH_tulip_73(sipGILState,sipMeth,a0,a1);
}

void siptlp_PropertyObserver::afterSetNodeValue(tlp::PropertyInterface *a0,const tlp::node a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_afterSetNodeValue);

    if (!sipMeth)
    {
        tlp::PropertyObserver::afterSetNodeValue(a0,a1);
        return;
    }

    extern void sipVH_tulip_73(sip_gilstate_t,PyObject *,tlp::PropertyInterface *,const tlp::node);

    sipVH_tulip_73(sipGILState,sipMeth,a0,a1);
}

void siptlp_PropertyObserver::beforeSetEdgeValue(tlp::PropertyInterface *a0,const tlp::edge a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_beforeSetEdgeValue);

    if (!sipMeth)
    {
        tlp::PropertyObserver::beforeSetEdgeValue(a0,a1);
        return;
    }

    extern void sipVH_tulip_72(sip_gilstate_t,PyObject *,tlp::PropertyInterface *,const tlp::edge);

    sipVH_tulip_72(sipGILState,sipMeth,a0,a1);
}

void siptlp_PropertyObserver::afterSetEdgeValue(tlp::PropertyInterface *a0,const tlp::edge a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_afterSetEdgeValue);

    if (!sipMeth)
    {
        tlp::PropertyObserver::afterSetEdgeValue(a0,a1);
        return;
    }

    extern void sipVH_tulip_72(sip_gilstate_t,PyObject *,tlp::PropertyInterface *,const tlp::edge);

    sipVH_tulip_72(sipGILState,sipMeth,a0,a1);
}

void siptlp_PropertyObserver::beforeSetAllNodeValue(tlp::PropertyInterface *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_beforeSetAllNodeValue);

    if (!sipMeth)
    {
        tlp::PropertyObserver::beforeSetAllNodeValue(a0);
        return;
    }

    extern void sipVH_tulip_71(sip_gilstate_t,PyObject *,tlp::PropertyInterface *);

    sipVH_tulip_71(sipGILState,sipMeth,a0);
}

void siptlp_PropertyObserver::afterSetAllNodeValue(tlp::PropertyInterface *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_afterSetAllNodeValue);

    if (!sipMeth)
    {
        tlp::PropertyObserver::afterSetAllNodeValue(a0);
        return;
    }

    extern void sipVH_tulip_71(sip_gilstate_t,PyObject *,tlp::PropertyInterface *);

    sipVH_tulip_71(sipGILState,sipMeth,a0);
}

void siptlp_PropertyObserver::beforeSetAllEdgeValue(tlp::PropertyInterface *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_beforeSetAllEdgeValue);

    if (!sipMeth)
    {
        tlp::PropertyObserver::beforeSetAllEdgeValue(a0);
        return;
    }

    extern void sipVH_tulip_71(sip_gilstate_t,PyObject *,tlp::PropertyInterface *);

    sipVH_tulip_71(sipGILState,sipMeth,a0);
}

void siptlp_PropertyObserver::afterSetAllEdgeValue(tlp::PropertyInterface *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_afterSetAllEdgeValue);

    if (!sipMeth)
    {
        tlp::PropertyObserver::afterSetAllEdgeValue(a0);
        return;
    }

    extern void sipVH_tulip_71(sip_gilstate_t,PyObject *,tlp::PropertyInterface *);

    sipVH_tulip_71(sipGILState,sipMeth,a0);
}

void siptlp_PropertyObserver::destroy(tlp::PropertyInterface *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_destroy);

    if (!sipMeth)
    {
        tlp::PropertyObserver::destroy(a0);
        return;
    }

    extern void sipVH_tulip_71(sip_gilstate_t,PyObject *,tlp::PropertyInterface *);

    sipVH_tulip_71(sipGILState,sipMeth,a0);
}


PyDoc_STRVAR(doc_tlp_PropertyObserver_beforeSetNodeValue, "tlp.PropertyObserver.beforeSetNodeValue(property, node)\n"
    "\n"
    "This method is called before the modification of the value associated to\n"
    "a node in an observed property.\n"
    "\n"
    ":param property: the observed property\n"
    ":type property: sub-classes of :class:`tlp.PropertyInterface`\n"
    ":param node: the node that will have its value modified\n"
    ":type node: :class:`tlp.node`");

extern "C" {static PyObject *meth_tlp_PropertyObserver_beforeSetNodeValue(PyObject *, PyObject *);}
static PyObject *meth_tlp_PropertyObserver_beforeSetNodeValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        tlp::PropertyInterface * a0;
        const tlp::node * a1;
        tlp::PropertyObserver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9", &sipSelf, sipType_tlp_PropertyObserver, &sipCpp, sipType_tlp_PropertyInterface, &a0, sipType_tlp_node, &a1))
        {
            (sipSelfWasArg ? sipCpp->tlp::PropertyObserver::beforeSetNodeValue(a0,*a1) : sipCpp->beforeSetNodeValue(a0,*a1));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PropertyObserver, sipName_beforeSetNodeValue, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_PropertyObserver_afterSetNodeValue, "tlp.PropertyObserver.afterSetNodeValue(property, node)\n"
    "\n"
    "This method is called after the modification of the value associated to\n"
    "a node in an observed property.\n"
    "\n"
    ":param property: the observed property\n"
    ":type property: sub-classes of :class:`tlp.PropertyInterface`\n"
    ":param node: the node that had its value modified\n"
    ":type node: :class:`tlp.node`");

extern "C" {static PyObject *meth_tlp_PropertyObserver_afterSetNodeValue(PyObject *, PyObject *);}
static PyObject *meth_tlp_PropertyObserver_afterSetNodeValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        tlp::PropertyInterface * a0;
        const tlp::node * a1;
        tlp::PropertyObserver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9", &sipSelf, sipType_tlp_PropertyObserver, &sipCpp, sipType_tlp_PropertyInterface, &a0, sipType_tlp_node, &a1))
        {
            (sipSelfWasArg ? sipCpp->tlp::PropertyObserver::afterSetNodeValue(a0,*a1) : sipCpp->afterSetNodeValue(a0,*a1));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PropertyObserver, sipName_afterSetNodeValue, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_PropertyObserver_beforeSetEdgeValue, "tlp.PropertyObserver.beforeSetEdgeValue(property, edge)\n"
    "\n"
    "This method is called before the modification of the value associated to\n"
    "an edge in an observed property.\n"
    "\n"
    ":param property: the observed property\n"
    ":type property: sub-classes of :class:`tlp.PropertyInterface`\n"
    ":param edge: the edge that will have its value modified\n"
    ":type edge: :class:`tlp.edge`");

extern "C" {static PyObject *meth_tlp_PropertyObserver_beforeSetEdgeValue(PyObject *, PyObject *);}
static PyObject *meth_tlp_PropertyObserver_beforeSetEdgeValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        tlp::PropertyInterface * a0;
        const tlp::edge * a1;
        tlp::PropertyObserver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9", &sipSelf, sipType_tlp_PropertyObserver, &sipCpp, sipType_tlp_PropertyInterface, &a0, sipType_tlp_edge, &a1))
        {
            (sipSelfWasArg ? sipCpp->tlp::PropertyObserver::beforeSetEdgeValue(a0,*a1) : sipCpp->beforeSetEdgeValue(a0,*a1));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PropertyObserver, sipName_beforeSetEdgeValue, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_PropertyObserver_afterSetEdgeValue, "tlp.PropertyObserver.afterSetEdgeValue(property, edge)\n"
    "\n"
    "This method is called after the modification of the value associated to\n"
    "an edge in an observed property.\n"
    "\n"
    ":param property: the observed property\n"
    ":type property: sub-classes of :class:`tlp.PropertyInterface`\n"
    ":param edge: the edge that had its value modified\n"
    ":type edge: :class:`tlp.edge`");

extern "C" {static PyObject *meth_tlp_PropertyObserver_afterSetEdgeValue(PyObject *, PyObject *);}
static PyObject *meth_tlp_PropertyObserver_afterSetEdgeValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        tlp::PropertyInterface * a0;
        const tlp::edge * a1;
        tlp::PropertyObserver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9", &sipSelf, sipType_tlp_PropertyObserver, &sipCpp, sipType_tlp_PropertyInterface, &a0, sipType_tlp_edge, &a1))
        {
            (sipSelfWasArg ? sipCpp->tlp::PropertyObserver::afterSetEdgeValue(a0,*a1) : sipCpp->afterSetEdgeValue(a0,*a1));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PropertyObserver, sipName_afterSetEdgeValue, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_PropertyObserver_beforeSetAllNodeValue, "tlp.PropertyObserver.beforeSetAllNodeValue(property)\n"
    "\n"
    "This method is called before setting the same value on all nodes in an observed property.\n"
    "\n"
    ":param property: the observed property\n"
    ":type property: sub-classes of :class:`tlp.PropertyInterface`");

extern "C" {static PyObject *meth_tlp_PropertyObserver_beforeSetAllNodeValue(PyObject *, PyObject *);}
static PyObject *meth_tlp_PropertyObserver_beforeSetAllNodeValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        tlp::PropertyInterface * a0;
        tlp::PropertyObserver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_tlp_PropertyObserver, &sipCpp, sipType_tlp_PropertyInterface, &a0))
        {
            (sipSelfWasArg ? sipCpp->tlp::PropertyObserver::beforeSetAllNodeValue(a0) : sipCpp->beforeSetAllNodeValue(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PropertyObserver, sipName_beforeSetAllNodeValue, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_PropertyObserver_afterSetAllNodeValue, "tlp.PropertyObserver.afterSetAllNodeValue(property)\n"
    "\n"
    "This method is called after setting the same value on all nodes in an observed property.\n"
    "\n"
    ":param property: the observed property\n"
    ":type property: sub-classes of :class:`tlp.PropertyInterface`");

extern "C" {static PyObject *meth_tlp_PropertyObserver_afterSetAllNodeValue(PyObject *, PyObject *);}
static PyObject *meth_tlp_PropertyObserver_afterSetAllNodeValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        tlp::PropertyInterface * a0;
        tlp::PropertyObserver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_tlp_PropertyObserver, &sipCpp, sipType_tlp_PropertyInterface, &a0))
        {
            (sipSelfWasArg ? sipCpp->tlp::PropertyObserver::afterSetAllNodeValue(a0) : sipCpp->afterSetAllNodeValue(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PropertyObserver, sipName_afterSetAllNodeValue, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_PropertyObserver_beforeSetAllEdgeValue, "tlp.PropertyObserver.beforeSetAllEdgeValue(property)\n"
    "\n"
    "This method is called before setting the same value on all edges in an observed property.\n"
    "\n"
    ":param property: the observed property\n"
    ":type property: sub-classes of :class:`tlp.PropertyInterface`");

extern "C" {static PyObject *meth_tlp_PropertyObserver_beforeSetAllEdgeValue(PyObject *, PyObject *);}
static PyObject *meth_tlp_PropertyObserver_beforeSetAllEdgeValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        tlp::PropertyInterface * a0;
        tlp::PropertyObserver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_tlp_PropertyObserver, &sipCpp, sipType_tlp_PropertyInterface, &a0))
        {
            (sipSelfWasArg ? sipCpp->tlp::PropertyObserver::beforeSetAllEdgeValue(a0) : sipCpp->beforeSetAllEdgeValue(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PropertyObserver, sipName_beforeSetAllEdgeValue, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_PropertyObserver_afterSetAllEdgeValue, "tlp.PropertyObserver.afterSetAllEdgeValue(property)\n"
    "\n"
    "This method is called after setting the same value on all edges in an observed property.\n"
    "\n"
    ":param property: the observed property\n"
    ":type property: sub-classes of :class:`tlp.PropertyInterface`");

extern "C" {static PyObject *meth_tlp_PropertyObserver_afterSetAllEdgeValue(PyObject *, PyObject *);}
static PyObject *meth_tlp_PropertyObserver_afterSetAllEdgeValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        tlp::PropertyInterface * a0;
        tlp::PropertyObserver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_tlp_PropertyObserver, &sipCpp, sipType_tlp_PropertyInterface, &a0))
        {
            (sipSelfWasArg ? sipCpp->tlp::PropertyObserver::afterSetAllEdgeValue(a0) : sipCpp->afterSetAllEdgeValue(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PropertyObserver, sipName_afterSetAllEdgeValue, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_PropertyObserver_destroy, "tlp.PropertyObserver.destroy(property)\n"
    "\n"
    "This method is called when an observed property is deleted.\n"
    "\n"
    ":param property: the observed property\n"
    ":type property: sub-classes of :class:`tlp.PropertyInterface`");

extern "C" {static PyObject *meth_tlp_PropertyObserver_destroy(PyObject *, PyObject *);}
static PyObject *meth_tlp_PropertyObserver_destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        tlp::PropertyInterface * a0;
        tlp::PropertyObserver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_tlp_PropertyObserver, &sipCpp, sipType_tlp_PropertyInterface, &a0))
        {
            (sipSelfWasArg ? sipCpp->tlp::PropertyObserver::destroy(a0) : sipCpp->destroy(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PropertyObserver, sipName_destroy, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_PropertyObserver(void *, const sipTypeDef *);}
static void *cast_tlp_PropertyObserver(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_PropertyObserver)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_PropertyObserver(void *, int);}
static void release_tlp_PropertyObserver(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<siptlp_PropertyObserver *>(sipCppV);
    else
        delete reinterpret_cast<tlp::PropertyObserver *>(sipCppV);
}


extern "C" {static void assign_tlp_PropertyObserver(void *, SIP_SSIZE_T, const void *);}
static void assign_tlp_PropertyObserver(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<tlp::PropertyObserver *>(sipDst)[sipDstIdx] = *reinterpret_cast<const tlp::PropertyObserver *>(sipSrc);
}


extern "C" {static void *array_tlp_PropertyObserver(SIP_SSIZE_T);}
static void *array_tlp_PropertyObserver(SIP_SSIZE_T sipNrElem)
{
    return new tlp::PropertyObserver[sipNrElem];
}


extern "C" {static void *copy_tlp_PropertyObserver(const void *, SIP_SSIZE_T);}
static void *copy_tlp_PropertyObserver(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new tlp::PropertyObserver(reinterpret_cast<const tlp::PropertyObserver *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_tlp_PropertyObserver(sipSimpleWrapper *);}
static void dealloc_tlp_PropertyObserver(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<siptlp_PropertyObserver *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_PropertyObserver(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_tlp_PropertyObserver(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_PropertyObserver(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    siptlp_PropertyObserver *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new siptlp_PropertyObserver();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::PropertyObserver * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_PropertyObserver, &a0))
        {
            sipCpp = new siptlp_PropertyObserver(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_tlp_PropertyObserver[] = {
    {SIP_MLNAME_CAST(sipName_afterSetAllEdgeValue), meth_tlp_PropertyObserver_afterSetAllEdgeValue, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_PropertyObserver_afterSetAllEdgeValue)},
    {SIP_MLNAME_CAST(sipName_afterSetAllNodeValue), meth_tlp_PropertyObserver_afterSetAllNodeValue, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_PropertyObserver_afterSetAllNodeValue)},
    {SIP_MLNAME_CAST(sipName_afterSetEdgeValue), meth_tlp_PropertyObserver_afterSetEdgeValue, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_PropertyObserver_afterSetEdgeValue)},
    {SIP_MLNAME_CAST(sipName_afterSetNodeValue), meth_tlp_PropertyObserver_afterSetNodeValue, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_PropertyObserver_afterSetNodeValue)},
    {SIP_MLNAME_CAST(sipName_beforeSetAllEdgeValue), meth_tlp_PropertyObserver_beforeSetAllEdgeValue, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_PropertyObserver_beforeSetAllEdgeValue)},
    {SIP_MLNAME_CAST(sipName_beforeSetAllNodeValue), meth_tlp_PropertyObserver_beforeSetAllNodeValue, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_PropertyObserver_beforeSetAllNodeValue)},
    {SIP_MLNAME_CAST(sipName_beforeSetEdgeValue), meth_tlp_PropertyObserver_beforeSetEdgeValue, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_PropertyObserver_beforeSetEdgeValue)},
    {SIP_MLNAME_CAST(sipName_beforeSetNodeValue), meth_tlp_PropertyObserver_beforeSetNodeValue, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_PropertyObserver_beforeSetNodeValue)},
    {SIP_MLNAME_CAST(sipName_destroy), meth_tlp_PropertyObserver_destroy, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_PropertyObserver_destroy)}
};

PyDoc_STRVAR(doc_tlp_PropertyObserver, ".. versionadded:: 3.8\n"
    "\n"
    "Derived implementation of that class receives a message (through a callback/handler method)\n"
    "after each modification of an object deriving from :class:`tlp.PropertyInterface`.\n"
    "\n"
    "To receive notifications, the :class:`tlp.PropertyObserver` object must\n"
    "first be connected to the :class:`tlp.Graph` object.\n"
    "This is done by calling the :meth:`tlp.PropertyInterface.addPropertyObserver` method.\n"
    "\n"
    "Depending on which messages you want to receive, you need to override\n"
    "different methods of :class:`tlp.PropertyObserver`.\n"
    "\n"
    "The Observer pattern is described in the lecture notes and pp293-304\n"
    "of Design Patterns by Gamma, Helm, Johnson, and Vlissides. It is a\n"
    "framework for handling state dependency between observer and observed\n"
    "object.");


sipClassTypeDef sipTypeDef_tulip_tlp_PropertyObserver = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__PropertyObserver,
        {0}
    },
    {
        sipNameNr_PropertyObserver,
        {21, 255, 0},
        9, methods_tlp_PropertyObserver,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_tlp_PropertyObserver,
    -1,
    -1,
    0,
    0,
    init_tlp_PropertyObserver,
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
    dealloc_tlp_PropertyObserver,
    assign_tlp_PropertyObserver,
    array_tlp_PropertyObserver,
    copy_tlp_PropertyObserver,
    release_tlp_PropertyObserver,
    cast_tlp_PropertyObserver,
    0,
    0,
    0
};
