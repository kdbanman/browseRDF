/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Mon Apr 29 01:46:11 2013
 */

#include "sipAPItulip.h"

#line 84 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/ImportModule.sip"
#include <tulip/ImportModule.h>
#line 12 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpImportModuleFactory.cpp"

#line 29 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 17 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpImportModuleFactory.cpp"
#line 35 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/ImportModule.sip"
#include <tulip/ImportModule.h>
#line 20 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpImportModuleFactory.cpp"
#line 30 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/PluginContext.sip"
#include <tulip/PluginContext.h>
#line 23 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpImportModuleFactory.cpp"


class siptlp_ImportModuleFactory : public tlp::ImportModuleFactory
{
public:
    siptlp_ImportModuleFactory();
    siptlp_ImportModuleFactory(const tlp::ImportModuleFactory&);
    virtual ~siptlp_ImportModuleFactory();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    tlp::ImportModule * createPluginObject(tlp::AlgorithmContext);
    std::string getMajor() const;
    std::string getMinor() const;
    std::string getTulipMajor() const;
    std::string getTulipMinor() const;
    std::string getName() const;
    std::string getGroup() const;
    std::string getAuthor() const;
    std::string getDate() const;
    std::string getInfo() const;
    std::string getRelease() const;
    std::string getTulipRelease() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    siptlp_ImportModuleFactory(const siptlp_ImportModuleFactory &);
    siptlp_ImportModuleFactory &operator = (const siptlp_ImportModuleFactory &);

    char sipPyMethods[12];
};

siptlp_ImportModuleFactory::siptlp_ImportModuleFactory(): tlp::ImportModuleFactory(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_ImportModuleFactory::siptlp_ImportModuleFactory(const tlp::ImportModuleFactory& a0): tlp::ImportModuleFactory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_ImportModuleFactory::~siptlp_ImportModuleFactory()
{
    sipCommonDtor(sipPySelf);
}

tlp::ImportModule * siptlp_ImportModuleFactory::createPluginObject(tlp::AlgorithmContext a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_ImportModuleFactory,sipName_createPluginObject);

    if (!sipMeth)
        return 0;

    extern tlp::ImportModule * sipVH_tulip_76(sip_gilstate_t,PyObject *,tlp::AlgorithmContext);

    return sipVH_tulip_76(sipGILState,sipMeth,a0);
}

std::string siptlp_ImportModuleFactory::getMajor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_getMajor);

    if (!sipMeth)
        return tlp::ImportModuleFactory::getMajor();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_ImportModuleFactory::getMinor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_getMinor);

    if (!sipMeth)
        return tlp::ImportModuleFactory::getMinor();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_ImportModuleFactory::getTulipMajor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_getTulipMajor);

    if (!sipMeth)
        return tlp::ImportModuleFactory::getTulipMajor();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_ImportModuleFactory::getTulipMinor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,NULL,sipName_getTulipMinor);

    if (!sipMeth)
        return tlp::ImportModuleFactory::getTulipMinor();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_ImportModuleFactory::getName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_ImportModuleFactory,sipName_getName);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_ImportModuleFactory::getGroup() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_ImportModuleFactory,sipName_getGroup);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_ImportModuleFactory::getAuthor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_ImportModuleFactory,sipName_getAuthor);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_ImportModuleFactory::getDate() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_ImportModuleFactory,sipName_getDate);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_ImportModuleFactory::getInfo() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_ImportModuleFactory,sipName_getInfo);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_ImportModuleFactory::getRelease() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_ImportModuleFactory,sipName_getRelease);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_ImportModuleFactory::getTulipRelease() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,sipName_ImportModuleFactory,sipName_getTulipRelease);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}


extern "C" {static PyObject *meth_tlp_ImportModuleFactory_createPluginObject(PyObject *, PyObject *);}
static PyObject *meth_tlp_ImportModuleFactory_createPluginObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        tlp::AlgorithmContext * a0;
        tlp::ImportModuleFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_tlp_ImportModuleFactory, &sipCpp, sipType_tlp_AlgorithmContext, &a0))
        {
            tlp::ImportModule *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_ImportModuleFactory, sipName_createPluginObject);
                return NULL;
            }

            sipRes = sipCpp->createPluginObject(*a0);

            return sipConvertFromNewType(sipRes,sipType_tlp_ImportModule,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ImportModuleFactory, sipName_createPluginObject, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_ImportModuleFactory_getMajor(PyObject *, PyObject *);}
