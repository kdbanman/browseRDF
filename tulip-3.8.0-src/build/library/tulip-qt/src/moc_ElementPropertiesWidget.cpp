/****************************************************************************
** Meta object code from reading C++ file 'ElementPropertiesWidget.h'
**
** Created: Mon Apr 29 01:40:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/ElementPropertiesWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElementPropertiesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__ElementPropertiesWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       3,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      47,   30,   29,   29, 0x05,
     101,   30,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
     155,   29,   29,   29, 0x0a,
     171,  169,   29,   29, 0x0a,
     206,   29,   29,   29, 0x0a,
     234,  169,   29,   29, 0x0a,
     262,  169,   29,   29, 0x0a,
     299,  290,   29,   29, 0x0a,
     321,   29,   29,   29, 0x2a,
     338,   29,   29,   29, 0x0a,
     378,   29,   29,   29, 0x0a,
     415,   29,   29,   29, 0x0a,
     456,  452,   29,   29, 0x0a,
     505,  452,   29,   29, 0x0a,

 // properties: name, type, flags
     566,  554, 0x0b095103,
     587,  554, 0x0b095103,
     613,  608, 0x01095001,

       0        // eod
};

static const char qt_meta_stringdata_tlp__ElementPropertiesWidget[] = {
    "tlp::ElementPropertiesWidget\0\0"
    ",,property,value\0"
    "tulipNodePropertyChanged(Graph*,node,QString,QString)\0"
    "tulipEdgePropertyChanged(Graph*,edge,QString,QString)\0"
    "updateTable()\0,\0propertyTableValueChanged(int,int)\0"
    "setDisplayMode(ElementType)\0"
    "setCurrentNode(Graph*,node)\0"
    "setCurrentEdge(Graph*,edge)\0,distroy\0"
    "setGraph(Graph*,bool)\0setGraph(Graph*)\0"
    "setCurrentListedProperties(QStringList)\0"
    "setNodeListedProperties(QStringList)\0"
    "setEdgeListedProperties(QStringList)\0"
    ",,,\0nodePropertyChanged(Graph*,node,QString,QString)\0"
    "edgePropertyChanged(Graph*,edge,QString,QString)\0"
    "QStringList\0nodeListedProperties\0"
    "edgeListedProperties\0bool\0elementDisplayed\0"
};

void tlp::ElementPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementPropertiesWidget *_t = static_cast<ElementPropertiesWidget *>(_o);
        switch (_id) {
        case 0: _t->tulipNodePropertyChanged((*reinterpret_cast< Graph*(*)>(_a[1])),(*reinterpret_cast< const node(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->tulipEdgePropertyChanged((*reinterpret_cast< Graph*(*)>(_a[1])),(*reinterpret_cast< const edge(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: _t->updateTable(); break;
        case 3: _t->propertyTableValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->setDisplayMode((*reinterpret_cast< const ElementType(*)>(_a[1]))); break;
        case 5: _t->setCurrentNode((*reinterpret_cast< Graph*(*)>(_a[1])),(*reinterpret_cast< const node(*)>(_a[2]))); break;
        case 6: _t->setCurrentEdge((*reinterpret_cast< Graph*(*)>(_a[1])),(*reinterpret_cast< const edge(*)>(_a[2]))); break;
        case 7: _t->setGraph((*reinterpret_cast< Graph*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->setGraph((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 9: _t->setCurrentListedProperties((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 10: _t->setNodeListedProperties((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 11: _t->setEdgeListedProperties((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 12: _t->nodePropertyChanged((*reinterpret_cast< Graph*(*)>(_a[1])),(*reinterpret_cast< const node(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 13: _t->edgePropertyChanged((*reinterpret_cast< Graph*(*)>(_a[1])),(*reinterpret_cast< const edge(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::ElementPropertiesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::ElementPropertiesWidget::staticMetaObject = {
    { &ElementPropertiesWidgetUI::staticMetaObject, qt_meta_stringdata_tlp__ElementPropertiesWidget,
      qt_meta_data_tlp__ElementPropertiesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::ElementPropertiesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::ElementPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::ElementPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__ElementPropertiesWidget))
        return static_cast<void*>(const_cast< ElementPropertiesWidget*>(this));
    if (!strcmp(_clname, "GraphObserver"))
        return static_cast< GraphObserver*>(const_cast< ElementPropertiesWidget*>(this));
    return ElementPropertiesWidgetUI::qt_metacast(_clname);
}

int tlp::ElementPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ElementPropertiesWidgetUI::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = getNodeListedProperties(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = getEdgeListedProperties(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isElementDisplayed(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNodeListedProperties(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: setEdgeListedProperties(*reinterpret_cast< QStringList*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void tlp::ElementPropertiesWidget::tulipNodePropertyChanged(Graph * _t1, const node & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tlp::ElementPropertiesWidget::tulipEdgePropertyChanged(Graph * _t1, const edge & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
