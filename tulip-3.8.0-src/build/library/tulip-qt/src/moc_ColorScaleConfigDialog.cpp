/****************************************************************************
** Meta object code from reading C++ file 'ColorScaleConfigDialog.h'
**
** Created: Mon Apr 29 01:40:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/ColorScaleConfigDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorScaleConfigDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__ColorScaleConfigDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x08,
      38,   28,   28,   28, 0x08,
      64,   58,   28,   28, 0x08,
      95,   90,   28,   28, 0x08,
     142,   28,   28,   28, 0x08,
     172,   28,   28,   28, 0x08,
     201,   28,   28,   28, 0x08,
     225,   28,   28,   28, 0x08,
     269,  249,   28,   28, 0x08,
     308,   28,   28,   28, 0x08,
     340,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__ColorScaleConfigDialog[] = {
    "tlp::ColorScaleConfigDialog\0\0accept()\0"
    "pressButtonBrowse()\0value\0"
    "nbColorsValueChanged(int)\0item\0"
    "colorTableItemDoubleClicked(QTableWidgetItem*)\0"
    "displaySavedGradientPreview()\0"
    "displayUserGradientPreview()\0"
    "saveCurrentColorScale()\0deleteSavedColorScale()\0"
    "savedColorScaleItem\0"
    "reeditSaveColorScale(QListWidgetItem*)\0"
    "importColorScaleFromImageFile()\0"
    "invertEditedColorScale()\0"
};

void tlp::ColorScaleConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorScaleConfigDialog *_t = static_cast<ColorScaleConfigDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->pressButtonBrowse(); break;
        case 2: _t->nbColorsValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->colorTableItemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->displaySavedGradientPreview(); break;
        case 5: _t->displayUserGradientPreview(); break;
        case 6: _t->saveCurrentColorScale(); break;
        case 7: _t->deleteSavedColorScale(); break;
        case 8: _t->reeditSaveColorScale((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->importColorScaleFromImageFile(); break;
        case 10: _t->invertEditedColorScale(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::ColorScaleConfigDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::ColorScaleConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tlp__ColorScaleConfigDialog,
      qt_meta_data_tlp__ColorScaleConfigDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::ColorScaleConfigDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::ColorScaleConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::ColorScaleConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__ColorScaleConfigDialog))
        return static_cast<void*>(const_cast< ColorScaleConfigDialog*>(this));
    if (!strcmp(_clname, "Ui::ColorScaleDialog"))
        return static_cast< Ui::ColorScaleDialog*>(const_cast< ColorScaleConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int tlp::ColorScaleConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
