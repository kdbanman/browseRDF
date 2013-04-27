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
#line 22 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpWithDependency.cpp"

#line 29 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 27 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpWithDependency.cpp"
#line 105 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/../stl/list.sip"
#include <list>
#line 30 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpWithDependency.cpp"
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
#line 43 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpWithDependency.cpp"


PyDoc_STRVAR(doc_tlp_WithDependency_getDependencies, "tlp.WithDependency.getDependencies() -> list of tlp.Dependency");

extern "C" {static PyObject *meth_tlp_WithDependency_getDependencies(PyObject *, PyObject *);}
static PyObject *meth_tlp_WithDependency_getDependencies(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::WithDependency *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_WithDependency, &sipCpp))
        {
            std::list<tlp::Dependency> *sipRes;

            sipRes = new std::list<tlp::Dependency>(sipCpp->getDependencies());

            return sipConvertFromNewType(sipRes,sipType_std_list_0100tlp_Dependency,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WithDependency, sipName_getDependencies, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_WithDependency_addBooleanAlgorithmDependency, "    tlp.WithParameter.addBooleanAlgorithmDependency(algorithm, release )\n"
    "\n"
    "    Add a dependency on a boolean algorithm.\n"
    "\n"
    "    :param name: the name of the algorithm\n"
    "    :type name: string\n"
    "    :param release: the version of the algortihm\n"
    "    :type release: string");

extern "C" {static PyObject *meth_tlp_WithDependency_addBooleanAlgorithmDependency(PyObject *, PyObject *);}
static PyObject *meth_tlp_WithDependency_addBooleanAlgorithmDependency(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        const std::string * a1;
        int a1State = 0;
        tlp::WithDependency *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_tlp_WithDependency, &sipCpp, sipType_std_string,&a0, &a0State, sipType_std_string,&a1, &a1State))
        {
#line 68 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
        sipCpp->addDependency<tlp::BooleanAlgorithm>((*a0).c_str(), (*a1).c_str());
#line 98 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpWithDependency.cpp"
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);
            sipReleaseType(const_cast<std::string *>(a1),sipType_std_string,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WithDependency, sipName_addBooleanAlgorithmDependency, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_WithDependency_addColorAlgorithmDependency, "    tlp.WithParameter.addColorAlgorithmDependency(algorithm, release )\n"
    "\n"
    "    Add a dependency on a color algorithm.\n"
    "\n"
    "    :param name: the name of the algorithm\n"
    "    :type name: string\n"
    "    :param release: the version of the algortihm\n"
    "    :type release: string");

extern "C" {static PyObject *meth_tlp_WithDependency_addColorAlgorithmDependency(PyObject *, PyObject *);}
static PyObject *meth_tlp_WithDependency_addColorAlgorithmDependency(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        const std::string * a1;
        int a1State = 0;
        tlp::WithDependency *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_tlp_WithDependency, &sipCpp, sipType_std_string,&a0, &a0State, sipType_std_string,&a1, &a1State))
        {
#line 88 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
        sipCpp->addDependency<tlp::ColorAlgorithm>((*a0).c_str(), (*a1).c_str());
#line 139 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpWithDependency.cpp"
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);
            sipReleaseType(const_cast<std::string *>(a1),sipType_std_string,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WithDependency, sipName_addColorAlgorithmDependency, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_WithDependency_addDoubleAlgorithmDependency, "    tlp.WithParameter.addDoubleAlgorithmDependency(algorithm, release )\n"
    "\n"
    "    Add a dependency on a double algorithm.\n"
    "\n"
    "    :param name: the name of the algorithm\n"
    "    :type name: string\n"
    "    :param release: the version of the algortihm\n"
    "    :type release: string");

extern "C" {static PyObject *meth_tlp_WithDependency_addDoubleAlgorithmDependency(PyObject *, PyObject *);}
static PyObject *meth_tlp_WithDependency_addDoubleAlgorithmDependency(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        const std::string * a1;
        int a1State = 0;
        tlp::WithDependency *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_tlp_WithDependency, &sipCpp, sipType_std_string,&a0, &a0State, sipType_std_string,&a1, &a1State))
        {
#line 107 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
        sipCpp->addDependency<tlp::DoubleAlgorithm>((*a0).c_str(), (*a1).c_str());
#line 180 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpWithDependency.cpp"
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);
            sipReleaseType(const_cast<std::string *>(a1),sipType_std_string,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WithDependency, sipName_addDoubleAlgorithmDependency, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_WithDependency_addIntegerAlgorithmDependency, "    tlp.WithParameter.addIntegerAlgorithmDependency(algorithm, release )\n"
    "\n"
    "    Add a dependency on an integer algorithm.\n"
    "\n"
    "    :param name: the name of the algorithm\n"
    "    :type name: string\n"
    "    :param release: the version of the algortihm\n"
    "    :type release: string");

