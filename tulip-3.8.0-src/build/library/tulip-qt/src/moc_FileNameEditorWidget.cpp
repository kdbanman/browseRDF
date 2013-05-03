/****************************************************************************
** Meta object code from reading C++ file 'FileNameEditorWidget.h'
**
** Created: Tue Apr 30 11:12:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/FileNameEditorWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileNameEditorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__FileNameEditorWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   26,   26,   26, 0x0a,
      73,   26,   26,   26, 0x0a,
      92,   26,   26,   26, 0x0a,
     113,   26,   26,   26, 0x08,

 // properties: name, type, flags
     137,  129, 0x0a095103,
     146,  129, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_tlp__FileNameEditorWidget[] = {
    "tlp::FileNameEditorWidget\0\0"
    "fileNameChanged(QString)\0setFileName(QString)\0"
    "setFilter(QString)\0setBasePath(QString)\0"
    "buttonPressed()\0QString\0fileName\0"
    "filter\0"
};

void tlp::FileNameEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileNameEditorWidget *_t = static_cast<FileNameEditorWidget *>(_o);
        switch (_id) {
        case 0: _t->fileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setBasePath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->buttonPressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::FileNameEditorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::FileNameEditorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__FileNameEditorWidget,
      qt_meta_data_tlp__FileNameEditorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::FileNameEditorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::FileNameEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::FileNameEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__FileNameEditorWidget))
        return static_cast<void*>(const_cast< FileNameEditorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::FileNameEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = fileName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = filter(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setFilter(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void tlp::FileNameEditorWidget::fileNameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
