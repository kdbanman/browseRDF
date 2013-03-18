#  a part of browseRDF (http://www.github.com/kdbanman/browseRDF)
#
# Copyright (c) 2013 All Rights Reserved, Kirby Banman
#
# This code is subject to the GPLv3 license.

import sys

import tulip
from PyQt4 import QtGui

import model
import view
import controller 

mod = model.Model()
vw = view.View()
cont = controller.Controller()


# The program's behaviour is governed by the state of the toolbar defined below
class Toolbar(QtGui.QWidget): 
  '''
  PyQt toolbar to control exploration/selection behaviour, as well as
  serialization, quitting, andwindow closure (since we can't observe tulip
  view closure to delete frontier graphs) 
  '''
 
  def __init__(self): 
    super(Toolbar, self).__init__() 
 
    QtGui.QToolTip.setFont(QtGui.QFont('SansSerif', 10))

    _explore = QtGui.QRadioButton('Explore', self) 
    _explore.setToolTip('Recursively explore URIs') 
    _explore.resize(_explore.sizeHint())
    _explore.move(50, 50)
   
    _select = QtGui.QRadioButton('Select', self) 
    _select.setToolTip('Save nodes to the aggregate') 
    _select.resize(_select.sizeHint())
    _explore.move(50, 100)
 
    self.setGeometry(300, 300, 250, 150)
    self.setWindowTitle('Controls') 
    self.show() 
 
  def exploring(self): 
    return self._explore.isChecked() 
 
  def selecting(self): 
    return self._select.isChecked()


app = QtGui.QApplication(sys.argv)
tool = Toolbar()


class SelectObserver(tulip.tlp.PropertyObserver):
  '''
  The program's flow is controlled by observation of tulip nodes, the following
  observer object controls the communication between the browser's components
  '''
  def afterSetNodeValue(self, viewSelection, node):
    if tool.isExploring():
      if cont.isURI(node):
        uri = cont.getContent(node)
        rdfGraph = mod.getGraph(uri)
        tlpGraph = cont.triplesToTulip(rdfGraph)
        vw.newFrontier(tlpGraph)


selObs = SelectObserver()
cont.viewSelection.addPropertyObserver(selObs)

sys.exit(app.exec_())

