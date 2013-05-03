/********************************************************************************
** Form generated from reading UI file 'CoordWidget.ui'
**
** Created: Tue Apr 30 11:12:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef COORDWIDGETDATA_H
#define COORDWIDGETDATA_H

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

class Ui_CoordWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *xLabel;
    QLineEdit *xLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *yLabel;
    QLineEdit *yLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *zLabel;
    QLineEdit *zLineEdit;

    void setupUi(QWidget *CoordWidget)
    {
        if (CoordWidget->objectName().isEmpty())
            CoordWidget->setObjectName(QString::fromUtf8("CoordWidget"));
        CoordWidget->resize(195, 22);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CoordWidget->sizePolicy().hasHeightForWidth());
        CoordWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(CoordWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, -1, -1, -1);
        xLabel = new QLabel(CoordWidget);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setWordWrap(true);

        horizontalLayout_3->addWidget(xLabel);

        xLineEdit = new QLineEdit(CoordWidget);
        xLineEdit->setObjectName(QString::fromUtf8("xLineEdit"));

        horizontalLayout_3->addWidget(xLineEdit);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        yLabel = new QLabel(CoordWidget);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));

        horizontalLayout_2->addWidget(yLabel);

        yLineEdit = new QLineEdit(CoordWidget);
        yLineEdit->setObjectName(QString::fromUtf8("yLineEdit"));

        horizontalLayout_2->addWidget(yLineEdit);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        zLabel = new QLabel(CoordWidget);
        zLabel->setObjectName(QString::fromUtf8("zLabel"));

        horizontalLayout_4->addWidget(zLabel);

        zLineEdit = new QLineEdit(CoordWidget);
        zLineEdit->setObjectName(QString::fromUtf8("zLineEdit"));

        horizontalLayout_4->addWidget(zLineEdit);


        horizontalLayout->addLayout(horizontalLayout_4);

#ifndef QT_NO_SHORTCUT
        xLabel->setBuddy(xLineEdit);
        yLabel->setBuddy(yLineEdit);
        zLabel->setBuddy(zLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(xLineEdit, yLineEdit);
        QWidget::setTabOrder(yLineEdit, zLineEdit);

        retranslateUi(CoordWidget);

        QMetaObject::connectSlotsByName(CoordWidget);
    } // setupUi

    void retranslateUi(QWidget *CoordWidget)
    {
        CoordWidget->setWindowTitle(QApplication::translate("CoordWidget", "Form", 0, QApplication::UnicodeUTF8));
        xLabel->setText(QApplication::translate("CoordWidget", "X", 0, QApplication::UnicodeUTF8));
        yLabel->setText(QApplication::translate("CoordWidget", "Y", 0, QApplication::UnicodeUTF8));
        zLabel->setText(QApplication::translate("CoordWidget", "Z", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CoordWidget: public Ui_CoordWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // COORDWIDGETDATA_H
