/****************************************************************************
** Meta object code from reading C++ file 'LayerManagerWidget.h'
**
** Created: Mon Apr 29 01:40:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/LayerManagerWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LayerManagerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__LayerManagerWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,
      35,   33,   24,   24, 0x09,
      69,   24,   24,   24, 0x09,
     102,   87,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__LayerManagerWidget[] = {
    "tlp::LayerManagerWidget\0\0apply()\0,\0"
    "itemClicked(QTreeWidgetItem*,int)\0"
    "applyVisibility()\0item,composite\0"
    "applyVisibility(QTreeWidgetItem*,GlComposite*)\0"
};

void tlp::LayerManagerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LayerManagerWidget *_t = static_cast<LayerManagerWidget *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->applyVisibility(); break;
        case 3: _t->applyVisibility((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< GlComposite*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::LayerManagerWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::LayerManagerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__LayerManagerWidget,
      qt_meta_data_tlp__LayerManagerWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::LayerManagerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::LayerManagerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::LayerManagerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__LayerManagerWidget))
        return static_cast<void*>(const_cast< LayerManagerWidget*>(this));
    if (!strcmp(_clname, "Ui::LayerManagerWidgetData"))
        return static_cast< Ui::LayerManagerWidgetData*>(const_cast< LayerManagerWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::LayerManagerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
