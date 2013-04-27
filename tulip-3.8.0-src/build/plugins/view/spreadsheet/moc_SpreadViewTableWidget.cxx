/****************************************************************************
** Meta object code from reading C++ file 'SpreadViewTableWidget.h'
**
** Created: Fri Apr 26 16:36:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/view/spreadsheet/SpreadViewTableWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpreadViewTableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpreadViewTableWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      60,   51,   22,   22, 0x08,
      94,   51,   22,   22, 0x08,
     123,   51,   22,   22, 0x08,
     161,  155,   22,   22, 0x08,
     195,  190,   22,   22, 0x08,
     232,  226,   22,   22, 0x08,
     257,   22,   22,   22, 0x08,
     274,   22,   22,   22, 0x08,
     287,   22,   22,   22, 0x08,
     309,   22,   22,   22, 0x08,
     329,   22,   22,   22, 0x08,
     350,   22,   22,   22, 0x08,
     364,   22,   22,   22, 0x08,
     379,   22,   22,   22, 0x08,
     396,   22,   22,   22, 0x08,
     413,   22,   22,   22, 0x08,
     435,   22,   22,   22, 0x08,
     455,   22,   22,   22, 0x08,
     467,   22,   22,   22, 0x08,
     475,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SpreadViewTableWidget[] = {
    "SpreadViewTableWidget\0\0"
    "deleteHighlightedElements()\0position\0"
    "showPropertiesContextMenu(QPoint)\0"
    "showTableContextMenu(QPoint)\0"
    "showElementsContextMenu(QPoint)\0state\0"
    "updateElementVisibility(int)\0show\0"
    "showOnlySelectedElements(bool)\0index\0"
    "filterColumnChanged(int)\0filterElements()\0"
    "hideColumn()\0createNewProperties()\0"
    "copyColumnToOther()\0setAllColumnValues()\0"
    "resetColumn()\0deleteColumn()\0"
    "selectElements()\0addToSelection()\0"
    "removeFromSelection()\0highlightElements()\0"
    "copyNodes()\0group()\0ungroup()\0"
};

void SpreadViewTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpreadViewTableWidget *_t = static_cast<SpreadViewTableWidget *>(_o);
        switch (_id) {
        case 0: _t->deleteHighlightedElements(); break;
        case 1: _t->showPropertiesContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->showTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->showElementsContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->updateElementVisibility((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showOnlySelectedElements((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->filterColumnChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->filterElements(); break;
        case 8: _t->hideColumn(); break;
        case 9: _t->createNewProperties(); break;
        case 10: _t->copyColumnToOther(); break;
        case 11: _t->setAllColumnValues(); break;
        case 12: _t->resetColumn(); break;
        case 13: _t->deleteColumn(); break;
        case 14: _t->selectElements(); break;
        case 15: _t->addToSelection(); break;
        case 16: _t->removeFromSelection(); break;
        case 17: _t->highlightElements(); break;
        case 18: _t->copyNodes(); break;
        case 19: _t->group(); break;
        case 20: _t->ungroup(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpreadViewTableWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpreadViewTableWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SpreadViewTableWidget,
      qt_meta_data_SpreadViewTableWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpreadViewTableWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpreadViewTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpreadViewTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpreadViewTableWidget))
        return static_cast<void*>(const_cast< SpreadViewTableWidget*>(this));
    if (!strcmp(_clname, "tlp::PropertyObserver"))
        return static_cast< tlp::PropertyObserver*>(const_cast< SpreadViewTableWidget*>(this));
    if (!strcmp(_clname, "tlp::Observable"))
        return static_cast< tlp::Observable*>(const_cast< SpreadViewTableWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SpreadViewTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
