/****************************************************************************
** Meta object code from reading C++ file 'PythonShellWidget.h'
**
** Created: Tue Apr 30 11:13:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/view/pythonscriptview/PythonShellWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PythonShellWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonShellWidget[] = {

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
      29,   19,   18,   18, 0x0a,
      54,   50,   18,   18, 0x2a,
      81,   70,   18,   18, 0x09,
     112,   18,   18,   18, 0x29,

       0        // eod
};

static const char qt_meta_stringdata_PythonShellWidget[] = {
    "PythonShellWidget\0\0txt,atEnd\0"
    "insert(QString,bool)\0txt\0insert(QString)\0"
    "dotContext\0updateAutoCompletionList(bool)\0"
    "updateAutoCompletionList()\0"
};

void PythonShellWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonShellWidget *_t = static_cast<PythonShellWidget *>(_o);
        switch (_id) {
        case 0: _t->insert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 1: _t->insert((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateAutoCompletionList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->updateAutoCompletionList(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonShellWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonShellWidget::staticMetaObject = {
    { &PythonCodeEditor::staticMetaObject, qt_meta_stringdata_PythonShellWidget,
      qt_meta_data_PythonShellWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonShellWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonShellWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonShellWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonShellWidget))
        return static_cast<void*>(const_cast< PythonShellWidget*>(this));
    return PythonCodeEditor::qt_metacast(_clname);
}

int PythonShellWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PythonCodeEditor::qt_metacall(_c, _id, _a);
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
