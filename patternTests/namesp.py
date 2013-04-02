import rdflib

uri = "http://dbpedia.org/resource/Albert_Einstein"
g = rdflib.Graph()
g.load(uri)

nm = rdflib.namespace.NamespaceManager(g)

for n in g.namespaces():
  print "prefix:\n\t" + n[0]
  print "namespace:\n\t" + n[1]

for s,p,o in g:
  # print nm.normalizeUri(o)  #this has the opposite effect intended
  try:
    namespace, name = rdflib.namespace.split_uri(p)
  except:
    print p.encode("UTF-8")
    continue

  namespace = rdflib.URIRef(namespace)
  pref = g.store.prefix(namespace)
  if pref == None:
    pref = namespace
  print pref + ":" + name