static PyObject *meth_tlp_ImportModuleFactory_getMajor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const tlp::ImportModuleFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_ImportModuleFactory, &sipCpp))
        {
            std::string *sipRes;

            sipRes = new std::string((sipSelfWasArg ? sipCpp->tlp::ImportModuleFactory::getMajor() : sipCpp->getMajor()));

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ImportModuleFactory, sipName_getMajor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_ImportModuleFactory_getMinor(PyObject *, PyObject *);}
static PyObject *meth_tlp_ImportModuleFactory_getMinor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const tlp::ImportModuleFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_ImportModuleFactory, &sipCpp))
        {
            std::string *sipRes;

            sipRes = new std::string((sipSelfWasArg ? sipCpp->tlp::ImportModuleFactory::getMinor() : sipCpp->getMinor()));

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ImportModuleFactory, sipName_getMinor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_ImportModuleFactory_getTulipMajor(PyObject *, PyObject *);}
static PyObject *meth_tlp_ImportModuleFactory_getTulipMajor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const tlp::ImportModuleFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_ImportModuleFactory, &sipCpp))
        {
            std::string *sipRes;

            sipRes = new std::string((sipSelfWasArg ? sipCpp->tlp::ImportModuleFactory::getTulipMajor() : sipCpp->getTulipMajor()));

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ImportModuleFactory, sipName_getTulipMajor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_ImportModuleFactory_getTulipMinor(PyObject *, PyObject *);}
static PyObject *meth_tlp_ImportModuleFactory_getTulipMinor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const tlp::ImportModuleFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_ImportModuleFactory, &sipCpp))
        {
            std::string *sipRes;

            sipRes = new std::string((sipSelfWasArg ? sipCpp->tlp::ImportModuleFactory::getTulipMinor() : sipCpp->getTulipMinor()));

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ImportModuleFactory, sipName_getTulipMinor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_ImportModuleFactory_registerPlugin(PyObject *, PyObject *);}
static PyObject *meth_tlp_ImportModuleFactory_registerPlugin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::ImportModuleFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_ImportModuleFactory, &sipCpp))
        {
#line 101 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/ImportModule.sip"
	sipCpp->initFactory();
	sipCpp->factory->registerPlugin(sipCpp);
#line 407 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpImportModuleFactory.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ImportModuleFactory, sipName_registerPlugin, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_ImportModuleFactory(void *, const sipTypeDef *);}
static void *cast_tlp_ImportModuleFactory(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_tlp_ImportModuleFactory)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_tlp_PluginInfoInterface)->ctd_cast((tlp::PluginInfoInterface *)(tlp::ImportModuleFactory *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_ImportModuleFactory(void *, int);}
static void release_tlp_ImportModuleFactory(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<siptlp_ImportModuleFactory *>(sipCppV);
    else
        delete reinterpret_cast<tlp::ImportModuleFactory *>(sipCppV);
}


extern "C" {static void dealloc_tlp_ImportModuleFactory(sipSimpleWrapper *);}
static void dealloc_tlp_ImportModuleFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<siptlp_ImportModuleFactory *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_ImportModuleFactory(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_tlp_ImportModuleFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_ImportModuleFactory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    siptlp_ImportModuleFactory *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new siptlp_ImportModuleFactory();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::ImportModuleFactory * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_ImportModuleFactory, &a0))
        {
            sipCpp = new siptlp_ImportModuleFactory(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_tlp_ImportModuleFactory[] = {{81, 255, 1}};


static PyMethodDef methods_tlp_ImportModuleFactory[] = {
    {SIP_MLNAME_CAST(sipName_createPluginObject), meth_tlp_ImportModuleFactory_createPluginObject, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getMajor), meth_tlp_ImportModuleFactory_getMajor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getMinor), meth_tlp_ImportModuleFactory_getMinor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getTulipMajor), meth_tlp_ImportModuleFactory_getTulipMajor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getTulipMinor), meth_tlp_ImportModuleFactory_getTulipMinor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_registerPlugin), meth_tlp_ImportModuleFactory_registerPlugin, METH_VARARGS, NULL}
};


sipClassTypeDef sipTypeDef_tulip_tlp_ImportModuleFactory = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_tlp__ImportModuleFactory,
        {0}
    },
    {
        sipNameNr_ImportModuleFactory,
        {21, 255, 0},
        6, methods_tlp_ImportModuleFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_tlp_ImportModuleFactory,
    0,
    init_tlp_ImportModuleFactory,
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
    dealloc_tlp_ImportModuleFactory,
    0,
    0,
    0,
    release_tlp_ImportModuleFactory,
    cast_tlp_ImportModuleFactory,
    0,
    0,
    0
};
