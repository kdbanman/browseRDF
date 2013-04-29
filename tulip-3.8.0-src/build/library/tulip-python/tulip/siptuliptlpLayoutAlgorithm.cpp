/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Mon Apr 29 01:46:11 2013
 */

#include "sipAPItulip.h"

#line 36 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/LayoutAlgorithm.sip"
#include <tulip/LayoutAlgorithm.h>
#line 12 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpLayoutAlgorithm.cpp"

#line 32 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/LayoutProperty.sip"
#include <tulip/LayoutProperty.h>
#line 16 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpLayoutAlgorithm.cpp"
#line 30 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/PluginContext.sip"
#include <tulip/PluginContext.h>
#line 19 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpLayoutAlgorithm.cpp"
#line 29 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 23 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpLayoutAlgorithm.cpp"
#line 105 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/list.sip"
#include <list>
#line 26 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpLayoutAlgorithm.cpp"
#line 28 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/WithParameter.sip"
#include <tulip/WithParameter.h>
#include <tulip/ColorScale.h>
#include <tulip/StringCollection.h>
#include <tulip/IntegerProperty.h>
#include <tulip/LayoutProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ColorProperty.h>
#line 28 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
#include <tulip/WithDependency.h>
#line 39 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpLayoutAlgorithm.cpp"


class siptlp_LayoutAlgorithm : public tlp::LayoutAlgorithm
{
public:
    siptlp_LayoutAlgorithm(const tlp::AlgorithmContext&);
    siptlp_LayoutAlgorithm(const tlp::LayoutAlgorithm&);
    virtual ~siptlp_LayoutAlgorithm();

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
    siptlp_LayoutAlgorithm(const siptlp_LayoutAlgorithm &);
    siptlp_LayoutAlgorithm &operator = (const siptlp_LayoutAlgorithm &);

    char sipPyMethods[2];
};

siptlp_LayoutAlgorithm::siptlp_LayoutAlgorithm(const tlp::AlgorithmContext& a0): tlp::LayoutAlgorithm(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_LayoutAlgorithm::siptlp_LayoutAlgorithm(const tlp::LayoutAlgorithm& a0): tlp::LayoutAlgorithm(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_LayoutAlgorithm::~siptlp_LayoutAlgorithm()
{
    sipCommonDtor(sipPySelf);
}

bool siptlp_LayoutAlgorithm::run()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_LayoutAlgorithm,sipName_run);

    if (!sipMeth)
        return 0;

    extern bool sipVH_tulip_17(sip_gilstate_t,PyObject *);

    return sipVH_tulip_17(sipGILState,sipMeth);
}

bool siptlp_LayoutAlgorithm::check(std::string& a0)
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
extern "C" {static void *cast_tlp_LayoutAlgorithm(void *, const sipTypeDef *);}
static void *cast_tlp_LayoutAlgorithm(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_tlp_LayoutAlgorithm)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_tlp_Algorithm)->ctd_cast((tlp::Algorithm *)(tlp::LayoutAlgorithm *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_LayoutAlgorithm(void *, int);}
static void release_tlp_LayoutAlgorithm(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<siptlp_LayoutAlgorithm *>(sipCppV);
    else
        delete reinterpret_cast<tlp::LayoutAlgorithm *>(sipCppV);
}


extern "C" {static void dealloc_tlp_LayoutAlgorithm(sipSimpleWrapper *);}
static void dealloc_tlp_LayoutAlgorithm(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<siptlp_LayoutAlgorithm *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_LayoutAlgorithm(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_tlp_LayoutAlgorithm(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_LayoutAlgorithm(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    siptlp_LayoutAlgorithm *sipCpp = 0;

    {
        const tlp::AlgorithmContext * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_AlgorithmContext, &a0))
        {
            sipCpp = new siptlp_LayoutAlgorithm(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::LayoutAlgorithm * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_LayoutAlgorithm, &a0))
        {
            sipCpp = new siptlp_LayoutAlgorithm(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_tlp_LayoutAlgorithm[] = {{23, 255, 1}};


extern "C" {static PyObject *varget_tlp_LayoutAlgorithm_layoutResult(void *, PyObject *);}
static PyObject *varget_tlp_LayoutAlgorithm_layoutResult(void *sipSelf, PyObject *)
{
    tlp::LayoutProperty *sipVal;
    tlp::LayoutAlgorithm *sipCpp = reinterpret_cast<tlp::LayoutAlgorithm *>(sipSelf);

    sipVal = sipCpp->layoutResult;

    return sipConvertFromType(sipVal,sipType_tlp_LayoutProperty, NULL);
}


extern "C" {static int varset_tlp_LayoutAlgorithm_layoutResult(void *, PyObject *, PyObject *);}
static int varset_tlp_LayoutAlgorithm_layoutResult(void *sipSelf, PyObject *sipPy, PyObject *)
{
    tlp::LayoutProperty *sipVal;
    tlp::LayoutAlgorithm *sipCpp = reinterpret_cast<tlp::LayoutAlgorithm *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<tlp::LayoutProperty *>(sipForceConvertToType(sipPy,sipType_tlp_LayoutProperty,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->layoutResult = sipVal;

    return 0;
}

sipVariableDef variables_tlp_LayoutAlgorithm[] = {
    {InstanceVariable, sipName_layoutResult, (PyMethodDef *)varget_tlp_LayoutAlgorithm_layoutResult, (PyMethodDef *)varset_tlp_LayoutAlgorithm_layoutResult, NULL, NULL},
};

PyDoc_STRVAR(doc_tlp_LayoutAlgorithm, "Bases: :class:`tlp.Algorithm`\n"
    "\n"
    "This class is the base interface for layout plugins.\n"
    "\n"
    ".. rubric:: class attributes\n"
    "\n"
    ".. py:attribute:: layoutResult\n"
    "\n"
    "	The result of the algorithm must be stored in this :class:`tlp.LayoutProperty`.");


sipClassTypeDef sipTypeDef_tulip_tlp_LayoutAlgorithm = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_tlp__LayoutAlgorithm,
        {0}
    },
    {
        sipNameNr_LayoutAlgorithm,
        {21, 255, 0},
        0, 0,
        0, 0,
        1, variables_tlp_LayoutAlgorithm,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_tlp_LayoutAlgorithm,
    -1,
    -1,
    supers_tlp_LayoutAlgorithm,
    0,
    init_tlp_LayoutAlgorithm,
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
    dealloc_tlp_LayoutAlgorithm,
    0,
    0,
    0,
    release_tlp_LayoutAlgorithm,
    cast_tlp_LayoutAlgorithm,
    0,
    0,
    0
};
