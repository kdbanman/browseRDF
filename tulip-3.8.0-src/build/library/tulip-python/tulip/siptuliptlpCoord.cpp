/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Mon Apr 29 01:46:11 2013
 */

#include "sipAPItulip.h"

#line 33 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Coord.sip"
#include <tulip/Coord.h>
#line 12 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpCoord.cpp"



PyDoc_STRVAR(doc_tlp_Coord_set, "tlp.Coord.set(x, y, z)\n"
    "\n"
    "Sets each coordinate of the point.\n"
    "\n"
    ":param x: a value\n"
    ":type x: float\n"
    ":param y: a value\n"
    ":type y: float\n"
    ":param z: a value\n"
    ":type z: float\n"
    "tlp.Coord.set(c)\n"
    "\n"
    "Sets each coordinate of the point from another one.\n"
    "\n"
    ":param c: a coordinate\n"
    ":type c: :class:`tlp.Coord`");

extern "C" {static PyObject *meth_tlp_Coord_set(PyObject *, PyObject *);}
static PyObject *meth_tlp_Coord_set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0 = 0;
        float a1 = 0;
        float a2 = 0;
        tlp::Coord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|fff", &sipSelf, sipType_tlp_Coord, &sipCpp, &a0, &a1, &a2))
        {
            sipCpp->set(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const tlp::Coord * a0;
        tlp::Coord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_tlp_Coord, &sipCpp, sipType_tlp_Coord, &a0))
        {
            sipCpp->set(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Coord, sipName_set, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Coord_setX, "tlp.Coord.setX(x)\n"
    "\n"
    "Sets the x coordinate of the point.\n"
    "\n"
    ":param x: a value\n"
    ":type x: float");

extern "C" {static PyObject *meth_tlp_Coord_setX(PyObject *, PyObject *);}
static PyObject *meth_tlp_Coord_setX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        tlp::Coord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_tlp_Coord, &sipCpp, &a0))
        {
            sipCpp->setX(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Coord, sipName_setX, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Coord_setY, "tlp.Coord.setY(y)\n"
    "\n"
    "Sets the y coordinate of the point.\n"
    "\n"
    ":param y: a value\n"
    ":type y: float");

extern "C" {static PyObject *meth_tlp_Coord_setY(PyObject *, PyObject *);}
static PyObject *meth_tlp_Coord_setY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        tlp::Coord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_tlp_Coord, &sipCpp, &a0))
        {
            sipCpp->setY(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Coord, sipName_setY, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Coord_setZ, "tlp.Coord.setZ(z)\n"
    "\n"
    "Sets the z coordinate of the point.\n"
    "\n"
    ":param z: a value\n"
    ":type z: float");

extern "C" {static PyObject *meth_tlp_Coord_setZ(PyObject *, PyObject *);}
static PyObject *meth_tlp_Coord_setZ(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        tlp::Coord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_tlp_Coord, &sipCpp, &a0))
        {
            sipCpp->setZ(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Coord, sipName_setZ, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Coord_getX, "tlp.Coord.getX()\n"
    "\n"
    "Returns the x coordinate of the point.\n"
    "\n"
    ":rtype: float");

extern "C" {static PyObject *meth_tlp_Coord_getX(PyObject *, PyObject *);}
static PyObject *meth_tlp_Coord_getX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Coord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Coord, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getX();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Coord, sipName_getX, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Coord_getY, "tlp.Coord.getY()\n"
    "\n"
    "Returns the y coordinate of the point.\n"
    "\n"
    ":rtype: float");

extern "C" {static PyObject *meth_tlp_Coord_getY(PyObject *, PyObject *);}
static PyObject *meth_tlp_Coord_getY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Coord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Coord, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getY();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Coord, sipName_getY, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Coord_getZ, "tlp.Coord.getZ()\n"
    "\n"
    "Returns the z coordinate of the point.\n"
    "\n"
    ":rtype: float");

extern "C" {static PyObject *meth_tlp_Coord_getZ(PyObject *, PyObject *);}
static PyObject *meth_tlp_Coord_getZ(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Coord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Coord, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->getZ();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Coord, sipName_getZ, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_Coord_get, "tlp.Coord.get()\n"
    "\n"
    "Returns the point as a tuple.\n"
    "\n"
    ":rtype: (float, float, float)");

