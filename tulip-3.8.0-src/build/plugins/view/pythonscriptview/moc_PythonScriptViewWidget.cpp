/****************************************************************************
** Meta object code from reading C++ file 'PythonScriptViewWidget.h'
**
** Created: Mon Apr 29 02:04:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/view/pythonscriptview/PythonScriptViewWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PythonScriptViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PythonScriptViewWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      43,   23,   23,   23, 0x0a,
      62,   23,   23,   23, 0x0a,
      86,   23,   23,   23, 0x0a,
     112,   23,   23,   23, 0x0a,
     138,   23,   23,   23, 0x0a,
     161,  155,   23,   23, 0x0a,
     189,  184,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PythonScriptViewWidget[] = {
    "PythonScriptViewWidget\0\0decreaseFontSize()\0"
    "increaseFontSize()\0mainScriptTextChanged()\0"
    "moduleScriptTextChanged()\0"
    "pluginScriptTextChanged()\0resizeToolBars()\0"
    "index\0currentTabChanged(int)\0link\0"
    "scrollToEditorLine(QUrl)\0"
};

void PythonScriptViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonScriptViewWidget *_t = static_cast<PythonScriptViewWidget *>(_o);
        switch (_id) {
        case 0: _t->decreaseFontSize(); break;
        case 1: _t->increaseFontSize(); break;
        case 2: _t->mainScriptTextChanged(); break;
        case 3: _t->moduleScriptTextChanged(); break;
        case 4: _t->pluginScriptTextChanged(); break;
        case 5: _t->resizeToolBars(); break;
        case 6: _t->currentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->scrollToEditorLine((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonScriptViewWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonScriptViewWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PythonScriptViewWidget,
      qt_meta_data_PythonScriptViewWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonScriptViewWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonScriptViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonScriptViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonScriptViewWidget))
        return static_cast<void*>(const_cast< PythonScriptViewWidget*>(this));
    if (!strcmp(_clname, "Ui::PythonScriptViewWidgetData"))
        return static_cast< Ui::PythonScriptViewWidgetData*>(const_cast< PythonScriptViewWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PythonScriptViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
