/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:13:49 2013
 */

#include "sipAPItulipgui.h"


#line 37 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/..//tulip-ogl/../tulip/../stl/vector.sip"
#include <vector>
#line 13 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"
#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/..//tulip-ogl/../tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 17 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"
#line 113 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/..//tulip-ogl/../tulip/../stl/vector.sip"
#include <vector>
#line 20 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"
#line 31 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/View.sip"
#include <tulip/View.h>
#line 23 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"
#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/..//tulip-ogl/../tulip/WithParameter.sip"
#include <tulip/WithParameter.h>
#include <tulip/ColorScale.h>
#include <tulip/StringCollection.h>
#include <tulip/IntegerProperty.h>
#include <tulip/LayoutProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ColorProperty.h>
#line 28 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/..//tulip-ogl/../tulip/WithDependency.sip"
#include <tulip/WithDependency.h>
#line 31 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/..//tulip-ogl/../tulip/PluginProgress.sip"
#include <tulip/PluginProgress.h>
#line 112 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/..//tulip-ogl/../tulip/Graph.sip"
#include <tulip/Graph.h>
#line 40 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"
#line 51 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/NodeLinkDiagramComponent.sip"
#include <tulip/NodeLinkDiagramComponent.h>
#line 43 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"


PyDoc_STRVAR(doc_tlp_runQtMainLoop, "tlp.runQtMainLoop()\n"
    "\n"
    ".. versionadded:: 3.8\n"
    "\n"
    "That function allows to run the main Qt event loop.\n"
    "It should only be used when executing a script through the classical Python interpreter\n"
    "(it has no effect when calling it from a Python script editor in the main Tulip GUI).\n"
    "There is no need to call it when working in an interactive Python shell, as Qt events\n"
    "are processed when the shell is waiting for input.\n"
    "It will return only when there is no more Qt widgets displayed.\n"
    "So it should be the last instruction of a script and it enables to keep the created Tulip\n"
    "views displayed and functionnal (otherwise, the interpreter is closed and so are the views).");

extern "C" {static PyObject *meth_tlp_runQtMainLoop(PyObject *, PyObject *);}
static PyObject *meth_tlp_runQtMainLoop(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
#line 219 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/TulipGui.sip"
    tlp::MainController *mainController = dynamic_cast<tlp::MainController *>(tlp::Controller::getCurrentController());
    if (!mainController) {
        if (tvm.areViewsVisible())
            QApplication::exec();
    }
#line 73 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_runQtMainLoop, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_closeViewsRelatedToGraph, "tlp.closeViewsRelatedToGraph(graph)\n"
    "\n"
    ".. versionadded:: 3.8\n"
    "\n"
    "Closes all the views associated to a particular graph.\n"
    "\n"
    ":param graph: the graph on which to close views\n"
    ":type graph: :class:`tulip.tlp.Graph`");

extern "C" {static PyObject *meth_tlp_closeViewsRelatedToGraph(PyObject *, PyObject *);}
static PyObject *meth_tlp_closeViewsRelatedToGraph(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Graph * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_tlp_Graph, &a0))
        {
#line 197 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/TulipGui.sip"
    tvm.closeViewsRelatedToGraph(a0);
#line 108 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_closeViewsRelatedToGraph, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_closeAllViews, "tlp.closeAllViews()\n"
    "\n"
    ".. versionadded:: 3.8\n"
    "\n"
    "Closes all opened views.");

extern "C" {static PyObject *meth_tlp_closeAllViews(PyObject *, PyObject *);}
static PyObject *meth_tlp_closeAllViews(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
#line 179 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/TulipGui.sip"
    tvm.closeAllViews();
#line 138 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_closeAllViews, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_getViewsOfGraph, "tlp.getViewsOfGraph(graph)\n"
    "\n"
    ".. versionadded:: 3.8\n"
    "\n"
    "Returns a list of views associated to a particular graph.\n"
    "\n"
    ":param graph: the graph on which to find views\n"
    ":type graph: :class:`tulip.tlp.Graph`\n"
    ":rtype: list of :class:`tlp.View`");

