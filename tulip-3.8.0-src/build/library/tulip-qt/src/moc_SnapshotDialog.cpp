/****************************************************************************
** Meta object code from reading C++ file 'SnapshotDialog.h'
**
** Created: Fri Apr 26 16:35:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/SnapshotDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SnapshotDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__SnapshotDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      36,   30,   20,   20, 0x09,
      66,   30,   20,   20, 0x09,
      97,   20,   20,   20, 0x09,
     126,   20,   20,   20, 0x09,
     142,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__SnapshotDialog[] = {
    "tlp::SnapshotDialog\0\0accept()\0value\0"
    "widthSpinBoxValueChanged(int)\0"
    "heightSpinBoxValueChanged(int)\0"
    "fileNameTextChanged(QString)\0"
    "browseClicked()\0copyClicked()\0"
};

void tlp::SnapshotDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SnapshotDialog *_t = static_cast<SnapshotDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->widthSpinBoxValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->heightSpinBoxValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->fileNameTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->browseClicked(); break;
        case 5: _t->copyClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::SnapshotDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::SnapshotDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tlp__SnapshotDialog,
      qt_meta_data_tlp__SnapshotDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::SnapshotDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::SnapshotDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::SnapshotDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__SnapshotDialog))
        return static_cast<void*>(const_cast< SnapshotDialog*>(this));
    if (!strcmp(_clname, "Ui::SnapshotDialogData"))
        return static_cast< Ui::SnapshotDialogData*>(const_cast< SnapshotDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int tlp::SnapshotDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
