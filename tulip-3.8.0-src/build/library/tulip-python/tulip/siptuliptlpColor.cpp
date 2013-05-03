/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:11:08 2013
 */

#include "sipAPItulip.h"

#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Color.sip"
#include <tulip/Color.h>
#line 12 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpColor.cpp"



PyDoc_STRVAR(doc_tlp_Color_set, "tlp.Color.set(red, green, blue, alpha)\n"
    "\n"
    "Sets each component of the color. Each component must be in the range [0, 255].\n"
    "\n"
    ":param red: the red component value\n"
    ":type red: integer\n"
    ":param green: the green component value\n"
    ":type green: integer\n"
    ":param blue: the blue component value\n"
    ":type blue: integer\n"
    ":param alpha: the alpha component value\n"
    ":type alpha: integer");

extern "C" {static PyObject *meth_tlp_Color_set(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned short a0 = 0;
        unsigned short a1 = 0;
        unsigned short a2 = 0;
        unsigned short a3 = 255;
        tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|tttt", &sipSelf, sipType_tlp_Color, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->set(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_set, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_getRGL, "tlp.Color.getRGL()\n"
    "\n"
    "Returns the red component of the color in the OpenGL format (a float value between 0.0 and 1.0).\n"
    "\n"
    ":rtype: float");

extern "C" {static PyObject *meth_tlp_Color_getRGL(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_getRGL(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Color, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getRGL();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_getRGL, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_getGGL, "tlp.Color.getGGL()\n"
    "\n"
    "Returns the green component of the color in the OpenGL format (a float value between 0.0 and 1.0).\n"
    "\n"
    ":rtype: float");

extern "C" {static PyObject *meth_tlp_Color_getGGL(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_getGGL(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Color, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getGGL();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_getGGL, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_getBGL, "tlp.Color.getBGL()\n"
    "\n"
    "Returns the blue component of the color in the OpenGL format (a float value between 0.0 and 1.0).\n"
    "\n"
    ":rtype: float");

extern "C" {static PyObject *meth_tlp_Color_getBGL(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_getBGL(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Color, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getBGL();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_getBGL, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_getAGL, "tlp.Color.getAGL()\n"
    "\n"
    "Returns the alpha component of the color in the OpenGL format (a float value between 0.0 and 1.0).\n"
    "\n"
    ":rtype: float");

extern "C" {static PyObject *meth_tlp_Color_getAGL(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_getAGL(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Color, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getAGL();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_getAGL, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_getR, "tlp.Color.getR()\n"
    "\n"
    "Returns the red component of the color.\n"
    "\n"
    ":rtype: integer");

extern "C" {static PyObject *meth_tlp_Color_getR(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_getR(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Color, &sipCpp))
        {
            unsigned short sipRes;

            sipRes = sipCpp->getR();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_getR, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_getG, "tlp.Color.getG()\n"
    "\n"
    "Returns the green component of the color.\n"
    "\n"
    ":rtype: integer");

extern "C" {static PyObject *meth_tlp_Color_getG(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_getG(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Color, &sipCpp))
        {
            unsigned short sipRes;

            sipRes = sipCpp->getG();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_getG, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_getB, "tlp.Color.getB()\n"
    "\n"
    "Returns the blue component of the color.\n"
    "\n"
    ":rtype: integer");

extern "C" {static PyObject *meth_tlp_Color_getB(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_getB(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Color, &sipCpp))
        {
            unsigned short sipRes;

            sipRes = sipCpp->getB();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_getB, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_getA, "tlp.Color.getA()\n"
    "\n"
    "Returns the alpha component of the color.\n"
    "\n"
    ":rtype: integer");

extern "C" {static PyObject *meth_tlp_Color_getA(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_getA(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Color, &sipCpp))
        {
            unsigned short sipRes;

            sipRes = sipCpp->getA();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_getA, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_setR, "tlp.Color.setR(red)\n"
    "\n"
    "Sets the red component of the color (must be in the range [0, 255]).\n"
    "\n"
    ":param red: the red component value\n"
    ":type red: integer");

extern "C" {static PyObject *meth_tlp_Color_setR(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_setR(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned short a0;
        tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bt", &sipSelf, sipType_tlp_Color, &sipCpp, &a0))
        {
            sipCpp->setR(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_setR, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_setG, "tlp.Color.setG(green)\n"
    "\n"
    "Sets the green component of the color (must be in the range [0, 255]).\n"
    "\n"
    ":param green: the green component value\n"
    ":type green: integer");

extern "C" {static PyObject *meth_tlp_Color_setG(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_setG(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned short a0;
        tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bt", &sipSelf, sipType_tlp_Color, &sipCpp, &a0))
        {
            sipCpp->setG(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_setG, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_setB, "tlp.Color.setB(blue)\n"
    "\n"
    "Sets the blue component of the color (must be in the range [0, 255]).\n"
    "\n"
    ":param blue: the blue component value\n"
    ":type blue: integer");

extern "C" {static PyObject *meth_tlp_Color_setB(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_setB(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned short a0;
        tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bt", &sipSelf, sipType_tlp_Color, &sipCpp, &a0))
        {
            sipCpp->setB(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_setB, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_setA, "tlp.Color.setA(alpha)\n"
    "\n"
    "Sets the alpha component of the color (must be in the range [0, 255]).\n"
    "\n"
    ":param alpha: the alpha component value\n"
    ":type alpha: integer");

extern "C" {static PyObject *meth_tlp_Color_setA(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_setA(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned short a0;
        tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bt", &sipSelf, sipType_tlp_Color, &sipCpp, &a0))
        {
            sipCpp->setA(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_setA, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_getH, "tlp.Color.getH()\n"
    "\n"
    "Returns the hue component (in the range [0, 360]) of the color in the HSV color space.\n"
    "\n"
    ":rtype: integer");

extern "C" {static PyObject *meth_tlp_Color_getH(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_getH(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Color, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getH();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_getH, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_getS, "tlp.Color.getS()\n"
    "\n"
    "Returns the saturation component (in the range [0, 255]) of the color in the HSV color space.\n"
    "\n"
    ":rtype: integer");

extern "C" {static PyObject *meth_tlp_Color_getS(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_getS(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Color, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getS();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_getS, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_getV, "tlp.Color.getH()\n"
    "\n"
    "Returns the value component (in the range [0, 255]) of the color in the HSV color space.\n"
    "\n"
    ":rtype: integer");

extern "C" {static PyObject *meth_tlp_Color_getV(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_getV(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Color, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->getV();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_getV, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_setH, "tlp.Color.setH(hue)\n"
    "\n"
    "Sets the hue component of the color in the HSV color space (must be in the range [0, 360]).\n"
    "\n"
    ":param hue: the hue component value\n"
    ":type hue: integer\n"
    "");

extern "C" {static PyObject *meth_tlp_Color_setH(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_setH(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_tlp_Color, &sipCpp, &a0))
        {
            sipCpp->setH(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_setH, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_setS, "tlp.Color.setS(saturation)\n"
    "\n"
    "Sets the saturation component of the color in the HSV color space (must be in the range [0, 255]).\n"
    "\n"
    ":param saturation: the saturation component value\n"
    ":type saturation: integer\n"
    "");

extern "C" {static PyObject *meth_tlp_Color_setS(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_setS(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_tlp_Color, &sipCpp, &a0))
        {
            sipCpp->setS(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_setS, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Color_setV, "tlp.Color.setV(value)\n"
    "\n"
    "Sets the value component of the color in the HSV color space (must be in the range [0, 255]).\n"
    "\n"
    ":param value: the value component value\n"
    ":type value: integer\n"
    "");

extern "C" {static PyObject *meth_tlp_Color_setV(PyObject *, PyObject *);}
static PyObject *meth_tlp_Color_setV(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        tlp::Color *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_tlp_Color, &sipCpp, &a0))
        {
            sipCpp->setV(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName_setV, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_tlp_Color___repr__(PyObject *);}
static PyObject *slot_tlp_Color___repr__(PyObject *sipSelf)
{
    tlp::Color *sipCpp = reinterpret_cast<tlp::Color *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Color));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 252 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Color.sip"
		std::ostringstream oss;
		oss << *sipCpp;
		std::string s = oss.str();
		s[0] = '[';
		s[s.size() - 1] = ']';
#if PY_MAJOR_VERSION >= 3
        sipRes = PyUnicode_FromString(s.c_str());
#else
        sipRes = PyString_FromString(s.c_str());
#endif
#line 649 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpColor.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_tlp_Color___eq__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Color___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    tlp::Color *sipCpp = reinterpret_cast<tlp::Color *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Color));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const tlp::Color * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_tlp_Color, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->tlp::Color::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,eq_slot,sipType_tlp_Color,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_tlp_Color___ne__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Color___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    tlp::Color *sipCpp = reinterpret_cast<tlp::Color *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Color));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const tlp::Color * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_tlp_Color, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->tlp::Color::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,ne_slot,sipType_tlp_Color,sipSelf,sipArg);
}


extern "C" {static int slot_tlp_Color___setitem__(PyObject *,PyObject *);}
static int slot_tlp_Color___setitem__(PyObject *sipSelf,PyObject *sipArgs)
{
    tlp::Color *sipCpp = reinterpret_cast<tlp::Color *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Color));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = NULL;

    {
        int a0;
        unsigned short a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "it", &a0, &a1))
        {
            int sipIsErr = 0;

#line 241 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Color.sip"
	if (a0 < 4)
		(*sipCpp)[a0] = a1;
	else
		sipIsErr = 1;	
#line 746 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpColor.cpp"

            if (sipIsErr)
                return -1;

            return 0;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName___setitem__, NULL);

    return -1;
}


extern "C" {static PyObject *slot_tlp_Color___getitem__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Color___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    tlp::Color *sipCpp = reinterpret_cast<tlp::Color *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Color));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        uint a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1u", &a0))
        {
            unsigned short sipRes;

            sipRes = (*sipCpp)[a0];

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Color, sipName___getitem__, NULL);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_Color(void *, const sipTypeDef *);}
static void *cast_tlp_Color(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_Color)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_Color(void *, int);}
static void release_tlp_Color(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::Color *>(sipCppV);
}


extern "C" {static void assign_tlp_Color(void *, SIP_SSIZE_T, const void *);}
static void assign_tlp_Color(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<tlp::Color *>(sipDst)[sipDstIdx] = *reinterpret_cast<const tlp::Color *>(sipSrc);
}


extern "C" {static void *array_tlp_Color(SIP_SSIZE_T);}
static void *array_tlp_Color(SIP_SSIZE_T sipNrElem)
{
    return new tlp::Color[sipNrElem];
}


extern "C" {static void *copy_tlp_Color(const void *, SIP_SSIZE_T);}
static void *copy_tlp_Color(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new tlp::Color(reinterpret_cast<const tlp::Color *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_tlp_Color(sipSimpleWrapper *);}
static void dealloc_tlp_Color(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_Color(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_tlp_Color(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_Color(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    tlp::Color *sipCpp = 0;

    {
        unsigned short a0 = 0;
        unsigned short a1 = 0;
        unsigned short a2 = 0;
        unsigned short a3 = 255;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "|tttt", &a0, &a1, &a2, &a3))
        {
            sipCpp = new tlp::Color(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const tlp::Color * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_Color, &a0))
        {
            sipCpp = new tlp::Color(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_tlp_Color[] = {
    {(void *)slot_tlp_Color___repr__, repr_slot},
    {(void *)slot_tlp_Color___eq__, eq_slot},
    {(void *)slot_tlp_Color___ne__, ne_slot},
    {(void *)slot_tlp_Color___setitem__, setitem_slot},
    {(void *)slot_tlp_Color___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_tlp_Color[] = {
    {SIP_MLNAME_CAST(sipName_getA), meth_tlp_Color_getA, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_getA)},
    {SIP_MLNAME_CAST(sipName_getAGL), meth_tlp_Color_getAGL, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_getAGL)},
    {SIP_MLNAME_CAST(sipName_getB), meth_tlp_Color_getB, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_getB)},
    {SIP_MLNAME_CAST(sipName_getBGL), meth_tlp_Color_getBGL, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_getBGL)},
    {SIP_MLNAME_CAST(sipName_getG), meth_tlp_Color_getG, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_getG)},
    {SIP_MLNAME_CAST(sipName_getGGL), meth_tlp_Color_getGGL, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_getGGL)},
    {SIP_MLNAME_CAST(sipName_getH), meth_tlp_Color_getH, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_getH)},
    {SIP_MLNAME_CAST(sipName_getR), meth_tlp_Color_getR, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_getR)},
    {SIP_MLNAME_CAST(sipName_getRGL), meth_tlp_Color_getRGL, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_getRGL)},
    {SIP_MLNAME_CAST(sipName_getS), meth_tlp_Color_getS, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_getS)},
    {SIP_MLNAME_CAST(sipName_getV), meth_tlp_Color_getV, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_getV)},
    {SIP_MLNAME_CAST(sipName_set), meth_tlp_Color_set, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_set)},
    {SIP_MLNAME_CAST(sipName_setA), meth_tlp_Color_setA, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_setA)},
    {SIP_MLNAME_CAST(sipName_setB), meth_tlp_Color_setB, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_setB)},
    {SIP_MLNAME_CAST(sipName_setG), meth_tlp_Color_setG, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_setG)},
    {SIP_MLNAME_CAST(sipName_setH), meth_tlp_Color_setH, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_setH)},
    {SIP_MLNAME_CAST(sipName_setR), meth_tlp_Color_setR, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_setR)},
    {SIP_MLNAME_CAST(sipName_setS), meth_tlp_Color_setS, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_setS)},
    {SIP_MLNAME_CAST(sipName_setV), meth_tlp_Color_setV, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Color_setV)}
};

PyDoc_STRVAR(doc_tlp_Color, "This class represents a color using the RGBA color space. It can be instantiated the following way::\n"
    "	\n"
    "	# Each component must be in the range [0, 255]\n"
    "	redOpaque = tlp.Color(255, 0, 0)\n"
    "	\n"
    "	blueTranslucent = tlp.Color(0, 0, 255, 100)\n"
    "\n"
    "The value of each component can be read / written using the [] operator.	\n"
    "");


sipClassTypeDef sipTypeDef_tulip_tlp_Color = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__Color,
        {0}
    },
    {
        sipNameNr_Color,
        {21, 255, 0},
        19, methods_tlp_Color,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_tlp_Color,
    -1,
    -1,
    0,
    slots_tlp_Color,
    init_tlp_Color,
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
    dealloc_tlp_Color,
    assign_tlp_Color,
    array_tlp_Color,
    copy_tlp_Color,
    release_tlp_Color,
    cast_tlp_Color,
    0,
    0,
    0
};
