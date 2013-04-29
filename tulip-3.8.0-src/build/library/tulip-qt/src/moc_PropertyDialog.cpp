/****************************************************************************
** Meta object code from reading C++ file 'PropertyDialog.h'
**
** Created: Mon Apr 29 01:40:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/PropertyDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__PropertyDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   21,   20,   20, 0x05,
      89,   21,   20,   20, 0x05,
     143,  141,   20,   20, 0x05,
     181,  141,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     222,   20,   20,   20, 0x0a,
     231,   20,   20,   20, 0x0a,
     248,   20,   20,   20, 0x0a,
     265,   20,   20,   20, 0x0a,
     279,   20,   20,   20, 0x0a,
     296,   20,   20,   20, 0x0a,
     312,   20,   20,   20, 0x0a,
     331,   20,   20,   20, 0x0a,
     353,   20,   20,   20, 0x0a,
     367,   20,   20,   20, 0x0a,
     383,   20,   20,   20, 0x08,
     410,   20,   20,   20, 0x08,
     443,  438,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__PropertyDialog[] = {
    "tlp::PropertyDialog\0\0,property,value\0"
    "tulipAllNodePropertyChanged(Graph*,QString,QString)\0"
    "tulipAllEdgePropertyChanged(Graph*,QString,QString)\0"
    ",\0newPropertySignal(Graph*,std::string)\0"
    "removePropertySignal(Graph*,std::string)\0"
    "update()\0selectNode(node)\0selectEdge(edge)\0"
    "newProperty()\0removeProperty()\0"
    "cloneProperty()\0toStringProperty()\0"
    "filterSelection(bool)\0setAllValue()\0"
    "importCSVData()\0propertySelectionChanged()\0"
    "propertyTypeFilterChanged()\0text\0"
    "nameFilterChanged(QString)\0"
};

void tlp::PropertyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertyDialog *_t = static_cast<PropertyDialog *>(_o);
        switch (_id) {
        case 0: _t->tulipAllNodePropertyChanged((*reinterpret_cast< Graph*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->tulipAllEdgePropertyChanged((*reinterpret_cast< Graph*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->newPropertySignal((*reinterpret_cast< Graph*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 3: _t->removePropertySignal((*reinterpret_cast< Graph*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 4: _t->update(); break;
        case 5: _t->selectNode((*reinterpret_cast< node(*)>(_a[1]))); break;
        case 6: _t->selectEdge((*reinterpret_cast< edge(*)>(_a[1]))); break;
        case 7: _t->newProperty(); break;
        case 8: _t->removeProperty(); break;
        case 9: _t->cloneProperty(); break;
        case 10: _t->toStringProperty(); break;
        case 11: _t->filterSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setAllValue(); break;
        case 13: _t->importCSVData(); break;
        case 14: _t->propertySelectionChanged(); break;
        case 15: _t->propertyTypeFilterChanged(); break;
        case 16: _t->nameFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::PropertyDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::PropertyDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__PropertyDialog,
      qt_meta_data_tlp__PropertyDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::PropertyDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::PropertyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::PropertyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__PropertyDialog))
        return static_cast<void*>(const_cast< PropertyDialog*>(this));
    if (!strcmp(_clname, "Ui::PropertyDialogData"))
        return static_cast< Ui::PropertyDialogData*>(const_cast< PropertyDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::PropertyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void tlp::PropertyDialog::tulipAllNodePropertyChanged(Graph * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tlp::PropertyDialog::tulipAllEdgePropertyChanged(Graph * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tlp::PropertyDialog::newPropertySignal(Graph * _t1, const std::string & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tlp::PropertyDialog::removePropertySignal(Graph * _t1, const std::string & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