extern "C" {static PyObject *meth_tlp_getViewsOfGraph(PyObject *, PyObject *);}
static PyObject *meth_tlp_getViewsOfGraph(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Graph * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_tlp_Graph, &a0))
        {
            std::vector<tlp::View *> *sipRes = 0;

#line 164 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/TulipGui.sip"
    sipRes = new std::vector<tlp::View*>(tvm.getViewsOfGraph(a0));
#line 176 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"

            return sipConvertFromNewType(sipRes,sipType_std_vector_0101tlp_View,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_getViewsOfGraph, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_tileViews, "tlp.tileViews()\n"
    "\n"
    ".. versionadded:: 3.8\n"
    "\n"
    "Tiles the opened views in the current workspace (this function has no effect when called\n"
    "from the classical Python shell).");

extern "C" {static PyObject *meth_tlp_tileViews(PyObject *, PyObject *);}
static PyObject *meth_tlp_tileViews(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
#line 145 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/TulipGui.sip"
    tvm.tileViews();
#line 206 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_tileViews, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_closeView, "tlp.closeView(view)\n"
    "\n"
    ".. versionadded:: 3.8\n"
    "\n"
    "Closes an opened view.\n"
    "\n"
    ":param view: the view to close\n"
    ":type view: :class:`tlp.View`");

extern "C" {static PyObject *meth_tlp_closeView(PyObject *, PyObject *);}
static PyObject *meth_tlp_closeView(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::View * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_tlp_View, &a0))
        {
#line 129 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/TulipGui.sip"
    tvm.closeView(a0);
#line 241 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_closeView, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_addNodeLinkDiagramView, "tlp.addNodeLinkDiagramView(graph)\n"
    "\n"
    ".. versionadded:: 3.8\n"
    "\n"
    "Convenient function for creating the principal view offered by Tulip : a node link diagram.\n"
    "Its call is equivalent to::\n"
    "\n"
    "    nodeLinkView = tlp.addView(\"Node Link Diagram view\", graph)\n"
    "\n"
    ":param graph: the graph to visualize\n"
    ":type graph: :class:`tulip.tlp.Graph`\n"
    ":rtype: :class:`tlp.NodeLinkDiagramComponent`");

