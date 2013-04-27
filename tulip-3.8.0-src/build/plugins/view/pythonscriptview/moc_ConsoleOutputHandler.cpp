/****************************************************************************
** Meta object code from reading C++ file 'ConsoleOutputHandler.h'
**
** Created: Fri Apr 26 16:36:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/view/pythonscriptview/ConsoleOutputHandler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConsoleOutputHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConsoleOutputHandler[] = {

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
      55,   22,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ConsoleOutputHandler[] = {
    "ConsoleOutputHandler\0\0"
    "consoleWidget,output,errorOutput\0"
    "writeToConsole(QAbstractScrollArea*,QString,bool)\0"
};

void ConsoleOutputHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConsoleOutputHandler *_t = static_cast<ConsoleOutputHandler *>(_o);
        switch (_id) {
        case 0: _t->writeToConsole((*reinterpret_cast< QAbstractScrollArea*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ConsoleOutputHandler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConsoleOutputHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConsoleOutputHandler,
      qt_meta_data_ConsoleOutputHandler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConsoleOutputHandler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConsoleOutputHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConsoleOutputHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleOutputHandler))
        return static_cast<void*>(const_cast< ConsoleOutputHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int ConsoleOutputHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_ConsoleOutputEmitter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      55,   22,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ConsoleOutputEmitter[] = {
    "ConsoleOutputEmitter\0\0"
    "consoleWidget,output,errorOutput\0"
    "consoleOutput(QAbstractScrollArea*,QString,bool)\0"
};

void ConsoleOutputEmitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConsoleOutputEmitter *_t = static_cast<ConsoleOutputEmitter *>(_o);
        switch (_id) {
        case 0: _t->consoleOutput((*reinterpret_cast< QAbstractScrollArea*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ConsoleOutputEmitter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConsoleOutputEmitter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConsoleOutputEmitter,
      qt_meta_data_ConsoleOutputEmitter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConsoleOutputEmitter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConsoleOutputEmitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConsoleOutputEmitter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConsoleOutputEmitter))
        return static_cast<void*>(const_cast< ConsoleOutputEmitter*>(this));
    return QObject::qt_metacast(_clname);
}

int ConsoleOutputEmitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ConsoleOutputEmitter::consoleOutput(QAbstractScrollArea * _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
