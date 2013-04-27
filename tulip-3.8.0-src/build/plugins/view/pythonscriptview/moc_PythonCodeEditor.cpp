/****************************************************************************
** Meta object code from reading C++ file 'PythonCodeEditor.h'
**
** Created: Fri Apr 26 16:36:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/view/pythonscriptview/PythonCodeEditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PythonCodeEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FindReplaceDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      44,   18,   39,   18, 0x0a,
      53,   18,   39,   18, 0x0a,
      65,   18,   18,   18, 0x0a,
      81,   18,   18,   18, 0x0a,
      96,   18,   18,   18, 0x0a,
     121,  113,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FindReplaceDialog[] = {
    "FindReplaceDialog\0\0textToFindChanged()\0"
    "bool\0doFind()\0doReplace()\0doReplaceFind()\0"
    "doReplaceAll()\0setResetSearch()\0toggled\0"
    "regexpToggled(bool)\0"
};

void FindReplaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FindReplaceDialog *_t = static_cast<FindReplaceDialog *>(_o);
        switch (_id) {
        case 0: _t->textToFindChanged(); break;
        case 1: { bool _r = _t->doFind();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->doReplace();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->doReplaceFind(); break;
        case 4: _t->doReplaceAll(); break;
        case 5: _t->setResetSearch(); break;
        case 6: _t->regexpToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FindReplaceDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FindReplaceDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FindReplaceDialog,
      qt_meta_data_FindReplaceDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FindReplaceDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FindReplaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FindReplaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FindReplaceDialog))
        return static_cast<void*>(const_cast< FindReplaceDialog*>(this));
    if (!strcmp(_clname, "Ui::FindReplaceDialogData"))
        return static_cast< Ui::FindReplaceDialogData*>(const_cast< FindReplaceDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int FindReplaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_PythonCodeEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      48,   46,   17,   17, 0x09,
      80,   17,   17,   17, 0x09,
     103,   17,   17,   17, 0x09,
     117,   17,   17,   17, 0x09,
     140,   17,   17,   17, 0x09,
     169,  158,   17,   17, 0x09,
     198,   17,   17,   17, 0x29,
     223,  158,   17,   17, 0x09,
     254,   17,   17,   17, 0x29,
     281,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PythonCodeEditor[] = {
    "PythonCodeEditor\0\0updateLineNumberAreaWidth()\0"
    ",\0updateLineNumberArea(QRect,int)\0"
    "resetExtraSelections()\0matchParens()\0"
    "highlightCurrentLine()\0highlightErrors()\0"
    "dotContext\0showAutoCompletionList(bool)\0"
    "showAutoCompletionList()\0"
    "updateAutoCompletionList(bool)\0"
    "updateAutoCompletionList()\0"
    "highlightSelection()\0"
};

void PythonCodeEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PythonCodeEditor *_t = static_cast<PythonCodeEditor *>(_o);
        switch (_id) {
        case 0: _t->updateLineNumberAreaWidth(); break;
        case 1: _t->updateLineNumberArea((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->resetExtraSelections(); break;
        case 3: _t->matchParens(); break;
        case 4: _t->highlightCurrentLine(); break;
        case 5: _t->highlightErrors(); break;
        case 6: _t->showAutoCompletionList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showAutoCompletionList(); break;
        case 8: _t->updateAutoCompletionList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->updateAutoCompletionList(); break;
        case 10: _t->highlightSelection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PythonCodeEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PythonCodeEditor::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_PythonCodeEditor,
      qt_meta_data_PythonCodeEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PythonCodeEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PythonCodeEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PythonCodeEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PythonCodeEditor))
        return static_cast<void*>(const_cast< PythonCodeEditor*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int PythonCodeEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
