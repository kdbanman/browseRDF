/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.13.2 on Fri Apr 26 16:33:30 2013
 */

#include "sipAPItulip.h"

#line 28 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithParameter.sip"
#include <tulip/WithParameter.h>
#include <tulip/ColorScale.h>
#include <tulip/StringCollection.h>
#include <tulip/IntegerProperty.h>
#include <tulip/LayoutProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ColorProperty.h>
#line 28 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
#include <tulip/WithDependency.h>
#line 31 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/PluginProgress.sip"
#include <tulip/PluginProgress.h>
#line 30 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/TreeTest.sip"
#include <tulip/TreeTest.h>
#line 26 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpTreeTest.cpp"

#line 28 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithParameter.sip"
#include <tulip/WithParameter.h>
#include <tulip/ColorScale.h>
#include <tulip/StringCollection.h>
#include <tulip/IntegerProperty.h>
#include <tulip/LayoutProperty.h>
#include <tulip/SizeProperty.h>
#include <tulip/DoubleProperty.h>
#include <tulip/BooleanProperty.h>
#include <tulip/ColorProperty.h>
#line 28 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/WithDependency.sip"
#include <tulip/WithDependency.h>
#line 31 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/PluginProgress.sip"
#include <tulip/PluginProgress.h>
#line 112 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/Graph.sip"
#include <tulip/Graph.h>
#line 44 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpTreeTest.cpp"
#line 29 "/home/kdbanman/Desktop/tulip-3.8.0-src/library/tulip-python/tulip/Node.sip"
#include <tulip/Node.h>
#line 47 "/home/kdbanman/Desktop/tulip-3.8.0-src/build/library/tulip-python/tulip/siptuliptlpTreeTest.cpp"


PyDoc_STRVAR(doc_tlp_TreeTest_isTree, "tlp.TreeTest.isTree(graph)\n"
    "\n"
    "Returns :const:`True` if the graph is a rooted tree (i.e. a graph with one node designated as the root),\n"
    ":const:`False` otherwise.\n"
    "\n"
    ":param graph: the graph on which to perform the tree test\n"
    ":type graph: :class:`tlp.Graph`\n"
    ":rtype: boolean");

