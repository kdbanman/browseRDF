/****************************************************************************
** Meta object code from reading C++ file 'AuthorizationInstallDependencies.h'
**
** Created: Mon Apr 29 01:52:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/plugins-manager/include/AuthorizationInstallDependencies.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AuthorizationInstallDependencies.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__AuthorizationInstallDependencies[] = {

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
      39,   38,   38,   38, 0x0a,
      47,   38,   38,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__AuthorizationInstallDependencies[] = {
    "tlp::AuthorizationInstallDependencies\0"
    "\0valid()\0annule()\0"
};

void tlp::AuthorizationInstallDependencies::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AuthorizationInstallDependencies *_t = static_cast<AuthorizationInstallDependencies *>(_o);
        switch (_id) {
        case 0: _t->valid(); break;
        case 1: _t->annule(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tlp::AuthorizationInstallDependencies::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::AuthorizationInstallDependencies::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tlp__AuthorizationInstallDependencies,
      qt_meta_data_tlp__AuthorizationInstallDependencies, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::AuthorizationInstallDependencies::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::AuthorizationInstallDependencies::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::AuthorizationInstallDependencies::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__AuthorizationInstallDependencies))
        return static_cast<void*>(const_cast< AuthorizationInstallDependencies*>(this));
    return QDialog::qt_metacast(_clname);
}

int tlp::AuthorizationInstallDependencies::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
