/****************************************************************************
** Meta object code from reading C++ file 'PluginProgressWidget.h'
**
** Created: Tue Apr 30 11:12:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/PluginProgressWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PluginProgressWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__PluginProgressWidget[] = {

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
      27,   26,   26,   26, 0x0a,
      41,   26,   26,   26, 0x0a,
      57,   26,   26,   26, 0x0a,
      81,   77,   26,   26, 0x0a,
     133,  119,  105,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__PluginProgressWidget[] = {
    "tlp::PluginProgressWidget\0\0stopCompute()\0"
    "cancelCompute()\0changePreview(bool)\0"
    "msg\0setComment(std::string)\0ProgressState\0"
    "step,max_step\0progress(int,int)\0"
};

void tlp::PluginProgressWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginProgressWidget *_t = static_cast<PluginProgressWidget *>(_o);
        switch (_id) {
        case 0: _t->stopCompute(); break;
        case 1: _t->cancelCompute(); break;
        case 2: _t->changePreview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setComment((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 4: { ProgressState _r = _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ProgressState*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::PluginProgressWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::PluginProgressWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__PluginProgressWidget,
      qt_meta_data_tlp__PluginProgressWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::PluginProgressWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::PluginProgressWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::PluginProgressWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__PluginProgressWidget))
        return static_cast<void*>(const_cast< PluginProgressWidget*>(this));
    if (!strcmp(_clname, "tlp::SimplePluginProgress"))
        return static_cast< tlp::SimplePluginProgress*>(const_cast< PluginProgressWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::PluginProgressWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