extern "C" {static PyObject *meth_tlp_TreeTest_isTree(PyObject *, PyObject *);}
static PyObject *meth_tlp_TreeTest_isTree(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Graph * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_tlp_Graph, &a0))
        {
            bool sipRes;

            sipRes = tlp::TreeTest::isTree(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TreeTest, sipName_isTree, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_TreeTest_isFreeTree, "tlp.TreeTest.isFreeTree(graph)\n"
    "\n"
    "Returns :const:`True` if the graph is a topological tree\n"
    "(i.e. if the graph was undirected, there would be no cycle),\n"
    ":const:`False` otherwise.\n"
    "\n"
    ":param graph: the graph on which to perform the free tree test\n"
    ":type graph: :class:`tlp.Graph`\n"
    ":rtype: boolean");

extern "C" {static PyObject *meth_tlp_TreeTest_isFreeTree(PyObject *, PyObject *);}
static PyObject *meth_tlp_TreeTest_isFreeTree(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Graph * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_tlp_Graph, &a0))
        {
            bool sipRes;

            sipRes = tlp::TreeTest::isFreeTree(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TreeTest, sipName_isFreeTree, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_TreeTest_makeRootedTree, "tlp.TreeTest.makeRootedTree(graph, root)\n"
    "\n"
    "Turns a free tree into a rooted tree.\n"
    "\n"
    ":param graph: the tree to make rooted\n"
    ":type graph: :class:`tlp.Graph`\n"
    ":param root: the node to designate as the root of the tree\n"
    ":type root: :class:`tlp.node`");

extern "C" {static PyObject *meth_tlp_TreeTest_makeRootedTree(PyObject *, PyObject *);}
static PyObject *meth_tlp_TreeTest_makeRootedTree(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Graph * a0;
        tlp::node * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J9", sipType_tlp_Graph, &a0, sipType_tlp_node, &a1))
        {
            tlp::TreeTest::makeRootedTree(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TreeTest, sipName_makeRootedTree, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_TreeTest_computeTree, "tlp.TreeTest.computeTree(graph)\n"
    "\n"
    "Computes a rooted tree from the graph. The algorithm is the following :\n"
    "\n"
    "* if the graph is a rooted tree, returns the graph\n"
    "* if the graph is a free tree, returns a rooted clone subgraph\n"
    "* if the graph is connected, makes a clone subgraph and returns a rooted spanning tree of that clone\n"
    "* if the graph is not connected, makes a clone subgraph, computes a tree for each of its connected components, adds a simple source and returns the clone.\n"
    "\n"
    ":param graph: the graph on which to compute a rooted tree\n"
    ":type graph: :class:`tlp.Graph`\n"
    ":rtype: :class:`tlp.Graph`");

extern "C" {static PyObject *meth_tlp_TreeTest_computeTree(PyObject *, PyObject *);}
static PyObject *meth_tlp_TreeTest_computeTree(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Graph * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8", sipType_tlp_Graph, &a0))
        {
            tlp::Graph *sipRes;

            sipRes = tlp::TreeTest::computeTree(a0);

            return sipConvertFromType(sipRes,sipType_tlp_Graph,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TreeTest, sipName_computeTree, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_tlp_TreeTest_cleanComputedTree, "tlp.TreeTest.cleanComputedTree(graph, tree)\n"
    "\n"
    "Cleans the graph from a tree previously computed with the :meth:`tlp.TreeTest.computeTree` method.\n"
    "\n"
    ":param graph: the graph to clean from a tree\n"
    ":type graph: :class:`tlp.Graph`\n"
    ":param tree: the tree to remove from the graph \n"
    ":type tree: :class:`tlp.Graph`");

extern "C" {static PyObject *meth_tlp_TreeTest_cleanComputedTree(PyObject *, PyObject *);}
static PyObject *meth_tlp_TreeTest_cleanComputedTree(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        tlp::Graph * a0;
        tlp::Graph * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J8", sipType_tlp_Graph, &a0, sipType_tlp_Graph, &a1))
        {
            tlp::TreeTest::cleanComputedTree(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TreeTest, sipName_cleanComputedTree, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_tlp_TreeTest(void *, const sipTypeDef *);}
static void *cast_tlp_TreeTest(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_tlp_TreeTest)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_tlp_TreeTest(void *, int);}
static void release_tlp_TreeTest(void *sipCppV,int)
{
    delete reinterpret_cast<tlp::TreeTest *>(sipCppV);
}


extern "C" {static void dealloc_tlp_TreeTest(sipSimpleWrapper *);}
static void dealloc_tlp_TreeTest(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_tlp_TreeTest(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_tlp_TreeTest[] = {
    {SIP_MLNAME_CAST(sipName_cleanComputedTree), meth_tlp_TreeTest_cleanComputedTree, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_TreeTest_cleanComputedTree)},
    {SIP_MLNAME_CAST(sipName_computeTree), meth_tlp_TreeTest_computeTree, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_TreeTest_computeTree)},
    {SIP_MLNAME_CAST(sipName_isFreeTree), meth_tlp_TreeTest_isFreeTree, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_TreeTest_isFreeTree)},
    {SIP_MLNAME_CAST(sipName_isTree), meth_tlp_TreeTest_isTree, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_TreeTest_isTree)},
    {SIP_MLNAME_CAST(sipName_makeRootedTree), meth_tlp_TreeTest_makeRootedTree, METH_VARARGS, SIP_MLDOC_CAST(doc_tlp_TreeTest_makeRootedTree)}
};


sipClassTypeDef sipTypeDef_tulip_tlp_TreeTest = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_tlp__TreeTest,
        {0}
    },
    {
        sipNameNr_TreeTest,
        {21, 255, 0},
        5, methods_tlp_TreeTest,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_tlp_TreeTest,
    0,
    0,
    0,
    release_tlp_TreeTest,
    cast_tlp_TreeTest,
    0,
    0,
    0
};