/****************************************************************************
** Meta object code from reading C++ file 'TulipViewsUtils.h'
**
** Created: Tue Apr 30 11:13:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-python/tulipgui/TulipViewsUtils.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TulipViewsUtils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      54,   15,   15,   15, 0x0a,
      83,   73,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ViewMainWindow[] = {
    "ViewMainWindow\0\0observableDestroyed(tlp::Observable*)\0"
    "changeInteractor()\0begin,end\0"
    "update(ObserverIterator,ObserverIterator)\0"
};

void ViewMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewMainWindow *_t = static_cast<ViewMainWindow *>(_o);
        switch (_id) {
        case 0: _t->observableDestroyed((*reinterpret_cast< tlp::Observable*(*)>(_a[1]))); break;
        case 1: _t->changeInteractor(); break;
        case 2: _t->update((*reinterpret_cast< ObserverIterator(*)>(_a[1])),(*reinterpret_cast< ObserverIterator(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ViewMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ViewMainWindow,
      qt_meta_data_ViewMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewMainWindow))
        return static_cast<void*>(const_cast< ViewMainWindow*>(this));
    if (!strcmp(_clname, "tlp::Observable"))
        return static_cast< tlp::Observable*>(const_cast< ViewMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ViewMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_TulipViewsManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   19,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TulipViewsManager[] = {
    "TulipViewsManager\0\0view\0viewDestroyed(QObject*)\0"
};

void TulipViewsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TulipViewsManager *_t = static_cast<TulipViewsManager *>(_o);
        switch (_id) {
        case 0: _t->viewDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TulipViewsManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TulipViewsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TulipViewsManager,
      qt_meta_data_TulipViewsManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TulipViewsManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TulipViewsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TulipViewsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TulipViewsManager))
        return static_cast<void*>(const_cast< TulipViewsManager*>(this));
    return QObject::qt_metacast(_clname);
}

int TulipViewsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
