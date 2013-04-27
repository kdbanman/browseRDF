/****************************************************************************
** Meta object code from reading C++ file 'SGHierarchyWidget.h'
**
** Created: Fri Apr 26 16:35:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/SGHierarchyWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SGHierarchyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__SGHierarchyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      50,   23,   23,   23, 0x05,
      79,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     100,   23,   23,   23, 0x0a,
     117,   23,   23,   23, 0x0a,
     132,  126,   23,   23, 0x0a,
     164,   23,   23,   23, 0x0a,
     193,   23,   23,   23, 0x08,
     216,   23,   23,   23, 0x08,
     242,   23,   23,   23, 0x08,
     272,   23,   23,   23, 0x08,
     295,   23,   23,   23, 0x08,
     317,   23,   23,   23, 0x08,
     353,  351,   23,   23, 0x08,
     389,  380,   23,   23, 0x08,
     447,  430,   23,   23, 0x08,
     516,  494,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__SGHierarchyWidget[] = {
    "tlp::SGHierarchyWidget\0\0"
    "aboutToRemoveView(Graph*)\0"
    "aboutToRemoveAllView(Graph*)\0"
    "graphChanged(Graph*)\0setGraph(Graph*)\0"
    "update()\0graph\0updateCurrentGraphInfos(Graph*)\0"
    "resizeFirstColumnToContent()\0"
    "contextRemoveCluster()\0contextRemoveAllCluster()\0"
    "contextCloneSubgraphCluster()\0"
    "contextRenameCluster()\0contextCloneCluster()\0"
    "currentGraphChanged(const Graph*)\0p\0"
    "displayContextMenu(QPoint)\0item,p,i\0"
    "changeGraph(QTreeWidgetItem*,QPoint,int)\0"
    "current,previous\0"
    "changeGraph(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "item,,nbNodes,nbEdges\0"
    "setItemInfos(QTreeWidgetItem*,Graph*,uint,uint)\0"
};

void tlp::SGHierarchyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SGHierarchyWidget *_t = static_cast<SGHierarchyWidget *>(_o);
        switch (_id) {
        case 0: _t->aboutToRemoveView((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 1: _t->aboutToRemoveAllView((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 2: _t->graphChanged((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 3: _t->setGraph((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 4: _t->update(); break;
        case 5: _t->updateCurrentGraphInfos((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 6: _t->resizeFirstColumnToContent(); break;
        case 7: _t->contextRemoveCluster(); break;
        case 8: _t->contextRemoveAllCluster(); break;
        case 9: _t->contextCloneSubgraphCluster(); break;
        case 10: _t->contextRenameCluster(); break;
        case 11: _t->contextCloneCluster(); break;
        case 12: _t->currentGraphChanged((*reinterpret_cast< const Graph*(*)>(_a[1]))); break;
        case 13: _t->displayContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 14: _t->changeGraph((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->changeGraph((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 16: _t->setItemInfos((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< Graph*(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::SGHierarchyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::SGHierarchyWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_tlp__SGHierarchyWidget,
      qt_meta_data_tlp__SGHierarchyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::SGHierarchyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::SGHierarchyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::SGHierarchyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__SGHierarchyWidget))
        return static_cast<void*>(const_cast< SGHierarchyWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int tlp::SGHierarchyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void tlp::SGHierarchyWidget::aboutToRemoveView(Graph * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tlp::SGHierarchyWidget::aboutToRemoveAllView(Graph * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tlp::SGHierarchyWidget::graphChanged(Graph * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
