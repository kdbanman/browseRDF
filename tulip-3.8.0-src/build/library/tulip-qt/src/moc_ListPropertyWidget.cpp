/****************************************************************************
** Meta object code from reading C++ file 'ListPropertyWidget.h'
**
** Created: Mon Apr 29 01:40:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/ListPropertyWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ListPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ListPropertyWidget[] = {

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
      20,   19,   19,   19, 0x08,
      29,   19,   19,   19, 0x08,
      42,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ListPropertyWidget[] = {
    "ListPropertyWidget\0\0addRow()\0removeRows()\0"
    "setAll()\0"
};

void ListPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ListPropertyWidget *_t = static_cast<ListPropertyWidget *>(_o);
        switch (_id) {
        case 0: _t->addRow(); break;
        case 1: _t->removeRows(); break;
        case 2: _t->setAll(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ListPropertyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ListPropertyWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ListPropertyWidget,
      qt_meta_data_ListPropertyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ListPropertyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ListPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ListPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ListPropertyWidget))
        return static_cast<void*>(const_cast< ListPropertyWidget*>(this));
    if (!strcmp(_clname, "Ui::Form"))
        return static_cast< Ui::Form*>(const_cast< ListPropertyWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ListPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
