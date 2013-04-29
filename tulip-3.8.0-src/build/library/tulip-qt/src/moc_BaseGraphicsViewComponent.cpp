/****************************************************************************
** Meta object code from reading C++ file 'BaseGraphicsViewComponent.h'
**
** Created: Mon Apr 29 01:40:55 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/BaseGraphicsViewComponent.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BaseGraphicsViewComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__BaseGraphicsViewComponent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   32,   31,   31, 0x0a,
      55,   31,   31,   31, 0x0a,
      62,   31,   31,   31, 0x0a,
      72,   31,   31,   31, 0x0a,
      81,   79,   31,   31, 0x0a,
     120,  112,   31,   31, 0x0a,
     153,   31,   31,   31, 0x09,
     172,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__BaseGraphicsViewComponent[] = {
    "tlp::BaseGraphicsViewComponent\0\0graph\0"
    "setGraph(Graph*)\0draw()\0refresh()\0"
    "init()\0,\0elementSelectedSlot(uint,bool)\0"
    "visible\0setOptionsTabWidgetVisible(bool)\0"
    "hideOverview(bool)\0setVisibleOverview(bool)\0"
};

void tlp::BaseGraphicsViewComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BaseGraphicsViewComponent *_t = static_cast<BaseGraphicsViewComponent *>(_o);
        switch (_id) {
        case 0: _t->setGraph((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 1: _t->draw(); break;
        case 2: _t->refresh(); break;
        case 3: _t->init(); break;
        case 4: _t->elementSelectedSlot((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->setOptionsTabWidgetVisible((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 6: _t->hideOverview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setVisibleOverview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::BaseGraphicsViewComponent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::BaseGraphicsViewComponent::staticMetaObject = {
    { &AbstractView::staticMetaObject, qt_meta_stringdata_tlp__BaseGraphicsViewComponent,
      qt_meta_data_tlp__BaseGraphicsViewComponent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::BaseGraphicsViewComponent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::BaseGraphicsViewComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::BaseGraphicsViewComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__BaseGraphicsViewComponent))
        return static_cast<void*>(const_cast< BaseGraphicsViewComponent*>(this));
    return AbstractView::qt_metacast(_clname);
}

int tlp::BaseGraphicsViewComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
