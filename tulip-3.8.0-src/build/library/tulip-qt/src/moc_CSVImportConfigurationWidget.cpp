/****************************************************************************
** Meta object code from reading C++ file 'CSVImportConfigurationWidget.h'
**
** Created: Tue Apr 30 11:12:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/CSVImportConfigurationWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSVImportConfigurationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__PropertyConfigurationWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   34,   33,   33, 0x05,
      76,   70,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      94,   33,   33,   33, 0x08,
     113,   70,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__PropertyConfigurationWidget[] = {
    "tlp::PropertyConfigurationWidget\0\0"
    "newName\0propertyNameChange(QString)\0"
    "state\0stateChange(bool)\0nameEditFinished()\0"
    "useStateChanged(int)\0"
};

void tlp::PropertyConfigurationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertyConfigurationWidget *_t = static_cast<PropertyConfigurationWidget *>(_o);
        switch (_id) {
        case 0: _t->propertyNameChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->stateChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->nameEditFinished(); break;
        case 3: _t->useStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::PropertyConfigurationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::PropertyConfigurationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__PropertyConfigurationWidget,
      qt_meta_data_tlp__PropertyConfigurationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::PropertyConfigurationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::PropertyConfigurationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::PropertyConfigurationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__PropertyConfigurationWidget))
        return static_cast<void*>(const_cast< PropertyConfigurationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::PropertyConfigurationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void tlp::PropertyConfigurationWidget::propertyNameChange(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tlp::PropertyConfigurationWidget::stateChange(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_tlp__CSVImportConfigurationWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   53,   34,   34, 0x09,
      96,   90,   34,   34, 0x09,
     126,   90,   34,   34, 0x09,
     152,   90,   34,   34, 0x09,
     176,   34,   34,   34, 0x09,
     197,   34,   34,   34, 0x09,
     240,  227,   34,   34, 0x09,
     279,  269,   34,   34, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__CSVImportConfigurationWidget[] = {
    "tlp::CSVImportConfigurationWidget\0\0"
    "fileInfoChanged()\0filter\0"
    "filterPreviewLineNumber(bool)\0value\0"
    "previewLineNumberChanged(int)\0"
    "fromLineValueChanged(int)\0"
    "toLineValueChanged(int)\0updateTableHeaders()\0"
    "useFirstLineAsHeaderUpdated()\0"
    "propertyName\0propertyNameChanged(QString)\0"
    "activated\0propertyStateChanged(bool)\0"
};

void tlp::CSVImportConfigurationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSVImportConfigurationWidget *_t = static_cast<CSVImportConfigurationWidget *>(_o);
        switch (_id) {
        case 0: _t->fileInfoChanged(); break;
        case 1: _t->filterPreviewLineNumber((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->previewLineNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->fromLineValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->toLineValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateTableHeaders(); break;
        case 6: _t->useFirstLineAsHeaderUpdated(); break;
        case 7: _t->propertyNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->propertyStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::CSVImportConfigurationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::CSVImportConfigurationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__CSVImportConfigurationWidget,
      qt_meta_data_tlp__CSVImportConfigurationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::CSVImportConfigurationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::CSVImportConfigurationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::CSVImportConfigurationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__CSVImportConfigurationWidget))
        return static_cast<void*>(const_cast< CSVImportConfigurationWidget*>(this));
    if (!strcmp(_clname, "CSVContentHandler"))
        return static_cast< CSVContentHandler*>(const_cast< CSVImportConfigurationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::CSVImportConfigurationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void tlp::CSVImportConfigurationWidget::fileInfoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
