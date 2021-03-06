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
#include <cmath>
#include <iostream>
#include <iomanip>

#include <tulip/TulipPlugin.h>
#include <tulip/AbstractProperty.h>

using namespace std;
using namespace tlp;

void printFloat(ostream &os, const string &name , float f) {
  /*float a=floor(f);
  float b=(f-a)*1000;
  if (b<0) b*=-1;*/
  os << name << f << endl;
}

void printCoord(ostream &os,const Coord &v) {
  printFloat(os,"x ",v.getX());
  printFloat(os,"y ",v.getY());
  printFloat(os,"z ",v.getZ());
}
void printPoint(ostream &os,const Coord &v) {
  os << "point [" << endl;
  printCoord(os,v);
  os << "]" << endl;
}
void printSize(ostream &os,const Size &v) {
  printFloat(os,"h ",v.getW());
  printFloat(os,"w ",v.getH());
  printFloat(os,"d ",v.getD());
}

/** \addtogroup export */
/*@{*/
/// Export plugin for GML format.
/**
 * This plugin records a Tulip graph structure using the GML File format.
 * This format is the file format used by Graphlet.
 * See www.infosun.fmi.uni-passau.de/Graphlet/GML/ for details.
 */
class GMLExport:public ExportModule {
public:
  GMLExport(AlgorithmContext context):ExportModule(context)
  {}

  ~GMLExport() {}

  string convert(string tmp) {
    string newStr;

    for (unsigned int i=0; i<tmp.length(); i++) {
      if (tmp[i]=='\"')
        newStr+="\\\"";
      else
        newStr+=tmp[i];
    }

    return newStr;
  }

  bool exportGraph(ostream &os) {

    os << "graph [" << endl;
    os << "directed 1" << endl;
    os << "version 2" << endl;

    LayoutProperty *layout = graph->getProperty<LayoutProperty>("viewLayout");
    StringProperty *label = graph->getProperty<StringProperty>("viewLabel");
    //    IntegerProperty *shape =getProperty<IntegerProperty>(graph->getPropertyManager(),"viewShape");
    ColorProperty *colors = graph->getProperty<ColorProperty>("viewColor");
    SizeProperty  *sizes = graph->getProperty<SizeProperty>("viewSize");
    //Save Nodes
    Iterator<node> *itN=graph->getNodes();

    if (itN->hasNext())  {

      for (; itN->hasNext();) {
        node itn=itN->next();
        os << "node [" << endl;
        os << "id "<< itn.id << endl ;
        os << "label \"" << convert(label->getNodeValue(itn)) << "\"" << endl;
        os << "graphics [" << endl;
        printCoord(os,layout->getNodeValue(itn));
        printSize(os,sizes->getNodeValue(itn));
        os << "type \"rectangle\"" << endl;
        os << "width 0.12" << endl;
        os << "fill \"#"<< hex << setfill('0') << setw(2) <<(int)colors->getNodeValue(itn).getR()
           << hex << setfill('0') << setw(2) <<(int)colors->getNodeValue(itn).getG()
           << hex << setfill('0') << setw(2) <<(int)colors->getNodeValue(itn).getB() << "\""<< endl;

        //      os << "outline \"#"<< hex << setfill('0') << setw(2) <<(int)colors->getNodeValue(itn).getR()
        //         << hex << setfill('0') << setw(2) <<(int)colors->getNodeValue(itn).getG()
        //         << hex << setfill('0') << setw(2) <<(int)colors->getNodeValue(itn).getB() << "\""<< endl;

        os << "outline \"#000000\"" << endl;
        os << dec << setfill(' ') << setw(6) << "]" << endl;
        os << ']' << endl;
      }
    }

    delete itN;

    //Save edges
    Iterator<edge> *itE=graph->getEdges();

    for (; itE->hasNext();) {
      edge ite=itE->next();
      os << "edge [" << endl;
      os << "source " << graph->source(ite).id << endl;
      os << "target " << graph->target(ite).id << endl;
      os << "id " << ite.id << endl;
      os << "label \"" << label->getEdgeValue(ite) << "\"" << endl;
      os << "graphics [" << endl;
      os << "type \"line\"" << endl;
      os << "arrow \"last\"" << endl;
      os << "width 0.1" << endl;
      os << "Line [" << endl;
      vector<Coord> lcoord;
      vector<Coord>::const_iterator it;
      lcoord=layout->getEdgeValue(ite);

      if (!lcoord.empty()) {
        node itn=graph->source(ite);
        printPoint(os,layout->getNodeValue(itn));
      }

      for (it=lcoord.begin(); it!=lcoord.end(); ++it) {
        printPoint(os,*it);
      }

      if (!lcoord.empty()) {
        node itn=graph->target(ite);
        printPoint(os,layout->getNodeValue(itn));
      }

      os << "]" << endl;
      os << "]" << endl;
      os << "]" << endl;
    }

    delete itE;
    os << "]" << endl;
    return true;
  }
};
/*@}*/
EXPORTPLUGIN(GMLExport,"GML","Auber David","31/07/2001","GML Export plugin","1.0")
