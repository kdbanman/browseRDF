/****************************************************************************
** Meta object code from reading C++ file 'AppStartUp.h'
**
** Created: Mon Apr 29 01:53:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/tulip/include/AppStartUp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AppStartUp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AppStartUp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,
      40,   11,   11,   11, 0x0a,
      57,   11,   11,   11, 0x0a,
      90,   76,   11,   11, 0x0a,
     138,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AppStartUp[] = {
    "AppStartUp\0\0label\0setLabel(std::string)\0"
    "setProgress(int)\0setTotalSteps(int)\0"
    "loader,errors\0"
    "initTulip(tlp::TulipPluginLoader*,std::string&)\0"
    "nextTip()\0"
};

void AppStartUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AppStartUp *_t = static_cast<AppStartUp *>(_o);
        switch (_id) {
        case 0: _t->setLabel((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 1: _t->setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setTotalSteps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->initTulip((*reinterpret_cast< tlp::TulipPluginLoader*(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 4: _t->nextTip(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AppStartUp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AppStartUp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AppStartUp,
      qt_meta_data_AppStartUp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AppStartUp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AppStartUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AppStartUp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AppStartUp))
        return static_cast<void*>(const_cast< AppStartUp*>(this));
    if (!strcmp(_clname, "Ui::AppStartUpData"))
        return static_cast< Ui::AppStartUpData*>(const_cast< AppStartUp*>(this));
    return QDialog::qt_metacast(_clname);
}

int AppStartUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
