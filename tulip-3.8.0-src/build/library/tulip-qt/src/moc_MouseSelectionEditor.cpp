/****************************************************************************
** Meta object code from reading C++ file 'MouseSelectionEditor.h'
**
** Created: Fri Apr 26 16:35:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../library/tulip-qt/include/tulip/MouseSelectionEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MouseSelectionEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tlp__MouseSelectionEditor[] = {

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
      27,   26,   26,   26, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_tlp__MouseSelectionEditor[] = {
    "tlp::MouseSelectionEditor\0\0"
    "glMainWidgetDestroyed(QObject*)\0"
};

void tlp::MouseSelectionEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MouseSelectionEditor *_t = static_cast<MouseSelectionEditor *>(_o);
        switch (_id) {
        case 0: _t->glMainWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tlp::MouseSelectionEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tlp::MouseSelectionEditor::staticMetaObject = {
    { &InteractorComponent::staticMetaObject, qt_meta_stringdata_tlp__MouseSelectionEditor,
      qt_meta_data_tlp__MouseSelectionEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tlp::MouseSelectionEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tlp::MouseSelectionEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tlp::MouseSelectionEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tlp__MouseSelectionEditor))
        return static_cast<void*>(const_cast< MouseSelectionEditor*>(this));
    return InteractorComponent::qt_metacast(_clname);
}

int tlp::MouseSelectionEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InteractorComponent::qt_metacall(_c, _id, _a);
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
