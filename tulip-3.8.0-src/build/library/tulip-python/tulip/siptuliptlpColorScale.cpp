/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:11:08 2013
 */

#include "sipAPItulip.h"

#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/ColorScale.sip"
#include <tulip/ColorScale.h>
#line 12 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpColorScale.cpp"

#line 37 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/vector.sip"
#include <vector>
#line 16 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpColorScale.cpp"
#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Color.sip"
#include <tulip/Color.h>
#line 19 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpColorScale.cpp"
#line 215 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/map.sip"
#include <map>
#line 22 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpColorScale.cpp"


class siptlp_ColorScale : public tlp::ColorScale
{
public:
    siptlp_ColorScale(const bool);
    siptlp_ColorScale(const std::vector<tlp::Color>&,const bool);
    siptlp_ColorScale(const tlp::ColorScale&);
    virtual ~siptlp_ColorScale();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void setColorScale(const std::vector<tlp::Color>,const bool);
    void setColorAtPos(const float,const tlp::Color&);
    tlp::Color getColorAtPos(const float) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    siptlp_ColorScale(const siptlp_ColorScale &);
    siptlp_ColorScale &operator = (const siptlp_ColorScale &);

    char sipPyMethods[3];
};

siptlp_ColorScale::siptlp_ColorScale(const bool a0): tlp::ColorScale(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_ColorScale::siptlp_ColorScale(const std::vector<tlp::Color>& a0,const bool a1): tlp::ColorScale(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_ColorScale::siptlp_ColorScale(const tlp::ColorScale& a0): tlp::ColorScale(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_ColorScale::~siptlp_ColorScale()
{
    sipCommonDtor(sipPySelf);
}

void siptlp_ColorScale::setColorScale(const std::vector<tlp::Color> a0,const bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_setColorScale);

    if (!sipMeth)
    {
        tlp::ColorScale::setColorScale(a0,a1);
        return;
    }

    extern void sipVH_tulip_81(sip_gilstate_t,PyObject *,const std::vector<tlp::Color>,const bool);

    sipVH_tulip_81(sipGILState,sipMeth,a0,a1);
}

void siptlp_ColorScale::setColorAtPos(const float a0,const tlp::Color& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_setColorAtPos);

    if (!sipMeth)
    {
        tlp::ColorScale::setColorAtPos(a0,a1);
        return;
    }

    extern void sipVH_tulip_80(sip_gilstate_t,PyObject *,const float,const tlp::Color&);

    sipVH_tulip_80(sipGILState,sipMeth,a0,a1);
}

tlp::Color siptlp_ColorScale::getColorAtPos(const float a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_getColorAtPos);

    if (!sipMeth)
        return tlp::ColorScale::getColorAtPos(a0);

    extern tlp::Color sipVH_tulip_79(sip_gilstate_t,PyObject *,const float);

    return sipVH_tulip_79(sipGILState,sipMeth,a0);
}


PyDoc_STRVAR(doc_tlp_ColorScale_setColorScale, "tlp.ColorScale.setColorScale(colors[, gradient = True])\n"
    "\n"
    "This method configures the color scale. \n"
    "If the scale was previously configured the old configuration is lost.\n"
    "\n"
    ":param colors: The colors to use in the color scale.\n"
    ":type colors: list of :class:`tlp.Color`\n"
    ":param gradient: If set to :const:`True`, the color scale is a gradient\n"
    ":type gradient: boolean");

