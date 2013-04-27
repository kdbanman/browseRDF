/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Fri Apr 26 16:33:30 2013
 */

#include "sipAPItulip.h"

#line 30 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/BoundingBox.sip"
#include <tulip/BoundingBox.h>
#line 12 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpBoundingBox.cpp"



PyDoc_STRVAR(doc_tlp_BoundingBox_center, "tlp.BoundingBox.center()\n"
    "\n"
    "Returns the geometrical center of the bounding box.\n"
    "\n"
    ":rtype: :class:`tlp.Vec3f` ");

extern "C" {static PyObject *meth_tlp_BoundingBox_center(PyObject *, PyObject *);}
static PyObject *meth_tlp_BoundingBox_center(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::BoundingBox *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_BoundingBox, &sipCpp))
        {
            tlp::Vec3f *sipRes;

            sipRes = new tlp::Vec3f(sipCpp->center());

            return sipConvertFromNewType(sipRes,sipType_tlp_Vec3f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BoundingBox, sipName_center, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_BoundingBox_width, "tlp.BoundingBox.width()\n"
    "\n"
    "Returns the width of the bounding box.\n"
    "\n"
    ":rtype: float");

extern "C" {static PyObject *meth_tlp_BoundingBox_width(PyObject *, PyObject *);}
static PyObject *meth_tlp_BoundingBox_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::BoundingBox *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_BoundingBox, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->width();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BoundingBox, sipName_width, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_BoundingBox_height, "tlp.BoundingBox.height()\n"
    "\n"
    "Returns the height of the bounding box.\n"
    "\n"
    ":rtype: float");

extern "C" {static PyObject *meth_tlp_BoundingBox_height(PyObject *, PyObject *);}
static PyObject *meth_tlp_BoundingBox_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::BoundingBox *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_BoundingBox, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->height();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BoundingBox, sipName_height, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_BoundingBox_depth, "tlp.BoundingBox.depth()\n"
    "\n"
    "Returns the depth of the bounding box.\n"
    "\n"
    ":rtype: float");

extern "C" {static PyObject *meth_tlp_BoundingBox_depth(PyObject *, PyObject *);}
static PyObject *meth_tlp_BoundingBox_depth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::BoundingBox *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_BoundingBox, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->depth();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BoundingBox, sipName_depth, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_BoundingBox_expand, "tlp.BoundingBox.expand(point)\n"
    "\n"
    "Expands the bounding box to one containing the vector passed as parameter.\n"
    "If the vector is inside the bounding box, it remains unchanged.\n"
    "\n"
    ":param point: A point in the 3D space we want the bounding box to encompass.\n"
    ":type point: :class:`tlp.Vec3f`");

extern "C" {static PyObject *meth_tlp_BoundingBox_expand(PyObject *, PyObject *);}
static PyObject *meth_tlp_BoundingBox_expand(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Vec3f * a0;
        tlp::BoundingBox *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_tlp_BoundingBox, &sipCpp, sipType_tlp_Vec3f, &a0))
        {
            sipCpp->expand(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BoundingBox, sipName_expand, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_BoundingBox_translate, "tlp.BoundingBox.translate(displacement)\n"
    "\n"
    "Translates the bounding box by the displacement given by the vector passed as parameter.\n"
    "\n"
    ":param displacement: The displacement vector in 3D space to translate this bounding box by.\n"
    ":type displacement: :class:`tlp.Vec3f`");

extern "C" {static PyObject *meth_tlp_BoundingBox_translate(PyObject *, PyObject *);}
static PyObject *meth_tlp_BoundingBox_translate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Vec3f * a0;
        tlp::BoundingBox *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_tlp_BoundingBox, &sipCpp, sipType_tlp_Vec3f, &a0))
        {
            sipCpp->translate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BoundingBox, sipName_translate, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_BoundingBox_isValid, "tlp.BoundingBox.isValid()\n"
    "\n"
    "Checks whether the bounding box's lowest point is less than it's highest point.\n"
    "\"Less Than\" means axis-by-axis comparison, i.e. x1 < x2 && y1 < y2 && z1 < z2.\n"
    "\n"
    ":rtype: boolean");

extern "C" {static PyObject *meth_tlp_BoundingBox_isValid(PyObject *, PyObject *);}
static PyObject *meth_tlp_BoundingBox_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::BoundingBox *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_BoundingBox, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BoundingBox, sipName_isValid, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_BoundingBox_contains, "tlp.BoundingBox.contains(point)\n"
    "\n"
    ".. versionadded:: 3.7\n"
    "\n"
    "Checks if the given point is inside the current bounding box.\n"
    "If the bounding box is invalid the result is always :const:`False`.\n"
    "\n"
    ":param point: a point in the 3D space.\n"
    ":type point: :class:`tlp.Vec3f`\n"
    ":rtype: boolean");