extern "C" {static PyObject *meth_tlp_WithDependency_addIntegerAlgorithmDependency(PyObject *, PyObject *);}
static PyObject *meth_tlp_WithDependency_addIntegerAlgorithmDependency(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        const std::string * a1;
        int a1State = 0;
        tlp::WithDependency *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_tlp_WithDependency, &sipCpp, sipType_std_string,&a0, &a0State, sipType_std_string,&a1, &a1State))
        {
#line 126 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
        sipCpp->addDependency<tlp::IntegerAlgorithm>((*a0).c_str(), (*a1).c_str());
#line 221 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpWithDependency.cpp"
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);
            sipReleaseType(const_cast<std::string *>(a1),sipType_std_string,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WithDependency, sipName_addIntegerAlgorithmDependency, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_WithDependency_addLayoutAlgorithmDependency, "    tlp.WithParameter.addLayoutAlgorithmDependency(algorithm, release )\n"
    "\n"
    "    Add a dependency on a layout algorithm.\n"
    "\n"
    "    :param name: the name of the layout algorithm\n"
    "    :type name: string\n"
    "    :param release: the version of the algortihm\n"
    "    :type release: string");

extern "C" {static PyObject *meth_tlp_WithDependency_addLayoutAlgorithmDependency(PyObject *, PyObject *);}
static PyObject *meth_tlp_WithDependency_addLayoutAlgorithmDependency(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        const std::string * a1;
        int a1State = 0;
        tlp::WithDependency *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_tlp_WithDependency, &sipCpp, sipType_std_string,&a0, &a0State, sipType_std_string,&a1, &a1State))
        {
#line 144 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
        sipCpp->addDependency<tlp::LayoutAlgorithm>((*a0).c_str(), (*a1).c_str());
#line 262 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpWithDependency.cpp"
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);
            sipReleaseType(const_cast<std::string *>(a1),sipType_std_string,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WithDependency, sipName_addLayoutAlgorithmDependency, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_WithDependency_addSizeAlgorithmDependency, "    tlp.WithParameter.addSizeAlgorithmDependency(algorithm, release )\n"
    "\n"
    "    Add a dependency on a size algorithm.\n"
    "\n"
    "    :param name: the name of the layout algorithm\n"
    "    :type name: string\n"
    "    :param release: the version of the algortihm\n"
    "    :type release: string");

extern "C" {static PyObject *meth_tlp_WithDependency_addSizeAlgorithmDependency(PyObject *, PyObject *);}
static PyObject *meth_tlp_WithDependency_addSizeAlgorithmDependency(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        const std::string * a1;
        int a1State = 0;
        tlp::WithDependency *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_tlp_WithDependency, &sipCpp, sipType_std_string,&a0, &a0State, sipType_std_string,&a1, &a1State))
        {
#line 162 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
        sipCpp->addDependency<tlp::SizeAlgorithm>((*a0).c_str(), (*a1).c_str());
#line 303 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpWithDependency.cpp"
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);
            sipReleaseType(const_cast<std::string *>(a1),sipType_std_string,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WithDependency, sipName_addSizeAlgorithmDependency, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_WithDependency_addStringAlgorithmDependency, "    tlp.WithParameter.addStringAlgorithmDependency(algorithm, release )\n"
    "\n"
    "    Add a dependency on a string algorithm.\n"
    "\n"
    "    :param name: the name of the layout algorithm\n"
    "    :type name: string\n"
    "    :param release: the version of the algortihm\n"
    "    :type release: string");

extern "C" {static PyObject *meth_tlp_WithDependency_addStringAlgorithmDependency(PyObject *, PyObject *);}
static PyObject *meth_tlp_WithDependency_addStringAlgorithmDependency(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        const std::string * a1;
        int a1State = 0;
        tlp::WithDependency *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_tlp_WithDependency, &sipCpp, sipType_std_string,&a0, &a0State, sipType_std_string,&a1, &a1State))
        {
#line 181 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
        sipCpp->addDependency<tlp::StringAlgorithm>((*a0).c_str(), (*a1).c_str());
#line 344 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpWithDependency.cpp"
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);
            sipReleaseType(const_cast<std::string *>(a1),sipType_std_string,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WithDependency, sipName_addStringAlgorithmDependency, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_WithDependency_addAlgorithmDependency, "    tlp.WithParameter.addAlgorithmDependency(algorithm, release )\n"
    "\n"
    "    Add a dependency on an algorithm.\n"
    "\n"
    "    :param name: the name of the layout algorithm\n"
    "    :type name: string\n"
    "    :param release: the version of the algortihm\n"
    "    :type release: string");

