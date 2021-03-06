/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:12:56 2013
 */

#include "sipAPItulipogl.h"

#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip-ogl/GlLayer.sip"
#include <tulip/GlLayer.h>
#line 12 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlLayer.cpp"

#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip-ogl/../tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 17 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlLayer.cpp"
#line 31 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip-ogl/GlComposite.sip"
#include <tulip/GlComposite.h>
#line 20 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlLayer.cpp"
#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip-ogl/GlSceneVisitor.sip"
#include <tulip/GlSceneVisitor.h>
#line 23 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlLayer.cpp"
#line 36 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip-ogl/GlSimpleEntity.sip"
#include <tulip/GlSimpleEntity.h>
#line 26 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlLayer.cpp"
#line 41 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip-ogl/GlScene.sip"
#include <tulip/GlScene.h>
#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlLayer.cpp"


PyDoc_STRVAR(doc_tlp_GlLayer_setScene, "tlp.GlLayer.setScene(tlp.GlScene)");

extern "C" {static PyObject *meth_tlp_GlLayer_setScene(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_setScene(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::GlScene * a0;
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_tlp_GlLayer, &sipCpp, sipType_tlp_GlScene, &a0))
        {
            sipCpp->setScene(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_setScene, doc_tlp_GlLayer_setScene);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_getScene, "tlp.GlLayer.getScene() -> tlp.GlScene");

extern "C" {static PyObject *meth_tlp_GlLayer_getScene(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_getScene(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GlLayer, &sipCpp))
        {
            tlp::GlScene *sipRes;

            sipRes = sipCpp->getScene();

            return sipConvertFromType(sipRes,sipType_tlp_GlScene,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_getScene, doc_tlp_GlLayer_getScene);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_getName, "tlp.GlLayer.getName() -> string");

extern "C" {static PyObject *meth_tlp_GlLayer_getName(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_getName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GlLayer, &sipCpp))
        {
            std::string *sipRes;

            sipRes = new std::string(sipCpp->getName());

            return sipConvertFromNewType(sipRes,sipType_std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_getName, doc_tlp_GlLayer_getName);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_setCamera, "tlp.GlLayer.setCamera(tlp.Camera)");

extern "C" {static PyObject *meth_tlp_GlLayer_setCamera(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_setCamera(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const tlp::Camera * a0;
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_tlp_GlLayer, &sipCpp, sipType_tlp_Camera, &a0))
        {
            sipCpp->setCamera(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_setCamera, doc_tlp_GlLayer_setCamera);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_set2DMode, "tlp.GlLayer.set2DMode()");

extern "C" {static PyObject *meth_tlp_GlLayer_set2DMode(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_set2DMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GlLayer, &sipCpp))
        {
            sipCpp->set2DMode();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_set2DMode, doc_tlp_GlLayer_set2DMode);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_getCamera, "tlp.GlLayer.getCamera() -> tlp.Camera");

extern "C" {static PyObject *meth_tlp_GlLayer_getCamera(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_getCamera(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GlLayer, &sipCpp))
        {
            tlp::Camera *sipRes;

            sipRes = &sipCpp->getCamera();

            return sipConvertFromType(sipRes,sipType_tlp_Camera,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_getCamera, doc_tlp_GlLayer_getCamera);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_setVisible, "tlp.GlLayer.setVisible(bool)");

extern "C" {static PyObject *meth_tlp_GlLayer_setVisible(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_tlp_GlLayer, &sipCpp, &a0))
        {
            sipCpp->setVisible(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_setVisible, doc_tlp_GlLayer_setVisible);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_isVisible, "tlp.GlLayer.isVisible() -> bool");

extern "C" {static PyObject *meth_tlp_GlLayer_isVisible(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GlLayer, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isVisible();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_isVisible, doc_tlp_GlLayer_isVisible);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_addGlEntity, "tlp.GlLayer.addGlEntity(tlp.GlSimpleEntity, string)");

extern "C" {static PyObject *meth_tlp_GlLayer_addGlEntity(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_addGlEntity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::GlSimpleEntity * a0;
        const std::string * a1;
        int a1State = 0;
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:J1", &sipSelf, sipType_tlp_GlLayer, &sipCpp, sipType_tlp_GlSimpleEntity, &a0, sipType_std_string,&a1, &a1State))
        {
            sipCpp->addGlEntity(a0,*a1);
            sipReleaseType(const_cast<std::string *>(a1),sipType_std_string,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_addGlEntity, doc_tlp_GlLayer_addGlEntity);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_deleteGlEntity, "tlp.GlLayer.deleteGlEntity(string)\n"
    "tlp.GlLayer.deleteGlEntity(tlp.GlSimpleEntity)");

extern "C" {static PyObject *meth_tlp_GlLayer_deleteGlEntity(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_deleteGlEntity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_tlp_GlLayer, &sipCpp, sipType_std_string,&a0, &a0State))
        {
            sipCpp->deleteGlEntity(*a0);
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        tlp::GlSimpleEntity * a0;
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_tlp_GlLayer, &sipCpp, sipType_tlp_GlSimpleEntity, &a0))
        {
            sipCpp->deleteGlEntity(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_deleteGlEntity, doc_tlp_GlLayer_deleteGlEntity);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_findGlEntity, "tlp.GlLayer.findGlEntity(string) -> tlp.GlSimpleEntity");

extern "C" {static PyObject *meth_tlp_GlLayer_findGlEntity(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_findGlEntity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_tlp_GlLayer, &sipCpp, sipType_std_string,&a0, &a0State))
        {
            tlp::GlSimpleEntity *sipRes;

            sipRes = sipCpp->findGlEntity(*a0);
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);

            return sipConvertFromType(sipRes,sipType_tlp_GlSimpleEntity,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_findGlEntity, doc_tlp_GlLayer_findGlEntity);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_acceptVisitor, "tlp.GlLayer.acceptVisitor(tlp.GlSceneVisitor)");

extern "C" {static PyObject *meth_tlp_GlLayer_acceptVisitor(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_acceptVisitor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::GlSceneVisitor * a0;
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_tlp_GlLayer, &sipCpp, sipType_tlp_GlSceneVisitor, &a0))
        {
            sipCpp->acceptVisitor(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_acceptVisitor, doc_tlp_GlLayer_acceptVisitor);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_getComposite, "tlp.GlLayer.getComposite() -> tlp.GlComposite");

extern "C" {static PyObject *meth_tlp_GlLayer_getComposite(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_getComposite(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GlLayer, &sipCpp))
        {
            tlp::GlComposite *sipRes;

            sipRes = sipCpp->getComposite();

            return sipConvertFromType(sipRes,sipType_tlp_GlComposite,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_getComposite, doc_tlp_GlLayer_getComposite);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlLayer_clear, "tlp.GlLayer.clear()");

extern "C" {static PyObject *meth_tlp_GlLayer_clear(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlLayer_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::GlLayer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GlLayer, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlLayer, sipName_clear, doc_tlp_GlLayer_clear);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_GlLayer(void *, const sipTypeDef *);}
static void *cast_tlp_GlLayer(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_GlLayer)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_GlLayer(void *, int);}
static void release_tlp_GlLayer(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::GlLayer *>(sipCppV);
}


extern "C" {static void dealloc_tlp_GlLayer(sipSimpleWrapper *);}
static void dealloc_tlp_GlLayer(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_GlLayer(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_tlp_GlLayer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_GlLayer(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    tlp::GlLayer *sipCpp = 0;

    {
        const std::string * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_std_string,&a0, &a0State))
        {
            sipCpp = new tlp::GlLayer(*a0);
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);

            return sipCpp;
        }
    }

    {
        const tlp::GlLayer * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_GlLayer, &a0))
        {
            sipCpp = new tlp::GlLayer(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_tlp_GlLayer[] = {
    {SIP_MLNAME_CAST(sipName_acceptVisitor), meth_tlp_GlLayer_acceptVisitor, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_acceptVisitor)},
    {SIP_MLNAME_CAST(sipName_addGlEntity), meth_tlp_GlLayer_addGlEntity, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_addGlEntity)},
    {SIP_MLNAME_CAST(sipName_clear), meth_tlp_GlLayer_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_clear)},
    {SIP_MLNAME_CAST(sipName_deleteGlEntity), meth_tlp_GlLayer_deleteGlEntity, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_deleteGlEntity)},
    {SIP_MLNAME_CAST(sipName_findGlEntity), meth_tlp_GlLayer_findGlEntity, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_findGlEntity)},
    {SIP_MLNAME_CAST(sipName_getCamera), meth_tlp_GlLayer_getCamera, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_getCamera)},
    {SIP_MLNAME_CAST(sipName_getComposite), meth_tlp_GlLayer_getComposite, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_getComposite)},
    {SIP_MLNAME_CAST(sipName_getName), meth_tlp_GlLayer_getName, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_getName)},
    {SIP_MLNAME_CAST(sipName_getScene), meth_tlp_GlLayer_getScene, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_getScene)},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_tlp_GlLayer_isVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_isVisible)},
    {SIP_MLNAME_CAST(sipName_set2DMode), meth_tlp_GlLayer_set2DMode, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_set2DMode)},
    {SIP_MLNAME_CAST(sipName_setCamera), meth_tlp_GlLayer_setCamera, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_setCamera)},
    {SIP_MLNAME_CAST(sipName_setScene), meth_tlp_GlLayer_setScene, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_setScene)},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_tlp_GlLayer_setVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlLayer_setVisible)}
};

PyDoc_STRVAR(doc_tlp_GlLayer, "\1tlp.GlLayer(string)\n"
    "tlp.GlLayer(tlp.GlLayer)");


sipClassTypeDef sipTypeDef_tulipogl_tlp_GlLayer = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__GlLayer,
        {0}
    },
    {
        sipNameNr_GlLayer,
        {5, 255, 0},
        14, methods_tlp_GlLayer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_tlp_GlLayer,
    -1,
    -1,
    0,
    0,
    init_tlp_GlLayer,
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
    dealloc_tlp_GlLayer,
    0,
    0,
    0,
    release_tlp_GlLayer,
    cast_tlp_GlLayer,
    0,
    0,
    0
};
