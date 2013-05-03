/****************************************************************************
** Meta object code from reading C++ file 'SizeWidget.h'
**
** Created: Tue Apr 30 11:12:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/SizeWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SizeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__SizeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   17,   16,   16, 0x0a,
      64,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__SizeWidget[] = {
    "tlp::SizeWidget\0\0size\0sizeChanged(tlp::Size)\0"
    "setSize(tlp::Size)\0sizeUpdated()\0"
};

void tlp::SizeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SizeWidget *_t = static_cast<SizeWidget *>(_o);
        switch (_id) {
        case 0: _t->sizeChanged((*reinterpret_cast< tlp::Size(*)>(_a[1]))); break;
        case 1: _t->setSize((*reinterpret_cast< const tlp::Size(*)>(_a[1]))); break;
        case 2: _t->sizeUpdated(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::SizeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::SizeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__SizeWidget,
      qt_meta_data_tlp__SizeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::SizeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::SizeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::SizeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__SizeWidget))
        return static_cast<void*>(const_cast< SizeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::SizeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void tlp::SizeWidget::sizeChanged(tlp::Size _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
