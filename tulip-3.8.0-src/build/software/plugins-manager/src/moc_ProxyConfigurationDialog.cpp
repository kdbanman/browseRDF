/****************************************************************************
** Meta object code from reading C++ file 'ProxyConfigurationDialog.h'
**
** Created: Fri Apr 26 16:32:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/plugins-manager/include/ProxyConfigurationDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProxyConfigurationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__ProxyConfigurationDialog[] = {

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
      31,   30,   30,   30, 0x09,
      53,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__ProxyConfigurationDialog[] = {
    "tlp::ProxyConfigurationDialog\0\0"
    "proxyStateChange(int)\0"
    "useUsernamePasswordStateChange(int)\0"
};

void tlp::ProxyConfigurationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProxyConfigurationDialog *_t = static_cast<ProxyConfigurationDialog *>(_o);
        switch (_id) {
        case 0: _t->proxyStateChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->useUsernamePasswordStateChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::ProxyConfigurationDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::ProxyConfigurationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tlp__ProxyConfigurationDialog,
      qt_meta_data_tlp__ProxyConfigurationDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::ProxyConfigurationDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::ProxyConfigurationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::ProxyConfigurationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__ProxyConfigurationDialog))
        return static_cast<void*>(const_cast< ProxyConfigurationDialog*>(this));
    if (!strcmp(_clname, "Ui::ProxyConfigurationDialogData"))
        return static_cast< Ui::ProxyConfigurationDialogData*>(const_cast< ProxyConfigurationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int tlp::ProxyConfigurationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
