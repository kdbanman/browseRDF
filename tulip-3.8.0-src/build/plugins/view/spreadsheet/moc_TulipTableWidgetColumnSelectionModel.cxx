/****************************************************************************
** Meta object code from reading C++ file 'TulipTableWidgetColumnSelectionModel.h'
**
** Created: Mon Apr 29 02:03:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/view/spreadsheet/TulipTableWidgetColumnSelectionModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TulipTableWidgetColumnSelectionModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TulipTableWidgetColumnSelectionModel[] = {

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
      55,   38,   37,   37, 0x08,
     163,   92,   37,   37, 0x08,
     213,   38,   37,   37, 0x08,
     272,  249,   37,   37, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TulipTableWidgetColumnSelectionModel[] = {
    "TulipTableWidgetColumnSelectionModel\0"
    "\0parent,start,end\0"
    "columnsInserted(QModelIndex,int,int)\0"
    "sourceParent,sourceStart,sourceEnd,destinationParent,destinationColumn\0"
    "columnsMoved(QModelIndex,int,int,QModelIndex,int)\0"
    "columnsRemoved(QModelIndex,int,int)\0"
    "orientation,first,last\0"
    "headerDataChanged(Qt::Orientation,int,int)\0"
};

void TulipTableWidgetColumnSelectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TulipTableWidgetColumnSelectionModel *_t = static_cast<TulipTableWidgetColumnSelectionModel *>(_o);
        switch (_id) {
        case 0: _t->columnsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->columnsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 2: _t->columnsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->headerDataChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TulipTableWidgetColumnSelectionModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TulipTableWidgetColumnSelectionModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_TulipTableWidgetColumnSelectionModel,
      qt_meta_data_TulipTableWidgetColumnSelectionModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TulipTableWidgetColumnSelectionModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TulipTableWidgetColumnSelectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TulipTableWidgetColumnSelectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TulipTableWidgetColumnSelectionModel))
        return static_cast<void*>(const_cast< TulipTableWidgetColumnSelectionModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int TulipTableWidgetColumnSelectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
