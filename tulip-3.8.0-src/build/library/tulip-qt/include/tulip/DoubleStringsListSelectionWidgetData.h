/********************************************************************************
** Form generated from reading UI file 'DoubleStringsListSelectionWidget.ui'
**
** Created: Tue Apr 30 11:12:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef DOUBLESTRINGSLISTSELECTIONWIDGETDATA_H
#define DOUBLESTRINGSLISTSELECTIONWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ItemsListWidget.h"

QT_BEGIN_NAMESPACE

class Ui_DoubleStringsListSelectionData
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *inputListLabel;
    tlp::ItemsListWidget *inputList;
    QPushButton *selectButton;
    QVBoxLayout *verticalLayout_6;
    QPushButton *addButton;
    QPushButton *removeButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *outputListLabel;
    tlp::ItemsListWidget *outputList;
    QPushButton *unselectButton;
    QVBoxLayout *verticalLayout_5;
    QPushButton *upButton;
    QPushButton *downButton;

    void setupUi(QWidget *DoubleStringsListSelectionData)
    {
        if (DoubleStringsListSelectionData->objectName().isEmpty())
            DoubleStringsListSelectionData->setObjectName(QString::fromUtf8("DoubleStringsListSelectionData"));
        DoubleStringsListSelectionData->resize(382, 306);
        horizontalLayout = new QHBoxLayout(DoubleStringsListSelectionData);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        inputListLabel = new QLabel(DoubleStringsListSelectionData);
        inputListLabel->setObjectName(QString::fromUtf8("inputListLabel"));
        inputListLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(inputListLabel);

        inputList = new tlp::ItemsListWidget(DoubleStringsListSelectionData);
        inputList->setObjectName(QString::fromUtf8("inputList"));

        verticalLayout->addWidget(inputList);

        selectButton = new QPushButton(DoubleStringsListSelectionData);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));

        verticalLayout->addWidget(selectButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        addButton = new QPushButton(DoubleStringsListSelectionData);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        verticalLayout_6->addWidget(addButton);

        removeButton = new QPushButton(DoubleStringsListSelectionData);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon1);

        verticalLayout_6->addWidget(removeButton);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        outputListLabel = new QLabel(DoubleStringsListSelectionData);
        outputListLabel->setObjectName(QString::fromUtf8("outputListLabel"));
        outputListLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(outputListLabel);

        outputList = new tlp::ItemsListWidget(DoubleStringsListSelectionData);
        outputList->setObjectName(QString::fromUtf8("outputList"));

        verticalLayout_2->addWidget(outputList);

        unselectButton = new QPushButton(DoubleStringsListSelectionData);
        unselectButton->setObjectName(QString::fromUtf8("unselectButton"));

        verticalLayout_2->addWidget(unselectButton);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        upButton = new QPushButton(DoubleStringsListSelectionData);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton->setIcon(icon2);

        verticalLayout_5->addWidget(upButton);

        downButton = new QPushButton(DoubleStringsListSelectionData);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downButton->setIcon(icon3);

        verticalLayout_5->addWidget(downButton);


        horizontalLayout->addLayout(verticalLayout_5);


        retranslateUi(DoubleStringsListSelectionData);

        QMetaObject::connectSlotsByName(DoubleStringsListSelectionData);
    } // setupUi

    void retranslateUi(QWidget *DoubleStringsListSelectionData)
    {
        DoubleStringsListSelectionData->setWindowTitle(QApplication::translate("DoubleStringsListSelectionData", "Form", 0, QApplication::UnicodeUTF8));
        inputListLabel->setText(QString());
        selectButton->setText(QApplication::translate("DoubleStringsListSelectionData", "Select all", 0, QApplication::UnicodeUTF8));
        addButton->setText(QString());
        removeButton->setText(QString());
        outputListLabel->setText(QString());
        unselectButton->setText(QApplication::translate("DoubleStringsListSelectionData", "Unselect all", 0, QApplication::UnicodeUTF8));
        upButton->setText(QString());
        downButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DoubleStringsListSelectionData: public Ui_DoubleStringsListSelectionData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DOUBLESTRINGSLISTSELECTIONWIDGETDATA_H
