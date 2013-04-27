/****************************************************************************
** Meta object code from reading C++ file 'MainController.h'
**
** Created: Fri Apr 26 16:35:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/MainController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__MainController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   26,   21,   20, 0x09,
      52,   26,   20,   20, 0x09,
      83,   81,   21,   20, 0x09,
     116,  109,   21,   20, 0x09,
     156,  143,   20,   20, 0x09,
     189,   20,   20,   20, 0x09,
     207,   20,   20,   20, 0x09,
     235,  224,   20,   20, 0x09,
     289,  282,   20,   20, 0x09,
     318,   20,   20,   20, 0x09,
     330,   20,   20,   20, 0x09,
     342,   20,   20,   20, 0x09,
     353,   20,   20,   20, 0x09,
     367,   20,   20,   20, 0x09,
     383,   20,   20,   20, 0x09,
     400,   20,   20,   20, 0x09,
     409,   20,   20,   20, 0x09,
     422,   20,   20,   20, 0x09,
     433,   20,   20,   20, 0x09,
     449,   20,   20,   20, 0x09,
     463,   20,   20,   20, 0x09,
     481,   20,   20,   20, 0x09,
     494,   20,   20,   20, 0x09,
     510,   20,   20,   20, 0x09,
     525,   20,   20,   20, 0x09,
     556,   20,   20,   20, 0x09,
     571,   20,   20,   20, 0x09,
     586,   20,   20,   20, 0x09,
     600,   20,   20,   20, 0x09,
     615,   20,   20,   20, 0x09,
     627,   20,   20,   20, 0x09,
     645,   20,   20,   20, 0x09,
     660,   20,   20,   20, 0x09,
     677,   20,   20,   20, 0x09,
     699,   20,   20,   20, 0x09,
     706,   20,   20,   20, 0x09,
     713,   20,   20,   20, 0x09,
     724,   20,   20,   20, 0x0a,
     734,   20,   20,   20, 0x0a,
     745,   20,   20,   20, 0x0a,
     757,   20,   20,   20, 0x0a,
     768,   20,   20,   20, 0x0a,
     786,   20,   20,   20, 0x0a,
     807,   20,   20,   20, 0x0a,
     826,   20,   20,   20, 0x0a,
     849,   20,   20,   20, 0x0a,
     865,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__MainController[] = {
    "tlp::MainController\0\0bool\0graph\0"
    "changeGraph(Graph*)\0graphAboutToBeRemove(Graph*)\0"
    "w\0windowActivated(QWidget*)\0action\0"
    "changeInteractor(QAction*)\0eltId,isNode\0"
    "showElementProperties(uint,bool)\0"
    "showGraphEditor()\0showViewEditor()\0"
    "view,graph\0viewRequestChangeGraph(tlp::View*,tlp::Graph*)\0"
    "object\0widgetWillBeClosed(QObject*)\0"
    "filePrint()\0isAcyclic()\0isSimple()\0"
    "isConnected()\0isBiconnected()\0"
    "isTriconnected()\0isTree()\0isFreeTree()\0"
    "isPlanar()\0isOuterPlanar()\0makeAcyclic()\0"
    "makeBiconnected()\0makeSimple()\0"
    "makeConnected()\0makeDirected()\0"
    "reverseSelectedEdgeDirection()\0"
    "changeMetric()\0changeString()\0"
    "changeSizes()\0changeColors()\0changeInt()\0"
    "changeSelection()\0changeLayout()\0"
    "applyAlgorithm()\0updateUndoRedoInfos()\0"
    "undo()\0redo()\0snapshot()\0editCut()\0"
    "editCopy()\0editPaste()\0editFind()\0"
    "editCreateGroup()\0editCreateSubgraph()\0"
    "editDelSelection()\0editReverseSelection()\0"
    "editSelectAll()\0editDeselectAll()\0"
};

void tlp::MainController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainController *_t = static_cast<MainController *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->changeGraph((*reinterpret_cast< Graph*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->graphAboutToBeRemove((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->windowActivated((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->changeInteractor((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->showElementProperties((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->showGraphEditor(); break;
        case 6: _t->showViewEditor(); break;
        case 7: _t->viewRequestChangeGraph((*reinterpret_cast< tlp::View*(*)>(_a[1])),(*reinterpret_cast< tlp::Graph*(*)>(_a[2]))); break;
        case 8: _t->widgetWillBeClosed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 9: _t->filePrint(); break;
        case 10: _t->isAcyclic(); break;
        case 11: _t->isSimple(); break;
        case 12: _t->isConnected(); break;
        case 13: _t->isBiconnected(); break;
        case 14: _t->isTriconnected(); break;
        case 15: _t->isTree(); break;
        case 16: _t->isFreeTree(); break;
        case 17: _t->isPlanar(); break;
        case 18: _t->isOuterPlanar(); break;
        case 19: _t->makeAcyclic(); break;
        case 20: _t->makeBiconnected(); break;
        case 21: _t->makeSimple(); break;
        case 22: _t->makeConnected(); break;
        case 23: _t->makeDirected(); break;
        case 24: _t->reverseSelectedEdgeDirection(); break;
        case 25: _t->changeMetric(); break;
        case 26: _t->changeString(); break;
        case 27: _t->changeSizes(); break;
        case 28: _t->changeColors(); break;
        case 29: _t->changeInt(); break;
        case 30: _t->changeSelection(); break;
        case 31: _t->changeLayout(); break;
        case 32: _t->applyAlgorithm(); break;
        case 33: _t->updateUndoRedoInfos(); break;
        case 34: _t->undo(); break;
        case 35: _t->redo(); break;
        case 36: _t->snapshot(); break;
        case 37: _t->editCut(); break;
        case 38: _t->editCopy(); break;
        case 39: _t->editPaste(); break;
        case 40: _t->editFind(); break;
        case 41: _t->editCreateGroup(); break;
        case 42: _t->editCreateSubgraph(); break;
        case 43: _t->editDelSelection(); break;
        case 44: _t->editReverseSelection(); break;
        case 45: _t->editSelectAll(); break;
        case 46: _t->editDeselectAll(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::MainController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::MainController::staticMetaObject = {
    { &ControllerViewsManager::staticMetaObject, qt_meta_stringdata_tlp__MainController,
      qt_meta_data_tlp__MainController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::MainController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::MainController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::MainController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__MainController))
        return static_cast<void*>(const_cast< MainController*>(this));
    if (!strcmp(_clname, "Observable"))
        return static_cast< Observable*>(const_cast< MainController*>(this));
    return ControllerViewsManager::qt_metacast(_clname);
}

int tlp::MainController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ControllerViewsManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
