/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Fri Apr 26 16:35:20 2013
 */

#include "sipAPItulipogl.h"

#line 31 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/GlPolygon.sip"
#include <tulip/GlPolygon.h>
#line 12 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlPolygon.cpp"

#line 29 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/../tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 17 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlPolygon.cpp"
#line 37 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/../tulip/../stl/vector.sip"
#include <vector>
#line 20 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlPolygon.cpp"
#line 33 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/../tulip/Coord.sip"
#include <tulip/Coord.h>
#line 23 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlPolygon.cpp"
#line 37 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/../tulip/../stl/vector.sip"
#include <vector>
#line 26 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlPolygon.cpp"
#line 30 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/../tulip/Color.sip"
#include <tulip/Color.h>
#line 29 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlPolygon.cpp"
#line 28 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/GlSimpleEntity.sip"
#include <libxml/tree.h>
#line 32 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlPolygon.cpp"
#line 31 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/GlAbstractPolygon.sip"
#include <tulip/GlAbstractPolygon.h>
#line 35 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlPolygon.cpp"
#line 31 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/GlComposite.sip"
#include <tulip/GlComposite.h>
#line 38 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlPolygon.cpp"
#line 30 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/../tulip/BoundingBox.sip"
#include <tulip/BoundingBox.h>
#line 41 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlPolygon.cpp"
#line 30 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip-ogl/GlSceneVisitor.sip"
#include <tulip/GlSceneVisitor.h>
#line 44 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip-ogl/siptulipogltlpGlPolygon.cpp"


class siptlp_GlPolygon : public tlp::GlPolygon
{
public:
    siptlp_GlPolygon(const bool,const bool,const std::string&,const float);
    siptlp_GlPolygon(const std::vector<tlp::Coord>&,const std::vector<tlp::Color>&,const std::vector<tlp::Color>&,const bool,const bool,const std::string&,const float);
    siptlp_GlPolygon(const uint,const uint,const uint,const bool,const bool,const std::string&,const float);
    siptlp_GlPolygon(const tlp::GlPolygon&);
    virtual ~siptlp_GlPolygon();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    void sipProtectVirt_setPoints(bool,const std::vector<tlp::Coord>&);
    void sipProtectVirt_setPoint(bool,uint,const tlp::Coord&);
    void sipProtectVirt_setFillColors(bool,const std::vector<tlp::Color>&);
    void sipProtectVirt_setOutlineColors(bool,const std::vector<tlp::Color>&);
    void sipProtectVirt_recomputeBoundingBox(bool);
    void sipProtectVirt_clearGenerated(bool);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void resizePoints(const uint);
    void resizeColors(const uint);
    void getXML(_xmlNode *);
    void setWithXML(_xmlNode *);
    void setPoints(const std::vector<tlp::Coord>&);
    void setPoint(uint,const tlp::Coord&);
    void setFillColors(const std::vector<tlp::Color>&);
    void setOutlineColors(const std::vector<tlp::Color>&);
    void recomputeBoundingBox();
    void clearGenerated();
    void draw(float,tlp::Camera *);
    void acceptVisitor(tlp::GlSceneVisitor *);
    void setVisible(bool);
    void setStencil(int);
    tlp::BoundingBox getBoundingBox();
    void translate(const tlp::Coord&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    siptlp_GlPolygon(const siptlp_GlPolygon &);
    siptlp_GlPolygon &operator = (const siptlp_GlPolygon &);

    char sipPyMethods[16];
};

siptlp_GlPolygon::siptlp_GlPolygon(const bool a0,const bool a1,const std::string& a2,const float a3): tlp::GlPolygon(a0,a1,a2,a3), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_GlPolygon::siptlp_GlPolygon(const std::vector<tlp::Coord>& a0,const std::vector<tlp::Color>& a1,const std::vector<tlp::Color>& a2,const bool a3,const bool a4,const std::string& a5,const float a6): tlp::GlPolygon(a0,a1,a2,a3,a4,a5,a6), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_GlPolygon::siptlp_GlPolygon(const uint a0,const uint a1,const uint a2,const bool a3,const bool a4,const std::string& a5,const float a6): tlp::GlPolygon(a0,a1,a2,a3,a4,a5,a6), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_GlPolygon::siptlp_GlPolygon(const tlp::GlPolygon& a0): tlp::GlPolygon(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_GlPolygon::~siptlp_GlPolygon()
{
    sipCommonDtor(sipPySelf);
}

void siptlp_GlPolygon::resizePoints(const uint a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_resizePoints);

    if (!sipMeth)
    {
        tlp::GlPolygon::resizePoints(a0);
        return;
    }

    extern void sipVH_tulipogl_6(sip_gilstate_t,PyObject *,const uint);

    sipVH_tulipogl_6(sipGILState,sipMeth,a0);
}

void siptlp_GlPolygon::resizeColors(const uint a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_resizeColors);

