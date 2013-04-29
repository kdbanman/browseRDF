/********************************************************************************
** Form generated from reading UI file 'CSVImportConfigurationWidget.ui'
**
** Created: Mon Apr 29 01:40:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CSVIMPORTCONFIGURATIONWIDGETDATA_H
#define CSVIMPORTCONFIGURATIONWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <tulip/CSVImportConfigurationWidget.h>

QT_BEGIN_NAMESPACE

class Ui_CSVImportConifgurationWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *useFirstLineAsPropertyNamecheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *fromLineSpinBox;
    QLabel *label_2;
    QSpinBox *toLineSpinBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    tlp::CSVTableWidget *previewTableWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *limitPreviewLineNumberCheckBox;
    QSpinBox *previewLineNumberSpinBox;

    void setupUi(QWidget *CSVImportConifgurationWidget)
    {
        if (CSVImportConifgurationWidget->objectName().isEmpty())
            CSVImportConifgurationWidget->setObjectName(QString::fromUtf8("CSVImportConifgurationWidget"));
        CSVImportConifgurationWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(CSVImportConifgurationWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        useFirstLineAsPropertyNamecheckBox = new QCheckBox(CSVImportConifgurationWidget);
        useFirstLineAsPropertyNamecheckBox->setObjectName(QString::fromUtf8("useFirstLineAsPropertyNamecheckBox"));
        useFirstLineAsPropertyNamecheckBox->setChecked(true);

        verticalLayout->addWidget(useFirstLineAsPropertyNamecheckBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(CSVImportConifgurationWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        fromLineSpinBox = new QSpinBox(CSVImportConifgurationWidget);
        fromLineSpinBox->setObjectName(QString::fromUtf8("fromLineSpinBox"));
        fromLineSpinBox->setMinimum(1);
        fromLineSpinBox->setMaximum(1);
        fromLineSpinBox->setValue(1);

        horizontalLayout_3->addWidget(fromLineSpinBox);

        label_2 = new QLabel(CSVImportConifgurationWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_2);

        toLineSpinBox = new QSpinBox(CSVImportConifgurationWidget);
        toLineSpinBox->setObjectName(QString::fromUtf8("toLineSpinBox"));
        toLineSpinBox->setMaximum(0);

        horizontalLayout_3->addWidget(toLineSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        scrollArea = new QScrollArea(CSVImportConifgurationWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 392, 191));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        verticalLayout_3->addLayout(gridLayout);

        previewTableWidget = new tlp::CSVTableWidget(scrollAreaWidgetContents);
        previewTableWidget->setObjectName(QString::fromUtf8("previewTableWidget"));
        previewTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        previewTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        previewTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        previewTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        previewTableWidget->horizontalHeader()->setVisible(false);
        previewTableWidget->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(previewTableWidget);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        limitPreviewLineNumberCheckBox = new QCheckBox(CSVImportConifgurationWidget);
        limitPreviewLineNumberCheckBox->setObjectName(QString::fromUtf8("limitPreviewLineNumberCheckBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(limitPreviewLineNumberCheckBox->sizePolicy().hasHeightForWidth());
        limitPreviewLineNumberCheckBox->setSizePolicy(sizePolicy1);
        limitPreviewLineNumberCheckBox->setChecked(true);

        horizontalLayout->addWidget(limitPreviewLineNumberCheckBox);

        previewLineNumberSpinBox = new QSpinBox(CSVImportConifgurationWidget);
        previewLineNumberSpinBox->setObjectName(QString::fromUtf8("previewLineNumberSpinBox"));
        previewLineNumberSpinBox->setMinimum(1);
        previewLineNumberSpinBox->setMaximum(99);
        previewLineNumberSpinBox->setValue(5);

        horizontalLayout->addWidget(previewLineNumberSpinBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CSVImportConifgurationWidget);
        QObject::connect(limitPreviewLineNumberCheckBox, SIGNAL(clicked(bool)), previewLineNumberSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(CSVImportConifgurationWidget);
    } // setupUi

    void retranslateUi(QWidget *CSVImportConifgurationWidget)
    {
        CSVImportConifgurationWidget->setWindowTitle(QApplication::translate("CSVImportConifgurationWidget", "Form", 0, QApplication::UnicodeUTF8));
        useFirstLineAsPropertyNamecheckBox->setText(QApplication::translate("CSVImportConifgurationWidget", "Use first line tokens as column names", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CSVImportConifgurationWidget", "Import lines from", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CSVImportConifgurationWidget", "to", 0, QApplication::UnicodeUTF8));
        limitPreviewLineNumberCheckBox->setText(QApplication::translate("CSVImportConifgurationWidget", "Limit number of preview lines", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CSVImportConifgurationWidget: public Ui_CSVImportConifgurationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CSVIMPORTCONFIGURATIONWIDGETDATA_H
