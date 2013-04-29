/****************************************************************************
** Meta object code from reading C++ file 'View.h'
**
** Created: Mon Apr 29 01:40:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/View.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'View.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__View[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   11,   10,   10, 0x05,
      62,   51,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     111,  105,   10,   10, 0x0a,
     128,   10,   10,   10, 0x0a,
     135,   10,   10,   10, 0x0a,
     145,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__View[] = {
    "tlp::View\0\0eltId,isNode\0"
    "elementSelected(uint,bool)\0view,graph\0"
    "requestChangeGraph(tlp::View*,tlp::Graph*)\0"
    "graph\0setGraph(Graph*)\0draw()\0refresh()\0"
    "init()\0"
};

void tlp::View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        View *_t = static_cast<View *>(_o);
        switch (_id) {
        case 0: _t->elementSelected((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->requestChangeGraph((*reinterpret_cast< tlp::View*(*)>(_a[1])),(*reinterpret_cast< tlp::Graph*(*)>(_a[2]))); break;
        case 2: _t->setGraph((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 3: _t->draw(); break;
        case 4: _t->refresh(); break;
        case 5: _t->init(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::View::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::View::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tlp__View,
      qt_meta_data_tlp__View, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::View::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::View::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__View))
        return static_cast<void*>(const_cast< View*>(this));
    if (!strcmp(_clname, "WithParameter"))
        return static_cast< WithParameter*>(const_cast< View*>(this));
    if (!strcmp(_clname, "WithDependency"))
        return static_cast< WithDependency*>(const_cast< View*>(this));
    return QObject::qt_metacast(_clname);
}

int tlp::View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void tlp::View::elementSelected(unsigned int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tlp::View::requestChangeGraph(tlp::View * _t1, tlp::Graph * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
