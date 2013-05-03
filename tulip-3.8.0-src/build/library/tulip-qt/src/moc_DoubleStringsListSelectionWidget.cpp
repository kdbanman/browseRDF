/****************************************************************************
** Meta object code from reading C++ file 'DoubleStringsListSelectionWidget.h'
**
** Created: Tue Apr 30 11:12:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/DoubleStringsListSelectionWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DoubleStringsListSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__DoubleStringsListSelectionWidget[] = {

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
      39,   38,   38,   38, 0x08,
      62,   38,   38,   38, 0x08,
      87,   38,   38,   38, 0x08,
     104,   38,   38,   38, 0x08,
     121,   38,   38,   38, 0x08,
     137,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__DoubleStringsListSelectionWidget[] = {
    "tlp::DoubleStringsListSelectionWidget\0"
    "\0pressButtonSelectAll()\0"
    "pressButtonUnselectAll()\0pressButtonAdd()\0"
    "pressButtonRem()\0pressButtonUp()\0"
    "pressButtonDown()\0"
};

void tlp::DoubleStringsListSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DoubleStringsListSelectionWidget *_t = static_cast<DoubleStringsListSelectionWidget *>(_o);
        switch (_id) {
        case 0: _t->pressButtonSelectAll(); break;
        case 1: _t->pressButtonUnselectAll(); break;
        case 2: _t->pressButtonAdd(); break;
        case 3: _t->pressButtonRem(); break;
        case 4: _t->pressButtonUp(); break;
        case 5: _t->pressButtonDown(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tlp::DoubleStringsListSelectionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::DoubleStringsListSelectionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__DoubleStringsListSelectionWidget,
      qt_meta_data_tlp__DoubleStringsListSelectionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::DoubleStringsListSelectionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::DoubleStringsListSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::DoubleStringsListSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__DoubleStringsListSelectionWidget))
        return static_cast<void*>(const_cast< DoubleStringsListSelectionWidget*>(this));
    if (!strcmp(_clname, "StringsListSelectionWidgetInterface"))
        return static_cast< StringsListSelectionWidgetInterface*>(const_cast< DoubleStringsListSelectionWidget*>(this));
    if (!strcmp(_clname, "Ui::DoubleStringsListSelectionData"))
        return static_cast< Ui::DoubleStringsListSelectionData*>(const_cast< DoubleStringsListSelectionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::DoubleStringsListSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
