/****************************************************************************
** Meta object code from reading C++ file 'PropertyWidget.h'
**
** Created: Tue Apr 30 11:12:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/PropertyWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PropertyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   16,   15,   15, 0x05,
      97,   16,   15,   15, 0x05,
     174,  161,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     207,   15,   15,   15, 0x0a,
     233,  229,   15,   15, 0x08,
     263,  257,   15,   15, 0x0a,
     303,   15,   15,   15, 0x0a,
     328,  326,   15,   15, 0x0a,
     357,  326,   15,   15, 0x0a,
     390,  326,   15,   15, 0x0a,
     423,   15,   15,   15, 0x0a,
     445,   15,   15,   15, 0x0a,
     457,   15,   15,   15, 0x0a,
     466,   15,   15,   15, 0x0a,
     480,   15,   15,   15, 0x0a,
     494,   15,   15,   15, 0x0a,
     513,   15,   15,   15, 0x0a,
     531,   15,   15,   15, 0x0a,
     549,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PropertyWidget[] = {
    "PropertyWidget\0\0,,property,value\0"
    "tulipNodePropertyChanged(tlp::Graph*,tlp::node,QString,QString)\0"
    "tulipEdgePropertyChanged(tlp::Graph*,tlp::edge,QString,QString)\0"
    "eltId,isNode\0showElementProperties(uint,bool)\0"
    "setGraph(tlp::Graph*)\0pos\0"
    "showContextMenu(QPoint)\0,name\0"
    "changeProperty(tlp::Graph*,std::string)\0"
    "selectNodeOrEdge(bool)\0,\0"
    "changePropertyValue(int,int)\0"
    "changePropertyNodeValue(int,int)\0"
    "changePropertyEdgeValue(int,int)\0"
    "filterSelection(bool)\0scroll(int)\0"
    "update()\0updateNodes()\0updateEdges()\0"
    "updateNbElements()\0setAllEdgeValue()\0"
    "setAllNodeValue()\0setAll()\0"
};

void PropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertyWidget *_t = static_cast<PropertyWidget *>(_o);
        switch (_id) {
        case 0: _t->tulipNodePropertyChanged((*reinterpret_cast< tlp::Graph*(*)>(_a[1])),(*reinterpret_cast< const tlp::node(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->tulipEdgePropertyChanged((*reinterpret_cast< tlp::Graph*(*)>(_a[1])),(*reinterpret_cast< const tlp::edge(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: _t->showElementProperties((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->setGraph((*reinterpret_cast< tlp::Graph*(*)>(_a[1]))); break;
        case 4: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->changeProperty((*reinterpret_cast< tlp::Graph*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 6: _t->selectNodeOrEdge((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->changePropertyValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->changePropertyNodeValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->changePropertyEdgeValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->filterSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->scroll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->update(); break;
        case 13: _t->updateNodes(); break;
        case 14: _t->updateEdges(); break;
        case 15: _t->updateNbElements(); break;
        case 16: _t->setAllEdgeValue(); break;
        case 17: _t->setAllNodeValue(); break;
        case 18: _t->setAll(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PropertyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PropertyWidget::staticMetaObject = {
    { &tlp::TulipTableWidget::staticMetaObject, qt_meta_stringdata_PropertyWidget,
      qt_meta_data_PropertyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyWidget))
        return static_cast<void*>(const_cast< PropertyWidget*>(this));
    typedef tlp::TulipTableWidget QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef tlp::TulipTableWidget QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void PropertyWidget::tulipNodePropertyChanged(tlp::Graph * _t1, const tlp::node & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PropertyWidget::tulipEdgePropertyChanged(tlp::Graph * _t1, const tlp::edge & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PropertyWidget::showElementProperties(unsigned int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_ChooseFileNameDialog[] = {

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
      22,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ChooseFileNameDialog[] = {
    "ChooseFileNameDialog\0\0openFile()\0"
};

void ChooseFileNameDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChooseFileNameDialog *_t = static_cast<ChooseFileNameDialog *>(_o);
        switch (_id) {
        case 0: _t->openFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ChooseFileNameDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChooseFileNameDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChooseFileNameDialog,
      qt_meta_data_ChooseFileNameDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChooseFileNameDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChooseFileNameDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChooseFileNameDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChooseFileNameDialog))
        return static_cast<void*>(const_cast< ChooseFileNameDialog*>(this));
    if (!strcmp(_clname, "Ui::ChooseFileNameDialogData"))
        return static_cast< Ui::ChooseFileNameDialogData*>(const_cast< ChooseFileNameDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChooseFileNameDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
