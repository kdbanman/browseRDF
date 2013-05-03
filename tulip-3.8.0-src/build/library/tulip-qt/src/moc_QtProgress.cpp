/****************************************************************************
** Meta object code from reading C++ file 'QtProgress.h'
**
** Created: Tue Apr 30 11:12:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/QtProgress.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtProgress.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__QtProgress[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   55,   41,   16, 0x0a,
      87,   16,   16,   16, 0x0a,
      96,   16,   16,   16, 0x0a,
     108,   16,  103,   16, 0x0a,
     124,   16,   16,   16, 0x0a,
     145,   16,   16,   16, 0x0a,
     163,   16,   41,   16, 0x0a,
     183,   16,  171,   16, 0x0a,
     200,  194,   16,   16, 0x0a,
     222,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tlp__QtProgress[] = {
    "tlp::QtProgress\0\0,\0sendProgress(int,int)\0"
    "ProgressState\0step,max_step\0"
    "progress(int,int)\0cancel()\0stop()\0"
    "bool\0isPreviewMode()\0setPreviewMode(bool)\0"
    "showPreview(bool)\0state()\0std::string\0"
    "getError()\0error\0setError(std::string)\0"
    "setComment(std::string)\0"
};

void tlp::QtProgress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QtProgress *_t = static_cast<QtProgress *>(_o);
        switch (_id) {
        case 0: _t->sendProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: { ProgressState _r = _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ProgressState*>(_a[0]) = _r; }  break;
        case 2: _t->cancel(); break;
        case 3: _t->stop(); break;
        case 4: { bool _r = _t->isPreviewMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setPreviewMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showPreview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { ProgressState _r = _t->state();
            if (_a[0]) *reinterpret_cast< ProgressState*>(_a[0]) = _r; }  break;
        case 8: { std::string _r = _t->getError();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = _r; }  break;
        case 9: _t->setError((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 10: _t->setComment((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::QtProgress::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::QtProgress::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tlp__QtProgress,
      qt_meta_data_tlp__QtProgress, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::QtProgress::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::QtProgress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::QtProgress::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__QtProgress))
        return static_cast<void*>(const_cast< QtProgress*>(this));
    if (!strcmp(_clname, "tlp::PluginProgress"))
        return static_cast< tlp::PluginProgress*>(const_cast< QtProgress*>(this));
    return QDialog::qt_metacast(_clname);
}

int tlp::QtProgress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void tlp::QtProgress::sendProgress(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
