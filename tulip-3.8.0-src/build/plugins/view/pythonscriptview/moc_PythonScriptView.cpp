/****************************************************************************
** Meta object code from reading C++ file 'PythonScriptView.h'
**
** Created: Mon Apr 29 02:04:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/view/pythonscriptview/PythonScriptView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PythonScriptView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonScriptView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      39,   17,   17,   17, 0x08,
      51,   17,   17,   17, 0x08,
      64,   17,   17,   17, 0x08,
      77,   17,   17,   17, 0x08,
     100,   17,   17,   17, 0x08,
     120,   17,   17,   17, 0x08,
     138,   17,   17,   17, 0x08,
     154,   17,   17,   17, 0x08,
     167,   17,   17,   17, 0x08,
     186,   17,   17,   17, 0x08,
     204,   17,   17,   17, 0x08,
     223,   17,   17,   17, 0x08,
     248,  242,   17,   17, 0x08,
     275,   17,   17,   17, 0x28,
     302,  298,   17,   17, 0x08,
     335,  298,   17,   17, 0x08,
     364,  298,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PythonScriptView[] = {
    "PythonScriptView\0\0pauseCurrentScript()\0"
    "newScript()\0loadScript()\0saveScript()\0"
    "executeCurrentScript()\0stopCurrentScript()\0"
    "newStringModule()\0newFileModule()\0"
    "loadModule()\0saveModuleToFile()\0"
    "newPythonPlugin()\0loadPythonPlugin()\0"
    "savePythonPlugin()\0clear\0"
    "registerPythonPlugin(bool)\0"
    "registerPythonPlugin()\0tab\0"
    "closeMainScriptTabRequested(int)\0"
    "closeModuleTabRequested(int)\0"
    "closePluginTabRequested(int)\0"
};

void PythonScriptView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonScriptView *_t = static_cast<PythonScriptView *>(_o);
        switch (_id) {
        case 0: _t->pauseCurrentScript(); break;
        case 1: _t->newScript(); break;
        case 2: _t->loadScript(); break;
        case 3: _t->saveScript(); break;
        case 4: _t->executeCurrentScript(); break;
        case 5: _t->stopCurrentScript(); break;
        case 6: _t->newStringModule(); break;
        case 7: _t->newFileModule(); break;
        case 8: _t->loadModule(); break;
        case 9: _t->saveModuleToFile(); break;
        case 10: _t->newPythonPlugin(); break;
        case 11: _t->loadPythonPlugin(); break;
        case 12: _t->savePythonPlugin(); break;
        case 13: _t->registerPythonPlugin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->registerPythonPlugin(); break;
        case 15: _t->closeMainScriptTabRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->closeModuleTabRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->closePluginTabRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonScriptView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonScriptView::staticMetaObject = {
    { &tlp::AbstractView::staticMetaObject, qt_meta_stringdata_PythonScriptView,
      qt_meta_data_PythonScriptView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonScriptView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonScriptView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonScriptView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonScriptView))
        return static_cast<void*>(const_cast< PythonScriptView*>(this));
    typedef tlp::AbstractView QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PythonScriptView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef tlp::AbstractView QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
