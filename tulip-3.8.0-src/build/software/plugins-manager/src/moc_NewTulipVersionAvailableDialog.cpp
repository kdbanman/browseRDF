/****************************************************************************
** Meta object code from reading C++ file 'NewTulipVersionAvailableDialog.h'
**
** Created: Fri Apr 26 16:32:48 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/plugins-manager/include/NewTulipVersionAvailableDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewTulipVersionAvailableDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__NewTulipVersionAvailableDialog[] = {

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
      37,   36,   36,   36, 0x09,
      49,   36,   36,   36, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__NewTulipVersionAvailableDialog[] = {
    "tlp::NewTulipVersionAvailableDialog\0"
    "\0okClicked()\0askMeAgainStateChanged(int)\0"
};

void tlp::NewTulipVersionAvailableDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewTulipVersionAvailableDialog *_t = static_cast<NewTulipVersionAvailableDialog *>(_o);
        switch (_id) {
        case 0: _t->okClicked(); break;
        case 1: _t->askMeAgainStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::NewTulipVersionAvailableDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::NewTulipVersionAvailableDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tlp__NewTulipVersionAvailableDialog,
      qt_meta_data_tlp__NewTulipVersionAvailableDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::NewTulipVersionAvailableDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::NewTulipVersionAvailableDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::NewTulipVersionAvailableDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__NewTulipVersionAvailableDialog))
        return static_cast<void*>(const_cast< NewTulipVersionAvailableDialog*>(this));
    if (!strcmp(_clname, "Ui::NewTulipVersionAvailableDialogData"))
        return static_cast< Ui::NewTulipVersionAvailableDialogData*>(const_cast< NewTulipVersionAvailableDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int tlp::NewTulipVersionAvailableDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
