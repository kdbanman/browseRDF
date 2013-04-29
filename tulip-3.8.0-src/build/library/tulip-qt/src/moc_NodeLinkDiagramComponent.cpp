/****************************************************************************
** Meta object code from reading C++ file 'NodeLinkDiagramComponent.h'
**
** Created: Mon Apr 29 01:40:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/NodeLinkDiagramComponent.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeLinkDiagramComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__NodeLinkDiagramComponent[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x09,
      45,   30,   30,   30, 0x0a,
      58,   30,   30,   30, 0x0a,
      95,   30,   30,   30, 0x0a,
     102,   30,   30,   30, 0x0a,
     112,   30,   30,   30, 0x0a,
     125,  119,   30,   30, 0x0a,
     157,  142,   30,   30, 0x0a,
     189,  179,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__NodeLinkDiagramComponent[] = {
    "tlp::NodeLinkDiagramComponent\0\0"
    "gridOptions()\0centerView()\0"
    "drawAfterRenderingParametersChange()\0"
    "draw()\0refresh()\0init()\0graph\0"
    "setGraph(Graph*)\0graph,initView\0"
    "setGraph(Graph*,bool)\0id,isNode\0"
    "elementSelectedSlot(uint,bool)\0"
};

void tlp::NodeLinkDiagramComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NodeLinkDiagramComponent *_t = static_cast<NodeLinkDiagramComponent *>(_o);
        switch (_id) {
        case 0: _t->gridOptions(); break;
        case 1: _t->centerView(); break;
        case 2: _t->drawAfterRenderingParametersChange(); break;
        case 3: _t->draw(); break;
        case 4: _t->refresh(); break;
        case 5: _t->init(); break;
        case 6: _t->setGraph((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        case 7: _t->setGraph((*reinterpret_cast< Graph*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->elementSelectedSlot((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::NodeLinkDiagramComponent::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::NodeLinkDiagramComponent::staticMetaObject = {
    { &GlMainView::staticMetaObject, qt_meta_stringdata_tlp__NodeLinkDiagramComponent,
      qt_meta_data_tlp__NodeLinkDiagramComponent, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::NodeLinkDiagramComponent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::NodeLinkDiagramComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::NodeLinkDiagramComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__NodeLinkDiagramComponent))
        return static_cast<void*>(const_cast< NodeLinkDiagramComponent*>(this));
    return GlMainView::qt_metacast(_clname);
}

int tlp::NodeLinkDiagramComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GlMainView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
