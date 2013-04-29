/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Mon Apr 29 01:46:11 2013
 */

#include "sipAPItulip.h"

#line 98 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Algorithm.sip"
#include <tulip/Algorithm.h>
#line 12 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpAlgorithmPlugin.cpp"

#line 29 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 17 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpAlgorithmPlugin.cpp"
#line 29 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Algorithm.sip"
#include <tulip/Algorithm.h>
#line 20 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpAlgorithmPlugin.cpp"
#line 30 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/PluginContext.sip"
#include <tulip/PluginContext.h>
#line 23 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpAlgorithmPlugin.cpp"


class siptlp_AlgorithmPlugin : public tlp::AlgorithmPlugin
{
public:
    siptlp_AlgorithmPlugin();
    siptlp_AlgorithmPlugin(const tlp::AlgorithmPlugin&);
    virtual ~siptlp_AlgorithmPlugin();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    tlp::Algorithm * createPluginObject(const tlp::AlgorithmContext&);
    std::string getMajor() const;
    std::string getMinor() const;
    std::string getTulipMajor() const;
    std::string getTulipMinor() const;
    std::string getClassName() const;
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
    siptlp_AlgorithmPlugin(const siptlp_AlgorithmPlugin &);
    siptlp_AlgorithmPlugin &operator = (const siptlp_AlgorithmPlugin &);

    char sipPyMethods[13];
};

