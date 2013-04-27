/****************************************************************************
** Meta object code from reading C++ file 'SmallMultiplesView.h'
**
** Created: Fri Apr 26 16:35:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/SmallMultiplesView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SmallMultiplesView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__SmallMultiplesView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      47,   25,   24,   24, 0x05,
     105,   93,   24,   24, 0x25,
     129,  125,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     153,  151,   24,   24, 0x0a,
     187,  185,   24,   24, 0x0a,
     208,  185,   24,   24, 0x0a,
     227,   24,   24,   24, 0x0a,
     251,   24,   24,   24, 0x0a,
     267,   24,   24,   24, 0x0a,
     301,  283,   24,   24, 0x09,
     356,  348,   24,   24, 0x29,
     390,  377,   24,   24, 0x09,
     436,  433,   24,   24, 0x29,
     453,   24,   24,   24, 0x09,
     468,   24,   24,   24, 0x09,
     478,   24,   24,   24, 0x09,
     493,  491,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__SmallMultiplesView[] = {
    "tlp::SmallMultiplesView\0\0fromId,toId,dataRoles\0"
    "changeData(int,int,SmallMultiplesView::Roles)\0"
    "fromId,toId\0changeData(int,int)\0a,b\0"
    "reverseItems(int,int)\0f\0"
    "setZoomAnimationActivated(bool)\0s\0"
    "setMaxLabelSize(int)\0setSpacing(double)\0"
    "toggleInteractors(bool)\0selectItem(int)\0"
    "zoomOnItem(int)\0from,to,dataRoles\0"
    "dataChanged(int,int,SmallMultiplesView::Roles)\0"
    "from,to\0dataChanged(int,int)\0id,dataRoles\0"
    "dataChanged(int,SmallMultiplesView::Roles)\0"
    "id\0dataChanged(int)\0refreshItems()\0"
    "addItem()\0delItem(int)\0,\0"
    "itemsReversed(int,int)\0"
};

void tlp::SmallMultiplesView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SmallMultiplesView *_t = static_cast<SmallMultiplesView *>(_o);
        switch (_id) {
        case 0: _t->changeData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< SmallMultiplesView::Roles(*)>(_a[3]))); break;
        case 1: _t->changeData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->reverseItems((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setZoomAnimationActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setMaxLabelSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setSpacing((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->toggleInteractors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->selectItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->zoomOnItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->dataChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< SmallMultiplesView::Roles(*)>(_a[3]))); break;
        case 10: _t->dataChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->dataChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SmallMultiplesView::Roles(*)>(_a[2]))); break;
        case 12: _t->dataChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->refreshItems(); break;
        case 14: _t->addItem(); break;
        case 15: _t->delItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->itemsReversed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::SmallMultiplesView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::SmallMultiplesView::staticMetaObject = {
    { &AbstractView::staticMetaObject, qt_meta_stringdata_tlp__SmallMultiplesView,
      qt_meta_data_tlp__SmallMultiplesView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::SmallMultiplesView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::SmallMultiplesView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::SmallMultiplesView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__SmallMultiplesView))
        return static_cast<void*>(const_cast< SmallMultiplesView*>(this));
    return AbstractView::qt_metacast(_clname);
}

int tlp::SmallMultiplesView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void tlp::SmallMultiplesView::changeData(int _t1, int _t2, SmallMultiplesView::Roles _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void tlp::SmallMultiplesView::reverseItems(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
