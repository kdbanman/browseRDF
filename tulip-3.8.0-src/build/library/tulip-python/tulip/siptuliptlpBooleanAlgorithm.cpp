/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:11:08 2013
 */

#include "sipAPItulip.h"

#line 35 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/BooleanAlgorithm.sip"
#include <tulip/BooleanAlgorithm.h>
#line 12 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpBooleanAlgorithm.cpp"

#line 32 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/BooleanProperty.sip"
#include <tulip/BooleanProperty.h>
#line 16 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpBooleanAlgorithm.cpp"
#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/PluginContext.sip"
#include <tulip/PluginContext.h>
#line 19 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpBooleanAlgorithm.cpp"
#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 23 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpBooleanAlgorithm.cpp"
#line 105 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/list.sip"
#include <list>
#line 26 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpBooleanAlgorithm.cpp"
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
#line 39 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpBooleanAlgorithm.cpp"


class siptlp_BooleanAlgorithm : public tlp::BooleanAlgorithm
{
public:
    siptlp_BooleanAlgorithm(const tlp::AlgorithmContext&);
    siptlp_BooleanAlgorithm(const tlp::BooleanAlgorithm&);
    virtual ~siptlp_BooleanAlgorithm();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool run();
    bool check(std::string&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    siptlp_BooleanAlgorithm(const siptlp_BooleanAlgorithm &);
    siptlp_BooleanAlgorithm &operator = (const siptlp_BooleanAlgorithm &);

    char sipPyMethods[2];
};

siptlp_BooleanAlgorithm::siptlp_BooleanAlgorithm(const tlp::AlgorithmContext& a0): tlp::BooleanAlgorithm(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_BooleanAlgorithm::siptlp_BooleanAlgorithm(const tlp::BooleanAlgorithm& a0): tlp::BooleanAlgorithm(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_BooleanAlgorithm::~siptlp_BooleanAlgorithm()
{
    sipCommonDtor(sipPySelf);
}

bool siptlp_BooleanAlgorithm::run()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_BooleanAlgorithm,sipName_run);

    if (!sipMeth)
        return 0;

    extern bool sipVH_tulip_17(sip_gilstate_t,PyObject *);

    return sipVH_tulip_17(sipGILState,sipMeth);
}

bool siptlp_BooleanAlgorithm::check(std::string& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_check);

    if (!sipMeth)
        return tlp::Algorithm::check(a0);

    extern bool sipVH_tulip_78(sip_gilstate_t,PyObject *,std::string&);

    return sipVH_tulip_78(sipGILState,sipMeth,a0);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_BooleanAlgorithm(void *, const sipTypeDef *);}
static void *cast_tlp_BooleanAlgorithm(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_tlp_BooleanAlgorithm)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_tlp_Algorithm)->ctd_cast((tlp::Algorithm *)(tlp::BooleanAlgorithm *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_BooleanAlgorithm(void *, int);}
static void release_tlp_BooleanAlgorithm(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<siptlp_BooleanAlgorithm *>(sipCppV);
    else
        delete reinterpret_cast<tlp::BooleanAlgorithm *>(sipCppV);
}


extern "C" {static void dealloc_tlp_BooleanAlgorithm(sipSimpleWrapper *);}
static void dealloc_tlp_BooleanAlgorithm(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<siptlp_BooleanAlgorithm *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_BooleanAlgorithm(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_tlp_BooleanAlgorithm(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_BooleanAlgorithm(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    siptlp_BooleanAlgorithm *sipCpp = 0;

    {
        const tlp::AlgorithmContext * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_AlgorithmContext, &a0))
        {
            sipCpp = new siptlp_BooleanAlgorithm(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::BooleanAlgorithm * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_BooleanAlgorithm, &a0))
        {
            sipCpp = new siptlp_BooleanAlgorithm(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_tlp_BooleanAlgorithm[] = {{23, 255, 1}};


extern "C" {static PyObject *varget_tlp_BooleanAlgorithm_booleanResult(void *, PyObject *);}
static PyObject *varget_tlp_BooleanAlgorithm_booleanResult(void *sipSelf, PyObject *)
{
    tlp::BooleanProperty *sipVal;
    tlp::BooleanAlgorithm *sipCpp = reinterpret_cast<tlp::BooleanAlgorithm *>(sipSelf);

    sipVal = sipCpp->booleanResult;

    return sipConvertFromType(sipVal,sipType_tlp_BooleanProperty, NULL);
}


extern "C" {static int varset_tlp_BooleanAlgorithm_booleanResult(void *, PyObject *, PyObject *);}
static int varset_tlp_BooleanAlgorithm_booleanResult(void *sipSelf, PyObject *sipPy, PyObject *)
{
    tlp::BooleanProperty *sipVal;
    tlp::BooleanAlgorithm *sipCpp = reinterpret_cast<tlp::BooleanAlgorithm *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<tlp::BooleanProperty *>(sipForceConvertToType(sipPy,sipType_tlp_BooleanProperty,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->booleanResult = sipVal;

    return 0;
}

sipVariableDef variables_tlp_BooleanAlgorithm[] = {
    {InstanceVariable, sipName_booleanResult, (PyMethodDef *)varget_tlp_BooleanAlgorithm_booleanResult, (PyMethodDef *)varset_tlp_BooleanAlgorithm_booleanResult, NULL, NULL},
};

PyDoc_STRVAR(doc_tlp_BooleanAlgorithm, "Bases: :class:`tlp.Algorithm`\n"
    "\n"
    "This class is the base interface for selection plugins.\n"
    "\n"
    ".. rubric:: class attributes\n"
    "\n"
    ".. py:attribute:: booleanResult\n"
    "\n"
    "	The result of the algorithm must be stored in this :class:`tlp.BooleanProperty`.");


sipClassTypeDef sipTypeDef_tulip_tlp_BooleanAlgorithm = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_tlp__BooleanAlgorithm,
        {0}
    },
    {
        sipNameNr_BooleanAlgorithm,
        {21, 255, 0},
        0, 0,
        0, 0,
        1, variables_tlp_BooleanAlgorithm,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_tlp_BooleanAlgorithm,
    -1,
    -1,
    supers_tlp_BooleanAlgorithm,
    0,
    init_tlp_BooleanAlgorithm,
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
    dealloc_tlp_BooleanAlgorithm,
    0,
    0,
    0,
    release_tlp_BooleanAlgorithm,
    cast_tlp_BooleanAlgorithm,
    0,
    0,
    0
};
