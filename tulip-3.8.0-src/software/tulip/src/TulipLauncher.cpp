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

#include <cstdlib>

#include <QtGui/QApplication>
#include <QtCore/QDir>
#include <QtCore/QProcess>
#include <QtCore/QSettings>

using namespace std;

int main( int argc, char **argv ) {
  QApplication app(argc,argv);

  QDir appDir(QApplication::applicationDirPath());
  QProcess proc;
#if defined(_WIN32)
  QString program = appDir.absoluteFilePath("tulip_app.exe");
  // add tlp plugins dirs to PATH envt variable
  QProcessEnvironment env = QProcessEnvironment::systemEnvironment();
  QString tlpPath = appDir.absoluteFilePath("tlp");
  QString interactorsPath = QDir(tlpPath).absoluteFilePath("interactors");
  QString viewPath = QDir(tlpPath).absoluteFilePath("view");
  env.insert("PATH", QDir::toNativeSeparators(tlpPath) + ';'
             + QDir::toNativeSeparators(interactorsPath) + ';'
             + QDir::toNativeSeparators(viewPath) + ';'
             + env.value("Path"));
  proc.setProcessEnvironment(env);
#else
  QString program = appDir.absoluteFilePath("tulip_app");
#endif
  QStringList arguments;

  for(int i = 1 ; i < argc ; ++i) {
    arguments << argv[i];
  }

  proc.setReadChannelMode(QProcess::ForwardedChannels);
  bool needStart=true;

  while(needStart) {
    proc.start(program,arguments);
    proc.waitForFinished(-1);
    QSettings settings("TulipSoftware","Tulip");
    settings.beginGroup("PluginsManager");
    needStart=settings.value("needRestart",false).toBool();
    settings.endGroup();
  }

  return 0;
}