extern "C" {static PyObject *meth_tlp_Coord_get(PyObject *, PyObject *);}
static PyObject *meth_tlp_Coord_get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        float a1;
        float a2;
        const tlp::Coord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Coord, &sipCpp))
        {
            sipCpp->get(a0,a1,a2);

            return sipBuildResult(0,"(fff)",a0,a1,a2);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Coord, sipName_get, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_tlp_Coord___xor__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Coord___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Coord * a0;
        const tlp::Coord * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_tlp_Coord, &a0, sipType_tlp_Coord, &a1))
        {
            tlp::Coord *sipRes;

            sipRes = new tlp::Coord((*a0 ^ *a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Coord,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_tlp_Coord___div__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Coord___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Coord * a0;
        const tlp::Coord * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_tlp_Coord, &a0, sipType_tlp_Coord, &a1))
        {
            tlp::Coord *sipRes;

            sipRes = new tlp::Coord((*a0 / *a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Coord,NULL);
        }
    }

    {
        tlp::Coord * a0;
        float a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9f", sipType_tlp_Coord, &a0, &a1))
        {
            tlp::Coord *sipRes;

            sipRes = new tlp::Coord((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Coord,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_tlp_Coord___sub__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Coord___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Coord * a0;
        const tlp::Coord * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_tlp_Coord, &a0, sipType_tlp_Coord, &a1))
        {
            tlp::Coord *sipRes;

            sipRes = new tlp::Coord((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Coord,NULL);
        }
    }

    {
        tlp::Coord * a0;
        float a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9f", sipType_tlp_Coord, &a0, &a1))
        {
            tlp::Coord *sipRes;

            sipRes = new tlp::Coord((*a0 - a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Coord,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_tlp_Coord___add__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Coord___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Coord * a0;
        const tlp::Coord * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_tlp_Coord, &a0, sipType_tlp_Coord, &a1))
        {
            tlp::Coord *sipRes;

            sipRes = new tlp::Coord((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Coord,NULL);
        }
    }

    {
        tlp::Coord * a0;
        float a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9f", sipType_tlp_Coord, &a0, &a1))
        {
            tlp::Coord *sipRes;

            sipRes = new tlp::Coord((*a0 + a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Coord,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_tlp_Coord___mul__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Coord___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Coord * a0;
        const tlp::Coord * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_tlp_Coord, &a0, sipType_tlp_Coord, &a1))
        {
            tlp::Coord *sipRes;

            sipRes = new tlp::Coord((*a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Coord,NULL);
        }
    }

    {
        tlp::Coord * a0;
        float a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9f", sipType_tlp_Coord, &a0, &a1))
        {
            tlp::Coord *sipRes;

            sipRes = new tlp::Coord((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Coord,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,mul_slot,NULL,sipArg0,sipArg1);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_Coord(void *, const sipTypeDef *);}
static void *cast_tlp_Coord(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_tlp_Coord)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_tlp_Vec3f)->ctd_cast((tlp::Vec3f *)(tlp::Coord *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_Coord(void *, int);}
static void release_tlp_Coord(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::Coord *>(sipCppV);
}


extern "C" {static void assign_tlp_Coord(void *, SIP_SSIZE_T, const void *);}
static void assign_tlp_Coord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<tlp::Coord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const tlp::Coord *>(sipSrc);
}


extern "C" {static void *array_tlp_Coord(SIP_SSIZE_T);}
static void *array_tlp_Coord(SIP_SSIZE_T sipNrElem)
{
    return new tlp::Coord[sipNrElem];
}


extern "C" {static void *copy_tlp_Coord(const void *, SIP_SSIZE_T);}
static void *copy_tlp_Coord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new tlp::Coord(reinterpret_cast<const tlp::Coord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_tlp_Coord(sipSimpleWrapper *);}
static void dealloc_tlp_Coord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_Coord(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_tlp_Coord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_Coord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    tlp::Coord *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new tlp::Coord();

            return sipCpp;
        }
    }

    {
        float a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "f", &a0))
        {
#line 49 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Coord.sip"
		sipCpp = new tlp::Coord();
		(*sipCpp)[0] = a0;
		(*sipCpp)[1] = a0;
		(*sipCpp)[2] = a0;
#line 569 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpCoord.cpp"

            return sipCpp;
        }
    }

    {
        float a0;
        float a1;
        float a2 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ff|f", &a0, &a1, &a2))
        {
            sipCpp = new tlp::Coord(a0,a1,a2);

            return sipCpp;
        }
    }

    {
        const tlp::Coord * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_Coord, &a0))
        {
            sipCpp = new tlp::Coord(*a0);

            return sipCpp;
        }
    }

    {
        const tlp::Vec3f * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_Vec3f, &a0))
        {
            sipCpp = new tlp::Coord(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_tlp_Coord[] = {{98, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_tlp_Coord[] = {
    {(void *)slot_tlp_Coord___xor__, xor_slot},
    {(void *)slot_tlp_Coord___div__, div_slot},
    {(void *)slot_tlp_Coord___sub__, sub_slot},
    {(void *)slot_tlp_Coord___add__, add_slot},
    {(void *)slot_tlp_Coord___mul__, mul_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_tlp_Coord[] = {
    {SIP_MLNAME_CAST(sipName_get), meth_tlp_Coord_get, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Coord_get)},
    {SIP_MLNAME_CAST(sipName_getX), meth_tlp_Coord_getX, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Coord_getX)},
    {SIP_MLNAME_CAST(sipName_getY), meth_tlp_Coord_getY, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Coord_getY)},
    {SIP_MLNAME_CAST(sipName_getZ), meth_tlp_Coord_getZ, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Coord_getZ)},
    {SIP_MLNAME_CAST(sipName_set), meth_tlp_Coord_set, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Coord_set)},
    {SIP_MLNAME_CAST(sipName_setX), meth_tlp_Coord_setX, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Coord_setX)},
    {SIP_MLNAME_CAST(sipName_setY), meth_tlp_Coord_setY, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Coord_setY)},
    {SIP_MLNAME_CAST(sipName_setZ), meth_tlp_Coord_setZ, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_Coord_setZ)}
};

PyDoc_STRVAR(doc_tlp_Coord, "Bases: :class:`tlp.Vec3f`\n"
    "\n"
    "This class represents a point (coordinates) in a third dimensional space . Constructors and operators \n"
    "are similar to those defined in its base class :class:`tlp.Vec3f`.");


sipClassTypeDef sipTypeDef_tulip_tlp_Coord = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__Coord,
        {0}
    },
    {
        sipNameNr_Coord,
        {21, 255, 0},
        8, methods_tlp_Coord,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_tlp_Coord,
    -1,
    -1,
    supers_tlp_Coord,
    slots_tlp_Coord,
    init_tlp_Coord,
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
    dealloc_tlp_Coord,
    assign_tlp_Coord,
    array_tlp_Coord,
    copy_tlp_Coord,
    release_tlp_Coord,
    cast_tlp_Coord,
    0,
    0,
    0
};