extern "C" {static PyObject *meth_tlp_ColorScale_setColorScale(PyObject *, PyObject *);}
static PyObject *meth_tlp_ColorScale_setColorScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const std::vector<tlp::Color> * a0;
        int a0State = 0;
        bool a1 = 1;
        tlp::ColorScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1|b", &sipSelf, sipType_tlp_ColorScale, &sipCpp, sipType_std_vector_0100tlp_Color,&a0, &a0State, &a1))
        {
            (sipSelfWasArg ? sipCpp->tlp::ColorScale::setColorScale(*a0,a1) : sipCpp->setColorScale(*a0,a1));
            sipReleaseType(const_cast<std::vector<tlp::Color> *>(a0),sipType_std_vector_0100tlp_Color,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ColorScale, sipName_setColorScale, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_ColorScale_setColorAtPos, "tlp.ColorScale.setColorAtPos(pos, color)\n"
    "\n"
    "This method adds a color to the color scale at a specific position.\n"
    "\n"
    ":param pos: the position in the color scale (0.0 <= pos <= 1.0)\n"
    ":type pos: float\n"
    ":param color: the color to add at the specified position\n"
    ":type color: :class:`tlp.Color`");

extern "C" {static PyObject *meth_tlp_ColorScale_setColorAtPos(PyObject *, PyObject *);}
static PyObject *meth_tlp_ColorScale_setColorAtPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        float a0;
        const tlp::Color * a1;
        tlp::ColorScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BfJ9", &sipSelf, sipType_tlp_ColorScale, &sipCpp, &a0, sipType_tlp_Color, &a1))
        {
            (sipSelfWasArg ? sipCpp->tlp::ColorScale::setColorAtPos(a0,*a1) : sipCpp->setColorAtPos(a0,*a1));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ColorScale, sipName_setColorAtPos, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_ColorScale_getColorAtPos, "tlp.ColorScale.getColorAtPos(pos)\n"
    "\n"
    "This method computes the color associated to a specific position in the color scale and returns it.\n"
    "\n"
    ":param pos: This value defines the position of the color in the scale and must be between 0.0 and 1.0 (it will be clamped otherwise).\n"
    ":type pos: float\n"
    ":rtype: :class:`tlp.Color`");

extern "C" {static PyObject *meth_tlp_ColorScale_getColorAtPos(PyObject *, PyObject *);}
static PyObject *meth_tlp_ColorScale_getColorAtPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        float a0;
        const tlp::ColorScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_tlp_ColorScale, &sipCpp, &a0))
        {
            tlp::Color *sipRes;

            sipRes = new tlp::Color((sipSelfWasArg ? sipCpp->tlp::ColorScale::getColorAtPos(a0) : sipCpp->getColorAtPos(a0)));

            return sipConvertFromNewType(sipRes,sipType_tlp_Color,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ColorScale, sipName_getColorAtPos, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_ColorScale_isGradient, "tlp.ColorScale.isGradient()\n"
    "\n"
    "Returns :const:`True` if the color scale is a gradient.\n"
    "\n"
    ":rtype: boolean ");

extern "C" {static PyObject *meth_tlp_ColorScale_isGradient(PyObject *, PyObject *);}
static PyObject *meth_tlp_ColorScale_isGradient(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::ColorScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_ColorScale, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isGradient();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ColorScale, sipName_isGradient, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_ColorScale_getColorMap, "tlp.ColorScale.getColorMap()\n"
    "\n"
    "Returns a dictionary corresponding to the color scale.\n"
    "\n"
    ":rtype: a dictionary whose indexes are of type float and the values of type :class:`tlp.Color`");

extern "C" {static PyObject *meth_tlp_ColorScale_getColorMap(PyObject *, PyObject *);}
static PyObject *meth_tlp_ColorScale_getColorMap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::ColorScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_ColorScale, &sipCpp))
        {
            std::map<float,tlp::Color> *sipRes;

            sipRes = new std::map<float,tlp::Color>(sipCpp->getColorMap());

            return sipConvertFromNewType(sipRes,sipType_std_map_2200_0100tlp_Color,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ColorScale, sipName_getColorMap, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_ColorScale(void *, const sipTypeDef *);}
static void *cast_tlp_ColorScale(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_ColorScale)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_ColorScale(void *, int);}
static void release_tlp_ColorScale(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<siptlp_ColorScale *>(sipCppV);
    else
        delete reinterpret_cast<tlp::ColorScale *>(sipCppV);
}


extern "C" {static void assign_tlp_ColorScale(void *, SIP_SSIZE_T, const void *);}
static void assign_tlp_ColorScale(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<tlp::ColorScale *>(sipDst)[sipDstIdx] = *reinterpret_cast<const tlp::ColorScale *>(sipSrc);
}


extern "C" {static void *array_tlp_ColorScale(SIP_SSIZE_T);}
static void *array_tlp_ColorScale(SIP_SSIZE_T sipNrElem)
{
    return new tlp::ColorScale[sipNrElem];
}


