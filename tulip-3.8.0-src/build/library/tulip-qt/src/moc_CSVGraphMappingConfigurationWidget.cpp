/****************************************************************************
** Meta object code from reading C++ file 'CSVGraphMappingConfigurationWidget.h'
**
** Created: Mon Apr 29 01:40:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/CSVGraphMappingConfigurationWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSVGraphMappingConfigurationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__GraphPropertiesSelectionComboBox[] = {

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

static const char qt_meta_stringdata_tlp__GraphPropertiesSelectionComboBox[] = {
    "tlp::GraphPropertiesSelectionComboBox\0"
};

void tlp::GraphPropertiesSelectionComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tlp::GraphPropertiesSelectionComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::GraphPropertiesSelectionComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_tlp__GraphPropertiesSelectionComboBox,
      qt_meta_data_tlp__GraphPropertiesSelectionComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::GraphPropertiesSelectionComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::GraphPropertiesSelectionComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::GraphPropertiesSelectionComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__GraphPropertiesSelectionComboBox))
        return static_cast<void*>(const_cast< GraphPropertiesSelectionComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int tlp::GraphPropertiesSelectionComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_tlp__CSVGraphMappingConfigurationWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      41,   40,   40,   40, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   40,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tlp__CSVGraphMappingConfigurationWidget[] = {
    "tlp::CSVGraphMappingConfigurationWidget\0"
    "\0mappingChanged()\0createNewProperty()\0"
};

void tlp::CSVGraphMappingConfigurationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSVGraphMappingConfigurationWidget *_t = static_cast<CSVGraphMappingConfigurationWidget *>(_o);
        switch (_id) {
        case 0: _t->mappingChanged(); break;
        case 1: _t->createNewProperty(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData tlp::CSVGraphMappingConfigurationWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::CSVGraphMappingConfigurationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tlp__CSVGraphMappingConfigurationWidget,
      qt_meta_data_tlp__CSVGraphMappingConfigurationWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::CSVGraphMappingConfigurationWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::CSVGraphMappingConfigurationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::CSVGraphMappingConfigurationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__CSVGraphMappingConfigurationWidget))
        return static_cast<void*>(const_cast< CSVGraphMappingConfigurationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int tlp::CSVGraphMappingConfigurationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void tlp::CSVGraphMappingConfigurationWidget::mappingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