extern "C" {static PyObject *meth_tlp_WithDependency_addAlgorithmDependency(PyObject *, PyObject *);}
static PyObject *meth_tlp_WithDependency_addAlgorithmDependency(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        const std::string * a1;
        int a1State = 0;
        tlp::WithDependency *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_tlp_WithDependency, &sipCpp, sipType_std_string,&a0, &a0State, sipType_std_string,&a1, &a1State))
        {
#line 200 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
        sipCpp->addDependency<tlp::Algorithm>((*a0).c_str(), (*a1).c_str());
#line 385 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpWithDependency.cpp"
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);
            sipReleaseType(const_cast<std::string *>(a1),sipType_std_string,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WithDependency, sipName_addAlgorithmDependency, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_WithDependency(void *, const sipTypeDef *);}
static void *cast_tlp_WithDependency(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_WithDependency)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_WithDependency(void *, int);}
static void release_tlp_WithDependency(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::WithDependency *>(sipCppV);
}


extern "C" {static void assign_tlp_WithDependency(void *, SIP_SSIZE_T, const void *);}
static void assign_tlp_WithDependency(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<tlp::WithDependency *>(sipDst)[sipDstIdx] = *reinterpret_cast<const tlp::WithDependency *>(sipSrc);
}


extern "C" {static void *array_tlp_WithDependency(SIP_SSIZE_T);}
static void *array_tlp_WithDependency(SIP_SSIZE_T sipNrElem)
{
    return new tlp::WithDependency[sipNrElem];
}


extern "C" {static void *copy_tlp_WithDependency(const void *, SIP_SSIZE_T);}
static void *copy_tlp_WithDependency(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new tlp::WithDependency(reinterpret_cast<const tlp::WithDependency *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_tlp_WithDependency(sipSimpleWrapper *);}
static void dealloc_tlp_WithDependency(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_WithDependency(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_tlp_WithDependency(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_WithDependency(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    tlp::WithDependency *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new tlp::WithDependency();

            return sipCpp;
        }
    }

    {
        const tlp::WithDependency * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_WithDependency, &a0))
        {
            sipCpp = new tlp::WithDependency(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_tlp_WithDependency[] = {
    {SIP_MLNAME_CAST(sipName_addAlgorithmDependency), meth_tlp_WithDependency_addAlgorithmDependency, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_WithDependency_addAlgorithmDependency)},
    {SIP_MLNAME_CAST(sipName_addBooleanAlgorithmDependency), meth_tlp_WithDependency_addBooleanAlgorithmDependency, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_WithDependency_addBooleanAlgorithmDependency)},
    {SIP_MLNAME_CAST(sipName_addColorAlgorithmDependency), meth_tlp_WithDependency_addColorAlgorithmDependency, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_WithDependency_addColorAlgorithmDependency)},
    {SIP_MLNAME_CAST(sipName_addDoubleAlgorithmDependency), meth_tlp_WithDependency_addDoubleAlgorithmDependency, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_WithDependency_addDoubleAlgorithmDependency)},
    {SIP_MLNAME_CAST(sipName_addIntegerAlgorithmDependency), meth_tlp_WithDependency_addIntegerAlgorithmDependency, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_WithDependency_addIntegerAlgorithmDependency)},
    {SIP_MLNAME_CAST(sipName_addLayoutAlgorithmDependency), meth_tlp_WithDependency_addLayoutAlgorithmDependency, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_WithDependency_addLayoutAlgorithmDependency)},
    {SIP_MLNAME_CAST(sipName_addSizeAlgorithmDependency), meth_tlp_WithDependency_addSizeAlgorithmDependency, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_WithDependency_addSizeAlgorithmDependency)},
    {SIP_MLNAME_CAST(sipName_addStringAlgorithmDependency), meth_tlp_WithDependency_addStringAlgorithmDependency, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_WithDependency_addStringAlgorithmDependency)},
    {SIP_MLNAME_CAST(sipName_getDependencies), meth_tlp_WithDependency_getDependencies, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_WithDependency_getDependencies)}
};


sipClassTypeDef sipTypeDef_tulip_tlp_WithDependency = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__WithDependency,
        {0}
    },
    {
        sipNameNr_WithDependency,
        {21, 255, 0},
        9, methods_tlp_WithDependency,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    init_tlp_WithDependency,
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
    dealloc_tlp_WithDependency,
    assign_tlp_WithDependency,
    array_tlp_WithDependency,
    copy_tlp_WithDependency,
    release_tlp_WithDependency,
    cast_tlp_WithDependency,
    0,
    0,
    0
};
