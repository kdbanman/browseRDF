/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Mon Apr 29 01:46:11 2013
 */

#include "sipAPItulip.h"

#line 121 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Matrix.sip"
#include <tulip/Matrix.h>
#line 12 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpMat4f.cpp"



extern "C" {static PyObject *meth_tlp_Mat4f_fill(PyObject *, PyObject *);}
static PyObject *meth_tlp_Mat4f_fill(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        tlp::Mat4f *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_tlp_Mat4f, &sipCpp, &a0))
        {
            tlp::Mat4f *sipRes;

            sipRes = &sipCpp->fill(a0);

            return sipConvertFromType(sipRes,sipType_tlp_Mat4f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Mat4f, sipName_fill, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Mat4f_determinant(PyObject *, PyObject *);}
static PyObject *meth_tlp_Mat4f_determinant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Mat4f *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Mat4f, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->determinant();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Mat4f, sipName_determinant, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Mat4f_transpose(PyObject *, PyObject *);}
static PyObject *meth_tlp_Mat4f_transpose(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Mat4f *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Mat4f, &sipCpp))
        {
            tlp::Mat4f *sipRes;

            sipRes = &sipCpp->transpose();

            return sipConvertFromType(sipRes,sipType_tlp_Mat4f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Mat4f, sipName_transpose, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Mat4f_inverse(PyObject *, PyObject *);}
static PyObject *meth_tlp_Mat4f_inverse(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Mat4f *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Mat4f, &sipCpp))
        {
            tlp::Mat4f *sipRes;

            sipRes = &sipCpp->inverse();

            return sipConvertFromType(sipRes,sipType_tlp_Mat4f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Mat4f, sipName_inverse, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Mat4f_cofactor(PyObject *, PyObject *);}
static PyObject *meth_tlp_Mat4f_cofactor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Mat4f *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_Mat4f, &sipCpp))
        {
            tlp::Mat4f *sipRes;

            sipRes = new tlp::Mat4f(sipCpp->cofactor());

            return sipConvertFromNewType(sipRes,sipType_tlp_Mat4f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Mat4f, sipName_cofactor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_tlp_Mat4f_powerIteration(PyObject *, PyObject *);}
static PyObject *meth_tlp_Mat4f_powerIteration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
        const tlp::Mat4f *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_tlp_Mat4f, &sipCpp, &a0))
        {
            tlp::Vec4f *sipRes;

            sipRes = new tlp::Vec4f(sipCpp->powerIteration(a0));

            return sipConvertFromNewType(sipRes,sipType_tlp_Vec4f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Mat4f, sipName_powerIteration, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_tlp_Mat4f___repr__(PyObject *);}
static PyObject *slot_tlp_Mat4f___repr__(PyObject *sipSelf)
{
    tlp::Mat4f *sipCpp = reinterpret_cast<tlp::Mat4f *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Mat4f));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 183 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Matrix.sip"
		std::string repr = "";
		for (int i = 0 ; i < 4 ; ++i) {
			std::ostringstream oss;
			oss << (*sipCpp)[i];
			std::string s = oss.str();
			s[0] = '[';
			s[s.size() - 1] = ']';
			repr += (s + "\n");
		}
#if PY_MAJOR_VERSION >= 3
    sipRes = PyUnicode_FromString(repr.c_str());
#else
    sipRes = PyString_FromString(repr.c_str());
#endif
#line 196 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpMat4f.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_tlp_Mat4f___setitem__(PyObject *,PyObject *);}
static int slot_tlp_Mat4f___setitem__(PyObject *sipSelf,PyObject *sipArgs)
{
    tlp::Mat4f *sipCpp = reinterpret_cast<tlp::Mat4f *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Mat4f));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = NULL;

    {
        int a0;
        const tlp::Vec4f * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "iJ9", &a0, sipType_tlp_Vec4f, &a1))
        {
            int sipIsErr = 0;

#line 175 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Matrix.sip"
	if (a0 < 4)
		(*sipCpp)[a0] = *a1;
	else
		sipIsErr = 1;	
#line 229 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpMat4f.cpp"

            if (sipIsErr)
                return -1;

            return 0;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Mat4f, sipName___setitem__, NULL);

    return -1;
}