extern "C" {static PyObject *meth_tlp_BoundingBox_contains(PyObject *, PyObject *);}
static PyObject *meth_tlp_BoundingBox_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Vec3f * a0;
        const tlp::BoundingBox *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_tlp_BoundingBox, &sipCpp, sipType_tlp_Vec3f, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BoundingBox, sipName_contains, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_BoundingBox_intersect, "tlp.BoundingBox.intersect(boundingBox)\n"
    "\n"
    ".. versionadded:: 3.7\n"
    "\n"
    "Checks if the given bounding box intersects the current one.\n"
    "If one of the bounding boxes is invalid returns :const:`False`.\n"
    "\n"
    ":param boundingBox: the bounding box on which to check intersection\n"
    ":type boundingBox: :class:`tlp.BoundingBox`\n"
    ":rtype: boolean\n"
    "tlp.BoundingBox.intersect(segStart, segEnd)\n"
    "\n"
    ".. versionadded:: 3.7\n"
    "\n"
    "Checks if the bounding box intersects the given line segment.\n"
    "If the bounding box is invalid the result is always :const:`False`.\n"
    "\n"
    ":param segStart: the start point of the line segment on which to check intersection\n"
    ":type segStart: :class:`tlp.Vec3f`\n"
    ":param segEnd: the end point of the line segment on which to check intersection\n"
    ":type segEnd: :class:`tlp.Vec3f`\n"
    ":rtype: boolean");

extern "C" {static PyObject *meth_tlp_BoundingBox_intersect(PyObject *, PyObject *);}
static PyObject *meth_tlp_BoundingBox_intersect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::BoundingBox * a0;
        const tlp::BoundingBox *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_tlp_BoundingBox, &sipCpp, sipType_tlp_BoundingBox, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->intersect(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const tlp::Vec3f * a0;
        const tlp::Vec3f * a1;
        const tlp::BoundingBox *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9", &sipSelf, sipType_tlp_BoundingBox, &sipCpp, sipType_tlp_Vec3f, &a0, sipType_tlp_Vec3f, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->intersect(*a0,*a1);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BoundingBox, sipName_intersect, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_tlp_BoundingBox___repr__(PyObject *);}
static PyObject *slot_tlp_BoundingBox___repr__(PyObject *sipSelf)
{
    tlp::BoundingBox *sipCpp = reinterpret_cast<tlp::BoundingBox *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_BoundingBox));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 181 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/BoundingBox.sip"
		std::ostringstream oss;
		oss << *sipCpp;
		std::string s = oss.str();
		for (size_t i = 0 ; i < s.length() ; ++i) {
			if (s[i] == '(') {
				s[i] = '[';
			} else if (s[i] == ')') {
				s[i] = ']';
			}
		}
#if PY_MAJOR_VERSION >= 3
        sipRes = PyUnicode_FromString(s.c_str());
#else
        sipRes = PyString_FromString(s.c_str());
#endif
#line 367 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpBoundingBox.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_tlp_BoundingBox___setitem__(PyObject *,PyObject *);}
static int slot_tlp_BoundingBox___setitem__(PyObject *sipSelf,PyObject *sipArgs)
{
    tlp::BoundingBox *sipCpp = reinterpret_cast<tlp::BoundingBox *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_BoundingBox));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = NULL;

    {
        int a0;
        const tlp::Vec3f * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "iJ9", &a0, sipType_tlp_Vec3f, &a1))
        {
            int sipIsErr = 0;

#line 173 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/BoundingBox.sip"
	if (a0 < 2)
		(*sipCpp)[a0] = *a1;
	else
		sipIsErr = 1;	
#line 400 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpBoundingBox.cpp"

            if (sipIsErr)
                return -1;

            return 0;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BoundingBox, sipName___setitem__, NULL);

    return -1;
}


extern "C" {static PyObject *slot_tlp_BoundingBox___getitem__(PyObject *,PyObject *);}
static PyObject *slot_tlp_BoundingBox___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    tlp::BoundingBox *sipCpp = reinterpret_cast<tlp::BoundingBox *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_tlp_BoundingBox));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        uint a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1u", &a0))
        {
            tlp::Vec3f *sipRes;

            sipRes = &(*sipCpp)[a0];

            return sipConvertFromType(sipRes,sipType_tlp_Vec3f,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_BoundingBox, sipName___getitem__, NULL);

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_BoundingBox(void *, const sipTypeDef *);}
static void *cast_tlp_BoundingBox(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_BoundingBox)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_BoundingBox(void *, int);}
static void release_tlp_BoundingBox(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::BoundingBox *>(sipCppV);
}


