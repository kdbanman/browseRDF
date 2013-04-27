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
#ifndef _TLPTOOLS_H
#define _TLPTOOLS_H

#include <iostream>
#include <tulip/tulipconf.h>
#include <tulip/PluginLoader.h>

namespace tlp {
extern TLP_SCOPE const char PATH_DELIMITER;
extern TLP_SCOPE std::string TulipLibDir;
extern TLP_SCOPE std::string TulipPluginsPath;
extern TLP_SCOPE std::string TulipDocProfile;
extern TLP_SCOPE std::string TulipUserHandBookIndex;
extern TLP_SCOPE std::string TulipBitmapDir;
extern TLP_SCOPE std::string TulipShareDir;

/**
 * @brief Initializes the Tulip library.
 * Looks for the Tulip plugins directory and fills the Tulip path variables : tlp::TulipLibDir, tlp::TulipPluginsPath, ...
 * The plug-ins directory can be defined in different ways, given by order of prevalence :
 * 1. the TLP_DIR environment variable, if it has a value
 * 2. the appDirPath parameter, if it is not NULL
 * 3. at that point, the Tulip paths will be retrieved from the path of the loaded Tulip shared library
 *  (you must dispose of a standard Tulip installation for that feature to work).
 * 4. a fallback value of 'C:/Tulip/lib/' on windows, or '/usr/local/lib/' on unix.
 */
extern TLP_SCOPE void initTulipLib(const char* appDirPath = 0);

/**
 * @brief Calls loadPluginsFromDir for each directory in TulipPluginsPath.
 *
 * Loads plugins installed in the directories listed in the tlp::TulipPluginsPath variable
 *  (in the form "<path1>;<path2>" on windows and "<path1>:<path2>" on unix)
 *
 * @param plug A PluginLoader to output what is going on. Defaults to 0.
 **/
TLP_SCOPE void loadPlugins(PluginLoader *plug=NULL);

/**
 * Loads a plugin from a specific shared library.
 *
 * @param filename the path to the shared library containing the Tulip plugin (file extension : .so on linux, .dylib on mac, .dll on windows)
 * @param plug A PluginLoader to output what is going on. Defaults to 0.
 * @return bool true if the plugin was correctly loaded
 */
TLP_SCOPE bool loadPlugin(const std::string &filename, PluginLoader *plug=NULL);

/**
  * Loads plugins located in a specific directory
  *
  * @param dir the path to the directory containing the Tulip plugins
  * @param type a string used by the plugin loader (if any) to output the type of plugin being loaded
  * @param loader A PluginLoader to output what is going on. Defaults to 0.
  */
TLP_SCOPE void loadPluginsFromDir(std::string dir, std::string type, PluginLoader *loader=NULL);

/**
  *
  * Checks the dependencies of all plugins loaded so far. If a plugin does not have all its dependencies fulfilled,
  * it is unloaded and removed from the current plugins database.
  *
  * @param loader A PluginLoader to output what is going on. Defaults to 0.
  **/
TLP_SCOPE void loadPluginsCheckDependencies(PluginLoader* loader=NULL);

/**
 * @brief Demangles the name of a C++ class defined in the tlp namespace.
 * Simply removes the 'tlp::' prefix from the class name.
 * @return string The demangled name of a Tulip C++ class.
 */
TLP_SCOPE std::string demangleTlpClassName(const char *className);

/**
 * @brief Returns an istream to read from a gzipped file (uses gzstream lib).
 * The stream has to be deleted after use.
 * @param name The name of the file to read from.
 * @param open_mode The mode to open the file with. Defaults to std::ios::in.
 * @return istream gzipped input stream from a file.
 */
TLP_SCOPE std::istream *getIgzstream(const char *name, int open_mode = std::ios::in);

/**
 * @brief Returns an ostream to write to a gzipped file (uses gzstream lib).
 * The stream has to be deleted after use.
 * @warning Don't forget to check the stream with ios::bad()!
 * @param name The name of the file to write to.
 * @param open_mode The mode to open the file with. Defaults to std::ios::out.
 * @return ostream gzipped output stream to a file.
 */
TLP_SCOPE std::ostream *getOgzstream(const char *name, int open_mode = std::ios::out);

/**
 * @brief Splits the string and returns everything before the first dot ('.').
 * This is used to return major version number, as version numbers are formatted as X.Y.Z,
 * X being the major, Y the minor, and Z the patch version.
 *
 * @return string The part of the string before the first dot.
 */
TLP_SCOPE std::string getMajor(const std::string &release);

/**
 * @brief Splits the string and return the minor version.
 * If the string does not contain any dot, then 0 is returned.
 * If the string contains only one dot (X.Y), then everything after the first dot is returned (Y).
 * If the string is a full version with two dots (X.Y.Z), everything between the first and last dots is returned (Y).
 * If there are more than two dots, everything between the first and last dots is returned.
 */
TLP_SCOPE std::string getMinor(const std::string &release);

/**
 * @brief Gets the plugin library currently loading
 * Returns the absolute file name of the plugin library currently loading
 */
TLP_SCOPE const std::string& getCurrentPluginFileName();
}

#endif
