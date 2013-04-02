from tulip import *

g = tlp.Graph()
h = tlp.Graph()
testProp = g.getStringProperty("testProp")
testProp2 = h.getStringProperty("testProp")

# I can already tell that this is something to be avoided...
