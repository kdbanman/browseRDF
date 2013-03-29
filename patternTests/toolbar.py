# a part of browseRDF (http://www.github.com/kdbanman/browseRDF)
#
# copyright (c) 2013 all rights reserved, Kirby Banman
#
# this code is subject to the GPLv3 license.

from PyQt4 import QtGui, QtCore

class Toolbar(QtGui.QWidget):

  _explore = None
  _select = None

  def __init__(self):
    super(Toolbar, self).__init__()

    _explore = QtGui.QRadioButton('Explore', self)
    _explore.setToolTip('Recursively explore URIs')
  
    _select = QtGui.QRadioButton('Select', self)
    _select.setToolTip('Save nodes to the aggregate')

    self.setWindowTitle('Controls')
    self.show()

  def exploring(self):
    return self._explore.isChecked()

  def selecting(self):
    return self._select.isChecked()
