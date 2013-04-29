/****************************************************************************
** Meta object code from reading C++ file 'TulipTableWidgetColumnSelectionWidget.h'
**
** Created: Mon Apr 29 02:03:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/view/spreadsheet/TulipTableWidgetColumnSelectionWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TulipTableWidgetColumnSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TulipTableWidgetColumnSelectionWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   39,   38,   38, 0x08,
      78,   38,   38,   38, 0x08,
     113,   38,   38,   38, 0x08,
     136,   38,   38,   38, 0x08,
     165,  157,   38,   38, 0x08,
     211,  202,   38,   38, 0x08,
     235,   38,   38,   38, 0x08,
     257,   38,   38,   38, 0x08,
     283,   38,   38,   38, 0x08,
     305,   38,   38,   38, 0x08,
     323,   38,   38,   38, 0x08,
     336,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TulipTableWidgetColumnSelectionWidget[] = {
    "TulipTableWidgetColumnSelectionWidget\0"
    "\0state\0checkUncheckAllStateChanged(int)\0"
    "updateCheckUncheckAllButtonState()\0"
    "showVisualProperties()\0showDataProperties()\0"
    "pattern\0showCustomPatternProperties(QString)\0"
    "position\0showContextMenu(QPoint)\0"
    "showSelectedColumns()\0showOnlySelectedColumns()\0"
    "hideSelectedColumns()\0createNewColumn()\0"
    "copyColumn()\0deleteSelectedColumns()\0"
};

void TulipTableWidgetColumnSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TulipTableWidgetColumnSelectionWidget *_t = static_cast<TulipTableWidgetColumnSelectionWidget *>(_o);
        switch (_id) {
        case 0: _t->checkUncheckAllStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateCheckUncheckAllButtonState(); break;
        case 2: _t->showVisualProperties(); break;
        case 3: _t->showDataProperties(); break;
        case 4: _t->showCustomPatternProperties((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->showSelectedColumns(); break;
        case 7: _t->showOnlySelectedColumns(); break;
        case 8: _t->hideSelectedColumns(); break;
        case 9: _t->createNewColumn(); break;
        case 10: _t->copyColumn(); break;
        case 11: _t->deleteSelectedColumns(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TulipTableWidgetColumnSelectionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TulipTableWidgetColumnSelectionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TulipTableWidgetColumnSelectionWidget,
      qt_meta_data_TulipTableWidgetColumnSelectionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TulipTableWidgetColumnSelectionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TulipTableWidgetColumnSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TulipTableWidgetColumnSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TulipTableWidgetColumnSelectionWidget))
        return static_cast<void*>(const_cast< TulipTableWidgetColumnSelectionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TulipTableWidgetColumnSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
