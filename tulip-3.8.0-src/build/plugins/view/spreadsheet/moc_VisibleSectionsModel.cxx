/****************************************************************************
** Meta object code from reading C++ file 'VisibleSectionsModel.h'
**
** Created: Fri Apr 26 16:36:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/view/spreadsheet/VisibleSectionsModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisibleSectionsModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VisibleSectionsModel[] = {

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
      39,   22,   21,   21, 0x08,
     150,   79,   21,   21, 0x08,
     203,   22,   21,   21, 0x08,
     262,  242,   21,   21, 0x08,
     309,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VisibleSectionsModel[] = {
    "VisibleSectionsModel\0\0parent,start,end\0"
    "propertiesInserted(QModelIndex,int,int)\0"
    "sourceParent,sourceStart,sourceEnd,destinationParent,destinationColumn\0"
    "propertiesMoved(QModelIndex,int,int,QModelIndex,int)\0"
    "propertiesRemoved(QModelIndex,int,int)\0"
    "topLeft,bottomRight\0"
    "propertiesDataChanged(QModelIndex,QModelIndex)\0"
    "propertiesReset()\0"
};

void VisibleSectionsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VisibleSectionsModel *_t = static_cast<VisibleSectionsModel *>(_o);
        switch (_id) {
        case 0: _t->propertiesInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->propertiesMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 2: _t->propertiesRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->propertiesDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->propertiesReset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VisibleSectionsModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VisibleSectionsModel::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_VisibleSectionsModel,
      qt_meta_data_VisibleSectionsModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VisibleSectionsModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VisibleSectionsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VisibleSectionsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VisibleSectionsModel))
        return static_cast<void*>(const_cast< VisibleSectionsModel*>(this));
    return QComboBox::qt_metacast(_clname);
}

int VisibleSectionsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
