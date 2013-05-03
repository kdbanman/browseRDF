/********************************************************************************
** Form generated from reading UI file 'PropertyDialog.ui'
**
** Created: Tue Apr 30 11:12:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PROPERTYDIALOGDATA_H
#define PROPERTYDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "tulip/GraphPropertiesTableWidget.h"
#include "tulip/PropertyWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PropertyDialogData
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabNodes;
    QVBoxLayout *verticalLayout_2;
    PropertyWidget *tableNodes;
    QWidget *tabEdges;
    QVBoxLayout *verticalLayout_3;
    PropertyWidget *tableEdges;
    QHBoxLayout *horizontalLayout;
    QCheckBox *CheckBox1;
    QSpacerItem *horizontalSpacer;
    QPushButton *removeButton_2;
    QPushButton *setAllButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QRadioButton *radioAll;
    QRadioButton *radioWork;
    QRadioButton *radioView;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *propertiesNameFilterLineEdit;
    tlp::GraphPropertiesTableWidget *propertiesWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *removeButton;
    QPushButton *importCSVPushButton;
    QPushButton *cloneButton;
    QPushButton *newButton;

    void setupUi(QWidget *PropertyDialogData)
    {
        if (PropertyDialogData->objectName().isEmpty())
            PropertyDialogData->setObjectName(QString::fromUtf8("PropertyDialogData"));
        PropertyDialogData->resize(377, 716);
        verticalLayout = new QVBoxLayout(PropertyDialogData);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PropertyDialogData);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabNodes = new QWidget();
        tabNodes->setObjectName(QString::fromUtf8("tabNodes"));
        verticalLayout_2 = new QVBoxLayout(tabNodes);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableNodes = new PropertyWidget(tabNodes);
        tableNodes->setObjectName(QString::fromUtf8("tableNodes"));

        verticalLayout_2->addWidget(tableNodes);

        tabWidget->addTab(tabNodes, QString());
        tabEdges = new QWidget();
        tabEdges->setObjectName(QString::fromUtf8("tabEdges"));
        tabEdges->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_3 = new QVBoxLayout(tabEdges);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableEdges = new PropertyWidget(tabEdges);
        tableEdges->setObjectName(QString::fromUtf8("tableEdges"));

        verticalLayout_3->addWidget(tableEdges);

        tabWidget->addTab(tabEdges, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        CheckBox1 = new QCheckBox(PropertyDialogData);
        CheckBox1->setObjectName(QString::fromUtf8("CheckBox1"));

        horizontalLayout->addWidget(CheckBox1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        removeButton_2 = new QPushButton(PropertyDialogData);
        removeButton_2->setObjectName(QString::fromUtf8("removeButton_2"));

        horizontalLayout->addWidget(removeButton_2);

        setAllButton = new QPushButton(PropertyDialogData);
        setAllButton->setObjectName(QString::fromUtf8("setAllButton"));

        horizontalLayout->addWidget(setAllButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(PropertyDialogData);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        radioAll = new QRadioButton(PropertyDialogData);
        radioAll->setObjectName(QString::fromUtf8("radioAll"));

        horizontalLayout_2->addWidget(radioAll);

        radioWork = new QRadioButton(PropertyDialogData);
        radioWork->setObjectName(QString::fromUtf8("radioWork"));

        horizontalLayout_2->addWidget(radioWork);

        radioView = new QRadioButton(PropertyDialogData);
        radioView->setObjectName(QString::fromUtf8("radioView"));

        horizontalLayout_2->addWidget(radioView);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        propertiesNameFilterLineEdit = new QLineEdit(PropertyDialogData);
        propertiesNameFilterLineEdit->setObjectName(QString::fromUtf8("propertiesNameFilterLineEdit"));

        verticalLayout->addWidget(propertiesNameFilterLineEdit);

        propertiesWidget = new tlp::GraphPropertiesTableWidget(PropertyDialogData);
        propertiesWidget->setObjectName(QString::fromUtf8("propertiesWidget"));
        propertiesWidget->setMaximumSize(QSize(16777215, 200));

        verticalLayout->addWidget(propertiesWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        removeButton = new QPushButton(PropertyDialogData);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        horizontalLayout_3->addWidget(removeButton);

        importCSVPushButton = new QPushButton(PropertyDialogData);
        importCSVPushButton->setObjectName(QString::fromUtf8("importCSVPushButton"));

        horizontalLayout_3->addWidget(importCSVPushButton);

        cloneButton = new QPushButton(PropertyDialogData);
        cloneButton->setObjectName(QString::fromUtf8("cloneButton"));

        horizontalLayout_3->addWidget(cloneButton);

        newButton = new QPushButton(PropertyDialogData);
        newButton->setObjectName(QString::fromUtf8("newButton"));

        horizontalLayout_3->addWidget(newButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(PropertyDialogData);
        QObject::connect(CheckBox1, SIGNAL(toggled(bool)), PropertyDialogData, SLOT(filterSelection(bool)));
        QObject::connect(removeButton_2, SIGNAL(clicked()), PropertyDialogData, SLOT(toStringProperty()));
        QObject::connect(setAllButton, SIGNAL(clicked()), PropertyDialogData, SLOT(setAllValue()));
        QObject::connect(importCSVPushButton, SIGNAL(clicked()), PropertyDialogData, SLOT(importCSVData()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PropertyDialogData);
    } // setupUi

    void retranslateUi(QWidget *PropertyDialogData)
    {
        PropertyDialogData->setWindowTitle(QApplication::translate("PropertyDialogData", "Property Editor", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabNodes), QApplication::translate("PropertyDialogData", "Nodes", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabEdges), QApplication::translate("PropertyDialogData", "Edges", 0, QApplication::UnicodeUTF8));
        CheckBox1->setText(QApplication::translate("PropertyDialogData", "selected only", 0, QApplication::UnicodeUTF8));
        removeButton_2->setText(QApplication::translate("PropertyDialogData", "To labels", 0, QApplication::UnicodeUTF8));
        setAllButton->setText(QApplication::translate("PropertyDialogData", "Set all", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PropertyDialogData", "Displayed properties:", 0, QApplication::UnicodeUTF8));
        radioAll->setText(QApplication::translate("PropertyDialogData", "All", 0, QApplication::UnicodeUTF8));
        radioWork->setText(QApplication::translate("PropertyDialogData", "User", 0, QApplication::UnicodeUTF8));
        radioView->setText(QApplication::translate("PropertyDialogData", "View", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        propertiesNameFilterLineEdit->setToolTip(QApplication::translate("PropertyDialogData", "Enter a filter on properties name here...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        removeButton->setText(QApplication::translate("PropertyDialogData", "Remove", 0, QApplication::UnicodeUTF8));
        importCSVPushButton->setText(QApplication::translate("PropertyDialogData", "Import CSV Data", 0, QApplication::UnicodeUTF8));
        cloneButton->setText(QApplication::translate("PropertyDialogData", "Copy", 0, QApplication::UnicodeUTF8));
        newButton->setText(QApplication::translate("PropertyDialogData", "New", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PropertyDialogData: public Ui_PropertyDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PROPERTYDIALOGDATA_H
