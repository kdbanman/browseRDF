/****************************************************************************
** Meta object code from reading C++ file 'CoordWidget.h'
**
** Created: Fri Apr 26 16:35:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/CoordWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CoordWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__CoordWidget[] = {

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
      24,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   18,   17,   17, 0x0a,
      70,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__CoordWidget[] = {
    "tlp::CoordWidget\0\0coord\0"
    "coordChanged(tlp::Coord)\0setCoord(tlp::Coord)\0"
    "coordUpdated()\0"
};

void tlp::CoordWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CoordWidget *_t = static_cast<CoordWidget *>(_o);
        switch (_id) {
        case 0: _t->coordChanged((*reinterpret_cast< tlp::Coord(*)>(_a[1]))); break;
        case 1: _t->setCoord((*reinterpret_cast< const tlp::Coord(*)>(_a[1]))); break;
        case 2: _t->coordUpdated(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::CoordWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::CoordWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__CoordWidget,
      qt_meta_data_tlp__CoordWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::CoordWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::CoordWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::CoordWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__CoordWidget))
        return static_cast<void*>(const_cast< CoordWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::CoordWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void tlp::CoordWidget::coordChanged(tlp::Coord _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
