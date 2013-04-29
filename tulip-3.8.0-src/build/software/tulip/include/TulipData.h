/********************************************************************************
** Form generated from reading UI file 'Tulip.ui'
**
** Created: Mon Apr 29 01:53:49 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TULIPDATA_H
#define TULIPDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QtGui/QWorkspace"

QT_BEGIN_NAMESPACE

class Ui_TulipData
{
public:
    QAction *fileOpenAction;
    QAction *fileCloseTabAction;
    QAction *fileSaveAction;
    QAction *fileSaveAsAction;
    QAction *fileExitAction;
    QAction *editUndoAction;
    QAction *editRedoAction;
    QAction *editCutAction;
    QAction *editCopyAction;
    QAction *editPasteAction;
    QAction *editFindAction;
    QAction *helpDocumentationAction;
    QAction *pluginsAction;
    QAction *helpAboutAction;
    QAction *force_ratio;
    QAction *map_metric;
    QAction *enable_morphing;
    QAction *grid_option;
    QAction *Action;
    QAction *is_acyclic;
    QAction *is_biconnected;
    QAction *is_triconnected;
    QAction *is_planar;
    QAction *is_outer_planar;
    QAction *is_simple;
    QAction *is_directed_tree;
    QAction *menunew_itemAction;
    QAction *make_acyclic;
    QAction *make_simple;
    QAction *make_biconnected;
    QAction *make_connected;
    QAction *is_connected;
    QAction *Reverse_selected_edgesAction;
    QAction *editDeselect_allAction;
    QAction *editReverse_selectionAction;
    QAction *editAction;
    QAction *editDelete_selectionAction;
    QAction *editCreate_subgraphAction;
    QAction *editCreate_groupAction;
    QAction *editSelect_AllAction;
    QAction *tooltips;
    QAction *is_free_tree;
    QAction *make_directed;
    QAction *filePreferenceAction;
    QActionGroup *mouseActionGroup;
    QAction *addEdgeAction;
    QAction *addNodeAction;
    QAction *deleteAction;
    QAction *zoomAction;
    QAction *navigate_action;
    QAction *moveSelectionAction;
    QAction *selectionAction;
    QAction *magicSelectionAction;
    QAction *selectAction;
    QAction *editEdgeBendAction;
    QWidget *centralWidget;
    QVBoxLayout *vboxLayout;
    QTabWidget *centralTabWidget;
    QWidget *tab;
    QToolBar *toolBar;
    QToolBar *graphToolBar;
    QMenuBar *menubar;
    QMenu *windowsMenu;
    QMenu *fileMenu;
    QMenu *helpMenu;

    void setupUi(QMainWindow *TulipData)
    {
        if (TulipData->objectName().isEmpty())
            TulipData->setObjectName(QString::fromUtf8("TulipData"));
        TulipData->resize(1005, 700);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        TulipData->setWindowIcon(icon);
        fileOpenAction = new QAction(TulipData);
        fileOpenAction->setObjectName(QString::fromUtf8("fileOpenAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/i_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileOpenAction->setIcon(icon1);
        fileCloseTabAction = new QAction(TulipData);
        fileCloseTabAction->setObjectName(QString::fromUtf8("fileCloseTabAction"));
        fileCloseTabAction->setEnabled(false);
        fileSaveAction = new QAction(TulipData);
        fileSaveAction->setObjectName(QString::fromUtf8("fileSaveAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/i_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileSaveAction->setIcon(icon2);
        fileSaveAsAction = new QAction(TulipData);
        fileSaveAsAction->setObjectName(QString::fromUtf8("fileSaveAsAction"));
        fileExitAction = new QAction(TulipData);
        fileExitAction->setObjectName(QString::fromUtf8("fileExitAction"));
        editUndoAction = new QAction(TulipData);
        editUndoAction->setObjectName(QString::fromUtf8("editUndoAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("image7"), QSize(), QIcon::Normal, QIcon::Off);
        editUndoAction->setIcon(icon3);
        editRedoAction = new QAction(TulipData);
        editRedoAction->setObjectName(QString::fromUtf8("editRedoAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("image8"), QSize(), QIcon::Normal, QIcon::Off);
        editRedoAction->setIcon(icon4);
        editCutAction = new QAction(TulipData);
        editCutAction->setObjectName(QString::fromUtf8("editCutAction"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("image9"), QSize(), QIcon::Normal, QIcon::Off);
        editCutAction->setIcon(icon5);
        editCopyAction = new QAction(TulipData);
        editCopyAction->setObjectName(QString::fromUtf8("editCopyAction"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("image10"), QSize(), QIcon::Normal, QIcon::Off);
        editCopyAction->setIcon(icon6);
        editPasteAction = new QAction(TulipData);
        editPasteAction->setObjectName(QString::fromUtf8("editPasteAction"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("image11"), QSize(), QIcon::Normal, QIcon::Off);
        editPasteAction->setIcon(icon7);
        editFindAction = new QAction(TulipData);
        editFindAction->setObjectName(QString::fromUtf8("editFindAction"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("image12"), QSize(), QIcon::Normal, QIcon::Off);
        editFindAction->setIcon(icon8);
        helpDocumentationAction = new QAction(TulipData);
        helpDocumentationAction->setObjectName(QString::fromUtf8("helpDocumentationAction"));
        pluginsAction = new QAction(TulipData);
        pluginsAction->setObjectName(QString::fromUtf8("pluginsAction"));
        helpAboutAction = new QAction(TulipData);
        helpAboutAction->setObjectName(QString::fromUtf8("helpAboutAction"));
        force_ratio = new QAction(TulipData);
        force_ratio->setObjectName(QString::fromUtf8("force_ratio"));
        force_ratio->setCheckable(true);
        force_ratio->setChecked(true);
        map_metric = new QAction(TulipData);
        map_metric->setObjectName(QString::fromUtf8("map_metric"));
        map_metric->setCheckable(true);
        map_metric->setChecked(true);
        enable_morphing = new QAction(TulipData);
        enable_morphing->setObjectName(QString::fromUtf8("enable_morphing"));
        enable_morphing->setCheckable(true);
        grid_option = new QAction(TulipData);
        grid_option->setObjectName(QString::fromUtf8("grid_option"));
        Action = new QAction(TulipData);
        Action->setObjectName(QString::fromUtf8("Action"));
        is_acyclic = new QAction(TulipData);
        is_acyclic->setObjectName(QString::fromUtf8("is_acyclic"));
        is_biconnected = new QAction(TulipData);
        is_biconnected->setObjectName(QString::fromUtf8("is_biconnected"));
        is_triconnected = new QAction(TulipData);
        is_triconnected->setObjectName(QString::fromUtf8("is_triconnected"));
        is_planar = new QAction(TulipData);
        is_planar->setObjectName(QString::fromUtf8("is_planar"));
        is_outer_planar = new QAction(TulipData);
        is_outer_planar->setObjectName(QString::fromUtf8("is_outer_planar"));
        is_simple = new QAction(TulipData);
        is_simple->setObjectName(QString::fromUtf8("is_simple"));
        is_directed_tree = new QAction(TulipData);
        is_directed_tree->setObjectName(QString::fromUtf8("is_directed_tree"));
        menunew_itemAction = new QAction(TulipData);
        menunew_itemAction->setObjectName(QString::fromUtf8("menunew_itemAction"));
        make_acyclic = new QAction(TulipData);
        make_acyclic->setObjectName(QString::fromUtf8("make_acyclic"));
        make_acyclic->setEnabled(true);
        make_simple = new QAction(TulipData);
        make_simple->setObjectName(QString::fromUtf8("make_simple"));
        make_simple->setEnabled(true);
        make_biconnected = new QAction(TulipData);
        make_biconnected->setObjectName(QString::fromUtf8("make_biconnected"));
        make_connected = new QAction(TulipData);
        make_connected->setObjectName(QString::fromUtf8("make_connected"));
        is_connected = new QAction(TulipData);
        is_connected->setObjectName(QString::fromUtf8("is_connected"));
        Reverse_selected_edgesAction = new QAction(TulipData);
        Reverse_selected_edgesAction->setObjectName(QString::fromUtf8("Reverse_selected_edgesAction"));
        editDeselect_allAction = new QAction(TulipData);
        editDeselect_allAction->setObjectName(QString::fromUtf8("editDeselect_allAction"));
        editReverse_selectionAction = new QAction(TulipData);
        editReverse_selectionAction->setObjectName(QString::fromUtf8("editReverse_selectionAction"));
        editAction = new QAction(TulipData);
        editAction->setObjectName(QString::fromUtf8("editAction"));
        editDelete_selectionAction = new QAction(TulipData);
        editDelete_selectionAction->setObjectName(QString::fromUtf8("editDelete_selectionAction"));
        editCreate_subgraphAction = new QAction(TulipData);
        editCreate_subgraphAction->setObjectName(QString::fromUtf8("editCreate_subgraphAction"));
        editCreate_groupAction = new QAction(TulipData);
        editCreate_groupAction->setObjectName(QString::fromUtf8("editCreate_groupAction"));
        editSelect_AllAction = new QAction(TulipData);
        editSelect_AllAction->setObjectName(QString::fromUtf8("editSelect_AllAction"));
        tooltips = new QAction(TulipData);
        tooltips->setObjectName(QString::fromUtf8("tooltips"));
        tooltips->setCheckable(true);
        is_free_tree = new QAction(TulipData);
        is_free_tree->setObjectName(QString::fromUtf8("is_free_tree"));
        make_directed = new QAction(TulipData);
        make_directed->setObjectName(QString::fromUtf8("make_directed"));
        filePreferenceAction = new QAction(TulipData);
        filePreferenceAction->setObjectName(QString::fromUtf8("filePreferenceAction"));
        mouseActionGroup = new QActionGroup(TulipData);
        mouseActionGroup->setObjectName(QString::fromUtf8("mouseActionGroup"));
        addEdgeAction = new QAction(mouseActionGroup);
        addEdgeAction->setObjectName(QString::fromUtf8("addEdgeAction"));
        addEdgeAction->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../../../../../../../:/i_addedge.png"), QSize(), QIcon::Normal, QIcon::Off);
        addEdgeAction->setIcon(icon9);
        addNodeAction = new QAction(mouseActionGroup);
        addNodeAction->setObjectName(QString::fromUtf8("addNodeAction"));
        addNodeAction->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../../../../../../../:/i_addnode.png"), QSize(), QIcon::Normal, QIcon::Off);
        addNodeAction->setIcon(icon10);
        deleteAction = new QAction(mouseActionGroup);
        deleteAction->setObjectName(QString::fromUtf8("deleteAction"));
        deleteAction->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("../../../../../../../:/i_del.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteAction->setIcon(icon11);
        zoomAction = new QAction(mouseActionGroup);
        zoomAction->setObjectName(QString::fromUtf8("zoomAction"));
        zoomAction->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("../../../../../../../:/i_zoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomAction->setIcon(icon12);
        navigate_action = new QAction(mouseActionGroup);
        navigate_action->setObjectName(QString::fromUtf8("navigate_action"));
        navigate_action->setCheckable(true);
        navigate_action->setChecked(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8("../../../../../../../:/i_navigation.png"), QSize(), QIcon::Normal, QIcon::Off);
        navigate_action->setIcon(icon13);
        moveSelectionAction = new QAction(mouseActionGroup);
        moveSelectionAction->setObjectName(QString::fromUtf8("moveSelectionAction"));
        moveSelectionAction->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8("../../../../../../../:/i_move.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveSelectionAction->setIcon(icon14);
        selectionAction = new QAction(mouseActionGroup);
        selectionAction->setObjectName(QString::fromUtf8("selectionAction"));
        selectionAction->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8("../../../../../../../:/i_selection.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectionAction->setIcon(icon15);
        magicSelectionAction = new QAction(mouseActionGroup);
        magicSelectionAction->setObjectName(QString::fromUtf8("magicSelectionAction"));
        magicSelectionAction->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8("../../../../../../../:/i_magic.png"), QSize(), QIcon::Normal, QIcon::Off);
        magicSelectionAction->setIcon(icon16);
        selectAction = new QAction(mouseActionGroup);
        selectAction->setObjectName(QString::fromUtf8("selectAction"));
        selectAction->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8("../../../../../../../:/i_select.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectAction->setIcon(icon17);
        editEdgeBendAction = new QAction(mouseActionGroup);
        editEdgeBendAction->setObjectName(QString::fromUtf8("editEdgeBendAction"));
        editEdgeBendAction->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8("../../../../../../../:/i_bends.png"), QSize(), QIcon::Normal, QIcon::Off);
        editEdgeBendAction->setIcon(icon18);
        centralWidget = new QWidget(TulipData);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        vboxLayout = new QVBoxLayout(centralWidget);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        centralTabWidget = new QTabWidget(centralWidget);
        centralTabWidget->setObjectName(QString::fromUtf8("centralTabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        centralTabWidget->addTab(tab, QString());

        vboxLayout->addWidget(centralTabWidget);

        TulipData->setCentralWidget(centralWidget);
        toolBar = new QToolBar(TulipData);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setOrientation(Qt::Horizontal);
        TulipData->addToolBar(Qt::TopToolBarArea, toolBar);
        graphToolBar = new QToolBar(TulipData);
        graphToolBar->setObjectName(QString::fromUtf8("graphToolBar"));
        graphToolBar->setOrientation(Qt::Horizontal);
        TulipData->addToolBar(Qt::TopToolBarArea, graphToolBar);
        menubar = new QMenuBar(TulipData);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1005, 21));
        windowsMenu = new QMenu(menubar);
        windowsMenu->setObjectName(QString::fromUtf8("windowsMenu"));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        helpMenu = new QMenu(menubar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        TulipData->setMenuBar(menubar);

        toolBar->addAction(fileOpenAction);
        toolBar->addAction(fileSaveAction);
        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(windowsMenu->menuAction());
        menubar->addAction(helpMenu->menuAction());
        fileMenu->addAction(fileOpenAction);
        fileMenu->addAction(fileSaveAction);
        fileMenu->addAction(fileSaveAsAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileCloseTabAction);
        fileMenu->addAction(fileExitAction);
        helpMenu->addAction(helpDocumentationAction);
        helpMenu->addSeparator();
        helpMenu->addAction(filePreferenceAction);
        helpMenu->addAction(pluginsAction);
        helpMenu->addSeparator();
        helpMenu->addAction(helpAboutAction);

        retranslateUi(TulipData);
        QObject::connect(fileOpenAction, SIGNAL(triggered()), TulipData, SLOT(fileOpen()));
        QObject::connect(fileCloseTabAction, SIGNAL(triggered()), TulipData, SLOT(fileCloseTab()));
        QObject::connect(fileSaveAction, SIGNAL(triggered()), TulipData, SLOT(fileSave()));
        QObject::connect(fileSaveAsAction, SIGNAL(triggered()), TulipData, SLOT(fileSaveAs()));
        QObject::connect(fileExitAction, SIGNAL(triggered()), TulipData, SLOT(fileExit()));
        QObject::connect(helpDocumentationAction, SIGNAL(triggered()), TulipData, SLOT(helpDocumentation()));
        QObject::connect(pluginsAction, SIGNAL(triggered()), TulipData, SLOT(plugins()));
        QObject::connect(helpAboutAction, SIGNAL(triggered()), TulipData, SLOT(helpAbout()));
        QObject::connect(filePreferenceAction, SIGNAL(triggered()), TulipData, SLOT(preference()));

        centralTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TulipData);
    } // setupUi

    void retranslateUi(QMainWindow *TulipData)
    {
        TulipData->setWindowTitle(QApplication::translate("TulipData", "Tulip", 0, QApplication::UnicodeUTF8));
        fileOpenAction->setText(QApplication::translate("TulipData", "&Open...", 0, QApplication::UnicodeUTF8));
        fileOpenAction->setIconText(QApplication::translate("TulipData", "Open", 0, QApplication::UnicodeUTF8));
        fileOpenAction->setShortcut(QApplication::translate("TulipData", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        fileCloseTabAction->setText(QApplication::translate("TulipData", "Close tab", 0, QApplication::UnicodeUTF8));
        fileCloseTabAction->setIconText(QApplication::translate("TulipData", "Close tab", 0, QApplication::UnicodeUTF8));
        fileSaveAction->setText(QApplication::translate("TulipData", "&Save", 0, QApplication::UnicodeUTF8));
        fileSaveAction->setIconText(QApplication::translate("TulipData", "Save", 0, QApplication::UnicodeUTF8));
        fileSaveAction->setShortcut(QApplication::translate("TulipData", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        fileSaveAsAction->setText(QApplication::translate("TulipData", "Save &As...", 0, QApplication::UnicodeUTF8));
        fileSaveAsAction->setIconText(QApplication::translate("TulipData", "Save As", 0, QApplication::UnicodeUTF8));
        fileSaveAsAction->setShortcut(QApplication::translate("TulipData", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        fileExitAction->setText(QApplication::translate("TulipData", "E&xit", 0, QApplication::UnicodeUTF8));
        fileExitAction->setIconText(QApplication::translate("TulipData", "Exit", 0, QApplication::UnicodeUTF8));
        fileExitAction->setShortcut(QApplication::translate("TulipData", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        editUndoAction->setText(QApplication::translate("TulipData", "&Undo", 0, QApplication::UnicodeUTF8));
        editUndoAction->setIconText(QApplication::translate("TulipData", "Undo", 0, QApplication::UnicodeUTF8));
        editUndoAction->setShortcut(QApplication::translate("TulipData", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        editRedoAction->setText(QApplication::translate("TulipData", "&Redo", 0, QApplication::UnicodeUTF8));
        editRedoAction->setIconText(QApplication::translate("TulipData", "Redo", 0, QApplication::UnicodeUTF8));
        editRedoAction->setShortcut(QApplication::translate("TulipData", "Ctrl+Y", 0, QApplication::UnicodeUTF8));
        editCutAction->setText(QApplication::translate("TulipData", "&Cut", 0, QApplication::UnicodeUTF8));
        editCutAction->setIconText(QApplication::translate("TulipData", "Cut", 0, QApplication::UnicodeUTF8));
        editCutAction->setShortcut(QApplication::translate("TulipData", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        editCopyAction->setText(QApplication::translate("TulipData", "C&opy", 0, QApplication::UnicodeUTF8));
        editCopyAction->setIconText(QApplication::translate("TulipData", "Copy", 0, QApplication::UnicodeUTF8));
        editCopyAction->setShortcut(QApplication::translate("TulipData", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        editPasteAction->setText(QApplication::translate("TulipData", "&Paste", 0, QApplication::UnicodeUTF8));
        editPasteAction->setIconText(QApplication::translate("TulipData", "Paste", 0, QApplication::UnicodeUTF8));
        editPasteAction->setShortcut(QApplication::translate("TulipData", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        editFindAction->setText(QApplication::translate("TulipData", "&Find...", 0, QApplication::UnicodeUTF8));
        editFindAction->setIconText(QApplication::translate("TulipData", "Find", 0, QApplication::UnicodeUTF8));
        editFindAction->setShortcut(QApplication::translate("TulipData", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        helpDocumentationAction->setText(QApplication::translate("TulipData", "&Documentation...", 0, QApplication::UnicodeUTF8));
        helpDocumentationAction->setIconText(QApplication::translate("TulipData", "Documentation", 0, QApplication::UnicodeUTF8));
        helpDocumentationAction->setShortcut(QString());
        pluginsAction->setText(QApplication::translate("TulipData", "&Plugins...", 0, QApplication::UnicodeUTF8));
        pluginsAction->setIconText(QApplication::translate("TulipData", "Plugins", 0, QApplication::UnicodeUTF8));
        helpAboutAction->setText(QApplication::translate("TulipData", "&About", 0, QApplication::UnicodeUTF8));
        helpAboutAction->setIconText(QApplication::translate("TulipData", "About", 0, QApplication::UnicodeUTF8));
        helpAboutAction->setShortcut(QString());
        force_ratio->setText(QApplication::translate("TulipData", "Force ratio", 0, QApplication::UnicodeUTF8));
        force_ratio->setIconText(QApplication::translate("TulipData", "Force ratio", 0, QApplication::UnicodeUTF8));
        map_metric->setText(QApplication::translate("TulipData", "Map Metric", 0, QApplication::UnicodeUTF8));
        map_metric->setIconText(QApplication::translate("TulipData", "Map Metric", 0, QApplication::UnicodeUTF8));
        enable_morphing->setText(QApplication::translate("TulipData", "Morphing", 0, QApplication::UnicodeUTF8));
        enable_morphing->setIconText(QApplication::translate("TulipData", "Morphing", 0, QApplication::UnicodeUTF8));
        grid_option->setText(QApplication::translate("TulipData", "Grid", 0, QApplication::UnicodeUTF8));
        grid_option->setIconText(QApplication::translate("TulipData", "Grid", 0, QApplication::UnicodeUTF8));
        Action->setText(QApplication::translate("TulipData", "Tests", 0, QApplication::UnicodeUTF8));
        Action->setIconText(QApplication::translate("TulipData", "Unnamed", 0, QApplication::UnicodeUTF8));
        is_acyclic->setText(QApplication::translate("TulipData", "Acyclic", 0, QApplication::UnicodeUTF8));
        is_acyclic->setIconText(QApplication::translate("TulipData", "Acyclicity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        is_acyclic->setToolTip(QApplication::translate("TulipData", "Checks is the current graph is acyclic", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        is_biconnected->setText(QApplication::translate("TulipData", "Biconnected", 0, QApplication::UnicodeUTF8));
        is_biconnected->setIconText(QApplication::translate("TulipData", "Biconnected", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        is_biconnected->setToolTip(QApplication::translate("TulipData", "Checks is the current graph is biconnected", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        is_triconnected->setText(QApplication::translate("TulipData", "Triconnected", 0, QApplication::UnicodeUTF8));
        is_triconnected->setIconText(QApplication::translate("TulipData", "Triconnected", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        is_triconnected->setToolTip(QApplication::translate("TulipData", "Checks is the current graph is triconnected", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        is_planar->setText(QApplication::translate("TulipData", "Planar", 0, QApplication::UnicodeUTF8));
        is_planar->setIconText(QApplication::translate("TulipData", "Planarity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        is_planar->setToolTip(QApplication::translate("TulipData", "Checks is the current graph is planar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        is_outer_planar->setText(QApplication::translate("TulipData", "Outer Planar", 0, QApplication::UnicodeUTF8));
        is_outer_planar->setIconText(QApplication::translate("TulipData", "Outer Planarity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        is_outer_planar->setToolTip(QApplication::translate("TulipData", "Checks is the current graph is outer planar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        is_simple->setText(QApplication::translate("TulipData", "Simple", 0, QApplication::UnicodeUTF8));
        is_simple->setIconText(QApplication::translate("TulipData", "Simple", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        is_simple->setToolTip(QApplication::translate("TulipData", "Checks is the current graph is simple", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        is_directed_tree->setText(QApplication::translate("TulipData", "Directed Tree", 0, QApplication::UnicodeUTF8));
        is_directed_tree->setIconText(QApplication::translate("TulipData", "Directed Tree", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        is_directed_tree->setToolTip(QApplication::translate("TulipData", "Checks if the current graph is a directed tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        menunew_itemAction->setText(QApplication::translate("TulipData", "&Modify", 0, QApplication::UnicodeUTF8));
        menunew_itemAction->setIconText(QApplication::translate("TulipData", "&Modify", 0, QApplication::UnicodeUTF8));
        make_acyclic->setText(QApplication::translate("TulipData", "Make acyclic", 0, QApplication::UnicodeUTF8));
        make_acyclic->setIconText(QApplication::translate("TulipData", "Make acyclic", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        make_acyclic->setToolTip(QApplication::translate("TulipData", "Makes the current graph acyclic", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        make_simple->setText(QApplication::translate("TulipData", "Make simple", 0, QApplication::UnicodeUTF8));
        make_simple->setIconText(QApplication::translate("TulipData", "Make simple", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        make_simple->setToolTip(QApplication::translate("TulipData", "Makes the current graph simple", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        make_biconnected->setText(QApplication::translate("TulipData", "Make biconnected", 0, QApplication::UnicodeUTF8));
        make_biconnected->setIconText(QApplication::translate("TulipData", "Make biconnected", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        make_biconnected->setToolTip(QApplication::translate("TulipData", "Makes the current graph biconnected", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        make_connected->setText(QApplication::translate("TulipData", "Make connected", 0, QApplication::UnicodeUTF8));
        make_connected->setIconText(QApplication::translate("TulipData", "new item", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        make_connected->setToolTip(QApplication::translate("TulipData", "Makes the current graph connected", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        is_connected->setText(QApplication::translate("TulipData", "Connected", 0, QApplication::UnicodeUTF8));
        is_connected->setIconText(QApplication::translate("TulipData", "new item", 0, QApplication::UnicodeUTF8));
        Reverse_selected_edgesAction->setText(QApplication::translate("TulipData", "Reverse selected edges", 0, QApplication::UnicodeUTF8));
        Reverse_selected_edgesAction->setIconText(QApplication::translate("TulipData", "Reverse selected edges", 0, QApplication::UnicodeUTF8));
        editDeselect_allAction->setText(QApplication::translate("TulipData", "Deselect All", 0, QApplication::UnicodeUTF8));
        editDeselect_allAction->setIconText(QApplication::translate("TulipData", "Deselect All", 0, QApplication::UnicodeUTF8));
        editDeselect_allAction->setShortcut(QApplication::translate("TulipData", "Ctrl+Shift+A", 0, QApplication::UnicodeUTF8));
        editReverse_selectionAction->setText(QApplication::translate("TulipData", "Invert selection", 0, QApplication::UnicodeUTF8));
        editReverse_selectionAction->setIconText(QApplication::translate("TulipData", "Invert selection", 0, QApplication::UnicodeUTF8));
        editReverse_selectionAction->setShortcut(QApplication::translate("TulipData", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        editAction->setText(QString());
        editAction->setIconText(QString());
        editDelete_selectionAction->setText(QApplication::translate("TulipData", "Delete selection", 0, QApplication::UnicodeUTF8));
        editDelete_selectionAction->setIconText(QApplication::translate("TulipData", "Delete selection", 0, QApplication::UnicodeUTF8));
        editDelete_selectionAction->setShortcut(QApplication::translate("TulipData", "Del", 0, QApplication::UnicodeUTF8));
        editCreate_subgraphAction->setText(QApplication::translate("TulipData", "Create subgraph", 0, QApplication::UnicodeUTF8));
        editCreate_subgraphAction->setIconText(QApplication::translate("TulipData", "Create subgraph", 0, QApplication::UnicodeUTF8));
        editCreate_subgraphAction->setShortcut(QApplication::translate("TulipData", "Ctrl+Shift+G", 0, QApplication::UnicodeUTF8));
        editCreate_groupAction->setText(QApplication::translate("TulipData", "Create group", 0, QApplication::UnicodeUTF8));
        editCreate_groupAction->setIconText(QApplication::translate("TulipData", "Create group", 0, QApplication::UnicodeUTF8));
        editCreate_groupAction->setShortcut(QApplication::translate("TulipData", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        editSelect_AllAction->setText(QApplication::translate("TulipData", "Select All", 0, QApplication::UnicodeUTF8));
        editSelect_AllAction->setIconText(QApplication::translate("TulipData", "Select All", 0, QApplication::UnicodeUTF8));
        editSelect_AllAction->setShortcut(QApplication::translate("TulipData", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        tooltips->setText(QApplication::translate("TulipData", "Tooltips", 0, QApplication::UnicodeUTF8));
        tooltips->setIconText(QApplication::translate("TulipData", "Tooltips", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tooltips->setToolTip(QApplication::translate("TulipData", "Enable/disable the display of tooltips on graph nodes or edges", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        is_free_tree->setText(QApplication::translate("TulipData", "Free Tree", 0, QApplication::UnicodeUTF8));
        is_free_tree->setIconText(QApplication::translate("TulipData", "Unnamed", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        is_free_tree->setToolTip(QApplication::translate("TulipData", "Checks if the current graph is a free tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        make_directed->setText(QApplication::translate("TulipData", "Make directed", 0, QApplication::UnicodeUTF8));
        make_directed->setIconText(QApplication::translate("TulipData", "Unnamed", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        make_directed->setToolTip(QApplication::translate("TulipData", "Tranforms the current graph into a directed tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        filePreferenceAction->setText(QApplication::translate("TulipData", "Preferences...", 0, QApplication::UnicodeUTF8));
        addEdgeAction->setText(QApplication::translate("TulipData", "addEdge", 0, QApplication::UnicodeUTF8));
        addEdgeAction->setIconText(QApplication::translate("TulipData", "addEdge", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addEdgeAction->setToolTip(QApplication::translate("TulipData", "Add edges", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addNodeAction->setText(QApplication::translate("TulipData", "addNode", 0, QApplication::UnicodeUTF8));
        addNodeAction->setIconText(QApplication::translate("TulipData", "addNode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addNodeAction->setToolTip(QApplication::translate("TulipData", "Add nodes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deleteAction->setText(QApplication::translate("TulipData", "delete", 0, QApplication::UnicodeUTF8));
        deleteAction->setIconText(QApplication::translate("TulipData", "delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteAction->setToolTip(QApplication::translate("TulipData", "Delete nodes or edges", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        zoomAction->setText(QApplication::translate("TulipData", "zoom", 0, QApplication::UnicodeUTF8));
        zoomAction->setIconText(QApplication::translate("TulipData", "zoom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        zoomAction->setToolTip(QApplication::translate("TulipData", "Zoom on rectangle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        navigate_action->setText(QApplication::translate("TulipData", "navigate", 0, QApplication::UnicodeUTF8));
        navigate_action->setIconText(QApplication::translate("TulipData", "navigate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        navigate_action->setToolTip(QApplication::translate("TulipData", "Navigate in graph", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        moveSelectionAction->setText(QApplication::translate("TulipData", "moveSelection", 0, QApplication::UnicodeUTF8));
        moveSelectionAction->setIconText(QApplication::translate("TulipData", "moveSelection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        moveSelectionAction->setToolTip(QApplication::translate("TulipData", "Move/Reshape selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        selectionAction->setText(QApplication::translate("TulipData", "selection", 0, QApplication::UnicodeUTF8));
        selectionAction->setIconText(QApplication::translate("TulipData", "selection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        selectionAction->setToolTip(QApplication::translate("TulipData", "Select nodes/edges in a rectangle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        magicSelectionAction->setText(QApplication::translate("TulipData", "magicSelection", 0, QApplication::UnicodeUTF8));
        magicSelectionAction->setIconText(QApplication::translate("TulipData", "magicSelection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        magicSelectionAction->setToolTip(QApplication::translate("TulipData", "Selection of reachable elements with equal value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        selectAction->setText(QApplication::translate("TulipData", "select", 0, QApplication::UnicodeUTF8));
        selectAction->setIconText(QApplication::translate("TulipData", "select", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        selectAction->setToolTip(QApplication::translate("TulipData", "Get information on nodes/edges", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        editEdgeBendAction->setText(QApplication::translate("TulipData", "editedgeBend", 0, QApplication::UnicodeUTF8));
        editEdgeBendAction->setIconText(QApplication::translate("TulipData", "editedgeBend", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        editEdgeBendAction->setToolTip(QApplication::translate("TulipData", "Edit edge bends", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        centralTabWidget->setTabText(centralTabWidget->indexOf(tab), QApplication::translate("TulipData", "Tab 2", 0, QApplication::UnicodeUTF8));
        windowsMenu->setTitle(QApplication::translate("TulipData", "&Windows", 0, QApplication::UnicodeUTF8));
        fileMenu->setTitle(QApplication::translate("TulipData", "&File", 0, QApplication::UnicodeUTF8));
        helpMenu->setTitle(QApplication::translate("TulipData", "&Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TulipData: public Ui_TulipData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TULIPDATA_H
