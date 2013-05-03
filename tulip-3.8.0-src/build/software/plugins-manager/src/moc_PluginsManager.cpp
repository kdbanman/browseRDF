/****************************************************************************
** Meta object code from reading C++ file 'PluginsManager.h'
**
** Created: Tue Apr 30 11:10:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/plugins-manager/include/PluginsManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginsManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__PluginsManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      38,   20,   20,   20, 0x08,
      58,   20,   20,   20, 0x08,
      75,   72,   20,   20, 0x08,
     112,   20,   20,   20, 0x08,
     125,   20,   20,   20, 0x08,
     137,   20,   20,   20, 0x08,
     150,   20,   20,   20, 0x08,
     158,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__PluginsManager[] = {
    "tlp::PluginsManager\0\0modifyTreeView()\0"
    "updatePluginsTree()\0serverPopup()\0pi\0"
    "clickOnPluginSlot(const PluginInfo*)\0"
    "serverView()\0groupView()\0pluginView()\0"
    "proxy()\0clicked(QAbstractButton*)\0"
};

void tlp::PluginsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginsManager *_t = static_cast<PluginsManager *>(_o);
        switch (_id) {
        case 0: _t->modifyTreeView(); break;
        case 1: _t->updatePluginsTree(); break;
        case 2: _t->serverPopup(); break;
        case 3: _t->clickOnPluginSlot((*reinterpret_cast< const PluginInfo*(*)>(_a[1]))); break;
        case 4: _t->serverView(); break;
        case 5: _t->groupView(); break;
        case 6: _t->pluginView(); break;
        case 7: _t->proxy(); break;
        case 8: _t->clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::PluginsManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::PluginsManager::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tlp__PluginsManager,
      qt_meta_data_tlp__PluginsManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::PluginsManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::PluginsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::PluginsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__PluginsManager))
        return static_cast<void*>(const_cast< PluginsManager*>(this));
    return QDialog::qt_metacast(_clname);
}

int tlp::PluginsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
