/****************************************************************************
** Meta object code from reading C++ file 'ControllerViewsManager.h'
**
** Created: Fri Apr 26 16:35:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/ControllerViewsManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ControllerViewsManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__ControllerViewsManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   29,   28,   28, 0x09,
      69,   62,   57,   28, 0x09,
      95,   28,   57,   28, 0x09,
     114,   29,   57,   28, 0x09,
     168,  141,   57,   28, 0x09,
     211,  205,   57,   28, 0x09,
     238,  231,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__ControllerViewsManager[] = {
    "tlp::ControllerViewsManager\0\0action\0"
    "createView(QAction*)\0bool\0widget\0"
    "windowActivated(QWidget*)\0changeInteractor()\0"
    "changeInteractor(QAction*)\0"
    "action,configurationWidget\0"
    "changeInteractor(QAction*,QWidget**)\0"
    "graph\0changeGraph(Graph*)\0object\0"
    "widgetWillBeClosed(QObject*)\0"
};

void tlp::ControllerViewsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ControllerViewsManager *_t = static_cast<ControllerViewsManager *>(_o);
        switch (_id) {
        case 0: _t->createView((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: { bool _r = _t->windowActivated((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->changeInteractor();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->changeInteractor((*reinterpret_cast< QAction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->changeInteractor((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< QWidget**(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->changeGraph((*reinterpret_cast< Graph*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->widgetWillBeClosed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::ControllerViewsManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::ControllerViewsManager::staticMetaObject = {
    { &Controller::staticMetaObject, qt_meta_stringdata_tlp__ControllerViewsManager,
      qt_meta_data_tlp__ControllerViewsManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::ControllerViewsManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::ControllerViewsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::ControllerViewsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__ControllerViewsManager))
        return static_cast<void*>(const_cast< ControllerViewsManager*>(this));
    return Controller::qt_metacast(_clname);
}

int tlp::ControllerViewsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Controller::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE