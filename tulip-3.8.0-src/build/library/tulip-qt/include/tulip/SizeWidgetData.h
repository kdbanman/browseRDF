/********************************************************************************
** Form generated from reading UI file 'SizeWidget.ui'
**
** Created: Fri Apr 26 16:35:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SIZEWIDGETDATA_H
#define SIZEWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SizeWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *widthLabel;
    QLineEdit *widthLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *heightLabel;
    QLineEdit *heightLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *depthLabel;
    QLineEdit *depthLineEdit;

    void setupUi(QWidget *SizeWidget)
    {
        if (SizeWidget->objectName().isEmpty())
            SizeWidget->setObjectName(QString::fromUtf8("SizeWidget"));
        SizeWidget->resize(271, 22);
        horizontalLayout = new QHBoxLayout(SizeWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        widthLabel = new QLabel(SizeWidget);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));
        widthLabel->setWordWrap(true);

        horizontalLayout_2->addWidget(widthLabel);

        widthLineEdit = new QLineEdit(SizeWidget);
        widthLineEdit->setObjectName(QString::fromUtf8("widthLineEdit"));

        horizontalLayout_2->addWidget(widthLineEdit);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 0, -1);
        heightLabel = new QLabel(SizeWidget);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        heightLabel->setWordWrap(true);

        horizontalLayout_3->addWidget(heightLabel);

        heightLineEdit = new QLineEdit(SizeWidget);
        heightLineEdit->setObjectName(QString::fromUtf8("heightLineEdit"));

        horizontalLayout_3->addWidget(heightLineEdit);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        depthLabel = new QLabel(SizeWidget);
        depthLabel->setObjectName(QString::fromUtf8("depthLabel"));
        depthLabel->setWordWrap(true);

        horizontalLayout_4->addWidget(depthLabel);

        depthLineEdit = new QLineEdit(SizeWidget);
        depthLineEdit->setObjectName(QString::fromUtf8("depthLineEdit"));

        horizontalLayout_4->addWidget(depthLineEdit);


        horizontalLayout->addLayout(horizontalLayout_4);

#ifndef QT_NO_SHORTCUT
        widthLabel->setBuddy(widthLineEdit);
        heightLabel->setBuddy(heightLineEdit);
        depthLabel->setBuddy(depthLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(SizeWidget);

        QMetaObject::connectSlotsByName(SizeWidget);
    } // setupUi

    void retranslateUi(QWidget *SizeWidget)
    {
        SizeWidget->setWindowTitle(QApplication::translate("SizeWidget", "Form", 0, QApplication::UnicodeUTF8));
        widthLabel->setText(QApplication::translate("SizeWidget", "W", 0, QApplication::UnicodeUTF8));
        heightLabel->setText(QApplication::translate("SizeWidget", "H", 0, QApplication::UnicodeUTF8));
        depthLabel->setText(QApplication::translate("SizeWidget", "D", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SizeWidget: public Ui_SizeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SIZEWIDGETDATA_H
