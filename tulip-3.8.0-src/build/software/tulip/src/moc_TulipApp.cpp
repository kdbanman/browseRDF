/****************************************************************************
** Meta object code from reading C++ file 'TulipApp.h'
**
** Created: Tue Apr 30 11:13:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../software/tulip/include/TulipApp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TulipApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TulipApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      31,    9,    9,    9, 0x0a,
      52,    9,    9,    9, 0x0a,
      67,   65,    9,    9, 0x0a,
     101,   99,    9,    9, 0x0a,
     126,    9,    9,    9, 0x09,
     146,    9,    9,    9, 0x09,
     158,    9,    9,    9, 0x09,
     171,    9,    9,    9, 0x09,
     181,    9,    9,    9, 0x09,
     212,  208,    9,    9, 0x09,
     240,    9,    9,    9, 0x09,
     251,    9,    9,    9, 0x09,
     262,    9,    9,    9, 0x09,
     282,  275,    9,    9, 0x09,
     305,    9,  300,    9, 0x09,
     319,    9,    9,    9, 0x09,
     340,  334,    9,    9, 0x09,
     369,  354,  300,    9, 0x09,
     411,    9,    9,    9, 0x09,
     422,    9,    9,    9, 0x09,
     436,    9,    9,    9, 0x09,
     450,    9,    9,    9, 0x09,
     472,    9,    9,    9, 0x09,
     494,    9,    9,    9, 0x09,
     519,    9,    9,    9, 0x09,
     550,    9,    9,    9, 0x09,
     579,  334,    9,    9, 0x09,
     595,    9,    9,    9, 0x09,
     605,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TulipApp[] = {
    "TulipApp\0\0clearMemoryChecker()\0"
    "printMemoryChecker()\0startTulip()\0,\0"
    "fileOpen(std::string*,QString&)\0e\0"
    "closeEvent(QCloseEvent*)\0helpDocumentation()\0"
    "helpAbout()\0preference()\0plugins()\0"
    "displayRestartForPlugins()\0msg\0"
    "helpAssistantError(QString)\0fileExit()\0"
    "fileSave()\0fileSaveAs()\0action\0"
    "fileNew(QAction*)\0bool\0fileNew(bool)\0"
    "fileCloseTab()\0index\0closeTab(int)\0"
    "name,graphName\0createController(std::string,std::string)\0"
    "fileOpen()\0importGraph()\0exportGraph()\0"
    "importGraph(QAction*)\0exportGraph(QAction*)\0"
    "windowsMenuAboutToShow()\0"
    "windowsMenuActivated(QAction*)\0"
    "deletePluginsUpdateChecker()\0"
    "tabChanged(int)\0cascade()\0closeAll()\0"
};

void TulipApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TulipApp *_t = static_cast<TulipApp *>(_o);
        switch (_id) {
        case 0: _t->clearMemoryChecker(); break;
        case 1: _t->printMemoryChecker(); break;
        case 2: _t->startTulip(); break;
        case 3: _t->fileOpen((*reinterpret_cast< std::string*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 5: _t->helpDocumentation(); break;
        case 6: _t->helpAbout(); break;
        case 7: _t->preference(); break;
        case 8: _t->plugins(); break;
        case 9: _t->displayRestartForPlugins(); break;
        case 10: _t->helpAssistantError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->fileExit(); break;
        case 12: _t->fileSave(); break;
        case 13: _t->fileSaveAs(); break;
        case 14: _t->fileNew((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 15: { bool _r = _t->fileNew((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->fileCloseTab(); break;
        case 17: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: { bool _r = _t->createController((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: _t->fileOpen(); break;
        case 20: _t->importGraph(); break;
        case 21: _t->exportGraph(); break;
        case 22: _t->importGraph((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 23: _t->exportGraph((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 24: _t->windowsMenuAboutToShow(); break;
        case 25: _t->windowsMenuActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 26: _t->deletePluginsUpdateChecker(); break;
        case 27: _t->tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->cascade(); break;
        case 29: _t->closeAll(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TulipApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TulipApp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TulipApp,
      qt_meta_data_TulipApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TulipApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TulipApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TulipApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TulipApp))
        return static_cast<void*>(const_cast< TulipApp*>(this));
    if (!strcmp(_clname, "Ui::TulipData"))
        return static_cast< Ui::TulipData*>(const_cast< TulipApp*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TulipApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
