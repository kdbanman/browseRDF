/****************************************************************************
** Meta object code from reading C++ file 'PluginsViewWidget.h'
**
** Created: Tue Apr 30 11:10:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/plugins-manager/include/PluginsViewWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginsViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__PluginsViewWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      45,   42,   23,   23, 0x05,
      71,   42,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     107,   23,   23,   23, 0x0a,
     121,   23,   23,   23, 0x0a,
     131,   23,   23,   23, 0x09,
     153,   23,   23,   23, 0x09,
     177,   23,   23,   23, 0x09,
     197,   23,   23,   23, 0x09,
     226,  223,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__PluginsViewWidget[] = {
    "tlp::PluginsViewWidget\0\0pluginInstalled()\0"
    "pi\0pluginClicked(PluginInfo)\0"
    "pluginInfoSignal(const PluginInfo*)\0"
    "applyChange()\0restore()\0pluginInstalledSlot()\0"
    "pluginUninstalledSlot()\0getPluginInfoSlot()\0"
    "changed(QTreeWidgetItem*)\0,,\0"
    "serverNameReceived(MultiServerManager*,std::string,std::string)\0"
};

void tlp::PluginsViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginsViewWidget *_t = static_cast<PluginsViewWidget *>(_o);
        switch (_id) {
        case 0: _t->pluginInstalled(); break;
        case 1: _t->pluginClicked((*reinterpret_cast< PluginInfo(*)>(_a[1]))); break;
        case 2: _t->pluginInfoSignal((*reinterpret_cast< const PluginInfo*(*)>(_a[1]))); break;
        case 3: _t->applyChange(); break;
        case 4: _t->restore(); break;
        case 5: _t->pluginInstalledSlot(); break;
        case 6: _t->pluginUninstalledSlot(); break;
        case 7: _t->getPluginInfoSlot(); break;
        case 8: _t->changed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->serverNameReceived((*reinterpret_cast< MultiServerManager*(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::PluginsViewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::PluginsViewWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_tlp__PluginsViewWidget,
      qt_meta_data_tlp__PluginsViewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::PluginsViewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::PluginsViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::PluginsViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__PluginsViewWidget))
        return static_cast<void*>(const_cast< PluginsViewWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int tlp::PluginsViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void tlp::PluginsViewWidget::pluginInstalled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void tlp::PluginsViewWidget::pluginClicked(PluginInfo _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tlp::PluginsViewWidget::pluginInfoSignal(const PluginInfo * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
