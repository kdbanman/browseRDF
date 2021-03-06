/**
 *
 * This file is part of Tulip (www.tulip-software.org)
 *
 * Authors: David Auber and the Tulip development Team
 * from LaBRI, University of Bordeaux 1 and Inria Bordeaux - Sud Ouest
 *
 * Tulip is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * Tulip is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 */

#include <cstring>
#include <locale.h>

#ifndef _WIN32
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#endif

#include <thirdparty/gzstream/gzstream.h>

#ifdef _WIN32
#include <windows.h>
#ifdef _MSC_VER
#include <dbghelp.h>
#endif
#else
#include <dirent.h>
#include <dlfcn.h>
#endif

#include <tulip/TlpTools.h>
#include <tulip/PropertyTypes.h>
#include <tulip/LayoutProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/StringProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ColorProperty.h>
#include <tulip/IntegerProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/ExportModule.h>
#include <tulip/Algorithm.h>
#include <tulip/ImportModule.h>
#include <tulip/PluginLibraryLoader.h>

using namespace std;
using namespace tlp;

#ifndef _TULIP_LIB_DIR
#ifdef _WIN32
#define _TULIP_LIB_DIR "c:\\Tulip\\lib\\"
#else
#define _TULIP_LIB_DIR "/usr/local/lib/"
#endif
#endif

#define QUOTE_ARG(x) #x
#define QUOTE_EXPANDED_ARG(x) QUOTE_ARG(x)

static const char *TULIP_PLUGINS_PATH_VARIABLE="TLP_PLUGINS_PATH";

string tlp::TulipLibDir;
string tlp::TulipPluginsPath;
string tlp::TulipDocProfile;
string tlp::TulipUserHandBookIndex;
string tlp::TulipBitmapDir;
string tlp::TulipShareDir;
#ifdef _WIN32
const char tlp::PATH_DELIMITER = ';';
#else
const char tlp::PATH_DELIMITER = ':';
#endif

// A function that retrieves the Tulip libraries directory based on
// the path of the loaded shared library libtulip-X.Y.[dll, so, dylib]

extern "C" {

  std::string getTulipLibDir() {
    std::string tulipLibDir;
    std::string libTulipName;

#ifdef _WIN32
#ifdef __MINGW32__
    libTulipName = "libtulip-" + getMajor(TULIP_RELEASE) + "." + getMinor(TULIP_RELEASE) + ".dll";
#else
    libTulipName = "tulip-" + getMajor(TULIP_RELEASE) + "_" + getMinor(TULIP_RELEASE) + ".dll";
#endif
    HMODULE hmod = GetModuleHandle(libTulipName.c_str());

    if (hmod != NULL) {
      TCHAR szPath[512 + 1];
      DWORD dwLen = GetModuleFileName(hmod, szPath, 512);

      if (dwLen > 0) {
        std::string tmp = szPath;
        std::replace(tmp.begin(), tmp.end(), '\\', '/');
        tulipLibDir = tmp.substr(0, tmp.rfind('/')+1) + "../lib";
      }
    }

#else
#ifdef __APPLE__
    libTulipName = "libtulip-" + getMajor(TULIP_RELEASE) + "." + getMinor(TULIP_RELEASE) + ".dylib";
#else
    libTulipName = "libtulip-" + getMajor(TULIP_RELEASE) + "." + getMinor(TULIP_RELEASE) + ".so";
#endif
    void *ptr;
    void *symbol;
    Dl_info info;

    ptr = dlopen(libTulipName.c_str(), RTLD_LAZY);

    if (ptr != NULL) {
      symbol = dlsym(ptr, "getTulipLibDir");

      if (symbol != NULL) {
        if (dladdr(symbol, &info)) {
          std::string tmp = info.dli_fname;
          tulipLibDir = tmp.substr(0, tmp.rfind('/')+1) + "../lib";
        }
      }
    }

#endif
    return tulipLibDir;
  }

}

