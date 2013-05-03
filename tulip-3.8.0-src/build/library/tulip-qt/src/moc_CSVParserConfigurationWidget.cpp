/****************************************************************************
** Meta object code from reading C++ file 'CSVParserConfigurationWidget.h'
**
** Created: Tue Apr 30 11:12:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/CSVParserConfigurationWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSVParserConfigurationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__CSVParserConfigurationWidgetEditableComboBox[] = {

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

static const char qt_meta_stringdata_tlp__CSVParserConfigurationWidgetEditableComboBox[] = {
    "tlp::CSVParserConfigurationWidgetEditableComboBox\0"
};

void tlp::CSVParserConfigurationWidgetEditableComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tlp::CSVParserConfigurationWidgetEditableComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::CSVParserConfigurationWidgetEditableComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_tlp__CSVParserConfigurationWidgetEditableComboBox,
      qt_meta_data_tlp__CSVParserConfigurationWidgetEditableComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::CSVParserConfigurationWidgetEditableComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::CSVParserConfigurationWidgetEditableComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::CSVParserConfigurationWidgetEditableComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__CSVParserConfigurationWidgetEditableComboBox))
        return static_cast<void*>(const_cast< CSVParserConfigurationWidgetEditableComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int tlp::CSVParserConfigurationWidgetEditableComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_tlp__CSVParserConfigurationWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   51,   34,   34, 0x0a,
      85,   34,   34,   34, 0x09,
     115,   34,   34,   34, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__CSVParserConfigurationWidget[] = {
    "tlp::CSVParserConfigurationWidget\0\0"
    "parserChanged()\0fileToOpen\0"
    "setFileToOpen(QString)\0"
    "changeFileNameButtonPressed()\0"
    "encodingChanged()\0"
};

void tlp::CSVParserConfigurationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSVParserConfigurationWidget *_t = static_cast<CSVParserConfigurationWidget *>(_o);
        switch (_id) {
        case 0: _t->parserChanged(); break;
        case 1: _t->setFileToOpen((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->changeFileNameButtonPressed(); break;
        case 3: _t->encodingChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::CSVParserConfigurationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::CSVParserConfigurationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__CSVParserConfigurationWidget,
      qt_meta_data_tlp__CSVParserConfigurationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::CSVParserConfigurationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::CSVParserConfigurationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::CSVParserConfigurationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__CSVParserConfigurationWidget))
        return static_cast<void*>(const_cast< CSVParserConfigurationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::CSVParserConfigurationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void tlp::CSVParserConfigurationWidget::parserChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