extern "C" {static void *copy_tlp_ColorScale(const void *, SIP_SSIZE_T);}
static void *copy_tlp_ColorScale(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new tlp::ColorScale(reinterpret_cast<const tlp::ColorScale *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_tlp_ColorScale(sipSimpleWrapper *);}
static void dealloc_tlp_ColorScale(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<siptlp_ColorScale *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_ColorScale(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_tlp_ColorScale(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_ColorScale(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    siptlp_ColorScale *sipCpp = 0;

    {
        bool a0 = 1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "|b", &a0))
        {
            sipCpp = new siptlp_ColorScale(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const std::vector<tlp::Color> * a0;
        int a0State = 0;
        bool a1 = 1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1|b", sipType_std_vector_0100tlp_Color,&a0, &a0State, &a1))
        {
            sipCpp = new siptlp_ColorScale(*a0,a1);
            sipReleaseType(const_cast<std::vector<tlp::Color> *>(a0),sipType_std_vector_0100tlp_Color,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::ColorScale * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_ColorScale, &a0))
        {
            sipCpp = new siptlp_ColorScale(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_tlp_ColorScale[] = {
    {SIP_MLNAME_CAST(sipName_getColorAtPos), meth_tlp_ColorScale_getColorAtPos, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_ColorScale_getColorAtPos)},
    {SIP_MLNAME_CAST(sipName_getColorMap), meth_tlp_ColorScale_getColorMap, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_ColorScale_getColorMap)},
    {SIP_MLNAME_CAST(sipName_isGradient), meth_tlp_ColorScale_isGradient, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_ColorScale_isGradient)},
    {SIP_MLNAME_CAST(sipName_setColorAtPos), meth_tlp_ColorScale_setColorAtPos, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_ColorScale_setColorAtPos)},
    {SIP_MLNAME_CAST(sipName_setColorScale), meth_tlp_ColorScale_setColorScale, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_ColorScale_setColorScale)}
};

PyDoc_STRVAR(doc_tlp_ColorScale, "This class represents a color scale to perform color mapping.\n"
    "The color scale can be either gradient (default) or predefined colors steps.\n"
    "If the color scale is a gradient, returned colors are interpolated in function of the position.\n"
    "If the color scale isn't a gradient returned colors are the predefined colors steps.\n"
    "\n"
    "The sample code below illustrates how to create and manipulate a color scale::\n"
    "\n"
    "    # Creating an empty color scale (default constructor creates a heatmap from blue to red).\n"
    "    colorScale = tlp.ColorScale([])\n"
    "\n"
    "    # Color scale initialization : from blue to red with gradient.\n"
    "    colorScale.setColorAtPos(0.0, tlp.Color(0,0,255))\n"
    "    colorScale.setColorAtPos(1.0, tlp.Color(255,0,0))\n"
    " \n"
    "    # The following syntax could also be used\n"
    "    # colors = [tlp.Color(0,0,255), tlp.Color(255,0,0)]\n"
    "    # colorScale.setColorScale(colors)\n"
    "    #    or\n"
    "    # colorScale = tlp.ColorScale(colors)\n"
    "\n"
    "    # Get the color for the position 0.5, i.e. Color(127,0,127).\n"
    "    color = colorScale.getColorAtPos(0.5);\n"
    "\n"
    "    # Reinitialize the color scale : from blue to red without gradient.\n"
    "    newColors = []\n"
    "    newColors.append(tlp.Color(0,0,255))\n"
    "    newColors.append(tlp.Color(255,0,0))\n"
    "    colorScale.setColorScale(newColors,False)\n"
    "\n"
    "    # Get the color for the position 0.3, i.e. Color(0,0,255).\n"
    "    color = colorScale.getColorAtPos(0.3)\n"
    "\n"
    "    # Get the color for the position 0.7, i.e. Color(255,0,0).\n"
    "    color = colorScale.getColorAtPos(0.7)");


sipClassTypeDef sipTypeDef_tulip_tlp_ColorScale = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__ColorScale,
        {0}
    },
    {
        sipNameNr_ColorScale,
        {21, 255, 0},
        5, methods_tlp_ColorScale,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_tlp_ColorScale,
    -1,
    -1,
    0,
    0,
    init_tlp_ColorScale,
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
    dealloc_tlp_ColorScale,
    assign_tlp_ColorScale,
    array_tlp_ColorScale,
    copy_tlp_ColorScale,
    release_tlp_ColorScale,
    cast_tlp_ColorScale,
    0,
    0,
    0
};
