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

#ifndef PYTHONSCRIPTVIEWWIDGET_H_
#define PYTHONSCRIPTVIEWWIDGET_H_

#include "PythonScriptViewWidgetData.h"
#include <QtGui/QAction>

#include "PythonCodeEditor.h"

#include <tulip/Graph.h>

class QToolBar;

class PythonScriptView;

class PythonScriptViewWidget : public QWidget, public Ui::PythonScriptViewWidgetData {

  Q_OBJECT

public :

  PythonScriptViewWidget(PythonScriptView *view, QWidget *parent);

  void showEvent(QShowEvent *);
  void resizeEvent(QResizeEvent *);

  int addMainScriptEditor(const QString &fileName="");
  int addModuleEditor(const QString &fileName="");
  int addPluginEditor(const QString &fileName="");

  PythonCodeEditor *getMainScriptEditor(int idx) const;
  PythonCodeEditor *getCurrentMainScriptEditor() const;
  PythonCodeEditor *getModuleEditor(int idx) const;
  PythonCodeEditor *getCurrentModuleEditor() const;
  PythonCodeEditor *getPluginEditor(int idx) const;
  PythonCodeEditor *getCurrentPluginEditor() const;

  std::string getCurrentMainScriptCode() const;
  std::string getMainScriptCode(int idx) const;
  std::string getModuleCode(int idx) const;
  std::string getPluginCode(int idx) const;

  void setGraph(tlp::Graph *graph);

public slots :

  void decreaseFontSize();
  void increaseFontSize();
  void mainScriptTextChanged();
  void moduleScriptTextChanged();
  void pluginScriptTextChanged();
  void resizeToolBars();

  void currentTabChanged(int index);

  void scrollToEditorLine(const QUrl & link);

public :

  QAction *newMainScriptAction;
  QAction *loadMainScriptAction;
  QAction *saveMainScriptAction;
  QAction *newStringModuleAction;
  QAction *newFileModuleAction;
  QAction *loadModuleAction;
  QAction *saveModuleAction;
  QAction *newPluginAction;
  QAction *loadPluginAction;
  QAction *savePluginAction;


  QToolBar *mainScriptToolBar;
  QToolBar *modulesToolBar;
  QToolBar *pluginsToolBar;

private :

  int fontZoom;

  PythonScriptView *pythonScriptView;
  static GragKeyboardFocusEventFilter keyboardFocusEventFilter;
};

#endif /* PYTHONSCRIPTVIEWWIDGET_H_ */