extern "C" {static PyObject *slot_tlp_Mat4f___getitem__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Mat4f___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    tlp::Mat4f *sipCpp = reinterpret_cast<tlp::Mat4f *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Mat4f));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        uint a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1u", &a0))
        {
            tlp::Vec4f *sipRes;

            sipRes = &(*sipCpp)[a0];

            return sipConvertFromType(sipRes,sipType_tlp_Vec4f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Mat4f, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static PyObject *slot_tlp_Mat4f___div__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Mat4f___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Mat4f * a0;
        const tlp::Mat4f * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_tlp_Mat4f, &a0, sipType_tlp_Mat4f, &a1))
        {
            tlp::Mat4f *sipRes;

            sipRes = new tlp::Mat4f((*a0 / *a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Mat4f,NULL);
        }
    }

    {
        tlp::Mat4f * a0;
        float a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9f", sipType_tlp_Mat4f, &a0, &a1))
        {
            tlp::Mat4f *sipRes;

            sipRes = new tlp::Mat4f((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Mat4f,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_tlp_Mat4f___idiv__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Mat4f___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_tlp_Mat4f)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    tlp::Mat4f *sipCpp = reinterpret_cast<tlp::Mat4f *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Mat4f));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const tlp::Mat4f * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_tlp_Mat4f, &a0))
        {
            sipCpp->tlp::Mat4f::operator/=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        float a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1f", &a0))
        {
            sipCpp->tlp::Mat4f::operator/=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_tlp_Mat4f___mul__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Mat4f___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Mat4f * a0;
        const tlp::Mat4f * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_tlp_Mat4f, &a0, sipType_tlp_Mat4f, &a1))
        {
            tlp::Mat4f *sipRes;

            sipRes = new tlp::Mat4f((*a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Mat4f,NULL);
        }
    }

    {
        tlp::Mat4f * a0;
        const tlp::Vec4f * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_tlp_Mat4f, &a0, sipType_tlp_Vec4f, &a1))
        {
            tlp::Vec4f *sipRes;

            sipRes = new tlp::Vec4f((*a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Vec4f,NULL);
        }
    }

    {
        tlp::Mat4f * a0;
        float a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9f", sipType_tlp_Mat4f, &a0, &a1))
        {
            tlp::Mat4f *sipRes;

            sipRes = new tlp::Mat4f((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Mat4f,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_tlp_Mat4f___imul__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Mat4f___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_tlp_Mat4f)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    tlp::Mat4f *sipCpp = reinterpret_cast<tlp::Mat4f *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Mat4f));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const tlp::Mat4f * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_tlp_Mat4f, &a0))
        {
            sipCpp->tlp::Mat4f::operator*=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        float a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1f", &a0))
        {
            sipCpp->tlp::Mat4f::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_tlp_Mat4f___ne__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Mat4f___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    tlp::Mat4f *sipCpp = reinterpret_cast<tlp::Mat4f *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Mat4f));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const tlp::Mat4f * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_tlp_Mat4f, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->tlp::Mat4f::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,ne_slot,sipType_tlp_Mat4f,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_tlp_Mat4f___eq__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Mat4f___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    tlp::Mat4f *sipCpp = reinterpret_cast<tlp::Mat4f *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Mat4f));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const tlp::Mat4f * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_tlp_Mat4f, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->tlp::Mat4f::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,eq_slot,sipType_tlp_Mat4f,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_tlp_Mat4f___isub__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Mat4f___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_tlp_Mat4f)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    tlp::Mat4f *sipCpp = reinterpret_cast<tlp::Mat4f *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Mat4f));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const tlp::Mat4f * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_tlp_Mat4f, &a0))
        {
            sipCpp->tlp::Mat4f::operator-=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_tlp_Mat4f___sub__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Mat4f___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Mat4f * a0;
        const tlp::Mat4f * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_tlp_Mat4f, &a0, sipType_tlp_Mat4f, &a1))
        {
            tlp::Mat4f *sipRes;

            sipRes = new tlp::Mat4f((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Mat4f,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_tlp_Mat4f___iadd__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Mat4f___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_tlp_Mat4f)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    tlp::Mat4f *sipCpp = reinterpret_cast<tlp::Mat4f *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_Mat4f));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const tlp::Mat4f * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_tlp_Mat4f, &a0))
        {
            sipCpp->tlp::Mat4f::operator+=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_tlp_Mat4f___add__(PyObject *,PyObject *);}
