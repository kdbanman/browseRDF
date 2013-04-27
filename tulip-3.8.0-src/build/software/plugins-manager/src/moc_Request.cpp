/****************************************************************************
** Meta object code from reading C++ file 'Request.h'
**
** Created: Fri Apr 26 16:32:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/plugins-manager/include/Request.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Request.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__ServerNameTreatment[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   26,   25,   25, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_tlp__ServerNameTreatment[] = {
    "tlp::ServerNameTreatment\0\0,,\0"
    "nameReceived(ServerNameTreatment*,std::string,std::string)\0"
};

void tlp::ServerNameTreatment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ServerNameTreatment *_t = static_cast<ServerNameTreatment *>(_o);
        switch (_id) {
        case 0: _t->nameReceived((*reinterpret_cast< ServerNameTreatment*(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::ServerNameTreatment::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::ServerNameTreatment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tlp__ServerNameTreatment,
      qt_meta_data_tlp__ServerNameTreatment, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::ServerNameTreatment::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::ServerNameTreatment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::ServerNameTreatment::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__ServerNameTreatment))
        return static_cast<void*>(const_cast< ServerNameTreatment*>(this));
    if (!strcmp(_clname, "ResponseTreatment"))
        return static_cast< ResponseTreatment*>(const_cast< ServerNameTreatment*>(this));
    return QObject::qt_metacast(_clname);
}

int tlp::ServerNameTreatment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void tlp::ServerNameTreatment::nameReceived(ServerNameTreatment * _t1, std::string _t2, std::string _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_tlp__TulipLastVersionNumberTreatment[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   38,   37,   37, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_tlp__TulipLastVersionNumberTreatment[] = {
    "tlp::TulipLastVersionNumberTreatment\0"
    "\0,\0versionReceived(TulipLastVersionNumberTreatment*,std::string)\0"
};

void tlp::TulipLastVersionNumberTreatment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TulipLastVersionNumberTreatment *_t = static_cast<TulipLastVersionNumberTreatment *>(_o);
        switch (_id) {
        case 0: _t->versionReceived((*reinterpret_cast< TulipLastVersionNumberTreatment*(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::TulipLastVersionNumberTreatment::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::TulipLastVersionNumberTreatment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tlp__TulipLastVersionNumberTreatment,
      qt_meta_data_tlp__TulipLastVersionNumberTreatment, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::TulipLastVersionNumberTreatment::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::TulipLastVersionNumberTreatment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::TulipLastVersionNumberTreatment::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__TulipLastVersionNumberTreatment))
        return static_cast<void*>(const_cast< TulipLastVersionNumberTreatment*>(this));
    if (!strcmp(_clname, "ResponseTreatment"))
        return static_cast< ResponseTreatment*>(const_cast< TulipLastVersionNumberTreatment*>(this));
    return QObject::qt_metacast(_clname);
}

int tlp::TulipLastVersionNumberTreatment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void tlp::TulipLastVersionNumberTreatment::versionReceived(TulipLastVersionNumberTreatment * _t1, std::string _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
