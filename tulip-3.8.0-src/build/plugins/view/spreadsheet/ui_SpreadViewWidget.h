/********************************************************************************
** Form generated from reading UI file 'SpreadViewWidget.ui'
**
** Created: Mon Apr 29 02:03:46 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPREADVIEWWIDGET_H
#define UI_SPREADVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "OrientedPushButton.h"
#include "SpreadViewTableWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SpreadViewWidget
{
public:
    QGridLayout *gridLayout_3;
    QWidget *toolBarWidget;
    QVBoxLayout *verticalLayout;
    OrientedPushButton *editColumnPushButton;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *nodesTab;
    QHBoxLayout *horizontalLayout_4;
    SpreadViewTableWidget *nodesSpreadViewWidget;
    QWidget *edgesTab;
    QHBoxLayout *horizontalLayout_5;
    SpreadViewTableWidget *edgesSpreadViewWidget;

    void setupUi(QWidget *SpreadViewWidget)
    {
        if (SpreadViewWidget->objectName().isEmpty())
            SpreadViewWidget->setObjectName(QString::fromUtf8("SpreadViewWidget"));
        SpreadViewWidget->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SpreadViewWidget->sizePolicy().hasHeightForWidth());
        SpreadViewWidget->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(SpreadViewWidget);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        toolBarWidget = new QWidget(SpreadViewWidget);
        toolBarWidget->setObjectName(QString::fromUtf8("toolBarWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBarWidget->sizePolicy().hasHeightForWidth());
        toolBarWidget->setSizePolicy(sizePolicy1);
        toolBarWidget->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(toolBarWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editColumnPushButton = new OrientedPushButton(toolBarWidget);
        editColumnPushButton->setObjectName(QString::fromUtf8("editColumnPushButton"));
        editColumnPushButton->setMinimumSize(QSize(0, 0));
        editColumnPushButton->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(editColumnPushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_3->addWidget(toolBarWidget, 1, 0, 2, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, -1);
        tabWidget = new QTabWidget(SpreadViewWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        nodesTab = new QWidget();
        nodesTab->setObjectName(QString::fromUtf8("nodesTab"));
        horizontalLayout_4 = new QHBoxLayout(nodesTab);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        nodesSpreadViewWidget = new SpreadViewTableWidget(nodesTab);
        nodesSpreadViewWidget->setObjectName(QString::fromUtf8("nodesSpreadViewWidget"));
        sizePolicy.setHeightForWidth(nodesSpreadViewWidget->sizePolicy().hasHeightForWidth());
        nodesSpreadViewWidget->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(nodesSpreadViewWidget);

        tabWidget->addTab(nodesTab, QString());
        edgesTab = new QWidget();
        edgesTab->setObjectName(QString::fromUtf8("edgesTab"));
        horizontalLayout_5 = new QHBoxLayout(edgesTab);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        edgesSpreadViewWidget = new SpreadViewTableWidget(edgesTab);
        edgesSpreadViewWidget->setObjectName(QString::fromUtf8("edgesSpreadViewWidget"));
        sizePolicy.setHeightForWidth(edgesSpreadViewWidget->sizePolicy().hasHeightForWidth());
        edgesSpreadViewWidget->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(edgesSpreadViewWidget);

        tabWidget->addTab(edgesTab, QString());

        horizontalLayout->addWidget(tabWidget);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 1, 1, 1);


        retranslateUi(SpreadViewWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SpreadViewWidget);
    } // setupUi

    void retranslateUi(QWidget *SpreadViewWidget)
    {
        editColumnPushButton->setText(QApplication::translate("SpreadViewWidget", "Properties", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(nodesTab), QApplication::translate("SpreadViewWidget", "Nodes", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(edgesTab), QApplication::translate("SpreadViewWidget", "Edges", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SpreadViewWidget);
    } // retranslateUi

};

namespace Ui {
    class SpreadViewWidget: public Ui_SpreadViewWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPREADVIEWWIDGET_H
