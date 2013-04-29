/****************************************************************************
** Meta object code from reading C++ file 'RenderingParametersDialog.h'
**
** Created: Mon Apr 29 01:40:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/RenderingParametersDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RenderingParametersDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__RenderingParametersDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   31,   31,   31, 0x0a,
      60,   31,   31,   31, 0x0a,
      72,   31,   31,   31, 0x0a,
      89,   31,   31,   31, 0x0a,
     130,  119,   31,   31, 0x0a,
     166,   31,   31,   31, 0x0a,
     201,  188,   31,   31, 0x0a,
     233,   31,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__RenderingParametersDialog[] = {
    "tlp::RenderingParametersDialog\0\0"
    "viewNeedDraw()\0updateView()\0backColor()\0"
    "selectionColor()\0selectionSaveAtDefaultColor()\0"
    "tmp,button\0setButtonColor(QColor,QPushButton*)\0"
    "labelSizeChanged(int)\0propertyName\0"
    "updateOrderingProperty(QString)\0"
    "setInitViewOnSetGraph()\0"
};

void tlp::RenderingParametersDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RenderingParametersDialog *_t = static_cast<RenderingParametersDialog *>(_o);
        switch (_id) {
        case 0: _t->viewNeedDraw(); break;
        case 1: _t->updateView(); break;
        case 2: _t->backColor(); break;
        case 3: _t->selectionColor(); break;
        case 4: _t->selectionSaveAtDefaultColor(); break;
        case 5: _t->setButtonColor((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< QPushButton*(*)>(_a[2]))); break;
        case 6: _t->labelSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateOrderingProperty((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setInitViewOnSetGraph(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::RenderingParametersDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::RenderingParametersDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__RenderingParametersDialog,
      qt_meta_data_tlp__RenderingParametersDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::RenderingParametersDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::RenderingParametersDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::RenderingParametersDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__RenderingParametersDialog))
        return static_cast<void*>(const_cast< RenderingParametersDialog*>(this));
    if (!strcmp(_clname, "Ui::RenderingParametersDialogData"))
        return static_cast< Ui::RenderingParametersDialogData*>(const_cast< RenderingParametersDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::RenderingParametersDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void tlp::RenderingParametersDialog::viewNeedDraw()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
