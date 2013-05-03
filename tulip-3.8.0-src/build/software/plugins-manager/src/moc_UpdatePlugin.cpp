/****************************************************************************
** Meta object code from reading C++ file 'UpdatePlugin.h'
**
** Created: Tue Apr 30 11:10:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/plugins-manager/include/UpdatePlugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UpdatePlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__UpdatePlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      37,   18,   18,   18, 0x05,
      59,   57,   18,   18, 0x05,
     108,  105,   18,   18, 0x05,
     141,   57,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     190,   57,   18,   18, 0x09,
     243,   57,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__UpdatePlugin[] = {
    "tlp::UpdatePlugin\0\0pluginInstalled()\0"
    "pluginUninstalled()\0,\0"
    "pluginInstalled(UpdatePlugin*,DistPluginInfo)\0"
    ",,\0installPart(std::string,int,int)\0"
    "pluginUninstalled(UpdatePlugin*,LocalPluginInfo)\0"
    "terminatePluginInstall(UpdatePlugin*,DistPluginInfo)\0"
    "terminatePluginUninstall(UpdatePlugin*,LocalPluginInfo)\0"
};

void tlp::UpdatePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UpdatePlugin *_t = static_cast<UpdatePlugin *>(_o);
        switch (_id) {
        case 0: _t->pluginInstalled(); break;
        case 1: _t->pluginUninstalled(); break;
        case 2: _t->pluginInstalled((*reinterpret_cast< UpdatePlugin*(*)>(_a[1])),(*reinterpret_cast< const DistPluginInfo(*)>(_a[2]))); break;
        case 3: _t->installPart((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->pluginUninstalled((*reinterpret_cast< UpdatePlugin*(*)>(_a[1])),(*reinterpret_cast< const LocalPluginInfo(*)>(_a[2]))); break;
        case 5: _t->terminatePluginInstall((*reinterpret_cast< UpdatePlugin*(*)>(_a[1])),(*reinterpret_cast< const DistPluginInfo(*)>(_a[2]))); break;
        case 6: _t->terminatePluginUninstall((*reinterpret_cast< UpdatePlugin*(*)>(_a[1])),(*reinterpret_cast< const LocalPluginInfo(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::UpdatePlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::UpdatePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tlp__UpdatePlugin,
      qt_meta_data_tlp__UpdatePlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::UpdatePlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::UpdatePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::UpdatePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__UpdatePlugin))
        return static_cast<void*>(const_cast< UpdatePlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int tlp::UpdatePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void tlp::UpdatePlugin::pluginInstalled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void tlp::UpdatePlugin::pluginUninstalled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void tlp::UpdatePlugin::pluginInstalled(UpdatePlugin * _t1, const DistPluginInfo & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tlp::UpdatePlugin::installPart(const std::string & _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void tlp::UpdatePlugin::pluginUninstalled(UpdatePlugin * _t1, const LocalPluginInfo & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