extern "C" {static PyObject *meth_tlp_addNodeLinkDiagramView(PyObject *, PyObject *);}
static PyObject *meth_tlp_addNodeLinkDiagramView(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Graph * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_tlp_Graph, &a0))
        {
            tlp::NodeLinkDiagramComponent *sipRes = 0;

#line 111 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/TulipGui.sip"
    sipRes = static_cast<tlp::NodeLinkDiagramComponent *>(tvm.addView("Node Link Diagram view", a0));
#line 282 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"

            return sipConvertFromType(sipRes,sipType_tlp_NodeLinkDiagramComponent,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_addNodeLinkDiagramView, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_addView, "tlp.addView(viewName, graph[, dataSet])\n"
    "\n"
    ".. versionadded:: 3.8\n"
    "\n"
    "Creates and adds a new Tulip view. If called through a Python Script editor in the main Tulip GUI, the\n"
    "view will be added in the Tulip workspace. If called through the classical Python shell,\n"
    "a dialog containing the view will be created and displayed.\n"
    "Returns an instance of the newly created view.\n"
    "\n"
    ":param viewName: the name of the view to create (use :func:`tlp.getAvailableViews` to know which ones are installed)\n"
    ":type viewName: string\n"
    ":param graph: the graph to set on the new view\n"
    ":type graph: :class:`tulip.tlp.Graph`\n"
    ":param dataSet: the optional parameters of the view\n"
    ":type dataSet: :class:`tulip.tlp.Dataset`\n"
    ":rtype: :class:`tlp.View`");

extern "C" {static PyObject *meth_tlp_addView(PyObject *, PyObject *);}
static PyObject *meth_tlp_addView(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const std::string * a0;
        int a0State = 0;
        tlp::Graph * a1;
        tlp::DataSet a2def = tlp::DataSet();
        tlp::DataSet * a2 = &a2def;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J8|J9", sipType_std_string,&a0, &a0State, sipType_tlp_Graph, &a1, sipType_tlp_DataSet, &a2))
        {
            tlp::View *sipRes = 0;
            int sipIsErr = 0;

#line 80 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/TulipGui.sip"
    sipRes = NULL;
    std::vector<std::string> tlpViews = tvm.getTulipViews();
    if (std::find(tlpViews.begin(), tlpViews.end(), *a0) != tlpViews.end()) {
        sipRes = tvm.addView(*a0, a1, *a2);
    } else {
        sipIsErr = 1;
        std::ostringstream oss;
        oss << "Error : No Tulip view named \"" << *a0 << "\".";
        PyErr_SetString(PyExc_Exception, oss.str().c_str());
    }
#line 340 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"
            sipReleaseType(const_cast<std::string *>(a0),sipType_std_string,a0State);

            if (sipIsErr)
                return 0;

            return sipConvertFromType(sipRes,sipType_tlp_View,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_addView, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_getOpenedViews, "tlp.getOpenedViews()\n"
    "\n"
    ".. versionadded:: 3.8\n"
    "\n"
    "Returns a list of the views currently opened.\n"
    "\n"
    ":rtype: list of :class:`tlp.View`");

extern "C" {static PyObject *meth_tlp_getOpenedViews(PyObject *, PyObject *);}
static PyObject *meth_tlp_getOpenedViews(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            std::vector<tlp::View *> *sipRes = 0;

#line 54 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/TulipGui.sip"
    sipRes = new std::vector<tlp::View *>(tvm.getOpenedViews());
#line 377 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"

            return sipConvertFromNewType(sipRes,sipType_std_vector_0101tlp_View,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_getOpenedViews, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_getAvailableViews, "tlp.getAvailableViews()\n"
    "\n"
    ".. versionadded:: 3.8\n"
    "\n"
    "Returns a list of the views names currently available in Tulip.\n"
    "\n"
    ":rtype: list of string");

extern "C" {static PyObject *meth_tlp_getAvailableViews(PyObject *, PyObject *);}
static PyObject *meth_tlp_getAvailableViews(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            std::vector<std::string> *sipRes = 0;

#line 37 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/TulipGui.sip"
    sipRes = new std::vector<std::string>(tvm.getTulipViews());
#line 410 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"

            return sipConvertFromNewType(sipRes,sipType_std_vector_0100std_string,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_getAvailableViews, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_loadGUIPlugins, "tlp.loadGUIPlugins()\n"
    "\n"
    "Loads Tulip plugins related to the :mod:`tulipgui` module (views, interactors, glyphs).");

extern "C" {static PyObject *meth_tlp_loadGUIPlugins(PyObject *, PyObject *);}
static PyObject *meth_tlp_loadGUIPlugins(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
#line 20 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/TulipGui.sip"
 tlp::InteractorManager::getInst().loadPlugins();
 tlp::ViewPluginsManager::getInst().loadPlugins();
 tlp::GlyphManager::getInst().loadPlugins();
#line 439 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguitlp.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_loadGUIPlugins, NULL);

    return NULL;
}


static PyMethodDef methods_tlp[] = {
    {SIP_MLNAME_CAST(sipName_addNodeLinkDiagramView), meth_tlp_addNodeLinkDiagramView, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_addNodeLinkDiagramView)},
    {SIP_MLNAME_CAST(sipName_addView), meth_tlp_addView, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_addView)},
    {SIP_MLNAME_CAST(sipName_closeAllViews), meth_tlp_closeAllViews, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_closeAllViews)},
    {SIP_MLNAME_CAST(sipName_closeView), meth_tlp_closeView, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_closeView)},
    {SIP_MLNAME_CAST(sipName_closeViewsRelatedToGraph), meth_tlp_closeViewsRelatedToGraph, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_closeViewsRelatedToGraph)},
    {SIP_MLNAME_CAST(sipName_getAvailableViews), meth_tlp_getAvailableViews, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_getAvailableViews)},
    {SIP_MLNAME_CAST(sipName_getOpenedViews), meth_tlp_getOpenedViews, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_getOpenedViews)},
    {SIP_MLNAME_CAST(sipName_getViewsOfGraph), meth_tlp_getViewsOfGraph, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_getViewsOfGraph)},
    {SIP_MLNAME_CAST(sipName_loadGUIPlugins), meth_tlp_loadGUIPlugins, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_loadGUIPlugins)},
    {SIP_MLNAME_CAST(sipName_runQtMainLoop), meth_tlp_runQtMainLoop, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_runQtMainLoop)},
    {SIP_MLNAME_CAST(sipName_tileViews), meth_tlp_tileViews, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_tileViews)}
};


sipClassTypeDef sipTypeDef_tulipgui_tlp = {
    {
        -1,
        0,
        0,
        SIP_TYPE_NAMESPACE,
        sipNameNr_tlp,
        {0}
    },
    {
        sipNameNr_tlp,
        {0, 0, 1},
        11, methods_tlp,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
