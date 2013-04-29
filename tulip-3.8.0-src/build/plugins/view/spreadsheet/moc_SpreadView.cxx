/****************************************************************************
** Meta object code from reading C++ file 'SpreadView.h'
**
** Created: Mon Apr 29 02:03:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/view/spreadsheet/SpreadView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpreadView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpreadView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      19,   11,   11,   11, 0x0a,
      29,   11,   11,   11, 0x0a,
      42,   36,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SpreadView[] = {
    "SpreadView\0\0draw()\0refresh()\0init()\0"
    "graph\0setGraph(tlp::Graph*)\0"
};

void SpreadView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpreadView *_t = static_cast<SpreadView *>(_o);
        switch (_id) {
        case 0: _t->draw(); break;
        case 1: _t->refresh(); break;
        case 2: _t->init(); break;
        case 3: _t->setGraph((*reinterpret_cast< tlp::Graph*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpreadView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpreadView::staticMetaObject = {
    { &tlp::AbstractView::staticMetaObject, qt_meta_stringdata_SpreadView,
      qt_meta_data_SpreadView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpreadView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpreadView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpreadView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpreadView))
        return static_cast<void*>(const_cast< SpreadView*>(this));
    if (!strcmp(_clname, "tlp::PropertyObserver"))
        return static_cast< tlp::PropertyObserver*>(const_cast< SpreadView*>(this));
    if (!strcmp(_clname, "tlp::Observable"))
        return static_cast< tlp::Observable*>(const_cast< SpreadView*>(this));
    typedef tlp::AbstractView QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int SpreadView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef tlp::AbstractView QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
