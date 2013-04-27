/****************************************************************************
** Meta object code from reading C++ file 'PluginsUpdateChecker.h'
**
** Created: Fri Apr 26 16:32:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/plugins-manager/include/PluginsUpdateChecker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginsUpdateChecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__PluginsUpdateChecker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   26,   26,   26, 0x08,
      58,   26,   26,   26, 0x08,
      76,   26,   26,   26, 0x08,
      96,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__PluginsUpdateChecker[] = {
    "tlp::PluginsUpdateChecker\0\0updateFinished()\0"
    "getResponse()\0pluginInstalled()\0"
    "pluginUninstalled()\0versionReceived(std::string)\0"
};

void tlp::PluginsUpdateChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginsUpdateChecker *_t = static_cast<PluginsUpdateChecker *>(_o);
        switch (_id) {
        case 0: _t->updateFinished(); break;
        case 1: _t->getResponse(); break;
        case 2: _t->pluginInstalled(); break;
        case 3: _t->pluginUninstalled(); break;
        case 4: _t->versionReceived((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::PluginsUpdateChecker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::PluginsUpdateChecker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tlp__PluginsUpdateChecker,
      qt_meta_data_tlp__PluginsUpdateChecker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::PluginsUpdateChecker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::PluginsUpdateChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::PluginsUpdateChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__PluginsUpdateChecker))
        return static_cast<void*>(const_cast< PluginsUpdateChecker*>(this));
    return QObject::qt_metacast(_clname);
}

int tlp::PluginsUpdateChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void tlp::PluginsUpdateChecker::updateFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
