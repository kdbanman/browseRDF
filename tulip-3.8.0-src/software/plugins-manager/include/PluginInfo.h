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

#ifndef _Tulip_PLUGININFO_H_
#define _Tulip_PLUGININFO_H_

#include <tulip/tulipconf.h>

#include <string>
#include <vector>

#include <tulip/Algorithm.h>
#include <tulip/ColorProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/IntegerProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/LayoutProperty.h>
#include <tulip/StringProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ImportModule.h>
#include <tulip/ExportModule.h>
#include <tulip/Interactor.h>
#include <tulip/View.h>
#include <tulip/Controller.h>

namespace tlp {

struct PluginDependency {

  std::string name;
  std::string type;
  std::string version;

  PluginDependency(const std::string &name,const std::string &type,const std::string& version):name(name),version(version) {
    if(type=="Glyph")
      this->type="Glyph";
    else if(type=="Interactor")
      this->type="Interactor";
    else if(type=="View")
      this->type="View";
    else if(type=="Controller")
      this->type="Controller";
    else
      this->type="Algorithm";
  };

};

class PluginInfo {

public :

  static const std::string localTulipDirectory;
  static const std::string pluginsDirName;
  static std::string getInstallationSubDir(const std::string &str);

  virtual bool isInstalledInHome() {
    return false;
  }

  std::string name;
  std::string type;
  std::string displayType;
  std::string server;
  std::string version;
  std::vector<PluginDependency> dependencies;
  bool local;

  virtual ~PluginInfo() {};

protected :
  PluginInfo(bool local):local(local) {};
  PluginInfo(const std::string& name,
             const std::string& type,
             const std::string &displayType,
             const std::string& server,
             const std::string& version,
             const std::vector<PluginDependency> &dependencies,
             bool local)
    :name(name),
     type(type),
     displayType(displayType),
     server(server),
     version(version),
     dependencies(dependencies),
     local(local) {};

public :

  static std::string getPluginDisplayType(const std::string &name) {
    if (AlgorithmPlugin::factory &&
        AlgorithmPlugin::factory->pluginExists(name)) {
      std::string className =
        AlgorithmPlugin::factory->objMap.find(name)->second->getClassName();

      if (className == "Double")
        return "Metric";

      if (className == "Boolean")
        return "Selection";

      if (className == "String")
        return "Label";

      if (className == "Algorithm")
        return "General";

      return className;
    }

    if(ImportModuleFactory::factory &&
        ImportModuleFactory::factory->pluginExists(name))
      return "Import";

    if(ExportModuleFactory::factory &&
        ExportModuleFactory::factory->pluginExists(name))
      return "Export";

    if (InteractorFactory::factory &&
        InteractorFactory::factory->pluginExists(name))
      return "Interactor";

    if (ViewFactory::factory &&
        ViewFactory::factory->pluginExists(name))
      return "View";

    if (ControllerFactory::factory &&
        ControllerFactory::factory->pluginExists(name))
      return "Controller";

    return "Glyph";
  }
};

// we define a specific code to return (must be < 256)
// from tulip_check_pl
#define TLP_CHECK_PL_RETURN_SUCCESS 222

class DistPluginInfo : public PluginInfo {

public :
  std::string fileName;
  std::string localVersion;
  bool linuxVersion;
  bool macVersion_ppc;
  bool macVersion_intel;
  bool windowsVersion;
  bool linuxVersion_i64;
  bool windowsVersion_i64;
  bool installIsOK;

  virtual ~DistPluginInfo() {};

  DistPluginInfo():PluginInfo(false) {};
  DistPluginInfo(const std::string& name,
                 const std::string& type,
                 const std::string& displayType,
                 const std::string& server,
                 const std::string& version,
                 const std::string& fileName,
                 const std::string& localVersion,
                 const std::vector<PluginDependency>& dependencies,
                 bool linuxVersion,
                 bool macVersion_ppc,
                 bool macVersion_intel,
                 bool windowsVersion,
                 bool linuxVersion_i64,
                 bool windowsVersion_i64)
    : PluginInfo(name,type,displayType,server,version,dependencies,false),
      fileName(fileName),
      localVersion(localVersion),
      linuxVersion(linuxVersion),
      macVersion_ppc(macVersion_ppc),
      macVersion_intel(macVersion_intel),
      windowsVersion(windowsVersion),
      linuxVersion_i64(linuxVersion_i64),
      windowsVersion_i64(windowsVersion_i64) {
    local=false;
  };
};

class LocalPluginInfo : public PluginInfo {

public :
  std::string fileName;
  std::string author;
  std::string date;
  std::string info;

  virtual ~LocalPluginInfo() {};

  LocalPluginInfo():PluginInfo(true) {};
  LocalPluginInfo(const std::string& name,
                  const std::string& type,
                  const std::string& displayType,
                  const std::string& server,
                  const std::string& version,
                  const std::string& fileName,
                  const std::string& author,
                  const std::string& date,
                  const std::string& info,
                  const std::vector<PluginDependency> &dependencies)
    :PluginInfo(name,type,displayType,server,version,dependencies,true),
     fileName(fileName),
     author(author),
     date(date),
     info(info) {
    local=true;
  };
  virtual bool isInstalledInHome();
};

class PluginCmp {
public :
  bool operator()(const PluginInfo& p1,const PluginInfo &p2) const {
    if(p1.name!=p2.name)
      return p1.name.compare(p2.name) < 0;

    if(p1.type!=p2.type)
      return p1.type.compare(p2.type) < 0;

    if(p1.server!=p2.server)
      return p1.server.compare(p2.server) < 0;

    if(p1.version!=p2.version)
      return p1.version.compare(p2.version) < 0;

    if(p1.server!=p2.server)
      return p1.server.compare(p2.server) < 0;

    return false;
  }
};

class PluginTypeCmp {
public :
  bool operator()(const PluginInfo& p1,const PluginInfo &p2) {
    if(p1.type!=p2.type)
      return p1.type.compare(p2.type) < 0;

    if(p1.name!=p2.name)
      return p1.name.compare(p2.name) < 0;

    if(p1.server!=p2.server)
      return p1.server.compare(p2.server) < 0;

    if(p1.version!=p2.version)
      return p1.version.compare(p2.version) < 0;

    if(p1.server!=p2.server)
      return p1.server.compare(p2.server) < 0;

    return false;
  }
};

class PluginDependencyCmp {
public :
  bool operator()(const PluginDependency& p1,const PluginDependency &p2) {
    if(p1.name!=p2.name)
      return p1.name.compare(p2.name) < 0;

    if(p1.type!=p2.type)
      return p1.type.compare(p2.type) < 0;

    if(p1.version!=p2.version)
      return p1.version.compare(p2.version) < 0;

    return false;
  }
};

}


#endif //PLUGININFO

