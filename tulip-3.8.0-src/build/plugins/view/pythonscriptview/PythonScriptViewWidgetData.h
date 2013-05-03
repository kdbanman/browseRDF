/********************************************************************************
** Form generated from reading UI file 'PythonScriptViewWidget.ui'
**
** Created: Tue Apr 30 11:13:56 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PYTHONSCRIPTVIEWWIDGETDATA_H
#define PYTHONSCRIPTVIEWWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "PythonShellWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PythonScriptViewWidgetData
{
public:
    QVBoxLayout *verticalLayout_7;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QFrame *mainScriptToolBarWidget;
    QTabWidget *mainScriptsTabWidget;
    QWidget *tab_5;
    QWidget *tab_6;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QFrame *modulesToolBarWidget;
    QTabWidget *modulesTabWidget;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_5;
    PythonShellWidget *pythonShellWidget;
    QWidget *tab_8;
    QVBoxLayout *verticalLayout_8;
    QFrame *pluginsToolBarWidget;
    QTabWidget *pluginsTabWidget;
    QWidget *tab_9;
    QWidget *tab_10;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *line;
    QLabel *label;
    QTextBrowser *consoleOutputWidget;
    QFrame *scriptControlFrame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *runScriptButton;
    QToolButton *pauseScriptButton;
    QToolButton *stopScriptButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QToolButton *decreaseFontSizeButton;
    QToolButton *increaseFontSizeButton;
    QProgressBar *progressBar;
    QLabel *scriptStatusLabel;
    QFrame *pluginControlFrame;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *registerPluginButton;
    QLabel *pluginStatusLabel;
    QLabel *label_3;
    QToolButton *decreaseFontSizeButton2;
    QToolButton *increaseFontSizeButton2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *pluginsInfosWidget;

    void setupUi(QWidget *PythonScriptViewWidgetData)
    {
        if (PythonScriptViewWidgetData->objectName().isEmpty())
            PythonScriptViewWidgetData->setObjectName(QString::fromUtf8("PythonScriptViewWidgetData"));
        PythonScriptViewWidgetData->resize(542, 630);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PythonScriptViewWidgetData->sizePolicy().hasHeightForWidth());
        PythonScriptViewWidgetData->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(PythonScriptViewWidgetData);
        verticalLayout_7->setSpacing(1);
        verticalLayout_7->setContentsMargins(1, 1, 1, 1);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        splitter = new QSplitter(PythonScriptViewWidgetData);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mainScriptToolBarWidget = new QFrame(tab);
        mainScriptToolBarWidget->setObjectName(QString::fromUtf8("mainScriptToolBarWidget"));
        mainScriptToolBarWidget->setMinimumSize(QSize(0, 30));
        mainScriptToolBarWidget->setFrameShape(QFrame::StyledPanel);
        mainScriptToolBarWidget->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(mainScriptToolBarWidget);

        mainScriptsTabWidget = new QTabWidget(tab);
        mainScriptsTabWidget->setObjectName(QString::fromUtf8("mainScriptsTabWidget"));
        mainScriptsTabWidget->setTabsClosable(true);
        mainScriptsTabWidget->setMovable(true);
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        mainScriptsTabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        mainScriptsTabWidget->addTab(tab_6, QString());

        verticalLayout->addWidget(mainScriptsTabWidget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setContentsMargins(1, 1, 1, 1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        modulesToolBarWidget = new QFrame(tab_2);
        modulesToolBarWidget->setObjectName(QString::fromUtf8("modulesToolBarWidget"));
        modulesToolBarWidget->setMinimumSize(QSize(0, 30));
        modulesToolBarWidget->setFrameShape(QFrame::StyledPanel);
        modulesToolBarWidget->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(modulesToolBarWidget);

        modulesTabWidget = new QTabWidget(tab_2);
        modulesTabWidget->setObjectName(QString::fromUtf8("modulesTabWidget"));
        modulesTabWidget->setTabsClosable(true);
        modulesTabWidget->setMovable(true);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        modulesTabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        modulesTabWidget->addTab(tab_4, QString());

        verticalLayout_4->addWidget(modulesTabWidget);

        tabWidget->addTab(tab_2, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        verticalLayout_5 = new QVBoxLayout(tab_7);
        verticalLayout_5->setSpacing(1);
        verticalLayout_5->setContentsMargins(1, 1, 1, 1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pythonShellWidget = new PythonShellWidget(tab_7);
        pythonShellWidget->setObjectName(QString::fromUtf8("pythonShellWidget"));

        verticalLayout_5->addWidget(pythonShellWidget);

        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        verticalLayout_8 = new QVBoxLayout(tab_8);
        verticalLayout_8->setSpacing(1);
        verticalLayout_8->setContentsMargins(1, 1, 1, 1);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        pluginsToolBarWidget = new QFrame(tab_8);
        pluginsToolBarWidget->setObjectName(QString::fromUtf8("pluginsToolBarWidget"));
        pluginsToolBarWidget->setMinimumSize(QSize(0, 30));
        pluginsToolBarWidget->setFrameShape(QFrame::StyledPanel);
        pluginsToolBarWidget->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(pluginsToolBarWidget);

        pluginsTabWidget = new QTabWidget(tab_8);
        pluginsTabWidget->setObjectName(QString::fromUtf8("pluginsTabWidget"));
        pluginsTabWidget->setTabsClosable(true);
        pluginsTabWidget->setMovable(true);
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        pluginsTabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        pluginsTabWidget->addTab(tab_10, QString());

        verticalLayout_8->addWidget(pluginsTabWidget);

        tabWidget->addTab(tab_8, QString());
        splitter->addWidget(tabWidget);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        consoleOutputWidget = new QTextBrowser(layoutWidget);
        consoleOutputWidget->setObjectName(QString::fromUtf8("consoleOutputWidget"));
        consoleOutputWidget->setOpenLinks(false);

        verticalLayout_2->addWidget(consoleOutputWidget);

        splitter->addWidget(layoutWidget);

        verticalLayout_7->addWidget(splitter);

        scriptControlFrame = new QFrame(PythonScriptViewWidgetData);
        scriptControlFrame->setObjectName(QString::fromUtf8("scriptControlFrame"));
        scriptControlFrame->setMinimumSize(QSize(0, 95));
        scriptControlFrame->setMaximumSize(QSize(16777215, 95));
        scriptControlFrame->setFrameShape(QFrame::StyledPanel);
        scriptControlFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(scriptControlFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        runScriptButton = new QToolButton(scriptControlFrame);
        runScriptButton->setObjectName(QString::fromUtf8("runScriptButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/playback_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        runScriptButton->setIcon(icon);

        horizontalLayout_2->addWidget(runScriptButton);

        pauseScriptButton = new QToolButton(scriptControlFrame);
        pauseScriptButton->setObjectName(QString::fromUtf8("pauseScriptButton"));
        pauseScriptButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/playback_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseScriptButton->setIcon(icon1);

        horizontalLayout_2->addWidget(pauseScriptButton);

        stopScriptButton = new QToolButton(scriptControlFrame);
        stopScriptButton->setObjectName(QString::fromUtf8("stopScriptButton"));
        stopScriptButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/playback_stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopScriptButton->setIcon(icon2);

        horizontalLayout_2->addWidget(stopScriptButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(scriptControlFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        decreaseFontSizeButton = new QToolButton(scriptControlFrame);
        decreaseFontSizeButton->setObjectName(QString::fromUtf8("decreaseFontSizeButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/round_minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        decreaseFontSizeButton->setIcon(icon3);

        horizontalLayout_2->addWidget(decreaseFontSizeButton);

        increaseFontSizeButton = new QToolButton(scriptControlFrame);
        increaseFontSizeButton->setObjectName(QString::fromUtf8("increaseFontSizeButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/round_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        increaseFontSizeButton->setIcon(icon4);

        horizontalLayout_2->addWidget(increaseFontSizeButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        progressBar = new QProgressBar(scriptControlFrame);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setMaximum(100);
        progressBar->setValue(-1);
        progressBar->setTextVisible(false);

        verticalLayout_3->addWidget(progressBar);

        scriptStatusLabel = new QLabel(scriptControlFrame);
        scriptStatusLabel->setObjectName(QString::fromUtf8("scriptStatusLabel"));

        verticalLayout_3->addWidget(scriptStatusLabel);


        verticalLayout_7->addWidget(scriptControlFrame);

        pluginControlFrame = new QFrame(PythonScriptViewWidgetData);
        pluginControlFrame->setObjectName(QString::fromUtf8("pluginControlFrame"));
        pluginControlFrame->setMinimumSize(QSize(0, 95));
        pluginControlFrame->setMaximumSize(QSize(16777215, 95));
        pluginControlFrame->setFrameShape(QFrame::StyledPanel);
        pluginControlFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(pluginControlFrame);
        verticalLayout_6->setContentsMargins(6, 6, 6, 6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        registerPluginButton = new QPushButton(pluginControlFrame);
        registerPluginButton->setObjectName(QString::fromUtf8("registerPluginButton"));

        horizontalLayout->addWidget(registerPluginButton);

        pluginStatusLabel = new QLabel(pluginControlFrame);
        pluginStatusLabel->setObjectName(QString::fromUtf8("pluginStatusLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pluginStatusLabel->sizePolicy().hasHeightForWidth());
        pluginStatusLabel->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pluginStatusLabel);

        label_3 = new QLabel(pluginControlFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        decreaseFontSizeButton2 = new QToolButton(pluginControlFrame);
        decreaseFontSizeButton2->setObjectName(QString::fromUtf8("decreaseFontSizeButton2"));
        decreaseFontSizeButton2->setIcon(icon3);

        horizontalLayout->addWidget(decreaseFontSizeButton2);

        increaseFontSizeButton2 = new QToolButton(pluginControlFrame);
        increaseFontSizeButton2->setObjectName(QString::fromUtf8("increaseFontSizeButton2"));
        increaseFontSizeButton2->setIcon(icon4);

        horizontalLayout->addWidget(increaseFontSizeButton2);


        verticalLayout_6->addLayout(horizontalLayout);

        line_2 = new QFrame(pluginControlFrame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pluginsInfosWidget = new QPlainTextEdit(pluginControlFrame);
        pluginsInfosWidget->setObjectName(QString::fromUtf8("pluginsInfosWidget"));
        pluginsInfosWidget->setReadOnly(true);

        horizontalLayout_3->addWidget(pluginsInfosWidget);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_7->addWidget(pluginControlFrame);


        retranslateUi(PythonScriptViewWidgetData);

        tabWidget->setCurrentIndex(0);
        modulesTabWidget->setCurrentIndex(0);
        pluginsTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PythonScriptViewWidgetData);
    } // setupUi

    void retranslateUi(QWidget *PythonScriptViewWidgetData)
    {
        PythonScriptViewWidgetData->setWindowTitle(QApplication::translate("PythonScriptViewWidgetData", "Form", 0, QApplication::UnicodeUTF8));
        mainScriptsTabWidget->setTabText(mainScriptsTabWidget->indexOf(tab_5), QApplication::translate("PythonScriptViewWidgetData", "Tab 1", 0, QApplication::UnicodeUTF8));
        mainScriptsTabWidget->setTabText(mainScriptsTabWidget->indexOf(tab_6), QApplication::translate("PythonScriptViewWidgetData", "Tab 2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PythonScriptViewWidgetData", "Script editor", 0, QApplication::UnicodeUTF8));
        modulesTabWidget->setTabText(modulesTabWidget->indexOf(tab_3), QApplication::translate("PythonScriptViewWidgetData", "Tab 1", 0, QApplication::UnicodeUTF8));
        modulesTabWidget->setTabText(modulesTabWidget->indexOf(tab_4), QApplication::translate("PythonScriptViewWidgetData", "Tab 2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PythonScriptViewWidgetData", "Modules editor", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("PythonScriptViewWidgetData", "Interactive session", 0, QApplication::UnicodeUTF8));
        pluginsTabWidget->setTabText(pluginsTabWidget->indexOf(tab_9), QApplication::translate("PythonScriptViewWidgetData", "Tab 1", 0, QApplication::UnicodeUTF8));
        pluginsTabWidget->setTabText(pluginsTabWidget->indexOf(tab_10), QApplication::translate("PythonScriptViewWidgetData", "Tab 2", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("PythonScriptViewWidgetData", "Tulip plugin editor", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PythonScriptViewWidgetData", "Script output :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        runScriptButton->setToolTip(QApplication::translate("PythonScriptViewWidgetData", "Run script (Ctrl + Return)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        runScriptButton->setText(QApplication::translate("PythonScriptViewWidgetData", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pauseScriptButton->setToolTip(QApplication::translate("PythonScriptViewWidgetData", "Pause script", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pauseScriptButton->setText(QApplication::translate("PythonScriptViewWidgetData", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        stopScriptButton->setToolTip(QApplication::translate("PythonScriptViewWidgetData", "Stop script", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        stopScriptButton->setText(QApplication::translate("PythonScriptViewWidgetData", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PythonScriptViewWidgetData", "Font size :", 0, QApplication::UnicodeUTF8));
        decreaseFontSizeButton->setText(QApplication::translate("PythonScriptViewWidgetData", "...", 0, QApplication::UnicodeUTF8));
        increaseFontSizeButton->setText(QApplication::translate("PythonScriptViewWidgetData", "...", 0, QApplication::UnicodeUTF8));
        scriptStatusLabel->setText(QString());
        registerPluginButton->setText(QApplication::translate("PythonScriptViewWidgetData", "Register Plugin", 0, QApplication::UnicodeUTF8));
        pluginStatusLabel->setText(QString());
        label_3->setText(QApplication::translate("PythonScriptViewWidgetData", "Font size :", 0, QApplication::UnicodeUTF8));
        decreaseFontSizeButton2->setText(QApplication::translate("PythonScriptViewWidgetData", "...", 0, QApplication::UnicodeUTF8));
        increaseFontSizeButton2->setText(QApplication::translate("PythonScriptViewWidgetData", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PythonScriptViewWidgetData: public Ui_PythonScriptViewWidgetData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PYTHONSCRIPTVIEWWIDGETDATA_H