static PyObject *slot_tlp_Mat4f___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Mat4f * a0;
        const tlp::Mat4f * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_tlp_Mat4f, &a0, sipType_tlp_Mat4f, &a1))
        {
            tlp::Mat4f *sipRes;

            sipRes = new tlp::Mat4f((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_tlp_Mat4f,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_tulip,add_slot,NULL,sipArg0,sipArg1);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_Mat4f(void *, const sipTypeDef *);}
static void *cast_tlp_Mat4f(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_Mat4f)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_Mat4f(void *, int);}
static void release_tlp_Mat4f(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::Mat4f *>(sipCppV);
}


extern "C" {static void assign_tlp_Mat4f(void *, SIP_SSIZE_T, const void *);}
static void assign_tlp_Mat4f(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<tlp::Mat4f *>(sipDst)[sipDstIdx] = *reinterpret_cast<const tlp::Mat4f *>(sipSrc);
}


extern "C" {static void *array_tlp_Mat4f(SIP_SSIZE_T);}
static void *array_tlp_Mat4f(SIP_SSIZE_T sipNrElem)
{
    return new tlp::Mat4f[sipNrElem];
}


extern "C" {static void *copy_tlp_Mat4f(const void *, SIP_SSIZE_T);}
static void *copy_tlp_Mat4f(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new tlp::Mat4f(reinterpret_cast<const tlp::Mat4f *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_tlp_Mat4f(sipSimpleWrapper *);}
static void dealloc_tlp_Mat4f(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_Mat4f(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_tlp_Mat4f(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_Mat4f(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    tlp::Mat4f *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new tlp::Mat4f();

            return sipCpp;
        }
    }

    {
        const tlp::Mat4f * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_Mat4f, &a0))
        {
            sipCpp = new tlp::Mat4f(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_tlp_Mat4f[] = {
    {(void *)slot_tlp_Mat4f___repr__, repr_slot},
    {(void *)slot_tlp_Mat4f___setitem__, setitem_slot},
    {(void *)slot_tlp_Mat4f___getitem__, getitem_slot},
    {(void *)slot_tlp_Mat4f___div__, div_slot},
    {(void *)slot_tlp_Mat4f___idiv__, idiv_slot},
    {(void *)slot_tlp_Mat4f___mul__, mul_slot},
    {(void *)slot_tlp_Mat4f___imul__, imul_slot},
    {(void *)slot_tlp_Mat4f___ne__, ne_slot},
    {(void *)slot_tlp_Mat4f___eq__, eq_slot},
    {(void *)slot_tlp_Mat4f___isub__, isub_slot},
    {(void *)slot_tlp_Mat4f___sub__, sub_slot},
    {(void *)slot_tlp_Mat4f___iadd__, iadd_slot},
    {(void *)slot_tlp_Mat4f___add__, add_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_tlp_Mat4f[] = {
    {SIP_MLNAME_CAST(sipName_cofactor), meth_tlp_Mat4f_cofactor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_determinant), meth_tlp_Mat4f_determinant, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fill), meth_tlp_Mat4f_fill, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_inverse), meth_tlp_Mat4f_inverse, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_powerIteration), meth_tlp_Mat4f_powerIteration, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_transpose), meth_tlp_Mat4f_transpose, METH_VARARGS, NULL}
};


sipClassTypeDef sipTypeDef_tulip_tlp_Mat4f = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__Mat4f,
        {0}
    },
    {
        sipNameNr_Mat4f,
        {21, 255, 0},
        6, methods_tlp_Mat4f,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    slots_tlp_Mat4f,
    init_tlp_Mat4f,
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
    dealloc_tlp_Mat4f,
    assign_tlp_Mat4f,
    array_tlp_Mat4f,
    copy_tlp_Mat4f,
    release_tlp_Mat4f,
    cast_tlp_Mat4f,
    0,
    0,
    0
};
