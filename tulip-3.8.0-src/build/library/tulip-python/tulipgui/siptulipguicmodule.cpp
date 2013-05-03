/*
 * Module code.
 *
 * Generated by SIP 4.13.2 on Tue Apr 30 11:13:49 2013
 */

#include "sipAPItulipgui.h"

#line 31 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/View.sip"
#include <tulip/View.h>
#line 12 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguicmodule.cpp"
#line 29 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/..//tulip-ogl/../tulip/../stl/string.sip"
	// Include the library interface to the type being mapped.
#include <string>
#line 16 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguicmodule.cpp"
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
#line 33 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguicmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_tulipgui[] = {
    't', 'l', 'p', ':', ':', 'N', 'o', 'd', 'e', 'L', 'i', 'n', 'k', 'D', 'i', 'a', 'g', 'r', 'a', 'm', 'C', 'o', 'm', 'p', 'o', 'n', 'e', 'n', 't', 0,
    'c', 'l', 'o', 's', 'e', 'V', 'i', 'e', 'w', 's', 'R', 'e', 'l', 'a', 't', 'e', 'd', 'T', 'o', 'G', 'r', 'a', 'p', 'h', 0,
    's', 'e', 't', 'O', 'p', 't', 'i', 'o', 'n', 's', 'W', 'i', 'd', 'g', 'e', 't', 's', 'V', 'i', 's', 'i', 'b', 'l', 'e', 0,
    's', 't', 'd', ':', ':', 'v', 'e', 'c', 't', 'o', 'r', '<', 't', 'l', 'p', ':', ':', 'V', 'i', 'e', 'w', '*', '>', 0,
    's', 'e', 't', 'C', 'e', 'n', 't', 'e', 'r', 'V', 'i', 'e', 'w', 'O', 'n', 'S', 'e', 't', 'G', 'r', 'a', 'p', 'h', 0,
    'a', 'd', 'd', 'N', 'o', 'd', 'e', 'L', 'i', 'n', 'k', 'D', 'i', 'a', 'g', 'r', 'a', 'm', 'V', 'i', 'e', 'w', 0,
    'g', 'e', 'C', 'e', 'n', 't', 'e', 'r', 'V', 'i', 'e', 'w', 'O', 'n', 'S', 'e', 't', 'G', 'r', 'a', 'p', 'h', 0,
    's', 'e', 't', 'R', 'e', 'n', 'd', 'e', 'r', 'i', 'n', 'g', 'P', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', 's', 0,
    'g', 'e', 't', 'R', 'e', 'n', 'd', 'e', 'r', 'i', 'n', 'g', 'P', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', 's', 0,
    'g', 'e', 't', 'A', 'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e', 'V', 'i', 'e', 'w', 's', 0,
    'g', 'e', 't', 'V', 'i', 'e', 'w', 's', 'O', 'f', 'G', 'r', 'a', 'p', 'h', 0,
    'g', 'e', 't', 'O', 'p', 'e', 'n', 'e', 'd', 'V', 'i', 'e', 'w', 's', 0,
    'l', 'o', 'a', 'd', 'G', 'U', 'I', 'P', 'l', 'u', 'g', 'i', 'n', 's', 0,
    'r', 'u', 'n', 'Q', 't', 'M', 'a', 'i', 'n', 'L', 'o', 'o', 'p', 0,
    'c', 'l', 'o', 's', 'e', 'A', 'l', 'l', 'V', 'i', 'e', 'w', 's', 0,
    'h', 'i', 'd', 'e', 'O', 'v', 'e', 'r', 'v', 'i', 'e', 'w', 0,
    's', 'a', 'v', 'e', 'P', 'i', 'c', 't', 'u', 'r', 'e', 0,
    'c', 'e', 'n', 't', 'e', 'r', 'V', 'i', 'e', 'w', 0,
    's', 'e', 't', 'V', 'i', 's', 'i', 'b', 'l', 'e', 0,
    't', 'i', 'l', 'e', 'V', 'i', 'e', 'w', 's', 0,
    'c', 'l', 'o', 's', 'e', 'V', 'i', 'e', 'w', 0,
    't', 'l', 'p', ':', ':', 'V', 'i', 'e', 'w', 0,
    'g', 'e', 't', 'S', 'c', 'e', 'n', 'e', 0,
    'g', 'e', 't', 'G', 'r', 'a', 'p', 'h', 0,
    's', 'e', 't', 'G', 'r', 'a', 'p', 'h', 0,
    't', 'u', 'l', 'i', 'p', 'g', 'u', 'i', 0,
    'a', 'd', 'd', 'V', 'i', 'e', 'w', 0,
    'g', 'e', 't', 'N', 'a', 'm', 'e', 0,
    'g', 'e', 't', 'D', 'a', 't', 'a', 0,
    's', 'e', 't', 'D', 'a', 't', 'a', 0,
    's', 'e', 't', 'P', 'o', 's', 0,
    'r', 'e', 's', 'i', 'z', 'e', 0,
    'd', 'r', 'a', 'w', 0,
    't', 'l', 'p', 0,
};
#line 118 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/Module.sip"