    if (!sipMeth)
    {
        tlp::GlPolygon::resizeColors(a0);
        return;
    }

    extern void sipVH_tulipogl_6(sip_gilstate_t,PyObject *,const uint);

    sipVH_tulipogl_6(sipGILState,sipMeth,a0);
}

void siptlp_GlPolygon::getXML(_xmlNode *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_getXML);

    if (!sipMeth)
    {
        tlp::GlAbstractPolygon::getXML(a0);
        return;
    }

    extern void sipVH_tulipogl_4(sip_gilstate_t,PyObject *,_xmlNode *);

    sipVH_tulipogl_4(sipGILState,sipMeth,a0);
}

void siptlp_GlPolygon::setWithXML(_xmlNode *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_setWithXML);

    if (!sipMeth)
    {
        tlp::GlAbstractPolygon::setWithXML(a0);
        return;
    }

    extern void sipVH_tulipogl_4(sip_gilstate_t,PyObject *,_xmlNode *);

    sipVH_tulipogl_4(sipGILState,sipMeth,a0);
}

void siptlp_GlPolygon::setPoints(const std::vector<tlp::Coord>& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_setPoints);

    if (!sipMeth)
    {
        tlp::GlAbstractPolygon::setPoints(a0);
        return;
    }

    extern void sipVH_tulipogl_9(sip_gilstate_t,PyObject *,const std::vector<tlp::Coord>&);

    sipVH_tulipogl_9(sipGILState,sipMeth,a0);
}

void siptlp_GlPolygon::setPoint(uint a0,const tlp::Coord& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_setPoint);

    if (!sipMeth)
    {
        tlp::GlAbstractPolygon::setPoint(a0,a1);
        return;
    }

    extern void sipVH_tulipogl_8(sip_gilstate_t,PyObject *,uint,const tlp::Coord&);

    sipVH_tulipogl_8(sipGILState,sipMeth,a0,a1);
}

void siptlp_GlPolygon::setFillColors(const std::vector<tlp::Color>& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_setFillColors);

    if (!sipMeth)
    {
        tlp::GlAbstractPolygon::setFillColors(a0);
        return;
    }

    extern void sipVH_tulipogl_7(sip_gilstate_t,PyObject *,const std::vector<tlp::Color>&);

    sipVH_tulipogl_7(sipGILState,sipMeth,a0);
}

void siptlp_GlPolygon::setOutlineColors(const std::vector<tlp::Color>& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_setOutlineColors);

    if (!sipMeth)
    {
        tlp::GlAbstractPolygon::setOutlineColors(a0);
        return;
    }

    extern void sipVH_tulipogl_7(sip_gilstate_t,PyObject *,const std::vector<tlp::Color>&);

    sipVH_tulipogl_7(sipGILState,sipMeth,a0);
}

void siptlp_GlPolygon::recomputeBoundingBox()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_recomputeBoundingBox);

    if (!sipMeth)
    {
        tlp::GlAbstractPolygon::recomputeBoundingBox();
        return;
    }

    typedef void (*sipVH_tulip_18)(sip_gilstate_t,PyObject *);

    ((sipVH_tulip_18)(sipModuleAPI_tulipogl_tulip->em_virthandlers[18]))(sipGILState,sipMeth);
}

