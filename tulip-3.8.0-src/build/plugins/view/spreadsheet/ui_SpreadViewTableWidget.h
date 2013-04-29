/********************************************************************************
** Form generated from reading UI file 'SpreadViewTableWidget.ui'
**
** Created: Mon Apr 29 02:03:47 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPREADVIEWTABLEWIDGET_H
#define UI_SPREADVIEWTABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "GraphTableWidget.h"
#include "TulipTableWidgetColumnSelectionWidget.h"
#include "VisibleSectionsModel.h"

QT_BEGIN_NAMESPACE

class Ui_SpreadViewTableWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    TulipTableWidgetColumnSelectionWidget *columnEditionWidget;
    GraphTableWidget *tableView;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *filterPatternLineEdit;
    QCheckBox *showOnlySelectedElementsCheckBox;
    QPushButton *filterPushButton;
    QLabel *label_2;
    VisibleSectionsModel *comboBox;

    void setupUi(QWidget *SpreadViewTableWidget)
    {
        if (SpreadViewTableWidget->objectName().isEmpty())
            SpreadViewTableWidget->setObjectName(QString::fromUtf8("SpreadViewTableWidget"));
        SpreadViewTableWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(SpreadViewTableWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        columnEditionWidget = new TulipTableWidgetColumnSelectionWidget(SpreadViewTableWidget);
        columnEditionWidget->setObjectName(QString::fromUtf8("columnEditionWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(columnEditionWidget->sizePolicy().hasHeightForWidth());
        columnEditionWidget->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(columnEditionWidget);

        tableView = new GraphTableWidget(SpreadViewTableWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);

        horizontalLayout->addWidget(tableView);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(SpreadViewTableWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(SpreadViewTableWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        filterPatternLineEdit = new QLineEdit(SpreadViewTableWidget);
        filterPatternLineEdit->setObjectName(QString::fromUtf8("filterPatternLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filterPatternLineEdit->sizePolicy().hasHeightForWidth());
        filterPatternLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(filterPatternLineEdit, 1, 1, 1, 1);

        showOnlySelectedElementsCheckBox = new QCheckBox(SpreadViewTableWidget);
        showOnlySelectedElementsCheckBox->setObjectName(QString::fromUtf8("showOnlySelectedElementsCheckBox"));

        gridLayout_2->addWidget(showOnlySelectedElementsCheckBox, 0, 0, 1, 5);

        filterPushButton = new QPushButton(SpreadViewTableWidget);
        filterPushButton->setObjectName(QString::fromUtf8("filterPushButton"));

        gridLayout_2->addWidget(filterPushButton, 1, 4, 1, 1);

        label_2 = new QLabel(SpreadViewTableWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 2, 1, 1);

        comboBox = new VisibleSectionsModel(SpreadViewTableWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        comboBox->setFrame(false);

        gridLayout_2->addWidget(comboBox, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(SpreadViewTableWidget);

        QMetaObject::connectSlotsByName(SpreadViewTableWidget);
    } // setupUi

    void retranslateUi(QWidget *SpreadViewTableWidget)
    {
        SpreadViewTableWidget->setWindowTitle(QApplication::translate("SpreadViewTableWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SpreadViewTableWidget", "Search", 0, QApplication::UnicodeUTF8));
        showOnlySelectedElementsCheckBox->setText(QApplication::translate("SpreadViewTableWidget", "Show only selected elements", 0, QApplication::UnicodeUTF8));
        filterPushButton->setText(QApplication::translate("SpreadViewTableWidget", "Filter", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SpreadViewTableWidget", "in", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SpreadViewTableWidget: public Ui_SpreadViewTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPREADVIEWTABLEWIDGET_H
