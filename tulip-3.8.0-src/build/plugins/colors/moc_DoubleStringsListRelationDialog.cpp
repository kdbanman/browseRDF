/****************************************************************************
** Meta object code from reading C++ file 'DoubleStringsListRelationDialog.h'
**
** Created: Fri Apr 26 16:36:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/colors/DoubleStringsListRelationDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DoubleStringsListRelationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__DoubleStringsListRelationDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   37,   37,   37, 0x08,
      56,   37,   37,   37, 0x08,
      82,   76,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__DoubleStringsListRelationDialog[] = {
    "tlp::DoubleStringsListRelationDialog\0"
    "\0upButtonClicked()\0downButtonClicked()\0"
    "value\0scrollBarValueChanged(int)\0"
};

void tlp::DoubleStringsListRelationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DoubleStringsListRelationDialog *_t = static_cast<DoubleStringsListRelationDialog *>(_o);
        switch (_id) {
        case 0: _t->upButtonClicked(); break;
        case 1: _t->downButtonClicked(); break;
        case 2: _t->scrollBarValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::DoubleStringsListRelationDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::DoubleStringsListRelationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tlp__DoubleStringsListRelationDialog,
      qt_meta_data_tlp__DoubleStringsListRelationDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::DoubleStringsListRelationDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::DoubleStringsListRelationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::DoubleStringsListRelationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__DoubleStringsListRelationDialog))
        return static_cast<void*>(const_cast< DoubleStringsListRelationDialog*>(this));
    if (!strcmp(_clname, "Ui::DoubleStringsListRelationDialogData"))
        return static_cast< Ui::DoubleStringsListRelationDialogData*>(const_cast< DoubleStringsListRelationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int tlp::DoubleStringsListRelationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE