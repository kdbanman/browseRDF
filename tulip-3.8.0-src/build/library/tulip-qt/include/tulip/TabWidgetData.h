/********************************************************************************
** Form generated from reading UI file 'TabWidget.ui'
**
** Created: Mon Apr 29 01:40:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TABWIDGETDATA_H
#define TABWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "../include/tulip/ElementPropertiesWidget.h"
#include "../include/tulip/PropertyDialog.h"
#include "../include/tulip/PropertyWidget.h"
#include "../include/tulip/SGHierarchyWidget.h"

QT_BEGIN_NAMESPACE

class Ui_TabWidgetData
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget2;
    QWidget *tabProperty;
    QGridLayout *gridLayout1;
    tlp::PropertyDialog *propertyDialog;
    QWidget *tabElement;
    QGridLayout *gridLayout2;
    tlp::ElementPropertiesWidget *elementInfo;
    QWidget *tabHierarchy;
    QGridLayout *gridLayout3;
    tlp::SGHierarchyWidget *clusterTree;

    void setupUi(QWidget *TabWidgetData)
    {
        if (TabWidgetData->objectName().isEmpty())
            TabWidgetData->setObjectName(QString::fromUtf8("TabWidgetData"));
        TabWidgetData->resize(304, 422);
        gridLayout = new QGridLayout(TabWidgetData);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget2 = new QTabWidget(TabWidgetData);
        tabWidget2->setObjectName(QString::fromUtf8("tabWidget2"));
        tabWidget2->setTabPosition(QTabWidget::West);
        tabProperty = new QWidget();
        tabProperty->setObjectName(QString::fromUtf8("tabProperty"));
        gridLayout1 = new QGridLayout(tabProperty);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(6, 6, 6, 6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        propertyDialog = new tlp::PropertyDialog(tabProperty);
        propertyDialog->setObjectName(QString::fromUtf8("propertyDialog"));

        gridLayout1->addWidget(propertyDialog, 0, 0, 1, 1);

        tabWidget2->addTab(tabProperty, QString());
        tabElement = new QWidget();
        tabElement->setObjectName(QString::fromUtf8("tabElement"));
        gridLayout2 = new QGridLayout(tabElement);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        elementInfo = new tlp::ElementPropertiesWidget(tabElement);
        elementInfo->setObjectName(QString::fromUtf8("elementInfo"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(13));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(elementInfo->sizePolicy().hasHeightForWidth());
        elementInfo->setSizePolicy(sizePolicy);

        gridLayout2->addWidget(elementInfo, 0, 0, 1, 1);

        tabWidget2->addTab(tabElement, QString());
        tabHierarchy = new QWidget();
        tabHierarchy->setObjectName(QString::fromUtf8("tabHierarchy"));
        gridLayout3 = new QGridLayout(tabHierarchy);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        clusterTree = new tlp::SGHierarchyWidget(tabHierarchy);
        clusterTree->setObjectName(QString::fromUtf8("clusterTree"));

        gridLayout3->addWidget(clusterTree, 0, 0, 1, 1);

        tabWidget2->addTab(tabHierarchy, QString());

        gridLayout->addWidget(tabWidget2, 0, 0, 1, 1);


        retranslateUi(TabWidgetData);

        tabWidget2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TabWidgetData);
    } // setupUi

    void retranslateUi(QWidget *TabWidgetData)
    {
        TabWidgetData->setWindowTitle(QApplication::translate("TabWidgetData", "Form1", 0, QApplication::UnicodeUTF8));
        tabWidget2->setTabText(tabWidget2->indexOf(tabProperty), QApplication::translate("TabWidgetData", "Property", 0, QApplication::UnicodeUTF8));
        tabWidget2->setTabText(tabWidget2->indexOf(tabElement), QApplication::translate("TabWidgetData", "Element", 0, QApplication::UnicodeUTF8));
        tabWidget2->setTabText(tabWidget2->indexOf(tabHierarchy), QApplication::translate("TabWidgetData", "Hierarchy", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TabWidgetData: public Ui_TabWidgetData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TABWIDGETDATA_H
