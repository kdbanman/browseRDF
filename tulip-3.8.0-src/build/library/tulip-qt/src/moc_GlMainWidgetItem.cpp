/****************************************************************************
** Meta object code from reading C++ file 'GlMainWidgetItem.h'
**
** Created: Tue Apr 30 11:12:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/GlMainWidgetItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GlMainWidgetItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__GlMainWidgetItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   23,   22,   22, 0x09,
      62,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__GlMainWidgetItem[] = {
    "tlp::GlMainWidgetItem\0\0,\0"
    "glMainWidgetDraw(GlMainWidget*,bool)\0"
    "glMainWidgetRedraw(GlMainWidget*)\0"
};

void tlp::GlMainWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GlMainWidgetItem *_t = static_cast<GlMainWidgetItem *>(_o);
        switch (_id) {
        case 0: _t->glMainWidgetDraw((*reinterpret_cast< GlMainWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->glMainWidgetRedraw((*reinterpret_cast< GlMainWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::GlMainWidgetItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::GlMainWidgetItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tlp__GlMainWidgetItem,
      qt_meta_data_tlp__GlMainWidgetItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::GlMainWidgetItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::GlMainWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::GlMainWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__GlMainWidgetItem))
        return static_cast<void*>(const_cast< GlMainWidgetItem*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< GlMainWidgetItem*>(this));
    return QObject::qt_metacast(_clname);
}

int tlp::GlMainWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
