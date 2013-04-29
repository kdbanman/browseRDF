/********************************************************************************
** Form generated from reading UI file 'CSVImportWizard.ui'
**
** Created: Mon Apr 29 01:40:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CSVIMPORTWIZARDDATA_H
#define CSVIMPORTWIZARDDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWizard>
#include <tulip/CSVImportWizard.h>

QT_BEGIN_NAMESPACE

class Ui_CSVImportWizard
{
public:
    tlp::CSVParsingConfigurationQWizardPage *parserConfigurationWizardPage;
    tlp::CSVImportConfigurationQWizardPage *importConfigurationWizardPage;
    tlp::CSVGraphMappingConfigurationQWizardPage *mappingWizardPage;

    void setupUi(QWizard *CSVImportWizard)
    {
        if (CSVImportWizard->objectName().isEmpty())
            CSVImportWizard->setObjectName(QString::fromUtf8("CSVImportWizard"));
        CSVImportWizard->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CSVImportWizard->sizePolicy().hasHeightForWidth());
        CSVImportWizard->setSizePolicy(sizePolicy);
        parserConfigurationWizardPage = new tlp::CSVParsingConfigurationQWizardPage();
        parserConfigurationWizardPage->setObjectName(QString::fromUtf8("parserConfigurationWizardPage"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(parserConfigurationWizardPage->sizePolicy().hasHeightForWidth());
        parserConfigurationWizardPage->setSizePolicy(sizePolicy1);
        CSVImportWizard->addPage(parserConfigurationWizardPage);
        importConfigurationWizardPage = new tlp::CSVImportConfigurationQWizardPage();
        importConfigurationWizardPage->setObjectName(QString::fromUtf8("importConfigurationWizardPage"));
        sizePolicy1.setHeightForWidth(importConfigurationWizardPage->sizePolicy().hasHeightForWidth());
        importConfigurationWizardPage->setSizePolicy(sizePolicy1);
        CSVImportWizard->addPage(importConfigurationWizardPage);
        mappingWizardPage = new tlp::CSVGraphMappingConfigurationQWizardPage();
        mappingWizardPage->setObjectName(QString::fromUtf8("mappingWizardPage"));
        sizePolicy1.setHeightForWidth(mappingWizardPage->sizePolicy().hasHeightForWidth());
        mappingWizardPage->setSizePolicy(sizePolicy1);
        CSVImportWizard->addPage(mappingWizardPage);

        retranslateUi(CSVImportWizard);

        QMetaObject::connectSlotsByName(CSVImportWizard);
    } // setupUi

    void retranslateUi(QWizard *CSVImportWizard)
    {
        CSVImportWizard->setWindowTitle(QApplication::translate("CSVImportWizard", "Import CSV data", 0, QApplication::UnicodeUTF8));
        parserConfigurationWizardPage->setTitle(QApplication::translate("CSVImportWizard", "Source file settings", 0, QApplication::UnicodeUTF8));
        parserConfigurationWizardPage->setSubTitle(QApplication::translate("CSVImportWizard", "Specify parsing options: source file location, separator, file encoding.", 0, QApplication::UnicodeUTF8));
        importConfigurationWizardPage->setTitle(QApplication::translate("CSVImportWizard", "Data selection", 0, QApplication::UnicodeUTF8));
        importConfigurationWizardPage->setSubTitle(QApplication::translate("CSVImportWizard", "Select data to import: lines, attribute  columns. <br/> All checked columns will be imported.", 0, QApplication::UnicodeUTF8));
        mappingWizardPage->setTitle(QApplication::translate("CSVImportWizard", "Import method", 0, QApplication::UnicodeUTF8));
        mappingWizardPage->setSubTitle(QApplication::translate("CSVImportWizard", "Choose and configure the import method.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CSVImportWizard: public Ui_CSVImportWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CSVIMPORTWIZARDDATA_H
