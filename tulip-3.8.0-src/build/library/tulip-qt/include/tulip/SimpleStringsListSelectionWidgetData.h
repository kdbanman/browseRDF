/********************************************************************************
** Form generated from reading UI file 'SimpleStringsListSelectionWidget.ui'
**
** Created: Tue Apr 30 11:12:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SIMPLESTRINGSLISTSELECTIONWIDGETDATA_H
#define SIMPLESTRINGSLISTSELECTIONWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimpleStringsListSelectionData
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *selectButton;
    QPushButton *unselectButton;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *upButton;
    QSpacerItem *verticalSpacer;
    QPushButton *downButton;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *SimpleStringsListSelectionData)
    {
        if (SimpleStringsListSelectionData->objectName().isEmpty())
            SimpleStringsListSelectionData->setObjectName(QString::fromUtf8("SimpleStringsListSelectionData"));
        SimpleStringsListSelectionData->resize(243, 292);
        horizontalLayout = new QHBoxLayout(SimpleStringsListSelectionData);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listWidget = new QListWidget(SimpleStringsListSelectionData);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        selectButton = new QPushButton(SimpleStringsListSelectionData);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));

        horizontalLayout_2->addWidget(selectButton);

        unselectButton = new QPushButton(SimpleStringsListSelectionData);
        unselectButton->setObjectName(QString::fromUtf8("unselectButton"));

        horizontalLayout_2->addWidget(unselectButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        upButton = new QPushButton(SimpleStringsListSelectionData);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton->setIcon(icon);

        verticalLayout->addWidget(upButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        downButton = new QPushButton(SimpleStringsListSelectionData);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downButton->setIcon(icon1);

        verticalLayout->addWidget(downButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(SimpleStringsListSelectionData);

        QMetaObject::connectSlotsByName(SimpleStringsListSelectionData);
    } // setupUi

    void retranslateUi(QWidget *SimpleStringsListSelectionData)
    {
        SimpleStringsListSelectionData->setWindowTitle(QApplication::translate("SimpleStringsListSelectionData", "Form", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("SimpleStringsListSelectionData", "Select all", 0, QApplication::UnicodeUTF8));
        unselectButton->setText(QApplication::translate("SimpleStringsListSelectionData", "Unselect all", 0, QApplication::UnicodeUTF8));
        upButton->setText(QString());
        downButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SimpleStringsListSelectionData: public Ui_SimpleStringsListSelectionData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SIMPLESTRINGSLISTSELECTIONWIDGETDATA_H