void siptlp_GlPolygon::clearGenerated()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_clearGenerated);

    if (!sipMeth)
    {
        tlp::GlAbstractPolygon::clearGenerated();
        return;
    }

    typedef void (*sipVH_tulip_18)(sip_gilstate_t,PyObject *);

    ((sipVH_tulip_18)(sipModuleAPI_tulipogl_tulip->em_virthandlers[18]))(sipGILState,sipMeth);
}

void siptlp_GlPolygon::draw(float a0,tlp::Camera *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_draw);

    if (!sipMeth)
    {
        tlp::GlAbstractPolygon::draw(a0,a1);
        return;
    }

    extern void sipVH_tulipogl_5(sip_gilstate_t,PyObject *,float,tlp::Camera *);

    sipVH_tulipogl_5(sipGILState,sipMeth,a0,a1);
}

void siptlp_GlPolygon::acceptVisitor(tlp::GlSceneVisitor *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_acceptVisitor);

    if (!sipMeth)
    {
        tlp::GlSimpleEntity::acceptVisitor(a0);
        return;
    }

    extern void sipVH_tulipogl_15(sip_gilstate_t,PyObject *,tlp::GlSceneVisitor *);

    sipVH_tulipogl_15(sipGILState,sipMeth,a0);
}

void siptlp_GlPolygon::setVisible(bool a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_setVisible);

    if (!sipMeth)
    {
        tlp::GlSimpleEntity::setVisible(a0);
        return;
    }

    typedef void (*sipVH_tulip_16)(sip_gilstate_t,PyObject *,bool);

    ((sipVH_tulip_16)(sipModuleAPI_tulipogl_tulip->em_virthandlers[16]))(sipGILState,sipMeth,a0);
}

void siptlp_GlPolygon::setStencil(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_setStencil);

    if (!sipMeth)
    {
        tlp::GlSimpleEntity::setStencil(a0);
        return;
    }

    typedef void (*sipVH_tulip_6)(sip_gilstate_t,PyObject *,int);

    ((sipVH_tulip_6)(sipModuleAPI_tulipogl_tulip->em_virthandlers[6]))(sipGILState,sipMeth,a0);
}

tlp::BoundingBox siptlp_GlPolygon::getBoundingBox()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipName_getBoundingBox);

    if (!sipMeth)
        return tlp::GlSimpleEntity::getBoundingBox();

    extern tlp::BoundingBox sipVH_tulipogl_18(sip_gilstate_t,PyObject *);

    return sipVH_tulipogl_18(sipGILState,sipMeth);
}

void siptlp_GlPolygon::translate(const tlp::Coord& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,NULL,sipName_translate);

    if (!sipMeth)
    {
        tlp::GlSimpleEntity::translate(a0);
        return;
    }

    extern void sipVH_tulipogl_1(sip_gilstate_t,PyObject *,const tlp::Coord&);

    sipVH_tulipogl_1(sipGILState,sipMeth,a0);
}

void siptlp_GlPolygon::sipProtectVirt_setPoints(bool sipSelfWasArg,const std::vector<tlp::Coord>& a0)
{
    (sipSelfWasArg ? tlp::GlAbstractPolygon::setPoints(a0) : setPoints(a0));
}

void siptlp_GlPolygon::sipProtectVirt_setPoint(bool sipSelfWasArg,uint a0,const tlp::Coord& a1)
{
    (sipSelfWasArg ? tlp::GlAbstractPolygon::setPoint(a0,a1) : setPoint(a0,a1));
}

void siptlp_GlPolygon::sipProtectVirt_setFillColors(bool sipSelfWasArg,const std::vector<tlp::Color>& a0)
{
    (sipSelfWasArg ? tlp::GlAbstractPolygon::setFillColors(a0) : setFillColors(a0));
}

void siptlp_GlPolygon::sipProtectVirt_setOutlineColors(bool sipSelfWasArg,const std::vector<tlp::Color>& a0)
{
    (sipSelfWasArg ? tlp::GlAbstractPolygon::setOutlineColors(a0) : setOutlineColors(a0));
}

