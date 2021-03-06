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
#include "PluginsManager.h"

#include <QtCore/QSettings>
#include <QtGui/QVBoxLayout>
#include <QtGui/QStatusBar>
#include <QtGui/QMenuBar>
#include <QtGui/QActionGroup>
#include <QtGui/QMessageBox>
#include <iostream>

#include "ProxyConfigurationDialog.h"
#include <PluginsViewWidget.h>
#include <PluginsInfoWidget.h>
#include <ServersOptionDialog.h>

using namespace std;

namespace tlp {

PluginsManager::PluginsManager(MultiServerManager *msm,QWidget *parent): QDialog(parent), serverManager(msm) {
  setWindowTitle("Plugins Manager");
  setMinimumSize(800, 600);
  QVBoxLayout* layout= new QVBoxLayout(this);

  menuBar = new QMenuBar(this);
#if QT_MINOR_REL >= 6
  menuBar->setNativeMenuBar(false);
#endif
  buttons = new QDialogButtonBox(QDialogButtonBox::Apply | QDialogButtonBox::Reset | QDialogButtonBox::Close, Qt::Horizontal, this);

  connect(buttons, SIGNAL(clicked(QAbstractButton*)), SLOT(clicked(QAbstractButton*)));
  connect(buttons, SIGNAL(rejected()), this, SLOT(reject()));

  layout->setMenuBar(menuBar);

  pluginsWidget = new QWidget();
  pluginsWidget->setLayout(new QHBoxLayout());

  pluginsList = new PluginsViewWidget(serverManager,this);
  pluginsWidget->layout()->addWidget(pluginsList);

  pluginsInfo = new PluginsInfoWidget(serverManager,this);
  pluginsWidget->layout()->addWidget(pluginsInfo);

  layout->addWidget(pluginsWidget);
  layout->addWidget(buttons);

  serverDialog = new ServersOptionDialog(serverManager, this);

  connect(pluginsList, SIGNAL(pluginInfoSignal(const PluginInfo*)), this, SLOT(clickOnPluginSlot(const PluginInfo *)));
  connect(serverManager, SIGNAL(newPluginList()), this, SLOT(updatePluginsTree()));
  updatePluginsTree();
  createMenus();
  serverView();
}

PluginsManager::~PluginsManager() {
  delete serverManager;
}

void PluginsManager::createMenus() {
  /* --- file menu --- */
  QMenu* fileMenu = menuBar->addMenu(tr("&File"));

  fileMenu->addAction(tr("&Apply Changes"), pluginsList, SLOT(applyChange()), QKeySequence(Qt::CTRL | Qt::Key_A));

  QAction* restore = fileMenu->addAction(tr("&Restore"), pluginsList, SLOT(restore()), QKeySequence(Qt::CTRL | Qt::Key_R));
  connect(restore, SIGNAL(triggered(bool)), SLOT(updatePluginsTree()));

  fileMenu->addSeparator();

  fileMenu->addAction(tr("E&xit"), this, SLOT(reject()), QKeySequence(Qt::CTRL | Qt::Key_X));

  /* --- configure menu --- */
  QMenu* configureMenu = menuBar->addMenu(tr("&Configure"));

  configureMenu->addAction(tr("&Servers"), this, SLOT(serverPopup()), QKeySequence(Qt::CTRL | Qt::Key_S));
  configureMenu->addAction(tr("&Http proxy"), this, SLOT(proxy()));

  /* --- view menu --- */
  QMenu* viewMenu = menuBar->addMenu(tr("&View"));

  QAction* serverViewAct = viewMenu->addAction(tr("Sort by S&erver"), this, SLOT(serverView()), QKeySequence(Qt::CTRL | Qt::Key_E));
  serverViewAct->setCheckable(true);
  serverViewAct->setChecked(true);

  QAction* groupViewAct = viewMenu->addAction(tr("Sort by Gro&up"), this, SLOT(groupView()), QKeySequence(Qt::CTRL | Qt::Key_U));
  groupViewAct->setCheckable(true);

  QAction* pluginViewAct = viewMenu->addAction(tr("Sort by Plug&in"), this, SLOT(pluginView()), QKeySequence(Qt::CTRL | Qt::Key_P));
  pluginViewAct->setCheckable(true);

  QActionGroup* sortActionGroup = new QActionGroup(this);
  sortActionGroup->addAction(serverViewAct);
  sortActionGroup->addAction(groupViewAct);
  sortActionGroup->addAction(pluginViewAct);
  sortActionGroup->setExclusive(true);

  viewMenu->addSeparator();

  lastPluginsAct = viewMenu->addAction(tr("Show only &latest plugins"), this, SLOT(modifyTreeView()), QKeySequence(Qt::CTRL | Qt::Key_L));
  lastPluginsAct->setCheckable(true);

  compatiblesPluginsAct = viewMenu->addAction(tr("Show only &compatibles plugins"), this, SLOT(modifyTreeView()), QKeySequence(Qt::CTRL | Qt::Key_C));
  compatiblesPluginsAct->setCheckable(true);

  notinstalledPluginsAct = viewMenu->addAction(tr("Show &not installed plugins"), this, SLOT(modifyTreeView()), QKeySequence(Qt::CTRL | Qt::Key_N));
  notinstalledPluginsAct->setCheckable(true);
}

void PluginsManager::serverView() {
  currentView = VIEW_BY_SERVER;
  modifyTreeView();
}

void PluginsManager::groupView() {
  currentView = VIEW_BY_TYPE;
  modifyTreeView();
}

void PluginsManager::pluginView() {
  currentView = VIEW_BY_NAME;
  modifyTreeView();
}

void PluginsManager::proxy() {
  ProxyConfigurationDialog proxyDialog(this);
  int result=proxyDialog.exec();

  if(result==QDialog::Accepted) {
    proxyDialog.saveProxy();
    QMessageBox::warning(this,
                         tr("Http proxy configuration"),
                         tr("To finish http proxy configuration \nTulip must be restart."),
                         QMessageBox::Ok | QMessageBox::Default);
  }
}

void PluginsManager::clicked(QAbstractButton* button) {
  if(buttons->standardButton(button) == QDialogButtonBox::Reset) {
    pluginsList->restore();
    updatePluginsTree();
  }
  else if(buttons->standardButton(button) == QDialogButtonBox::Apply) {
    pluginsList->applyChange();
  }
}

void PluginsManager::updatePluginsTree() {
  pluginsList->changeList();
  repaint();
}


void PluginsManager::serverPopup() {
  if(serverDialog->isVisible()) {
    serverDialog->raise();
  }
  else {
    serverDialog->setVisible(true);
    serverDialog->exec();
  }

  updatePluginsTree();
}

void PluginsManager::modifyTreeView() {
  serverManager->modifyTreeView(currentView);
  pluginsList->setLastVersion(lastPluginsAct->isChecked());
  pluginsList->setCompatiblesVersion(compatiblesPluginsAct->isChecked());
  pluginsList->setNotinstalledVersion(notinstalledPluginsAct->isChecked());
  pluginsList->changeList();
}

void PluginsManager::clickOnPluginSlot(const PluginInfo *pi) {
  string addr;
  serverManager->getAddr(pi->server,addr);
  pluginsInfo->setPluginInfo(pi,addr);
}

}
