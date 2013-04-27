/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Fri Apr 26 16:33:30 2013
 */

#include "sipAPItulip.h"

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
#line 22 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpDependency.cpp"

#line 29 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 27 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpDependency.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_Dependency(void *, const sipTypeDef *);}
static void *cast_tlp_Dependency(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_Dependency)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_Dependency(void *, int);}
static void release_tlp_Dependency(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::Dependency *>(sipCppV);
}


extern "C" {static void dealloc_tlp_Dependency(sipSimpleWrapper *);}
static void dealloc_tlp_Dependency(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_Dependency(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_tlp_Dependency(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_Dependency(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    tlp::Dependency *sipCpp = 0;

    {
        std::string * a0;
        int a0State = 0;
        std::string * a1;
        int a1State = 0;
        std::string * a2;
        int a2State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1J1J1", sipType_std_string,&a0, &a0State, sipType_std_string,&a1, &a1State, sipType_std_string,&a2, &a2State))
        {
            sipCpp = new tlp::Dependency(*a0,*a1,*a2);
            sipReleaseType(a0,sipType_std_string,a0State);
            sipReleaseType(a1,sipType_std_string,a1State);
            sipReleaseType(a2,sipType_std_string,a2State);

            return sipCpp;
        }
    }

    {
        const tlp::Dependency * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_Dependency, &a0))
        {
            sipCpp = new tlp::Dependency(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_tlp_Dependency_factoryName(void *, PyObject *);}
static PyObject *varget_tlp_Dependency_factoryName(void *sipSelf, PyObject *)
{
    std::string *sipVal;
    tlp::Dependency *sipCpp = reinterpret_cast<tlp::Dependency *>(sipSelf);

    sipVal = &sipCpp->factoryName;

    return sipConvertFromType(sipVal,sipType_std_string, NULL);
}


extern "C" {static int varset_tlp_Dependency_factoryName(void *, PyObject *, PyObject *);}
static int varset_tlp_Dependency_factoryName(void *sipSelf, PyObject *sipPy, PyObject *)
{
    std::string *sipVal;
    tlp::Dependency *sipCpp = reinterpret_cast<tlp::Dependency *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<std::string *>(sipForceConvertToType(sipPy,sipType_std_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->factoryName = *sipVal;

    sipReleaseType(sipVal, sipType_std_string, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_tlp_Dependency_pluginName(void *, PyObject *);}
static PyObject *varget_tlp_Dependency_pluginName(void *sipSelf, PyObject *)
{
    std::string *sipVal;
    tlp::Dependency *sipCpp = reinterpret_cast<tlp::Dependency *>(sipSelf);

    sipVal = &sipCpp->pluginName;

    return sipConvertFromType(sipVal,sipType_std_string, NULL);
}


extern "C" {static int varset_tlp_Dependency_pluginName(void *, PyObject *, PyObject *);}
static int varset_tlp_Dependency_pluginName(void *sipSelf, PyObject *sipPy, PyObject *)
{
    std::string *sipVal;
    tlp::Dependency *sipCpp = reinterpret_cast<tlp::Dependency *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<std::string *>(sipForceConvertToType(sipPy,sipType_std_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->pluginName = *sipVal;

    sipReleaseType(sipVal, sipType_std_string, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_tlp_Dependency_pluginRelease(void *, PyObject *);}
static PyObject *varget_tlp_Dependency_pluginRelease(void *sipSelf, PyObject *)
{
    std::string *sipVal;
    tlp::Dependency *sipCpp = reinterpret_cast<tlp::Dependency *>(sipSelf);

    sipVal = &sipCpp->pluginRelease;

    return sipConvertFromType(sipVal,sipType_std_string, NULL);
}


extern "C" {static int varset_tlp_Dependency_pluginRelease(void *, PyObject *, PyObject *);}
static int varset_tlp_Dependency_pluginRelease(void *sipSelf, PyObject *sipPy, PyObject *)
{
    std::string *sipVal;
    tlp::Dependency *sipCpp = reinterpret_cast<tlp::Dependency *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<std::string *>(sipForceConvertToType(sipPy,sipType_std_string,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->pluginRelease = *sipVal;

    sipReleaseType(sipVal, sipType_std_string, sipValState);

    return 0;
}

sipVariableDef variables_tlp_Dependency[] = {
    {InstanceVariable, sipName_factoryName, (PyMethodDef *)varget_tlp_Dependency_factoryName, (PyMethodDef *)varset_tlp_Dependency_factoryName, NULL, NULL},
    {InstanceVariable, sipName_pluginName, (PyMethodDef *)varget_tlp_Dependency_pluginName, (PyMethodDef *)varset_tlp_Dependency_pluginName, NULL, NULL},
    {InstanceVariable, sipName_pluginRelease, (PyMethodDef *)varget_tlp_Dependency_pluginRelease, (PyMethodDef *)varset_tlp_Dependency_pluginRelease, NULL, NULL},
};


sipClassTypeDef sipTypeDef_tulip_tlp_Dependency = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__Dependency,
        {0}
    },
    {
        sipNameNr_Dependency,
        {21, 255, 0},
        0, 0,
        0, 0,
        3, variables_tlp_Dependency,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    init_tlp_Dependency,
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
    dealloc_tlp_Dependency,
    0,
    0,
    0,
    release_tlp_Dependency,
    cast_tlp_Dependency,
    0,
    0,
    0
};