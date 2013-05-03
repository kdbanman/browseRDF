/****************************************************************************
** Meta object code from reading C++ file 'ServersOptionDialog.h'
**
** Created: Tue Apr 30 11:10:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/plugins-manager/include/ServersOptionDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ServersOptionDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__ServersOptionDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      41,   25,   25,   25, 0x0a,
      53,   25,   25,   25, 0x0a,
      75,   72,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__ServersOptionDialog[] = {
    "tlp::ServersOptionDialog\0\0removeServer()\0"
    "addServer()\0serverProperties()\0,,\0"
    "serverNameReceived(MultiServerManager*,std::string,std::string)\0"
};

void tlp::ServersOptionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ServersOptionDialog *_t = static_cast<ServersOptionDialog *>(_o);
        switch (_id) {
        case 0: _t->removeServer(); break;
        case 1: _t->addServer(); break;
        case 2: _t->serverProperties(); break;
        case 3: _t->serverNameReceived((*reinterpret_cast< MultiServerManager*(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::ServersOptionDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::ServersOptionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tlp__ServersOptionDialog,
      qt_meta_data_tlp__ServersOptionDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::ServersOptionDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::ServersOptionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::ServersOptionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__ServersOptionDialog))
        return static_cast<void*>(const_cast< ServersOptionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int tlp::ServersOptionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
