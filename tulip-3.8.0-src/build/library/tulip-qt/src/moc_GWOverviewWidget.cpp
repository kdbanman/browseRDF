/****************************************************************************
** Meta object code from reading C++ file 'GWOverviewWidget.h'
**
** Created: Fri Apr 26 16:35:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/GWOverviewWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GWOverviewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__GWOverviewWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   42,   22,   22, 0x0a,
      97,   22,   22,   22, 0x0a,
     110,   22,   22,   22, 0x0a,
     139,  117,   22,   22, 0x08,
     173,  164,   22,   22, 0x28,
     193,  164,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__GWOverviewWidget[] = {
    "tlp::GWOverviewWidget\0\0hideOverview(bool)\0"
    ",entity\0setObservedView(GlMainWidget*,GlSimpleEntity*)\0"
    "updateView()\0show()\0glWidget,graphChanged\0"
    "draw(GlMainWidget*,bool)\0glWidget\0"
    "draw(GlMainWidget*)\0observedViewDestroyed(QObject*)\0"
};

void tlp::GWOverviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GWOverviewWidget *_t = static_cast<GWOverviewWidget *>(_o);
        switch (_id) {
        case 0: _t->hideOverview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setObservedView((*reinterpret_cast< GlMainWidget*(*)>(_a[1])),(*reinterpret_cast< GlSimpleEntity*(*)>(_a[2]))); break;
        case 2: _t->updateView(); break;
        case 3: _t->show(); break;
        case 4: _t->draw((*reinterpret_cast< GlMainWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->draw((*reinterpret_cast< GlMainWidget*(*)>(_a[1]))); break;
        case 6: _t->observedViewDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::GWOverviewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::GWOverviewWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__GWOverviewWidget,
      qt_meta_data_tlp__GWOverviewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::GWOverviewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::GWOverviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::GWOverviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__GWOverviewWidget))
        return static_cast<void*>(const_cast< GWOverviewWidget*>(this));
    if (!strcmp(_clname, "Ui::GWOverviewWidgetData"))
        return static_cast< Ui::GWOverviewWidgetData*>(const_cast< GWOverviewWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::GWOverviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void tlp::GWOverviewWidget::hideOverview(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