//=========================================================
void tlp::initTulipLib(const char* appDirPath) {
  // first we must ensure that the parsing of float or double
  // doest not depend on locale
  setlocale(LC_NUMERIC, "C");

  char *getEnvTlp;
  string::size_type pos;
  getEnvTlp=getenv("TLP_DIR");

  if (getEnvTlp==0) {
    if (appDirPath) {
#ifdef _WIN32
      TulipLibDir = std::string(appDirPath) + "/../lib";
#else
      // one dir up to initialize the lib dir
      TulipLibDir.append(appDirPath,
                         strlen(appDirPath) -
                         strlen(strrchr(appDirPath, '/') + 1));
#ifdef I64
      // check for lib64
      string tlpPath64 = TulipLibDir + "lib64/tulip";
      struct stat statInfo;

      if (stat(tlpPath64.c_str(), &statInfo) == 0)
        TulipLibDir.append("lib64");
      else
#endif
        TulipLibDir.append("lib");

#endif
    }
    else {
      // if no appDirPath is provided, retrieve dynamically the Tulip lib dir
      TulipLibDir = getTulipLibDir();

      // if no results (should not happen with a clean Tulip install), fall back in the default value provided during compilation
      if (TulipLibDir.empty())
        TulipLibDir = string(_TULIP_LIB_DIR);
    }
  }
  else
    TulipLibDir=string(getEnvTlp);

#ifdef _WIN32
  // ensure it is a unix-style path
  pos = TulipLibDir.find('\\', 0);

  while(pos != string::npos) {
    TulipLibDir[pos] = '/';
    pos = TulipLibDir.find('\\', pos);
  }

#endif

  // ensure it is '/' terminated
  if (TulipLibDir[TulipLibDir.length() - 1] != '/')
    TulipLibDir+='/';

  getEnvTlp=getenv(TULIP_PLUGINS_PATH_VARIABLE);

  if (getEnvTlp!=0) {
    TulipPluginsPath=string(getEnvTlp);
#ifdef _WIN32
    // ensure it is a unix-style path
    pos = TulipPluginsPath.find('\\', 0);

    while(pos != string::npos) {
      TulipPluginsPath[pos] = '/';
      pos = TulipPluginsPath.find('\\', pos);
    }

#endif
    TulipPluginsPath= TulipLibDir + "tulip" + PATH_DELIMITER + TulipPluginsPath;
  }
  else
    TulipPluginsPath= TulipLibDir + "tulip";


  // one dir up to initialize the share dir
  pos = TulipLibDir.length() - 2;
  pos = TulipLibDir.rfind("/", pos);
  TulipShareDir=TulipLibDir.substr(0, pos + 1)+"share/tulip/";

  //initialize the doc files
  TulipDocProfile=TulipShareDir+"tulip"+QUOTE_EXPANDED_ARG(TULIP_INT_RELEASE)+".qhc";
  TulipUserHandBookIndex=TulipShareDir+"userHandbook/html/index.html";

  //initialize the bitmaps dir
  TulipBitmapDir=TulipShareDir+"bitmaps/";

  // initialize factories
  AlgorithmPlugin::initFactory(true);
  ImportModuleFactory::initFactory();
  ExportModuleFactory::initFactory();

  // initialize serializers
  initTypeSerializers();
}
//=========================================================
istream *tlp::getIgzstream(const char *name, int open_mode) {
  return new igzstream(name, open_mode);
}

ostream *tlp::getOgzstream(const char *name, int open_mode) {
  return new ogzstream(name, open_mode);
}
//=========================================================
map<string, TemplateFactoryInterface* > *TemplateFactoryInterface::allFactories = NULL;
TemplateFactory<AlgorithmPlugin,Algorithm,AlgorithmContext > *AlgorithmPlugin::factory = NULL;
TemplateFactory<ImportModuleFactory,ImportModule,AlgorithmContext > *ImportModuleFactory::factory = NULL;
TemplateFactory<ExportModuleFactory,ExportModule,AlgorithmContext > *ExportModuleFactory::factory = NULL;
//==========================================================
PluginLoader *TemplateFactoryInterface::currentLoader = NULL;
//==========================================================
void tlp::loadPluginsFromDir(std::string dir, std::string type, PluginLoader *loader) {
  if (loader!=0)
    loader->start(dir.c_str(), type);

  tlp::PluginLibraryLoader plLoader(dir, loader);

  TemplateFactoryInterface::currentLoader = loader;

  if (plLoader.hasPluginLibraryToLoad()) {
    while(plLoader.loadNextPluginLibrary(loader)) {
    }

    if (loader)
      loader->finished(true, plLoader.msg);
  }
  else {
    if (loader)
      loader->finished(false, plLoader.msg);
  }
}

