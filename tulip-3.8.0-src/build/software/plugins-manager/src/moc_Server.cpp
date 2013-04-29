/****************************************************************************
** Meta object code from reading C++ file 'Server.h'
**
** Created: Mon Apr 29 01:52:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/plugins-manager/include/Server.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__Server[] = {

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
      13,   12,   12,   12, 0x0a,
      27,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__Server[] = {
    "tlp::Server\0\0requestDone()\0timeout()\0"
};

void tlp::Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Server *_t = static_cast<Server *>(_o);
        switch (_id) {
        case 0: _t->requestDone(); break;
        case 1: _t->timeout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tlp::Server::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::Server::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tlp__Server,
      qt_meta_data_tlp__Server, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::Server::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::Server::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__Server))
        return static_cast<void*>(const_cast< Server*>(this));
    return QObject::qt_metacast(_clname);
}

int tlp::Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