void printErrorMessage(const std::string &errMsg) {
    std::string pythonCode = "import sys\n"
                             "sys.stderr.write(\"";
    pythonCode += errMsg;
    pythonCode += "\\n\")";
    PyRun_SimpleString(pythonCode.c_str());
}

void releaseSIPWrapper(void *wrappedCppObject, const sipTypeDef *td) {
    PyObject *pyObj = sipGetPyObject(wrappedCppObject, td);
    if (pyObj) {
        sipTransferTo(pyObj, pyObj);
        sipSimpleWrapper *wrapper = reinterpret_cast<sipSimpleWrapper *>(pyObj);
        sipCommonDtor(wrapper);
    }
}

#include <QCoreApplication>
#include <QThread>

#if defined(Q_OS_WIN32)
#include <conio.h>
#include <QTimer>
#else
#include <QSocketNotifier>
#endif

// This is the input hook that will process events while the interpreter is
// waiting for interactive input (from PyQt4).
extern "C" {static int qtInputHook();}

static int qtInputHook() {
    QCoreApplication *app = QCoreApplication::instance();

    if (app && app->thread() == QThread::currentThread()) {
#if defined(Q_OS_WIN32)
        QTimer timer;
        QObject::connect(&timer, SIGNAL(timeout()), app, SLOT(quit()));

        do {
            timer.start(100);
            QCoreApplication::exec();
            timer.stop();
        } while (!_kbhit());

        QObject::disconnect(&timer, SIGNAL(timeout()), app, SLOT(quit()));
#else
        QSocketNotifier notifier(0, QSocketNotifier::Read, 0);
        QObject::connect(&notifier, SIGNAL(activated(int)), app, SLOT(quit()));
        QCoreApplication::exec();
        QObject::disconnect(&notifier, SIGNAL(activated(int)), app, SLOT(quit()));
#endif
    }

    return 0;
}

void installQtInputHook() {
    PyOS_InputHook = qtInputHook;
}

void removeQtInputHook() {
    PyOS_InputHook = 0;
}

#line 30 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/NodeLinkDiagramComponent.sip"

void updateNodeLinkConfWidgets(tlp::NodeLinkDiagramComponent *nlv) {
    tlp::GlMainWidget *glWidget = nlv->getGlMainWidget();
    std::list<std::pair<QWidget *,std::string> > confWidgets = nlv->getConfigurationWidget();
    std::list<std::pair<QWidget *,std::string> >::iterator it;
    for (it = confWidgets.begin() ; it != confWidgets.end() ; ++it) {
        tlp::RenderingParametersDialog *rpDialog = dynamic_cast<tlp::RenderingParametersDialog *>(it->first);
        tlp::LayerManagerWidget *lmWidget = dynamic_cast<tlp::LayerManagerWidget *>(it->first);
        if (rpDialog) {
            rpDialog->setGlMainWidget(glWidget);
        } else if (lmWidget) {
            lmWidget->attachMainWidget(glWidget);
        }
    }
}

