import sys
from PyQt4 import QtGui

class Toolbar(QtGui.QWidget): 
 
  def __init__(self): 
    super(Toolbar, self).__init__() 
 
    QtGui.QToolTip.setFont(QtGui.QFont('SansSerif', 10))

    _explore = QtGui.QRadioButton('Explore', self) 
    _explore.setToolTip('Recursively explore URIs') 
    _explore.resize(_explore.sizeHint())
    _explore.move(10, 30)
   
    _select = QtGui.QRadioButton('Select', self) 
    _select.setToolTip('Save nodes to the aggregate') 
    _select.resize(_select.sizeHint())
    _select.move(10, 60)
 
    self.setGeometry(0, 0, 250, 120)
    self.setWindowTitle('Controls') 
    self.show() 
 
  def exploring(self): 
    return self._explore.isChecked() 
 
  def selecting(self): 
    return self._select.isChecked()


app = QtGui.QApplication(sys.argv)
tool = Toolbar()
sys.exit(app.exec_())


