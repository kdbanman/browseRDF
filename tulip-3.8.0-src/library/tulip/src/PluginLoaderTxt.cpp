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

#include <iostream>
#include <tulip/PluginLoaderTxt.h>

using namespace std;
using namespace tlp;
void PluginLoaderTxt::start(const string &path,const string &type) {
  cout << "Start loading " << type << " plug-ins in " << path << endl;
}

void PluginLoaderTxt::loading(const string &filename) {
  cout << "loading file : " << filename << endl;
}

void PluginLoaderTxt::loaded(const string &name,
                             const string &author,
                             const string &date,
                             const string &,
                             const string &release,
                             const string &version,
                             const list <Dependency> &deps) {
  cout << "Plug-in " << name << " loaded, Author:"<< author << " Date: " << date << " Release:" << release << " Version: "<< version <<  endl;

  // ouput dependencies if any
  if (deps.size()) {
    unsigned int i = deps.size();
    cout << "depending on ";
    list<Dependency>::const_iterator itD = deps.begin();

    for (i--; itD != deps.end(); itD++, i--) {
      std::string factoryDepName = (*itD).factoryName;
      std::string pluginDepName = (*itD).pluginName;
      cout << factoryDepName << " " << pluginDepName;

      if (i > 0)
        cout << ", ";
      else
        cout << endl;
    }
  }
}

void PluginLoaderTxt::aborted(const string &filename,const  string &erreurmsg) {
  cout << "Aborted loading of "<< filename << " Error:" << erreurmsg << endl;
}

void PluginLoaderTxt::finished(bool state,const string &msg) {
  if (state)
    cout << "Loading complete" << endl;
  else
    cout << "Loading error " << msg << endl;
}
