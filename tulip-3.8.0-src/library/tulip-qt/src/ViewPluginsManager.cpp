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
#include "tulip/ViewPluginsManager.h"
#include "tulip/TlpQtTools.h"

//====================================================
tlp::ViewPluginsManager tlp::ViewPluginsManager::inst;

using namespace std;

namespace tlp {

ViewPluginsManager::ViewPluginsManager() {
  ViewFactory::initFactory();
}
//====================================================
void ViewPluginsManager::loadPlugins(PluginLoader *plug) {
  ViewFactory::initFactory();
  string::const_iterator begin=tlp::TulipPluginsPath.begin();
  string::const_iterator end=begin;

  while (end!=tlp::TulipPluginsPath.end())
    if ((*end)==tlp::PATH_DELIMITER) {
      if (begin!=end)
        tlp::loadViewPluginsFromDir(string(begin,end)+"/view", plug);

      ++end;
      begin=end;
    }
    else
      ++end;

  if (begin!=end) {
    tlp::loadViewPluginsFromDir(string(begin,end)+"/view", plug);
  }
}
//====================================================
View* ViewPluginsManager::createView(const string &name) {
  ViewContext ic;
  return ViewFactory::factory->getPluginObject(name, &ic);
}
}
