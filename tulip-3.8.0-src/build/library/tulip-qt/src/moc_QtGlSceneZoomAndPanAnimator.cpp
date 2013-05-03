/****************************************************************************
** Meta object code from reading C++ file 'QtGlSceneZoomAndPanAnimator.h'
**
** Created: Tue Apr 30 11:12:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/QtGlSceneZoomAndPanAnimator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtGlSceneZoomAndPanAnimator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__QtGlSceneZoomAndPanAnimator[] = {

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
      48,   34,   33,   33, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__QtGlSceneZoomAndPanAnimator[] = {
    "tlp::QtGlSceneZoomAndPanAnimator\0\0"
    "animationStep\0zoomAndPanAnimStepSlot(int)\0"
};

void tlp::QtGlSceneZoomAndPanAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtGlSceneZoomAndPanAnimator *_t = static_cast<QtGlSceneZoomAndPanAnimator *>(_o);
        switch (_id) {
        case 0: _t->zoomAndPanAnimStepSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::QtGlSceneZoomAndPanAnimator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::QtGlSceneZoomAndPanAnimator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tlp__QtGlSceneZoomAndPanAnimator,
      qt_meta_data_tlp__QtGlSceneZoomAndPanAnimator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::QtGlSceneZoomAndPanAnimator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::QtGlSceneZoomAndPanAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::QtGlSceneZoomAndPanAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__QtGlSceneZoomAndPanAnimator))
        return static_cast<void*>(const_cast< QtGlSceneZoomAndPanAnimator*>(this));
    if (!strcmp(_clname, "GlSceneZoomAndPan"))
        return static_cast< GlSceneZoomAndPan*>(const_cast< QtGlSceneZoomAndPanAnimator*>(this));
    return QObject::qt_metacast(_clname);
}

int tlp::QtGlSceneZoomAndPanAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
