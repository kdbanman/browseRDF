/****************************************************************************
** Meta object code from reading C++ file 'TulipTableWidget.h'
**
** Created: Fri Apr 26 16:35:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/TulipTableWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TulipTableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__LabelEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_tlp__LabelEditor[] = {
    "tlp::LabelEditor\0"
};

void tlp::LabelEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tlp::LabelEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::LabelEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__LabelEditor,
      qt_meta_data_tlp__LabelEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::LabelEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::LabelEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::LabelEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__LabelEditor))
        return static_cast<void*>(const_cast< LabelEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::LabelEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_tlp__SizeEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      34,   16,   16,   16, 0x08,
      51,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__SizeEditor[] = {
    "tlp::SizeEditor\0\0changeW(QString)\0"
    "changeH(QString)\0changeD(QString)\0"
};

void tlp::SizeEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SizeEditor *_t = static_cast<SizeEditor *>(_o);
        switch (_id) {
        case 0: _t->changeW((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->changeH((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->changeD((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::SizeEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::SizeEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__SizeEditor,
      qt_meta_data_tlp__SizeEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::SizeEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::SizeEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::SizeEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__SizeEditor))
        return static_cast<void*>(const_cast< SizeEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::SizeEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_tlp__CoordEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      35,   17,   17,   17, 0x08,
      52,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__CoordEditor[] = {
    "tlp::CoordEditor\0\0changeX(QString)\0"
    "changeY(QString)\0changeZ(QString)\0"
};

void tlp::CoordEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CoordEditor *_t = static_cast<CoordEditor *>(_o);
        switch (_id) {
        case 0: _t->changeX((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->changeY((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->changeZ((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::CoordEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::CoordEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__CoordEditor,
      qt_meta_data_tlp__CoordEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::CoordEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::CoordEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::CoordEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__CoordEditor))
        return static_cast<void*>(const_cast< CoordEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::CoordEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_tlp__ListItemPushButton[] = {

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
      25,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__ListItemPushButton[] = {
    "tlp::ListItemPushButton\0\0showListDialog()\0"
};

void tlp::ListItemPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ListItemPushButton *_t = static_cast<ListItemPushButton *>(_o);
        switch (_id) {
        case 0: _t->showListDialog(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tlp::ListItemPushButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::ListItemPushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_tlp__ListItemPushButton,
      qt_meta_data_tlp__ListItemPushButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::ListItemPushButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::ListItemPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::ListItemPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__ListItemPushButton))
        return static_cast<void*>(const_cast< ListItemPushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int tlp::ListItemPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_tlp__TulipTableWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      45,   22,   22,   22, 0x0a,
      63,   22,   22,   22, 0x0a,
      85,   22,   22,   22, 0x0a,
     103,   22,   22,   22, 0x0a,

 // properties: name, type, flags
     137,  130, 0x43095107,
     148,  130, 0x43095107,
     164,  159, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_tlp__TulipTableWidget[] = {
    "tlp::TulipTableWidget\0\0setBackColor1(QColor)\0"
    "resetBackColor1()\0setBackColor2(QColor)\0"
    "resetBackColor2()\0setUpdateColumnTitle(bool)\0"
    "QColor\0backColor1\0backColor2\0bool\0"
    "updateColumnTitle\0"
};

void tlp::TulipTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TulipTableWidget *_t = static_cast<TulipTableWidget *>(_o);
        switch (_id) {
        case 0: _t->setBackColor1((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->resetBackColor1(); break;
        case 2: _t->setBackColor2((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->resetBackColor2(); break;
        case 4: _t->setUpdateColumnTitle((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::TulipTableWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::TulipTableWidget::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_tlp__TulipTableWidget,
      qt_meta_data_tlp__TulipTableWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::TulipTableWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::TulipTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::TulipTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__TulipTableWidget))
        return static_cast<void*>(const_cast< TulipTableWidget*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int tlp::TulipTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QColor*>(_v) = getBackColor1(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = getBackColor2(); break;
        case 2: *reinterpret_cast< bool*>(_v) = getUpdateColumnTitle(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBackColor1(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setBackColor2(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setUpdateColumnTitle(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 0: resetBackColor1(); break;
        case 1: resetBackColor2(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
