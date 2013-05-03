/****************************************************************************
** Meta object code from reading C++ file 'SimpleStringsListSelectionWidget.h'
**
** Created: Tue Apr 30 11:12:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/SimpleStringsListSelectionWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimpleStringsListSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__SimpleStringsListSelectionWidget[] = {

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
      39,   38,   38,   38, 0x08,
      62,   38,   38,   38, 0x08,
      92,   87,   38,   38, 0x08,
     126,   38,   38,   38, 0x08,
     142,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__SimpleStringsListSelectionWidget[] = {
    "tlp::SimpleStringsListSelectionWidget\0"
    "\0pressButtonSelectAll()\0"
    "pressButtonUnselectAll()\0item\0"
    "listItemClicked(QListWidgetItem*)\0"
    "pressButtonUp()\0pressButtonDown()\0"
};

void tlp::SimpleStringsListSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimpleStringsListSelectionWidget *_t = static_cast<SimpleStringsListSelectionWidget *>(_o);
        switch (_id) {
        case 0: _t->pressButtonSelectAll(); break;
        case 1: _t->pressButtonUnselectAll(); break;
        case 2: _t->listItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->pressButtonUp(); break;
        case 4: _t->pressButtonDown(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::SimpleStringsListSelectionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::SimpleStringsListSelectionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__SimpleStringsListSelectionWidget,
      qt_meta_data_tlp__SimpleStringsListSelectionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::SimpleStringsListSelectionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::SimpleStringsListSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::SimpleStringsListSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__SimpleStringsListSelectionWidget))
        return static_cast<void*>(const_cast< SimpleStringsListSelectionWidget*>(this));
    if (!strcmp(_clname, "StringsListSelectionWidgetInterface"))
        return static_cast< StringsListSelectionWidgetInterface*>(const_cast< SimpleStringsListSelectionWidget*>(this));
    if (!strcmp(_clname, "Ui::SimpleStringsListSelectionData"))
        return static_cast< Ui::SimpleStringsListSelectionData*>(const_cast< SimpleStringsListSelectionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::SimpleStringsListSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
