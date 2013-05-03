/****************************************************************************
** Meta object code from reading C++ file 'MultiServerManager.h'
**
** Created: Tue Apr 30 11:10:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/plugins-manager/include/MultiServerManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiServerManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__MultiServerManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      44,   41,   24,   24, 0x05,
     102,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     147,  131,   24,   24, 0x0a,
     206,  204,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__MultiServerManager[] = {
    "tlp::MultiServerManager\0\0newPluginList()\0"
    ",,\0nameReceived(MultiServerManager*,std::string,std::string)\0"
    "versionReceived(std::string)\0"
    "treat,addr,name\0"
    "changeName(ServerNameTreatment*,std::string,std::string)\0"
    ",\0"
    "tulipLastVersionNumberReceived(TulipLastVersionNumberTreatment*,std::s"
    "tring)\0"
};

void tlp::MultiServerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MultiServerManager *_t = static_cast<MultiServerManager *>(_o);
        switch (_id) {
        case 0: _t->newPluginList(); break;
        case 1: _t->nameReceived((*reinterpret_cast< MultiServerManager*(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        case 2: _t->versionReceived((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 3: _t->changeName((*reinterpret_cast< ServerNameTreatment*(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        case 4: _t->tulipLastVersionNumberReceived((*reinterpret_cast< TulipLastVersionNumberTreatment*(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::MultiServerManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::MultiServerManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tlp__MultiServerManager,
      qt_meta_data_tlp__MultiServerManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::MultiServerManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::MultiServerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::MultiServerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__MultiServerManager))
        return static_cast<void*>(const_cast< MultiServerManager*>(this));
    if (!strcmp(_clname, "PluginsListManager"))
        return static_cast< PluginsListManager*>(const_cast< MultiServerManager*>(this));
    return QObject::qt_metacast(_clname);
}

int tlp::MultiServerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void tlp::MultiServerManager::newPluginList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void tlp::MultiServerManager::nameReceived(MultiServerManager * _t1, std::string _t2, std::string _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tlp::MultiServerManager::versionReceived(std::string _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