void siptlp_GlPolygon::sipProtectVirt_recomputeBoundingBox(bool sipSelfWasArg)
{
    (sipSelfWasArg ? tlp::GlAbstractPolygon::recomputeBoundingBox() : recomputeBoundingBox());
}

void siptlp_GlPolygon::sipProtectVirt_clearGenerated(bool sipSelfWasArg)
{
    (sipSelfWasArg ? tlp::GlAbstractPolygon::clearGenerated() : clearGenerated());
}


PyDoc_STRVAR(doc_tlp_GlPolygon_setPoints, "tlp.GlPolygon.setPoints(list-of-tlp.Coord)");

extern "C" {static PyObject *meth_tlp_GlPolygon_setPoints(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlPolygon_setPoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const std::vector<tlp::Coord> * a0;
        int a0State = 0;
        siptlp_GlPolygon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_tlp_GlPolygon, &sipCpp, sipType_std_vector_0100tlp_Coord,&a0, &a0State))
        {
            sipCpp->sipProtectVirt_setPoints(sipSelfWasArg,*a0);
            sipReleaseType(const_cast<std::vector<tlp::Coord> *>(a0),sipType_std_vector_0100tlp_Coord,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlPolygon, sipName_setPoints, doc_tlp_GlPolygon_setPoints);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlPolygon_setPoint, "tlp.GlPolygon.setPoint(int, tlp.Coord)");

