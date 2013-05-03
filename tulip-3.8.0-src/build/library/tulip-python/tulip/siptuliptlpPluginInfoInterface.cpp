/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:11:08 2013
 */

#include "sipAPItulip.h"

#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Plugin.sip"
#include <tulip/Plugin.h>
#line 12 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpPluginInfoInterface.cpp"

#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 17 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpPluginInfoInterface.cpp"


class siptlp_PluginInfoInterface : public tlp::PluginInfoInterface
{
public:
    siptlp_PluginInfoInterface();
    siptlp_PluginInfoInterface(const tlp::PluginInfoInterface&);
    virtual ~siptlp_PluginInfoInterface();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    std::string getName() const;
    std::string getGroup() const;
    std::string getAuthor() const;
    std::string getDate() const;
    std::string getInfo() const;
    std::string getRelease() const;
    std::string getMajor() const;
    std::string getMinor() const;
    std::string getTulipRelease() const;
    std::string getTulipMajor() const;
    std::string getTulipMinor() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    siptlp_PluginInfoInterface(const siptlp_PluginInfoInterface &);
    siptlp_PluginInfoInterface &operator = (const siptlp_PluginInfoInterface &);

    char sipPyMethods[11];
};

siptlp_PluginInfoInterface::siptlp_PluginInfoInterface(): tlp::PluginInfoInterface(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_PluginInfoInterface::siptlp_PluginInfoInterface(const tlp::PluginInfoInterface& a0): tlp::PluginInfoInterface(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_PluginInfoInterface::~siptlp_PluginInfoInterface()
{
    sipCommonDtor(sipPySelf);
}

std::string siptlp_PluginInfoInterface::getName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_PluginInfoInterface,sipName_getName);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_PluginInfoInterface::getGroup() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_PluginInfoInterface,sipName_getGroup);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_PluginInfoInterface::getAuthor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_PluginInfoInterface,sipName_getAuthor);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_PluginInfoInterface::getDate() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_PluginInfoInterface,sipName_getDate);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_PluginInfoInterface::getInfo() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_PluginInfoInterface,sipName_getInfo);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_PluginInfoInterface::getRelease() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_PluginInfoInterface,sipName_getRelease);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_PluginInfoInterface::getMajor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_PluginInfoInterface,sipName_getMajor);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_PluginInfoInterface::getMinor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_PluginInfoInterface,sipName_getMinor);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_PluginInfoInterface::getTulipRelease() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_PluginInfoInterface,sipName_getTulipRelease);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_PluginInfoInterface::getTulipMajor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_PluginInfoInterface,sipName_getTulipMajor);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}

std::string siptlp_PluginInfoInterface::getTulipMinor() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_PluginInfoInterface,sipName_getTulipMinor);

    if (!sipMeth)
        return std::string();

    extern std::string sipVH_tulip_14(sip_gilstate_t,PyObject *);

    return sipVH_tulip_14(sipGILState,sipMeth);
}


