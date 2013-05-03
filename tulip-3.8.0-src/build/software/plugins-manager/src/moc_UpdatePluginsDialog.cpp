/****************************************************************************
** Meta object code from reading C++ file 'UpdatePluginsDialog.h'
**
** Created: Tue Apr 30 11:10:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/plugins-manager/include/UpdatePluginsDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UpdatePluginsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__UpdatePluginsDialog[] = {

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
      26,   25,   25,   25, 0x09,
      60,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__UpdatePluginsDialog[] = {
    "tlp::UpdatePluginsDialog\0\0"
    "itemChangedSlot(QListWidgetItem*)\0"
    "okSlot()\0"
};

void tlp::UpdatePluginsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UpdatePluginsDialog *_t = static_cast<UpdatePluginsDialog *>(_o);
        switch (_id) {
        case 0: _t->itemChangedSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->okSlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::UpdatePluginsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::UpdatePluginsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tlp__UpdatePluginsDialog,
      qt_meta_data_tlp__UpdatePluginsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::UpdatePluginsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::UpdatePluginsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::UpdatePluginsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__UpdatePluginsDialog))
        return static_cast<void*>(const_cast< UpdatePluginsDialog*>(this));
    if (!strcmp(_clname, "Ui::UpdatePluginsDialogData"))
        return static_cast< Ui::UpdatePluginsDialogData*>(const_cast< UpdatePluginsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int tlp::UpdatePluginsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
