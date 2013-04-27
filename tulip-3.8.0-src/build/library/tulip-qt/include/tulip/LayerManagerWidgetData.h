/********************************************************************************
** Form generated from reading UI file 'LayerManagerWidget.ui'
**
** Created: Fri Apr 26 16:35:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LAYERMANAGERWIDGETDATA_H
#define LAYERMANAGERWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerManagerWidgetData
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *applyButton;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *LayerManagerWidgetData)
    {
        if (LayerManagerWidgetData->objectName().isEmpty())
            LayerManagerWidgetData->setObjectName(QString::fromUtf8("LayerManagerWidgetData"));
        LayerManagerWidgetData->resize(290, 339);
        gridLayout = new QGridLayout(LayerManagerWidgetData);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        applyButton = new QPushButton(LayerManagerWidgetData);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        hboxLayout->addWidget(applyButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        treeWidget = new QTreeWidget(LayerManagerWidgetData);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);


        retranslateUi(LayerManagerWidgetData);

        QMetaObject::connectSlotsByName(LayerManagerWidgetData);
    } // setupUi

    void retranslateUi(QWidget *LayerManagerWidgetData)
    {
        LayerManagerWidgetData->setWindowTitle(QApplication::translate("LayerManagerWidgetData", "Form", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("LayerManagerWidgetData", "Apply", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("LayerManagerWidgetData", "Stencil", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("LayerManagerWidgetData", "Visibility", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("LayerManagerWidgetData", "Entity", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LayerManagerWidgetData: public Ui_LayerManagerWidgetData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LAYERMANAGERWIDGETDATA_H
