/********************************************************************************
** Form generated from reading UI file 'TulipTableWidgetColumnSelectionWidget.ui'
**
** Created: Mon Apr 29 02:03:47 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TULIPTABLEWIDGETCOLUMNSELECTIONWIDGET_H
#define UI_TULIPTABLEWIDGETCOLUMNSELECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableColumnSelectionWidget
{
public:
    QGridLayout *gridLayout_2;
    QCheckBox *checkUncheckAllCheckBox;
    QListView *listView;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *visualPropertiesPushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *customPatternLabel;
    QLineEdit *customPatternLineEdit;
    QPushButton *dataPropertiesPushButton;

    void setupUi(QWidget *TableColumnSelectionWidget)
    {
        if (TableColumnSelectionWidget->objectName().isEmpty())
            TableColumnSelectionWidget->setObjectName(QString::fromUtf8("TableColumnSelectionWidget"));
        TableColumnSelectionWidget->resize(269, 371);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TableColumnSelectionWidget->sizePolicy().hasHeightForWidth());
        TableColumnSelectionWidget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(TableColumnSelectionWidget);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(3);
        checkUncheckAllCheckBox = new QCheckBox(TableColumnSelectionWidget);
        checkUncheckAllCheckBox->setObjectName(QString::fromUtf8("checkUncheckAllCheckBox"));

        gridLayout_2->addWidget(checkUncheckAllCheckBox, 0, 0, 1, 1);

        listView = new QListView(TableColumnSelectionWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setAlternatingRowColors(true);
        listView->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_2->addWidget(listView, 2, 0, 6, 1);

        groupBox = new QGroupBox(TableColumnSelectionWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 3, 0, 0);
        visualPropertiesPushButton = new QPushButton(groupBox);
        visualPropertiesPushButton->setObjectName(QString::fromUtf8("visualPropertiesPushButton"));
        sizePolicy1.setHeightForWidth(visualPropertiesPushButton->sizePolicy().hasHeightForWidth());
        visualPropertiesPushButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(visualPropertiesPushButton, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        customPatternLabel = new QLabel(groupBox);
        customPatternLabel->setObjectName(QString::fromUtf8("customPatternLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(customPatternLabel->sizePolicy().hasHeightForWidth());
        customPatternLabel->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(customPatternLabel);

        customPatternLineEdit = new QLineEdit(groupBox);
        customPatternLineEdit->setObjectName(QString::fromUtf8("customPatternLineEdit"));

        horizontalLayout->addWidget(customPatternLineEdit);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        dataPropertiesPushButton = new QPushButton(groupBox);
        dataPropertiesPushButton->setObjectName(QString::fromUtf8("dataPropertiesPushButton"));
        sizePolicy1.setHeightForWidth(dataPropertiesPushButton->sizePolicy().hasHeightForWidth());
        dataPropertiesPushButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(dataPropertiesPushButton, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 8, 0, 1, 1);


        retranslateUi(TableColumnSelectionWidget);

        QMetaObject::connectSlotsByName(TableColumnSelectionWidget);
    } // setupUi

    void retranslateUi(QWidget *TableColumnSelectionWidget)
    {
        TableColumnSelectionWidget->setWindowTitle(QApplication::translate("TableColumnSelectionWidget", "Form", 0, QApplication::UnicodeUTF8));
        checkUncheckAllCheckBox->setText(QApplication::translate("TableColumnSelectionWidget", "Check / Uncheck all", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TableColumnSelectionWidget", "Properties filter", 0, QApplication::UnicodeUTF8));
        visualPropertiesPushButton->setText(QApplication::translate("TableColumnSelectionWidget", "Visual properties", 0, QApplication::UnicodeUTF8));
        customPatternLabel->setText(QApplication::translate("TableColumnSelectionWidget", "Custom filter", 0, QApplication::UnicodeUTF8));
        dataPropertiesPushButton->setText(QApplication::translate("TableColumnSelectionWidget", "Data properties", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TableColumnSelectionWidget: public Ui_TableColumnSelectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TULIPTABLEWIDGETCOLUMNSELECTIONWIDGET_H