void tlp::loadPluginsCheckDependencies(tlp::PluginLoader* loader) {
  // plugins dependencies loop
  bool depsNeedCheck;
  // reset the name of the library currently loading
  PluginLibraryLoader::currentPluginLibrary.clear();

  do {
    map<string, TemplateFactoryInterface *>::const_iterator it =
      TemplateFactoryInterface::allFactories->begin();
    depsNeedCheck = false;

    // loop over factories
    for (; it != TemplateFactoryInterface::allFactories->end(); ++it) {
      TemplateFactoryInterface *tfi = (*it).second;
      // loop over plugins
      Iterator<string> *itP = tfi->availablePlugins();

      while(itP->hasNext()) {
        string pluginName = itP->next();
        list<Dependency> dependencies = tfi->getPluginDependencies(pluginName);
        list<Dependency>::const_iterator itD = dependencies.begin();

        bool foundError = false;

        // loop over dependencies
        for (; itD != dependencies.end(); ++itD) {
          string factoryDepName = (*itD).factoryName;
          string pluginDepName = (*itD).pluginName;

          if (!TemplateFactoryInterface::pluginExists(factoryDepName, pluginDepName)) {
            if (loader) {
              string name("Error when checking dependencies of plugin ");
              name += "'" + pluginName + "':";

              if (foundError)
                name.clear();

              loader->aborted(name, tfi->getPluginsClassName() +
                              " '" + pluginName + "' will be removed, it depends on missing " +
                              factoryDepName + " '" + pluginDepName + "'.");
            }

            tfi->removePlugin(pluginName);
            foundError = depsNeedCheck = true;
            break;
          }

          string release = (*TemplateFactoryInterface::allFactories)[factoryDepName]->getPluginRelease(pluginDepName);
          string releaseDep = (*itD).pluginRelease;

          if (getMajor(release) != getMajor(releaseDep) ||
              getMinor(release) != getMinor(releaseDep)) {
            if (loader) {
              string name("Error when checking dependencies of plugin ");
              name += "'" + pluginName + "':";

              if (foundError)
                name.clear();

              loader->aborted(pluginName, tfi->getPluginsClassName() +
                              " '" + pluginName + "' will be removed, it depends on release " +
                              releaseDep + " of " + factoryDepName + " '" + pluginDepName + "' but " +
                              release + " is loaded.");
            }

            tfi->removePlugin(pluginName);
            depsNeedCheck = true;
            continue;
          }
        }
      }

      delete itP;
    }
  }
  while (depsNeedCheck);
}

//=========================================================
void tlp::loadPlugins(PluginLoader *plug) {
  string::const_iterator begin=TulipPluginsPath.begin();
  string::const_iterator end=begin;

  while (end!=TulipPluginsPath.end())
    if ((*end)==PATH_DELIMITER) {
      if (begin!=end)
        loadPluginsFromDir(string(begin,end), "Algorithm", plug);

      ++end;
      begin=end;
    }
    else
      ++end;

  if (begin!=end)
    loadPluginsFromDir(string(begin,end), "Algorithm", plug);
}
//=========================================================
bool tlp::loadPlugin(const std::string & filename, PluginLoader *plug) {
  TemplateFactoryInterface::currentLoader = plug;

  if (plug)
    plug->loading(filename);

  return PluginLibraryLoader::loadPluginLibrary(filename, plug);
}

//=========================================================
// tlp class names demangler
#if defined(__GNUC__)
#include <cxxabi.h>
std::string tlp::demangleTlpClassName(const char* className) {
  static char demangleBuffer[256];
  int status;
  size_t length = 256;
  abi::__cxa_demangle((char *) className, (char *) demangleBuffer,
                      &length, &status);

  // skip tlp::
  // if needed
  if (strncmp(demangleBuffer, "tlp::", 5))
    return std::string(demangleBuffer);

  return std::string(demangleBuffer + 5);
}
#elif _MSC_VER

std::string tlp::demangleTlpClassName(const char* className) {
  std::string result;
  static char demangleBuffer[256];
  UnDecorateSymbolName(className, demangleBuffer, 256, UNDNAME_32_BIT_DECODE);
  result = std::string(demangleBuffer + 5);
  return result;
}
#else
#error define symbols demangling function
#endif

//=========================================================
std::string tlp::getMajor(const std::string& v) {
  char sep = '.';
#ifdef _MSC_VER
  sep = '_';
#endif
  unsigned int pos = v.find(sep);
  return v.substr(0, pos);
}

//=========================================================
std::string tlp::getMinor(const std::string& v) {
  char sep = '.';
#ifdef _MSC_VER
  sep = '_';
#endif
  size_t pos = v.find(sep);

  if (pos == string::npos)
    return string("0");

  unsigned int rpos = v.rfind(sep);

  if (pos == rpos)
    return v.substr(pos+1);

  return v.substr(pos + 1, rpos - pos - 1);
}
//=========================================================
const std::string& tlp::getCurrentPluginFileName() {
  return PluginLibraryLoader::getCurrentPluginFileName();
}
