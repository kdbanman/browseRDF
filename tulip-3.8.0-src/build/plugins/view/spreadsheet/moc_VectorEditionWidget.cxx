/****************************************************************************
** Meta object code from reading C++ file 'VectorEditionWidget.h'
**
** Created: Fri Apr 26 16:36:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/view/spreadsheet/VectorEditionWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VectorEditionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VectorEditionWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      30,   20,   20,   20, 0x08,
      43,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VectorEditionWidget[] = {
    "VectorEditionWidget\0\0addRow()\0"
    "removeRows()\0setAll()\0"
};

void VectorEditionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VectorEditionWidget *_t = static_cast<VectorEditionWidget *>(_o);
        switch (_id) {
        case 0: _t->addRow(); break;
        case 1: _t->removeRows(); break;
        case 2: _t->setAll(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VectorEditionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VectorEditionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VectorEditionWidget,
      qt_meta_data_VectorEditionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VectorEditionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VectorEditionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VectorEditionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VectorEditionWidget))
        return static_cast<void*>(const_cast< VectorEditionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int VectorEditionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