extern "C" {static PyObject *meth_tlp_GlPolygon_setPoint(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlPolygon_setPoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        uint a0;
        const tlp::Coord * a1;
        siptlp_GlPolygon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BuJ9", &sipSelf, sipType_tlp_GlPolygon, &sipCpp, &a0, sipType_tlp_Coord, &a1))
        {
            sipCpp->sipProtectVirt_setPoint(sipSelfWasArg,a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlPolygon, sipName_setPoint, doc_tlp_GlPolygon_setPoint);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlPolygon_setFillColors, "tlp.GlPolygon.setFillColors(list-of-tlp.Color)");

extern "C" {static PyObject *meth_tlp_GlPolygon_setFillColors(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlPolygon_setFillColors(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const std::vector<tlp::Color> * a0;
        int a0State = 0;
        siptlp_GlPolygon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_tlp_GlPolygon, &sipCpp, sipType_std_vector_0100tlp_Color,&a0, &a0State))
        {
            sipCpp->sipProtectVirt_setFillColors(sipSelfWasArg,*a0);
            sipReleaseType(const_cast<std::vector<tlp::Color> *>(a0),sipType_std_vector_0100tlp_Color,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlPolygon, sipName_setFillColors, doc_tlp_GlPolygon_setFillColors);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlPolygon_setOutlineColors, "tlp.GlPolygon.setOutlineColors(list-of-tlp.Color)");

extern "C" {static PyObject *meth_tlp_GlPolygon_setOutlineColors(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlPolygon_setOutlineColors(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const std::vector<tlp::Color> * a0;
        int a0State = 0;
        siptlp_GlPolygon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_tlp_GlPolygon, &sipCpp, sipType_std_vector_0100tlp_Color,&a0, &a0State))
        {
            sipCpp->sipProtectVirt_setOutlineColors(sipSelfWasArg,*a0);
            sipReleaseType(const_cast<std::vector<tlp::Color> *>(a0),sipType_std_vector_0100tlp_Color,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlPolygon, sipName_setOutlineColors, doc_tlp_GlPolygon_setOutlineColors);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlPolygon_recomputeBoundingBox, "tlp.GlPolygon.recomputeBoundingBox()");

extern "C" {static PyObject *meth_tlp_GlPolygon_recomputeBoundingBox(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlPolygon_recomputeBoundingBox(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        siptlp_GlPolygon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GlPolygon, &sipCpp))
        {
            sipCpp->sipProtectVirt_recomputeBoundingBox(sipSelfWasArg);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlPolygon, sipName_recomputeBoundingBox, doc_tlp_GlPolygon_recomputeBoundingBox);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlPolygon_clearGenerated, "tlp.GlPolygon.clearGenerated()");

extern "C" {static PyObject *meth_tlp_GlPolygon_clearGenerated(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlPolygon_clearGenerated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        siptlp_GlPolygon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_tlp_GlPolygon, &sipCpp))
        {
            sipCpp->sipProtectVirt_clearGenerated(sipSelfWasArg);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlPolygon, sipName_clearGenerated, doc_tlp_GlPolygon_clearGenerated);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlPolygon_resizePoints, "tlp.GlPolygon.resizePoints(int)");

extern "C" {static PyObject *meth_tlp_GlPolygon_resizePoints(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlPolygon_resizePoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        uint a0;
        tlp::GlPolygon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_tlp_GlPolygon, &sipCpp, &a0))
        {
            (sipSelfWasArg ? sipCpp->tlp::GlPolygon::resizePoints(a0) : sipCpp->resizePoints(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlPolygon, sipName_resizePoints, doc_tlp_GlPolygon_resizePoints);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_GlPolygon_resizeColors, "tlp.GlPolygon.resizeColors(int)");

extern "C" {static PyObject *meth_tlp_GlPolygon_resizeColors(PyObject *, PyObject *);}
static PyObject *meth_tlp_GlPolygon_resizeColors(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        uint a0;
        tlp::GlPolygon *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_tlp_GlPolygon, &sipCpp, &a0))
        {
            (sipSelfWasArg ? sipCpp->tlp::GlPolygon::resizeColors(a0) : sipCpp->resizeColors(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_GlPolygon, sipName_resizeColors, doc_tlp_GlPolygon_resizeColors);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_GlPolygon(void *, const sipTypeDef *);}
static void *cast_tlp_GlPolygon(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_tlp_GlPolygon)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_tlp_GlAbstractPolygon)->ctd_cast((tlp::GlAbstractPolygon *)(tlp::GlPolygon *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_GlPolygon(void *, int);}
static void release_tlp_GlPolygon(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<siptlp_GlPolygon *>(sipCppV);
    else
        delete reinterpret_cast<tlp::GlPolygon *>(sipCppV);
}


extern "C" {static void assign_tlp_GlPolygon(void *, SIP_SSIZE_T, const void *);}
static void assign_tlp_GlPolygon(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<tlp::GlPolygon *>(sipDst)[sipDstIdx] = *reinterpret_cast<const tlp::GlPolygon *>(sipSrc);
}


extern "C" {static void *array_tlp_GlPolygon(SIP_SSIZE_T);}
static void *array_tlp_GlPolygon(SIP_SSIZE_T sipNrElem)
{
    return new tlp::GlPolygon[sipNrElem];
}


extern "C" {static void *copy_tlp_GlPolygon(const void *, SIP_SSIZE_T);}
static void *copy_tlp_GlPolygon(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new tlp::GlPolygon(reinterpret_cast<const tlp::GlPolygon *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_tlp_GlPolygon(sipSimpleWrapper *);}
static void dealloc_tlp_GlPolygon(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<siptlp_GlPolygon *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_GlPolygon(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_tlp_GlPolygon(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_GlPolygon(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    siptlp_GlPolygon *sipCpp = 0;

    {
        bool a0 = 1;
        bool a1 = 1;
        const std::string& a2def = "";
        const std::string * a2 = &a2def;
        int a2State = 0;
        float a3 = 1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "|bbJ1f", &a0, &a1, sipType_std_string,&a2, &a2State, &a3))
        {
            sipCpp = new siptlp_GlPolygon(a0,a1,*a2,a3);
            sipReleaseType(const_cast<std::string *>(a2),sipType_std_string,a2State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const std::vector<tlp::Coord> * a0;
        int a0State = 0;
        const std::vector<tlp::Color> * a1;
        int a1State = 0;
        const std::vector<tlp::Color> * a2;
        int a2State = 0;
        bool a3;
        bool a4;
        const std::string& a5def = "";
        const std::string * a5 = &a5def;
        int a5State = 0;
        float a6 = 1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1J1J1bb|J1f", sipType_std_vector_0100tlp_Coord,&a0, &a0State, sipType_std_vector_0100tlp_Color,&a1, &a1State, sipType_std_vector_0100tlp_Color,&a2, &a2State, &a3, &a4, sipType_std_string,&a5, &a5State, &a6))
        {
            sipCpp = new siptlp_GlPolygon(*a0,*a1,*a2,a3,a4,*a5,a6);
            sipReleaseType(const_cast<std::vector<tlp::Coord> *>(a0),sipType_std_vector_0100tlp_Coord,a0State);
            sipReleaseType(const_cast<std::vector<tlp::Color> *>(a1),sipType_std_vector_0100tlp_Color,a1State);
            sipReleaseType(const_cast<std::vector<tlp::Color> *>(a2),sipType_std_vector_0100tlp_Color,a2State);
            sipReleaseType(const_cast<std::string *>(a5),sipType_std_string,a5State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        uint a0;
        uint a1;
        uint a2;
        bool a3 = 1;
        bool a4 = 1;
        const std::string& a5def = "";
        const std::string * a5 = &a5def;
        int a5State = 0;
        float a6 = 1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "uuu|bbJ1f", &a0, &a1, &a2, &a3, &a4, sipType_std_string,&a5, &a5State, &a6))
        {
            sipCpp = new siptlp_GlPolygon(a0,a1,a2,a3,a4,*a5,a6);
            sipReleaseType(const_cast<std::string *>(a5),sipType_std_string,a5State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::GlPolygon * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_GlPolygon, &a0))
        {
            sipCpp = new siptlp_GlPolygon(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_tlp_GlPolygon[] = {{7, 255, 1}};


static PyMethodDef methods_tlp_GlPolygon[] = {
    {SIP_MLNAME_CAST(sipName_clearGenerated), meth_tlp_GlPolygon_clearGenerated, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_recomputeBoundingBox), meth_tlp_GlPolygon_recomputeBoundingBox, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_resizeColors), meth_tlp_GlPolygon_resizeColors, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlPolygon_resizeColors)},
    {SIP_MLNAME_CAST(sipName_resizePoints), meth_tlp_GlPolygon_resizePoints, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_GlPolygon_resizePoints)},
    {SIP_MLNAME_CAST(sipName_setFillColors), meth_tlp_GlPolygon_setFillColors, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setOutlineColors), meth_tlp_GlPolygon_setOutlineColors, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setPoint), meth_tlp_GlPolygon_setPoint, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setPoints), meth_tlp_GlPolygon_setPoints, METH_VARARGS, NULL}
};

PyDoc_STRVAR(doc_tlp_GlPolygon, "\1tlp.GlPolygon(bool filled=True, bool outlined=True, string textureName=\"\", float outlineSize=1)\n"
    "tlp.GlPolygon(list-of-tlp.Coord, list-of-tlp.Color, list-of-tlp.Color, bool, bool, string textureName=\"\", float outlineSize=1)\n"
    "tlp.GlPolygon(int, int, int, bool filled=True, bool outlined=True, string textureName=\"\", float outlineSize=1)\n"
    "tlp.GlPolygon(tlp.GlPolygon)");


sipClassTypeDef sipTypeDef_tulipogl_tlp_GlPolygon = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__GlPolygon,
        {0}
    },
    {
        sipNameNr_GlPolygon,
        {5, 255, 0},
        8, methods_tlp_GlPolygon,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_tlp_GlPolygon,
    -1,
    -1,
    supers_tlp_GlPolygon,
    0,
    init_tlp_GlPolygon,
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
    dealloc_tlp_GlPolygon,
    assign_tlp_GlPolygon,
    array_tlp_GlPolygon,
    copy_tlp_GlPolygon,
    release_tlp_GlPolygon,
    cast_tlp_GlPolygon,
    0,
    0,
    0
};