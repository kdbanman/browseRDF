/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Mon Apr 29 01:46:11 2013
 */

#include "sipAPItulip.h"

#line 34 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/ExportModule.sip"
#include <tulip/ExportModule.h>
#line 12 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpExportModule.cpp"

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
#line 31 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/PluginProgress.sip"
#include <tulip/PluginProgress.h>
#line 112 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/Graph.sip"
#include <tulip/Graph.h>
#line 30 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpExportModule.cpp"
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
#line 31 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/PluginProgress.sip"
#include <tulip/PluginProgress.h>
#line 45 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpExportModule.cpp"
#line 30 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/PluginContext.sip"
#include <tulip/PluginContext.h>
#line 48 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpExportModule.cpp"
#line 6 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/ostream.sip"
#include <iostream>
#line 51 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpExportModule.cpp"
#line 29 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 55 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpExportModule.cpp"
#line 105 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulip/../stl/list.sip"
#include <list>
#line 58 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpExportModule.cpp"
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
#line 71 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpExportModule.cpp"


class siptlp_ExportModule : public tlp::ExportModule
{
public:
    siptlp_ExportModule(tlp::AlgorithmContext);
    siptlp_ExportModule(const tlp::ExportModule&);
    virtual ~siptlp_ExportModule();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool exportGraph(std::ostream&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    siptlp_ExportModule(const siptlp_ExportModule &);
    siptlp_ExportModule &operator = (const siptlp_ExportModule &);

    char sipPyMethods[1];
};

siptlp_ExportModule::siptlp_ExportModule(tlp::AlgorithmContext a0): tlp::ExportModule(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_ExportModule::siptlp_ExportModule(const tlp::ExportModule& a0): tlp::ExportModule(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

siptlp_ExportModule::~siptlp_ExportModule()
{
    sipCommonDtor(sipPySelf);
}

bool siptlp_ExportModule::exportGraph(std::ostream& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_ExportModule,sipName_exportGraph);

    if (!sipMeth)
        return 0;

    extern bool sipVH_tulip_75(sip_gilstate_t,PyObject *,std::ostream&);

    return sipVH_tulip_75(sipGILState,sipMeth,a0);
}


PyDoc_STRVAR(doc_tlp_ExportModule_exportGraph, "tlp.ExportModule.exportGraph(os)\n"
    "\n"
    "This method is called to export the graph to a file.\n"
    "Derived classes must implement it. \n"
    "\n"
    "The os parameter is an output file stream (initialized by the Tulip GUI\n"
    "or by the :func:`tlp.exportGraph` function.). To write data to the file,\n"
    "you have to use the following syntax::\n"
    "\n"
    "	# write the number of nodes and edges to the file\n"
    "	os << self.graph.numberOfNodes() << \"\\n\"\n"
    "	os << self.graph.numberOfEdges() << \"\\n\"\n"
    "\n"
    "A boolean must also be returned\n"
    "to indicate if the export was successful.\n"
    "\n"
    ":param os: an output file stream\n"
    ":type os: std.ostream \n"
    ":rtype: boolean");

extern "C" {static PyObject *meth_tlp_ExportModule_exportGraph(PyObject *, PyObject *);}
static PyObject *meth_tlp_ExportModule_exportGraph(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        std::ostream * a0;
        tlp::ExportModule *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_tlp_ExportModule, &sipCpp, sipType_std_ostream, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_ExportModule, sipName_exportGraph);
                return NULL;
            }

