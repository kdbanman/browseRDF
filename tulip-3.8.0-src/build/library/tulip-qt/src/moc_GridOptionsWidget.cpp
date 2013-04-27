/****************************************************************************
** Meta object code from reading C++ file 'GridOptionsWidget.h'
**
** Created: Fri Apr 26 16:35:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/GridOptionsWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GridOptionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__GridOptionsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      39,   23,   23,   23, 0x0a,
      60,   23,   23,   23, 0x0a,
      73,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__GridOptionsWidget[] = {
    "tlp::GridOptionsWidget\0\0validateGrid()\0"
    "chGridSubdivisions()\0chGridSize()\0"
    "chDisplayGrid()\0"
};

void tlp::GridOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GridOptionsWidget *_t = static_cast<GridOptionsWidget *>(_o);
        switch (_id) {
        case 0: _t->validateGrid(); break;
        case 1: _t->chGridSubdivisions(); break;
        case 2: _t->chGridSize(); break;
        case 3: _t->chDisplayGrid(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tlp::GridOptionsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::GridOptionsWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tlp__GridOptionsWidget,
      qt_meta_data_tlp__GridOptionsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::GridOptionsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::GridOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::GridOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__GridOptionsWidget))
        return static_cast<void*>(const_cast< GridOptionsWidget*>(this));
    if (!strcmp(_clname, "Ui::GridOptionsData"))
        return static_cast< Ui::GridOptionsData*>(const_cast< GridOptionsWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int tlp::GridOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
