/****************************************************************************
** Meta object code from reading C++ file 'GlMainView.h'
**
** Created: Mon Apr 29 01:40:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/GlMainView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GlMainView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__GlMainView[] = {

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
      17,   16,   16,   16, 0x0a,
      24,   16,   16,   16, 0x0a,
      34,   16,   16,   16, 0x0a,
      61,   53,   16,   16, 0x0a,
      90,   83,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__GlMainView[] = {
    "tlp::GlMainView\0\0draw()\0refresh()\0"
    "hideOverview(bool)\0display\0"
    "displayOverview(bool)\0action\0"
    "showDialog(QAction*)\0"
};

void tlp::GlMainView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GlMainView *_t = static_cast<GlMainView *>(_o);
        switch (_id) {
        case 0: _t->draw(); break;
        case 1: _t->refresh(); break;
        case 2: _t->hideOverview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->displayOverview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showDialog((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::GlMainView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::GlMainView::staticMetaObject = {
    { &AbstractView::staticMetaObject, qt_meta_stringdata_tlp__GlMainView,
      qt_meta_data_tlp__GlMainView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::GlMainView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::GlMainView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::GlMainView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__GlMainView))
        return static_cast<void*>(const_cast< GlMainView*>(this));
    return AbstractView::qt_metacast(_clname);
}

int tlp::GlMainView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractView::qt_metacall(_c, _id, _a);
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