extern "C" {static PyObject *meth_tlp_PluginInfoInterface_getName(PyObject *, PyObject *);}
static PyObject *meth_tlp_PluginInfoInterface_getName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::PluginInfoInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_PluginInfoInterface, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PluginInfoInterface, sipName_getName);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getName());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PluginInfoInterface, sipName_getName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_PluginInfoInterface_getGroup(PyObject *, PyObject *);}
static PyObject *meth_tlp_PluginInfoInterface_getGroup(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::PluginInfoInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_PluginInfoInterface, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PluginInfoInterface, sipName_getGroup);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getGroup());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PluginInfoInterface, sipName_getGroup, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_PluginInfoInterface_getAuthor(PyObject *, PyObject *);}
static PyObject *meth_tlp_PluginInfoInterface_getAuthor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::PluginInfoInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_PluginInfoInterface, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PluginInfoInterface, sipName_getAuthor);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getAuthor());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PluginInfoInterface, sipName_getAuthor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_PluginInfoInterface_getDate(PyObject *, PyObject *);}
static PyObject *meth_tlp_PluginInfoInterface_getDate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::PluginInfoInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_PluginInfoInterface, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PluginInfoInterface, sipName_getDate);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getDate());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PluginInfoInterface, sipName_getDate, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_PluginInfoInterface_getInfo(PyObject *, PyObject *);}
static PyObject *meth_tlp_PluginInfoInterface_getInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::PluginInfoInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_PluginInfoInterface, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PluginInfoInterface, sipName_getInfo);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getInfo());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PluginInfoInterface, sipName_getInfo, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_PluginInfoInterface_getRelease(PyObject *, PyObject *);}
static PyObject *meth_tlp_PluginInfoInterface_getRelease(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::PluginInfoInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_PluginInfoInterface, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PluginInfoInterface, sipName_getRelease);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getRelease());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PluginInfoInterface, sipName_getRelease, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_PluginInfoInterface_getMajor(PyObject *, PyObject *);}
static PyObject *meth_tlp_PluginInfoInterface_getMajor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::PluginInfoInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_PluginInfoInterface, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PluginInfoInterface, sipName_getMajor);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getMajor());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PluginInfoInterface, sipName_getMajor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_PluginInfoInterface_getMinor(PyObject *, PyObject *);}
static PyObject *meth_tlp_PluginInfoInterface_getMinor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::PluginInfoInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_PluginInfoInterface, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PluginInfoInterface, sipName_getMinor);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getMinor());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PluginInfoInterface, sipName_getMinor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_PluginInfoInterface_getTulipRelease(PyObject *, PyObject *);}
static PyObject *meth_tlp_PluginInfoInterface_getTulipRelease(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::PluginInfoInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_PluginInfoInterface, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PluginInfoInterface, sipName_getTulipRelease);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getTulipRelease());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PluginInfoInterface, sipName_getTulipRelease, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_PluginInfoInterface_getTulipMajor(PyObject *, PyObject *);}
static PyObject *meth_tlp_PluginInfoInterface_getTulipMajor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::PluginInfoInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_PluginInfoInterface, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PluginInfoInterface, sipName_getTulipMajor);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getTulipMajor());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PluginInfoInterface, sipName_getTulipMajor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_PluginInfoInterface_getTulipMinor(PyObject *, PyObject *);}
static PyObject *meth_tlp_PluginInfoInterface_getTulipMinor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const tlp::PluginInfoInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_PluginInfoInterface, &sipCpp))
        {
            std::string *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_PluginInfoInterface, sipName_getTulipMinor);
                return NULL;
            }

            sipRes = new std::string(sipCpp->getTulipMinor());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PluginInfoInterface, sipName_getTulipMinor, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_PluginInfoInterface(void *, const sipTypeDef *);}
static void *cast_tlp_PluginInfoInterface(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_PluginInfoInterface)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_PluginInfoInterface(void *, int);}
static void release_tlp_PluginInfoInterface(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<siptlp_PluginInfoInterface *>(sipCppV);
    else
        delete reinterpret_cast<tlp::PluginInfoInterface *>(sipCppV);
}


extern "C" {static void dealloc_tlp_PluginInfoInterface(sipSimpleWrapper *);}
static void dealloc_tlp_PluginInfoInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<siptlp_PluginInfoInterface *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_PluginInfoInterface(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_tlp_PluginInfoInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_PluginInfoInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    siptlp_PluginInfoInterface *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new siptlp_PluginInfoInterface();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::PluginInfoInterface * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_PluginInfoInterface, &a0))
        {
            sipCpp = new siptlp_PluginInfoInterface(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_tlp_PluginInfoInterface[] = {
    {SIP_MLNAME_CAST(sipName_getAuthor), meth_tlp_PluginInfoInterface_getAuthor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getDate), meth_tlp_PluginInfoInterface_getDate, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getGroup), meth_tlp_PluginInfoInterface_getGroup, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getInfo), meth_tlp_PluginInfoInterface_getInfo, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getMajor), meth_tlp_PluginInfoInterface_getMajor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getMinor), meth_tlp_PluginInfoInterface_getMinor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getName), meth_tlp_PluginInfoInterface_getName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getRelease), meth_tlp_PluginInfoInterface_getRelease, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getTulipMajor), meth_tlp_PluginInfoInterface_getTulipMajor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getTulipMinor), meth_tlp_PluginInfoInterface_getTulipMinor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getTulipRelease), meth_tlp_PluginInfoInterface_getTulipRelease, METH_VARARGS, NULL}
};


sipClassTypeDef sipTypeDef_tulip_tlp_PluginInfoInterface = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_tlp__PluginInfoInterface,
        {0}
    },
    {
        sipNameNr_PluginInfoInterface,
        {21, 255, 0},
        11, methods_tlp_PluginInfoInterface,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    init_tlp_PluginInfoInterface,
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
    dealloc_tlp_PluginInfoInterface,
    0,
    0,
    0,
    release_tlp_PluginInfoInterface,
    cast_tlp_PluginInfoInterface,
    0,
    0,
    0
};
