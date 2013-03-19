#  a part of browseRDF (http://www.github.com/kdbanman/browseRDF)
#
# Copyright (c) 2013 All Rights Reserved, Kirby Banman
#
# This code is subject to the GPLv3 license.

import sys

import tulip

import model
import view
import controller 

mod = model.Model()
vw = view.View()
cont = controller.Controller()


# The program's behaviour is governed by the state of the toolbar defined below
#class Toolbar(QtGui.QWidget): 
#  '''
#  PyQt toolbar to control exploration/selection behaviour, as well as
#  serialization, quitting, andwindow closure (since we can't observe tulip
#  view closure to delete frontier graphs) 
#  '''
#  def __init__(self): 
#    super(Toolbar, self).__init__() 
# 
#    QtGui.QToolTip.setFont(QtGui.QFont('SansSerif', 10))
#
#    _explore = QtGui.QRadioButton('Explore', self) 
#    _explore.setToolTip('Recursively explore URIs') 
#    _explore.resize(_explore.sizeHint())
#    _explore.move(10, 30)
#   
#    _select = QtGui.QRadioButton('Select', self) 
#    _select.setToolTip('Save nodes to the aggregate') 
#    _select.resize(_select.sizeHint())
#    _select.move(10, 60)
# 
#    self.setGeometry(0, 0, 250, 120)
#    self.setWindowTitle('Controls') 
#    self.show() 
# 
#  def exploring(self): 
#    return self._explore.isChecked() 
# 
#  def selecting(self): 
#    return self._select.isChecked()


class SelectObserver(tulip.tlp.PropertyObserver):
  '''
  The program's flow is controlled by observation of tulip nodes, the following
  observer object controls the communication between the browser's components
  '''
  def afterSetNodeValue(self, viewSelection, node):
    if True: # TODO: this needs to be the exploration condition of the toolbar
      if cont.isURI(node):
        uri = cont.getContent(node)
        rdfGraph = mod.getGraph(uri)
        tlpGraph = cont.triplesToTulip(rdfGraph)
        vw.newFrontier(tlpGraph)


selObs = SelectObserver()
cont.viewSelection.addPropertyObserver(selObs)


#app = QtGui.QApplication(sys.argv)
#tool = Toolbar()
#sys.exit(app.exec_())

if len(sys.argv) == 2 and sys.argv[1] == 'debug':
  uri = "http://dbpedia.org/resource/Albert_Einstein"
  rdfGraph = mod.getGraph(uri)
  print rdfGraph
  tlpGraph = cont.triplesToTulip(rdfGraph)
  vw.newFrontier(tlpGraph)
