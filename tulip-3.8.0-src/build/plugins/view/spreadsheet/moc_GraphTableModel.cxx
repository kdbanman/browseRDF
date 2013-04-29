/****************************************************************************
** Meta object code from reading C++ file 'GraphTableModel.h'
**
** Created: Mon Apr 29 02:03:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/view/spreadsheet/GraphTableModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphTableModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraphTableModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_GraphTableModel[] = {
    "GraphTableModel\0"
};

void GraphTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GraphTableModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraphTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_GraphTableModel,
      qt_meta_data_GraphTableModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraphTableModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraphTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraphTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphTableModel))
        return static_cast<void*>(const_cast< GraphTableModel*>(this));
    if (!strcmp(_clname, "tlp::Observable"))
        return static_cast< tlp::Observable*>(const_cast< GraphTableModel*>(this));
    if (!strcmp(_clname, "tlp::GraphObserver"))
        return static_cast< tlp::GraphObserver*>(const_cast< GraphTableModel*>(this));
    if (!strcmp(_clname, "tlp::PropertyObserver"))
        return static_cast< tlp::PropertyObserver*>(const_cast< GraphTableModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int GraphTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
