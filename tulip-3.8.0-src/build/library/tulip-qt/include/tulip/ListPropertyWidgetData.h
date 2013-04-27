/********************************************************************************
** Form generated from reading UI file 'ListPropertyWidget.ui'
**
** Created: Fri Apr 26 16:35:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LISTPROPERTYWIDGETDATA_H
#define LISTPROPERTYWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *setAllPushButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *addPushButton;
    QPushButton *delPushButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(274, 246);
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        setAllPushButton = new QPushButton(Form);
        setAllPushButton->setObjectName(QString::fromUtf8("setAllPushButton"));

        verticalLayout->addWidget(setAllPushButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        addPushButton = new QPushButton(Form);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));

        horizontalLayout->addWidget(addPushButton);

        delPushButton = new QPushButton(Form);
        delPushButton->setObjectName(QString::fromUtf8("delPushButton"));

        horizontalLayout->addWidget(delPushButton);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(Form);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(true);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(Form);
        QObject::connect(addPushButton, SIGNAL(clicked()), Form, SLOT(addRow()));
        QObject::connect(delPushButton, SIGNAL(clicked()), Form, SLOT(removeRows()));
        QObject::connect(setAllPushButton, SIGNAL(clicked()), Form, SLOT(setAll()));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        setAllPushButton->setText(QApplication::translate("Form", "Set All", 0, QApplication::UnicodeUTF8));
        addPushButton->setText(QApplication::translate("Form", "Add", 0, QApplication::UnicodeUTF8));
        delPushButton->setText(QApplication::translate("Form", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LISTPROPERTYWIDGETDATA_H