siptlp_AlgorithmPlugin::siptlp_AlgorithmPlugin(): tlp::AlgorithmPlugin(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_AlgorithmPlugin::siptlp_AlgorithmPlugin(const tlp::AlgorithmPlugin& a0): tlp::AlgorithmPlugin(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_AlgorithmPlugin::~siptlp_AlgorithmPlugin()
{
    sipCommonDtor(sipPySelf);
}

tlp::Algorithm * siptlp_AlgorithmPlugin::createPluginObject(const tlp::AlgorithmContext& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_AlgorithmPlugin,sipName_createPluginObject);

    if (!sipMeth)
        return 0;

    extern tlp::Algorithm * sipVH_tulip_77(sip_gilstate_t,PyObject *,const tlp::AlgorithmContext&);

    return sipVH_tulip_77(sipGILState,sipMeth,a0);
}

std::string siptlp_AlgorithmPlugin::getMajor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_getMajor);

    if (!sipMeth)
        return tlp::AlgorithmPlugin::getMajor();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_AlgorithmPlugin::getMinor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_getMinor);

    if (!sipMeth)
        return tlp::AlgorithmPlugin::getMinor();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_AlgorithmPlugin::getTulipMajor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_getTulipMajor);

    if (!sipMeth)
        return tlp::AlgorithmPlugin::getTulipMajor();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_AlgorithmPlugin::getTulipMinor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,NULL,sipName_getTulipMinor);

    if (!sipMeth)
        return tlp::AlgorithmPlugin::getTulipMinor();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_AlgorithmPlugin::getClassName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_AlgorithmPlugin,sipName_getClassName);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_AlgorithmPlugin::getName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_AlgorithmPlugin,sipName_getName);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_AlgorithmPlugin::getGroup() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_AlgorithmPlugin,sipName_getGroup);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_AlgorithmPlugin::getAuthor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_AlgorithmPlugin,sipName_getAuthor);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_AlgorithmPlugin::getDate() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_AlgorithmPlugin,sipName_getDate);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_AlgorithmPlugin::getInfo() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_AlgorithmPlugin,sipName_getInfo);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_AlgorithmPlugin::getRelease() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,sipName_AlgorithmPlugin,sipName_getRelease);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_AlgorithmPlugin::getTulipRelease() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_AlgorithmPlugin,sipName_getTulipRelease);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_createPluginObject(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_createPluginObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::AlgorithmContext * a0;
        tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp, sipType_tlp_AlgorithmContext, &a0))
        {
            tlp::Algorithm *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AlgorithmPlugin, sipName_createPluginObject);
                return NULL;
            }

            sipRes = sipCpp->createPluginObject(*a0);

            return sipConvertFromNewType(sipRes,sipType_tlp_Algorithm,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_createPluginObject, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_getMajor(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_getMajor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp))
        {
            std::string *sipRes;

            sipRes = new std::string((sipSelfWasArg ? sipCpp->tlp::AlgorithmPlugin::getMajor() : sipCpp->getMajor()));

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_getMajor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_getMinor(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_getMinor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp))
        {
            std::string *sipRes;

            sipRes = new std::string((sipSelfWasArg ? sipCpp->tlp::AlgorithmPlugin::getMinor() : sipCpp->getMinor()));

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_getMinor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_getTulipMajor(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_getTulipMajor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp))
        {
            std::string *sipRes;

            sipRes = new std::string((sipSelfWasArg ? sipCpp->tlp::AlgorithmPlugin::getTulipMajor() : sipCpp->getTulipMajor()));

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_getTulipMajor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_getTulipMinor(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_getTulipMinor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp))
        {
            std::string *sipRes;

            sipRes = new std::string((sipSelfWasArg ? sipCpp->tlp::AlgorithmPlugin::getTulipMinor() : sipCpp->getTulipMinor()));

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_getTulipMinor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_getClassName(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_getClassName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AlgorithmPlugin, sipName_getClassName);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getClassName());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_getClassName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_getName(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_getName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AlgorithmPlugin, sipName_getName);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getName());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_getName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_getGroup(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_getGroup(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AlgorithmPlugin, sipName_getGroup);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getGroup());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_getGroup, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_getAuthor(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_getAuthor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AlgorithmPlugin, sipName_getAuthor);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getAuthor());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_getAuthor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_getDate(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_getDate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AlgorithmPlugin, sipName_getDate);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getDate());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_getDate, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_getInfo(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_getInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AlgorithmPlugin, sipName_getInfo);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getInfo());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_getInfo, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_getRelease(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_getRelease(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_AlgorithmPlugin, sipName_getRelease);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getRelease());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_getRelease, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_AlgorithmPlugin_registerPlugin(PyObject *, PyObject *);}
static PyObject *meth_tlp_AlgorithmPlugin_registerPlugin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::AlgorithmPlugin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_AlgorithmPlugin, &sipCpp))
        {
#line 130 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Algorithm.sip"
	sipCpp->initFactory();
	sipCpp->factory->registerPlugin(sipCpp);
#line 647 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpAlgorithmPlugin.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AlgorithmPlugin, sipName_registerPlugin, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_AlgorithmPlugin(void *, const sipTypeDef *);}
static void *cast_tlp_AlgorithmPlugin(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_tlp_AlgorithmPlugin)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_tlp_PluginInfoInterface)->ctd_cast((tlp::PluginInfoInterface *)(tlp::AlgorithmPlugin *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_AlgorithmPlugin(void *, int);}
static void release_tlp_AlgorithmPlugin(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<siptlp_AlgorithmPlugin *>(sipCppV);
    else
        delete reinterpret_cast<tlp::AlgorithmPlugin *>(sipCppV);
}


extern "C" {static void dealloc_tlp_AlgorithmPlugin(sipSimpleWrapper *);}
static void dealloc_tlp_AlgorithmPlugin(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<siptlp_AlgorithmPlugin *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_AlgorithmPlugin(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_tlp_AlgorithmPlugin(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_AlgorithmPlugin(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    siptlp_AlgorithmPlugin *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new siptlp_AlgorithmPlugin();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::AlgorithmPlugin * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_AlgorithmPlugin, &a0))
        {
            sipCpp = new siptlp_AlgorithmPlugin(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_tlp_AlgorithmPlugin[] = {{81, 255, 1}};


static PyMethodDef methods_tlp_AlgorithmPlugin[] = {
    {SIP_MLNAME_CAST(sipName_createPluginObject), meth_tlp_AlgorithmPlugin_createPluginObject, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getAuthor), meth_tlp_AlgorithmPlugin_getAuthor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getClassName), meth_tlp_AlgorithmPlugin_getClassName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getDate), meth_tlp_AlgorithmPlugin_getDate, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getGroup), meth_tlp_AlgorithmPlugin_getGroup, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getInfo), meth_tlp_AlgorithmPlugin_getInfo, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getMajor), meth_tlp_AlgorithmPlugin_getMajor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getMinor), meth_tlp_AlgorithmPlugin_getMinor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getName), meth_tlp_AlgorithmPlugin_getName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getRelease), meth_tlp_AlgorithmPlugin_getRelease, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getTulipMajor), meth_tlp_AlgorithmPlugin_getTulipMajor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getTulipMinor), meth_tlp_AlgorithmPlugin_getTulipMinor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_registerPlugin), meth_tlp_AlgorithmPlugin_registerPlugin, METH_VARARGS, NULL}
};


sipClassTypeDef sipTypeDef_tulip_tlp_AlgorithmPlugin = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_tlp__AlgorithmPlugin,
        {0}
    },
    {
        sipNameNr_AlgorithmPlugin,
        {21, 255, 0},
        13, methods_tlp_AlgorithmPlugin,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_tlp_AlgorithmPlugin,
    0,
    init_tlp_AlgorithmPlugin,
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
    dealloc_tlp_AlgorithmPlugin,
    0,
    0,
    0,
    release_tlp_AlgorithmPlugin,
    cast_tlp_AlgorithmPlugin,
    0,
    0,
    0
};