extern "C" {static void assign_tlp_BoundingBox(void *, SIP_SSIZE_T, const void *);}
static void assign_tlp_BoundingBox(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<tlp::BoundingBox *>(sipDst)[sipDstIdx] = *reinterpret_cast<const tlp::BoundingBox *>(sipSrc);
}


extern "C" {static void *array_tlp_BoundingBox(SIP_SSIZE_T);}
static void *array_tlp_BoundingBox(SIP_SSIZE_T sipNrElem)
{
    return new tlp::BoundingBox[sipNrElem];
}


extern "C" {static void *copy_tlp_BoundingBox(const void *, SIP_SSIZE_T);}
static void *copy_tlp_BoundingBox(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new tlp::BoundingBox(reinterpret_cast<const tlp::BoundingBox *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_tlp_BoundingBox(sipSimpleWrapper *);}
static void dealloc_tlp_BoundingBox(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_BoundingBox(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_tlp_BoundingBox(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_BoundingBox(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    tlp::BoundingBox *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new tlp::BoundingBox();

            return sipCpp;
        }
    }

    {
        const tlp::Vec3f * a0;
        const tlp::Vec3f * a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9", sipType_tlp_Vec3f, &a0, sipType_tlp_Vec3f, &a1))
        {
            sipCpp = new tlp::BoundingBox(*a0,*a1);

            return sipCpp;
        }
    }

    {
        const tlp::BoundingBox * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_BoundingBox, &a0))
        {
            sipCpp = new tlp::BoundingBox(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_tlp_BoundingBox[] = {
    {(void *)slot_tlp_BoundingBox___repr__, repr_slot},
    {(void *)slot_tlp_BoundingBox___setitem__, setitem_slot},
    {(void *)slot_tlp_BoundingBox___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_tlp_BoundingBox[] = {
    {SIP_MLNAME_CAST(sipName_center), meth_tlp_BoundingBox_center, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_BoundingBox_center)},
    {SIP_MLNAME_CAST(sipName_contains), meth_tlp_BoundingBox_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_BoundingBox_contains)},
    {SIP_MLNAME_CAST(sipName_depth), meth_tlp_BoundingBox_depth, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_BoundingBox_depth)},
    {SIP_MLNAME_CAST(sipName_expand), meth_tlp_BoundingBox_expand, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_BoundingBox_expand)},
    {SIP_MLNAME_CAST(sipName_height), meth_tlp_BoundingBox_height, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_BoundingBox_height)},
    {SIP_MLNAME_CAST(sipName_intersect), meth_tlp_BoundingBox_intersect, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_BoundingBox_intersect)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_tlp_BoundingBox_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_BoundingBox_isValid)},
    {SIP_MLNAME_CAST(sipName_translate), meth_tlp_BoundingBox_translate, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_BoundingBox_translate)},
    {SIP_MLNAME_CAST(sipName_width), meth_tlp_BoundingBox_width, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_BoundingBox_width)}
};

PyDoc_STRVAR(doc_tlp_BoundingBox, "This class represents the 3D bounding box of an object.\n"
    "It is defined by two 3d points, the first one being the lowest point (bottom-left corner), \n"
    "the second being the highest (top-right corner).\n"
    "\n"
    "A bounding box can be instantiated and manipulated the following ways::\n"
    "\n"
    "	# Initialize a non-valid bounding box.\n"
    "	# The minimum is (1, 1, 1) and the maximum is (-1, -1, -1).\n"
    "	bb = tlp.BoundingBox()\n"
    "	\n"
    "	# Initialize a bounding box by specifying the lowest and highest point.\n"
    "	# The validity of the bounding box is checked in debug mode (an assertion is raised if it is not valid). \n"
    "	bb2 = tlp.BoundingBox(tlp.Vec3f(0,0,0), tlp.Vec3f(10,10,10))\n"
    "	\n"
    "	# Reading / writing the bounding box components can be done through the [] operator\n"
    "	min = bb2[0]\n"
    "	max = bb2[1]");


sipClassTypeDef sipTypeDef_tulip_tlp_BoundingBox = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__BoundingBox,
        {0}
    },
    {
        sipNameNr_BoundingBox,
        {21, 255, 0},
        9, methods_tlp_BoundingBox,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_tlp_BoundingBox,
    -1,
    -1,
    0,
    slots_tlp_BoundingBox,
    init_tlp_BoundingBox,
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
    dealloc_tlp_BoundingBox,
    assign_tlp_BoundingBox,
    array_tlp_BoundingBox,
    copy_tlp_BoundingBox,
    release_tlp_BoundingBox,
    cast_tlp_BoundingBox,
    0,
    0,
    0
};
