/****************************************************************************
** Meta object code from reading C++ file 'GlMainWidget.h'
**
** Created: Fri Apr 26 16:35:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/GlMainWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GlMainWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__GlMainWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   19,   18,   18, 0x05,
      79,   57,   18,   18, 0x05,
     121,  112,   18,   18, 0x05,
     148,   57,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     191,  178,   18,   18, 0x0a,
     202,   18,   18,   18, 0x2a,
     209,   18,   18,   18, 0x0a,
     220,  218,   18,   18, 0x0a,
     245,   18,   18,   18, 0x09,
     270,   57,   18,   18, 0x09,
     304,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__GlMainWidget[] = {
    "tlp::GlMainWidget\0\0,\0"
    "closing(GlMainWidget*,QCloseEvent*)\0"
    "glWidget,graphChanged\0"
    "graphRedrawn(GlMainWidget*,bool)\0"
    "glWidget\0viewRedrawn(GlMainWidget*)\0"
    "viewDrawn(GlMainWidget*,bool)\0"
    "graphChanged\0draw(bool)\0draw()\0redraw()\0"
    "e\0closeEvent(QCloseEvent*)\0"
    "paintEvent(QPaintEvent*)\0"
    "viewDrawnSlot(GlMainWidget*,bool)\0"
    "centerScene()\0"
};

void tlp::GlMainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GlMainWidget *_t = static_cast<GlMainWidget *>(_o);
        switch (_id) {
        case 0: _t->closing((*reinterpret_cast< GlMainWidget*(*)>(_a[1])),(*reinterpret_cast< QCloseEvent*(*)>(_a[2]))); break;
        case 1: _t->graphRedrawn((*reinterpret_cast< GlMainWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->viewRedrawn((*reinterpret_cast< GlMainWidget*(*)>(_a[1]))); break;
        case 3: _t->viewDrawn((*reinterpret_cast< GlMainWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->draw((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->draw(); break;
        case 6: _t->redraw(); break;
        case 7: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 8: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 9: _t->viewDrawnSlot((*reinterpret_cast< GlMainWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->centerScene(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::GlMainWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::GlMainWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_tlp__GlMainWidget,
      qt_meta_data_tlp__GlMainWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::GlMainWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::GlMainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::GlMainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__GlMainWidget))
        return static_cast<void*>(const_cast< GlMainWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int tlp::GlMainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void tlp::GlMainWidget::closing(GlMainWidget * _t1, QCloseEvent * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tlp::GlMainWidget::graphRedrawn(GlMainWidget * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tlp::GlMainWidget::viewRedrawn(GlMainWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tlp::GlMainWidget::viewDrawn(GlMainWidget * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
