/****************************************************************************
** Meta object code from reading C++ file 'ColorButton.h'
**
** Created: Mon Apr 29 01:40:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/ColorButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__ColorButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   17,   17,   17, 0x0a,
      56,   17,   17,   17, 0x09,

 // properties: name, type, flags
      74,   67, 0x43495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_tlp__ColorButton[] = {
    "tlp::ColorButton\0\0colorChanged(QColor)\0"
    "setColor(QColor)\0askColor()\0QColor\0"
    "color\0"
};

void tlp::ColorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorButton *_t = static_cast<ColorButton *>(_o);
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->askColor(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::ColorButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::ColorButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_tlp__ColorButton,
      qt_meta_data_tlp__ColorButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::ColorButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::ColorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::ColorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__ColorButton))
        return static_cast<void*>(const_cast< ColorButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int tlp::ColorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = color(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setColor(*reinterpret_cast< QColor*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void tlp::ColorButton::colorChanged(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
