/****************************************************************************
** Meta object code from reading C++ file 'FindSelectionWidget.h'
**
** Created: Fri Apr 26 16:35:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/FindSelectionWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FindSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__FindSelectionWidget[] = {

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
      29,   26,   25,   25, 0x09,
      50,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__FindSelectionWidget[] = {
    "tlp::FindSelectionWidget\0\0no\0"
    "propertyChanged(int)\0accept()\0"
};

void tlp::FindSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FindSelectionWidget *_t = static_cast<FindSelectionWidget *>(_o);
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->accept(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::FindSelectionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::FindSelectionWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tlp__FindSelectionWidget,
      qt_meta_data_tlp__FindSelectionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::FindSelectionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::FindSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::FindSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__FindSelectionWidget))
        return static_cast<void*>(const_cast< FindSelectionWidget*>(this));
    if (!strcmp(_clname, "Ui::FindSelectionData"))
        return static_cast< Ui::FindSelectionData*>(const_cast< FindSelectionWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int tlp::FindSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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