#line 7 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/TulipGui.sip"
TulipViewsManager tvm;
#line 158 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguicmodule.cpp"

bool sipVH_tulipgui_0(sip_gilstate_t sipGILState,PyObject *sipMethod,const std::string& a0,int a1,int a2,bool a3)
{
    bool sipRes = 0;
    PyObject *resObj = sipCallMethod(0,sipMethod,"Niib",new std::string(a0),sipType_std_string,NULL,a1,a2,a3);

    if (!resObj || sipParseResult(0,sipMethod,resObj,"b",&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(resObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

tlp::Graph * sipVH_tulipgui_1(sip_gilstate_t sipGILState,PyObject *sipMethod)
{
    tlp::Graph * sipRes = 0;
    PyObject *resObj = sipCallMethod(0,sipMethod,"");

    if (!resObj || sipParseResult(0,sipMethod,resObj,"H0",sipType_tlp_Graph,&sipRes) < 0)
        PyErr_Print();

    Py_XDECREF(resObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)

    return sipRes;
}

void sipVH_tulipgui_2(sip_gilstate_t sipGILState,PyObject *sipMethod,tlp::Graph *a0,tlp::DataSet a1)
{
    PyObject *resObj = sipCallMethod(0,sipMethod,"DN",a0,sipType_tlp_Graph,NULL,new tlp::DataSet(a1),sipType_tlp_DataSet,NULL);

    if (!resObj || sipParseResult(0,sipMethod,resObj,"Z") < 0)
        PyErr_Print();

    Py_XDECREF(resObj);
    Py_DECREF(sipMethod);

    SIP_RELEASE_GIL(sipGILState)
}


/* Convert to a sub-class if possible. */
extern "C" {static const sipTypeDef *sipSubClass_tlp_View(void **);}
static const sipTypeDef *sipSubClass_tlp_View(void **sipCppRet)
{
    tlp::View *sipCpp = reinterpret_cast<tlp::View *>(*sipCppRet);
    const sipTypeDef *sipType;

#line 35 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/View.sip"
   if (dynamic_cast<tlp::NodeLinkDiagramComponent*>(sipCpp)) {
   		sipType = sipType_tlp_NodeLinkDiagramComponent;
   } else {
   		sipType = NULL;
   } 
#line 219 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguicmodule.cpp"

    return sipType;
}


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_tulipgui_std_vector_0101tlp_View.mtd_base,
    &sipTypeDef_tulipgui_tlp.ctd_base,
    &sipTypeDef_tulipgui_tlp_NodeLinkDiagramComponent.ctd_base,
    &sipTypeDef_tulipgui_tlp_View.ctd_base,
};


/*
 * This defines the virtual handlers that this module implements and can be
 * used by other modules.
 */
static sipVirtHandlerFunc virtHandlersTable[] = {
    (sipVirtHandlerFunc)sipVH_tulipgui_0,
    (sipVirtHandlerFunc)sipVH_tulipgui_1,
    (sipVirtHandlerFunc)sipVH_tulipgui_2,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"stl", -1, NULL},
    {"tulip", -1, NULL},
    {"tulipogl", -1, NULL},
    {NULL, -1, NULL}
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
    {sipSubClass_tlp_View, {3, 255, 0}, NULL},
    {NULL, {0, 0, 0}, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_tulipgui = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_tulipgui,
    0,
    -1,
    sipStrings_tulipgui,
    importsTable,
    NULL,
    4,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    virtHandlersTable,
    convertorsTable,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_tulipgui;
const sipExportedModuleDef *sipModuleAPI_tulipgui_stl;
const sipExportedModuleDef *sipModuleAPI_tulipgui_tulip;
const sipExportedModuleDef *sipModuleAPI_tulipgui_tulipogl;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_tulipgui
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        inittulipgui
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "tulipgui",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

#line 26 "/home/kdbanman/browseRDF/tulip-3.8.0-src/library/tulip-python/tulipgui/Module.sip"
    std::string tlpImportHook =
    "try:\n"
    "   _origimportfunc\n"
    "except NameError:\n"
    "   import sys\n"
#if PY_MAJOR_VERSION >= 3
    "   import builtins\n"
    "   _origimportfunc = builtins.__import__\n"
#else
    "   import __builtin__\n"
    "   _origimportfunc = __builtin__.__import__\n"
#endif
    "   def tlpimporthook(name, globals={}, locals={}, fromlist=[], level=-1):\n"
    "       fullname = name\n"
    "       m = _origimportfunc(name, globals, locals, fromlist, level)\n"
    "       if fullname.startswith(\"tulip\"):\n"
    "           if fromlist and len(fromlist) > 0 and fromlist[0] == \"*\":\n"
    "               curTlpDict = None\n"
    "               if \"tlp\" in locals:\n"
    "                   curTlpDict = locals[\"tlp\"].__dict__\n"
    "                   if curTlpDict:\n"
    "                       m = type(fullname, (object,), dict(m.__dict__))\n"
    "                       m.tlp = type(\"tlp\", (object,), dict(m.tlp.__dict__))\n"
    "                       for k in curTlpDict.keys():\n"
    "                           if not k.startswith(\"_\"):\n"
    "                               setattr(m.tlp, k, curTlpDict[k])\n"
    "       return m\n"
#if PY_MAJOR_VERSION >= 3
    "   builtins.__import__ = tlpimporthook\n"
#else
    "   __builtin__.__import__ = tlpimporthook\n"
#endif
     ;

    PyRun_SimpleString(tlpImportHook.c_str());

    // If there is no QApplication instance, it means that we are working from the classical Python shell
    // or we are executing a script with the interpreter.
    // Instantiate a QApplication but don't run its event loop continually through the exec method.
    // Instead use the same hack as in PyQt4 in order to process qt events when the Python shell
    // is waiting for input.
    if (!QApplication::instance()) {
        installQtInputHook();
        new QApplication(argc, argv);
        if (tlp::TulipPluginsPath.empty()) {
            tlp::initTulipLib();
        }
        tlp::InteractorManager::getInst().loadPlugins();
        tlp::ViewPluginsManager::getInst().loadPlugins();
        tlp::GlyphManager::getInst().loadPlugins();

        std::string resetSIGINTHandler =
            "import signal\n"
            "signal.signal(signal.SIGINT, signal.SIG_DFL)\n";

        PyRun_SimpleString(resetSIGINTHandler.c_str());

        // Check if we are in script execution mode (sys.ps1 is not defined in that case)
        // If so, register an exit callback that will run the Qt event loop if some widgets are
        // still in a visible state
        PyObject *ps1 = PySys_GetObject("ps1");
        if (!ps1 && !Py_InteractiveFlag) {
            std::string installExitFunc =
                "def tulipguiExitFunc():\n"
                "   import tulipgui\n"
                "   tulipgui.tlp.runQtMainLoop()\n"
                "import atexit\n"
                "atexit.register(tulipguiExitFunc)\n";
            PyRun_SimpleString(installExitFunc.c_str());
        }
    }

#line 414 "/home/kdbanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/tulipgui/siptulipguicmodule.cpp"
    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_tulipgui, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_tulipgui), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule(SIP_MODULE_NAME);
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>(SIP_MODULE_NAME));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_tulipgui = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_tulipgui = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_tulipgui == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_tulipgui,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }
    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_tulipgui,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_tulipgui_stl = sipModuleAPI_tulipgui.em_imports[0].im_module;
    sipModuleAPI_tulipgui_tulip = sipModuleAPI_tulipgui.em_imports[1].im_module;
    sipModuleAPI_tulipgui_tulipogl = sipModuleAPI_tulipgui.em_imports[2].im_module;

    SIP_MODULE_RETURN(sipModule);
}
