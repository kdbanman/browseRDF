/*
 * Module code.
 *
 * Generated by SIP 4.13.2 on Mon Apr 29 01:46:05 2013
 */

#include "sipAPIstl.h"


/* Define the strings used by this module. */
const char sipStrings_stl[] = {
    's', 't', 'd', ':', ':', 'p', 'a', 'i', 'r', '<', 'u', 'i', 'n', 't', ',', 'u', 'i', 'n', 't', '>', 0,
    's', 't', 'd', ':', ':', 'v', 'e', 'c', 't', 'o', 'r', '<', 'd', 'o', 'u', 'b', 'l', 'e', '>', 0,
    's', 't', 'd', ':', ':', 'v', 'e', 'c', 't', 'o', 'r', '<', 'b', 'o', 'o', 'l', '>', 0,
    's', 't', 'd', ':', ':', 'v', 'e', 'c', 't', 'o', 'r', '<', 'u', 'i', 'n', 't', '>', 0,
    's', 't', 'd', ':', ':', 'v', 'e', 'c', 't', 'o', 'r', '<', 'i', 'n', 't', '>', 0,
    's', 't', 'd', ':', ':', 's', 'e', 't', '<', 'd', 'o', 'u', 'b', 'l', 'e', '>', 0,
    's', 't', 'd', ':', ':', 's', 'e', 't', '<', 'u', 'i', 'n', 't', '>', 0,
    's', 't', 'd', ':', ':', 's', 'e', 't', '<', 'i', 'n', 't', '>', 0,
    's', 't', 'd', ':', ':', 'o', 's', 't', 'r', 'e', 'a', 'm', 0,
    's', 't', 'd', ':', ':', 's', 't', 'r', 'i', 'n', 'g', 0,
    '_', '_', 'l', 's', 'h', 'i', 'f', 't', '_', '_', 0,
    's', 't', 'd', 0,
    's', 't', 'l', 0,
};
#line 38 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/library/tulip-python/stl/Module.sip"
void printErrorMessage(const std::string &errMsg) {
    std::string pythonCode = "import sys\n"
                             "sys.stderr.write(\"";
    pythonCode += errMsg;
    pythonCode += "\\n\")";
    PyRun_SimpleString(pythonCode.c_str());
}

#if PY_MAJOR_VERSION >= 3
std::string convertPythonUnicodeObjectToStdString(PyObject *pyUnicodeObj) {
    std::string ret;
    Py_ssize_t dataSize = PyUnicode_GET_DATA_SIZE(pyUnicodeObj);
    const char* data = PyUnicode_AS_DATA(pyUnicodeObj);
    for (Py_ssize_t i = 0 ; i < dataSize ; ++i) {
        ret += std::string(data+i);
    }
    return ret;
}
#endif
#line 47 "/home/kirbybanman/browseRDF/tulip-3.8.0-src/build/library/tulip-python/stl/sipstlcmodule.cpp"


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_stl_std.ctd_base,
    &sipTypeDef_stl_std_ostream.ctd_base,
    &sipTypeDef_stl_std_pair_1900_1900.mtd_base,
    &sipTypeDef_stl_std_set_2400.mtd_base,
    &sipTypeDef_stl_std_set_1800.mtd_base,
    &sipTypeDef_stl_std_set_1900.mtd_base,
    &sipTypeDef_stl_std_string.mtd_base,
    &sipTypeDef_stl_std_vector_2600.mtd_base,
    &sipTypeDef_stl_std_vector_2400.mtd_base,
    &sipTypeDef_stl_std_vector_1800.mtd_base,
    &sipTypeDef_stl_std_vector_1900.mtd_base,
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_stl = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_stl,
    0,
    -1,
    sipStrings_stl,
    NULL,
    NULL,
    11,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    NULL,
    NULL,
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
const sipAPIDef *sipAPI_stl;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_stl
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initstl
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
        "stl",
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

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_stl, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_stl), sip_methods);
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
    sipAPI_stl = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_stl = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_stl == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_stl,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }
    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_stl,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    SIP_MODULE_RETURN(sipModule);
}