            sipRes = sipCpp->exportGraph(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ExportModule, sipName_exportGraph, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_ExportModule(void *, const sipTypeDef *);}
static void *cast_tlp_ExportModule(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_tlp_ExportModule)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_tlp_WithParameter)->ctd_cast((tlp::WithParameter *)(tlp::ExportModule *)ptr,targetType)) != NULL)
        return res;

    if ((res = ((const sipClassTypeDef *)sipType_tlp_WithDependency)->ctd_cast((tlp::WithDependency *)(tlp::ExportModule *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_ExportModule(void *, int);}
static void release_tlp_ExportModule(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<siptlp_ExportModule *>(sipCppV);
    else
        delete reinterpret_cast<tlp::ExportModule *>(sipCppV);
}


extern "C" {static void dealloc_tlp_ExportModule(sipSimpleWrapper *);}
static void dealloc_tlp_ExportModule(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<siptlp_ExportModule *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_ExportModule(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_tlp_ExportModule(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_tlp_ExportModule(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    siptlp_ExportModule *sipCpp = 0;

    {
        tlp::AlgorithmContext * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_AlgorithmContext, &a0))
        {
            sipCpp = new siptlp_ExportModule(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const tlp::ExportModule * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_tlp_ExportModule, &a0))
        {
            sipCpp = new siptlp_ExportModule(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_tlp_ExportModule[] = {{103, 255, 0}, {102, 255, 1}};


static PyMethodDef methods_tlp_ExportModule[] = {
    {SIP_MLNAME_CAST(sipName_exportGraph), meth_tlp_ExportModule_exportGraph, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_ExportModule_exportGraph)}
};


extern "C" {static PyObject *varget_tlp_ExportModule_dataSet(void *, PyObject *);}
static PyObject *varget_tlp_ExportModule_dataSet(void *sipSelf, PyObject *)
{
    tlp::DataSet *sipVal;
    tlp::ExportModule *sipCpp = reinterpret_cast<tlp::ExportModule *>(sipSelf);

    sipVal = sipCpp->dataSet;

    return sipConvertFromType(sipVal,sipType_tlp_DataSet, NULL);
}


extern "C" {static int varset_tlp_ExportModule_dataSet(void *, PyObject *, PyObject *);}
static int varset_tlp_ExportModule_dataSet(void *sipSelf, PyObject *sipPy, PyObject *)
{
    tlp::DataSet *sipVal;
    tlp::ExportModule *sipCpp = reinterpret_cast<tlp::ExportModule *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<tlp::DataSet *>(sipForceConvertToType(sipPy,sipType_tlp_DataSet,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->dataSet = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_tlp_ExportModule_graph(void *, PyObject *);}
static PyObject *varget_tlp_ExportModule_graph(void *sipSelf, PyObject *)
{
    tlp::Graph *sipVal;
    tlp::ExportModule *sipCpp = reinterpret_cast<tlp::ExportModule *>(sipSelf);

    sipVal = sipCpp->graph;

    return sipConvertFromType(sipVal,sipType_tlp_Graph, NULL);
}


extern "C" {static int varset_tlp_ExportModule_graph(void *, PyObject *, PyObject *);}
static int varset_tlp_ExportModule_graph(void *sipSelf, PyObject *sipPy, PyObject *)
{
    tlp::Graph *sipVal;
    tlp::ExportModule *sipCpp = reinterpret_cast<tlp::ExportModule *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<tlp::Graph *>(sipForceConvertToType(sipPy,sipType_tlp_Graph,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->graph = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_tlp_ExportModule_pluginProgress(void *, PyObject *);}
static PyObject *varget_tlp_ExportModule_pluginProgress(void *sipSelf, PyObject *)
{
    tlp::PluginProgress *sipVal;
    tlp::ExportModule *sipCpp = reinterpret_cast<tlp::ExportModule *>(sipSelf);

    sipVal = sipCpp->pluginProgress;

    return sipConvertFromType(sipVal,sipType_tlp_PluginProgress, NULL);
}


extern "C" {static int varset_tlp_ExportModule_pluginProgress(void *, PyObject *, PyObject *);}
static int varset_tlp_ExportModule_pluginProgress(void *sipSelf, PyObject *sipPy, PyObject *)
{
    tlp::PluginProgress *sipVal;
    tlp::ExportModule *sipCpp = reinterpret_cast<tlp::ExportModule *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<tlp::PluginProgress *>(sipForceConvertToType(sipPy,sipType_tlp_PluginProgress,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->pluginProgress = sipVal;

    return 0;
}

sipVariableDef variables_tlp_ExportModule[] = {
    {InstanceVariable, sipName_dataSet, (PyMethodDef *)varget_tlp_ExportModule_dataSet, (PyMethodDef *)varset_tlp_ExportModule_dataSet, NULL, NULL},
    {InstanceVariable, sipName_graph, (PyMethodDef *)varget_tlp_ExportModule_graph, (PyMethodDef *)varset_tlp_ExportModule_graph, NULL, NULL},
    {InstanceVariable, sipName_pluginProgress, (PyMethodDef *)varget_tlp_ExportModule_pluginProgress, (PyMethodDef *)varset_tlp_ExportModule_pluginProgress, NULL, NULL},
};

PyDoc_STRVAR(doc_tlp_ExportModule, "Bases: :class:`tlp.WithParameter`\n"
    "\n"
    "This abstract class describes an export plugin.\n"
    "\n"
    ".. rubric:: class attributes\n"
    "\n"
    ".. py:attribute:: graph\n"
    "\n"
    "	The :class:`tlp.Graph` to export\n"
    "\n"
    ".. py:attribute:: dataSet\n"
    "\n"
    "	A :class:`tlp.DataSet` containing parameters for this export plugin, if any\n"
    "	\n"
    ".. py:attribute:: pluginProgress\n"
    "\n"
    "	A :class:`tlp.PluginProgress` to give feedback to the user. It can be :const:`None`, so use with caution	 \n"
    "\n"
    ".. rubric:: class methods\n"
    "");


sipClassTypeDef sipTypeDef_tulip_tlp_ExportModule = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_tlp__ExportModule,
        {0}
    },
    {
        sipNameNr_ExportModule,
        {21, 255, 0},
        1, methods_tlp_ExportModule,
        0, 0,
        3, variables_tlp_ExportModule,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_tlp_ExportModule,
    -1,
    -1,
    supers_tlp_ExportModule,
    0,
    init_tlp_ExportModule,
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
    dealloc_tlp_ExportModule,
    0,
    0,
    0,
    release_tlp_ExportModule,
    cast_tlp_ExportModule,
    0,
    0,
    0
};
