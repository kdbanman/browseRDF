/********************************************************************************
** Form generated from reading UI file 'VectorEditionWidget.ui'
**
** Created: Tue Apr 30 11:13:53 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VECTOREDITIONWIDGET_H
#define UI_VECTOREDITIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VectorEditionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *addPushButton;
    QPushButton *delPushButton;
    QPushButton *setAllPushButton;
    QListView *listView;

    void setupUi(QWidget *VectorEditionWidget)
    {
        if (VectorEditionWidget->objectName().isEmpty())
            VectorEditionWidget->setObjectName(QString::fromUtf8("VectorEditionWidget"));
        VectorEditionWidget->resize(256, 121);
        VectorEditionWidget->setMinimumSize(QSize(256, 121));
        verticalLayout = new QVBoxLayout(VectorEditionWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        addPushButton = new QPushButton(VectorEditionWidget);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));

        horizontalLayout->addWidget(addPushButton);

        delPushButton = new QPushButton(VectorEditionWidget);
        delPushButton->setObjectName(QString::fromUtf8("delPushButton"));

        horizontalLayout->addWidget(delPushButton);


        verticalLayout->addLayout(horizontalLayout);

        setAllPushButton = new QPushButton(VectorEditionWidget);
        setAllPushButton->setObjectName(QString::fromUtf8("setAllPushButton"));

        verticalLayout->addWidget(setAllPushButton);

        listView = new QListView(VectorEditionWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(listView);

        QWidget::setTabOrder(addPushButton, delPushButton);
        QWidget::setTabOrder(delPushButton, setAllPushButton);
        QWidget::setTabOrder(setAllPushButton, listView);

        retranslateUi(VectorEditionWidget);

        QMetaObject::connectSlotsByName(VectorEditionWidget);
    } // setupUi

    void retranslateUi(QWidget *VectorEditionWidget)
    {
        VectorEditionWidget->setWindowTitle(QApplication::translate("VectorEditionWidget", "Form", 0, QApplication::UnicodeUTF8));
        addPushButton->setText(QApplication::translate("VectorEditionWidget", "Add", 0, QApplication::UnicodeUTF8));
        delPushButton->setText(QApplication::translate("VectorEditionWidget", "Delete", 0, QApplication::UnicodeUTF8));
        setAllPushButton->setText(QApplication::translate("VectorEditionWidget", "Set All", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VectorEditionWidget: public Ui_VectorEditionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VECTOREDITIONWIDGET_H
