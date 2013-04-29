/********************************************************************************
** Form generated from reading UI file 'CSVGraphMappingConfigurationWidget.ui'
**
** Created: Mon Apr 29 01:40:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CSVGRAPHMAPPINGCONFIGURATIONWIDGETDATA_H
#define CSVGRAPHMAPPINGCONFIGURATIONWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <tulip/CSVGraphMappingConfigurationWidget.h>

QT_BEGIN_NAMESPACE

class Ui_CSVGraphMappingConfigurationWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QListWidget *mappingListWidget;
    QStackedWidget *mappingConfigurationStackedWidget;
    QWidget *importNewNodesPage;
    QVBoxLayout *verticalLayout_8;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QWidget *importEdgesFromNodesPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QGridLayout *gridLayout_5;
    tlp::CSVColumnComboBox *sourceColumnComboBox;
    tlp::CSVColumnComboBox *targetColumnComboBox;
    QHBoxLayout *horizontalLayout_2;
    tlp::GraphPropertiesSelectionComboBox *graphIndexPropertiesComboBox;
    QPushButton *createNewPropertyPushButton;
    QLabel *label_6;
    QCheckBox *addMissingEdgeAndNodeCheckBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *importNodesPage;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QGridLayout *gridLayout_4;
    tlp::CSVColumnComboBox *nodeMappingColumncomboBox;
    tlp::GraphPropertiesSelectionComboBox *nodeMappingPropertycomboBox;
    QCheckBox *createMissingNodesCheckBox;
    QSpacerItem *verticalSpacer;
    QWidget *importEdgesPages;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QGridLayout *gridLayout_6;
    tlp::CSVColumnComboBox *edgeMappingColumncomboBox;
    tlp::GraphPropertiesSelectionComboBox *edgeMappingPropertycomboBox;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *CSVGraphMappingConfigurationWidget)
    {
        if (CSVGraphMappingConfigurationWidget->objectName().isEmpty())
            CSVGraphMappingConfigurationWidget->setObjectName(QString::fromUtf8("CSVGraphMappingConfigurationWidget"));
        CSVGraphMappingConfigurationWidget->resize(666, 491);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CSVGraphMappingConfigurationWidget->sizePolicy().hasHeightForWidth());
        CSVGraphMappingConfigurationWidget->setSizePolicy(sizePolicy);
        CSVGraphMappingConfigurationWidget->setMaximumSize(QSize(800, 16777215));
        verticalLayout = new QVBoxLayout(CSVGraphMappingConfigurationWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 0, -1);
        label_5 = new QLabel(CSVGraphMappingConfigurationWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        mappingListWidget = new QListWidget(CSVGraphMappingConfigurationWidget);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mappingListWidget);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        new QListWidgetItem(mappingListWidget);
        new QListWidgetItem(mappingListWidget);
        new QListWidgetItem(mappingListWidget);
        mappingListWidget->setObjectName(QString::fromUtf8("mappingListWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mappingListWidget->sizePolicy().hasHeightForWidth());
        mappingListWidget->setSizePolicy(sizePolicy1);
        mappingListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mappingListWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        mappingListWidget->setProperty("isWrapping", QVariant(true));
        mappingListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mappingListWidget);


        horizontalLayout->addLayout(verticalLayout_2);

        mappingConfigurationStackedWidget = new QStackedWidget(CSVGraphMappingConfigurationWidget);
        mappingConfigurationStackedWidget->setObjectName(QString::fromUtf8("mappingConfigurationStackedWidget"));
        importNewNodesPage = new QWidget();
        importNewNodesPage->setObjectName(QString::fromUtf8("importNewNodesPage"));
        verticalLayout_8 = new QVBoxLayout(importNewNodesPage);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label = new QLabel(importNewNodesPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_8->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        mappingConfigurationStackedWidget->addWidget(importNewNodesPage);
        importEdgesFromNodesPage = new QWidget();
        importEdgesFromNodesPage->setObjectName(QString::fromUtf8("importEdgesFromNodesPage"));
        verticalLayout_4 = new QVBoxLayout(importEdgesFromNodesPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(importEdgesFromNodesPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMaximumSize(QSize(750, 16777215));
        label_3->setWordWrap(true);

        verticalLayout_4->addWidget(label_3);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(3);
        gridLayout_5->setVerticalSpacing(9);
        sourceColumnComboBox = new tlp::CSVColumnComboBox(importEdgesFromNodesPage);
        sourceColumnComboBox->setObjectName(QString::fromUtf8("sourceColumnComboBox"));

        gridLayout_5->addWidget(sourceColumnComboBox, 0, 0, 1, 1);

        targetColumnComboBox = new tlp::CSVColumnComboBox(importEdgesFromNodesPage);
        targetColumnComboBox->setObjectName(QString::fromUtf8("targetColumnComboBox"));

        gridLayout_5->addWidget(targetColumnComboBox, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        graphIndexPropertiesComboBox = new tlp::GraphPropertiesSelectionComboBox(importEdgesFromNodesPage);
        graphIndexPropertiesComboBox->setObjectName(QString::fromUtf8("graphIndexPropertiesComboBox"));
        graphIndexPropertiesComboBox->setEditable(false);

        horizontalLayout_2->addWidget(graphIndexPropertiesComboBox);

        createNewPropertyPushButton = new QPushButton(importEdgesFromNodesPage);
        createNewPropertyPushButton->setObjectName(QString::fromUtf8("createNewPropertyPushButton"));
        sizePolicy2.setHeightForWidth(createNewPropertyPushButton->sizePolicy().hasHeightForWidth());
        createNewPropertyPushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(createNewPropertyPushButton);


        gridLayout_5->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        label_6 = new QLabel(importEdgesFromNodesPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMaximumSize(QSize(750, 16777215));
        label_6->setWordWrap(true);

        gridLayout_5->addWidget(label_6, 1, 0, 1, 2);


        verticalLayout_4->addLayout(gridLayout_5);

        addMissingEdgeAndNodeCheckBox = new QCheckBox(importEdgesFromNodesPage);
        addMissingEdgeAndNodeCheckBox->setObjectName(QString::fromUtf8("addMissingEdgeAndNodeCheckBox"));
        addMissingEdgeAndNodeCheckBox->setChecked(true);

        verticalLayout_4->addWidget(addMissingEdgeAndNodeCheckBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        mappingConfigurationStackedWidget->addWidget(importEdgesFromNodesPage);
        importNodesPage = new QWidget();
        importNodesPage->setObjectName(QString::fromUtf8("importNodesPage"));
        verticalLayout_3 = new QVBoxLayout(importNodesPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(importNodesPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);

        verticalLayout_3->addWidget(label_2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        nodeMappingColumncomboBox = new tlp::CSVColumnComboBox(importNodesPage);
        nodeMappingColumncomboBox->setObjectName(QString::fromUtf8("nodeMappingColumncomboBox"));

        gridLayout_4->addWidget(nodeMappingColumncomboBox, 0, 0, 1, 1);

        nodeMappingPropertycomboBox = new tlp::GraphPropertiesSelectionComboBox(importNodesPage);
        nodeMappingPropertycomboBox->setObjectName(QString::fromUtf8("nodeMappingPropertycomboBox"));

        gridLayout_4->addWidget(nodeMappingPropertycomboBox, 0, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);

        createMissingNodesCheckBox = new QCheckBox(importNodesPage);
        createMissingNodesCheckBox->setObjectName(QString::fromUtf8("createMissingNodesCheckBox"));
        createMissingNodesCheckBox->setChecked(true);

        verticalLayout_3->addWidget(createMissingNodesCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        mappingConfigurationStackedWidget->addWidget(importNodesPage);
        importEdgesPages = new QWidget();
        importEdgesPages->setObjectName(QString::fromUtf8("importEdgesPages"));
        verticalLayout_7 = new QVBoxLayout(importEdgesPages);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_4 = new QLabel(importEdgesPages);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_7->addWidget(label_4);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        edgeMappingColumncomboBox = new tlp::CSVColumnComboBox(importEdgesPages);
        edgeMappingColumncomboBox->setObjectName(QString::fromUtf8("edgeMappingColumncomboBox"));

        gridLayout_6->addWidget(edgeMappingColumncomboBox, 0, 0, 1, 1);

        edgeMappingPropertycomboBox = new tlp::GraphPropertiesSelectionComboBox(importEdgesPages);
        edgeMappingPropertycomboBox->setObjectName(QString::fromUtf8("edgeMappingPropertycomboBox"));

        gridLayout_6->addWidget(edgeMappingPropertycomboBox, 0, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        mappingConfigurationStackedWidget->addWidget(importEdgesPages);

        horizontalLayout->addWidget(mappingConfigurationStackedWidget);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CSVGraphMappingConfigurationWidget);
        QObject::connect(mappingListWidget, SIGNAL(currentRowChanged(int)), mappingConfigurationStackedWidget, SLOT(setCurrentIndex(int)));

        mappingListWidget->setCurrentRow(0);
        mappingConfigurationStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CSVGraphMappingConfigurationWidget);
    } // setupUi

    void retranslateUi(QWidget *CSVGraphMappingConfigurationWidget)
    {
        CSVGraphMappingConfigurationWidget->setWindowTitle(QApplication::translate("CSVGraphMappingConfigurationWidget", "Form", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Import data on</span></p></body></html>", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = mappingListWidget->isSortingEnabled();
        mappingListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mappingListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "New entities (nodes)", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = mappingListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "New relations (edges)", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = mappingListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "Existing entities (nodes)", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = mappingListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "Existing relations (edges)", 0, QApplication::UnicodeUTF8));
        mappingListWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:600;\">Import data on new entities (nodes)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Cre"
                        "ate a new entity (node) for each row in the file and import the data of selected columns on created entities (nodes). </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">If you want to remove duplicate entities in your data, try to use &quot;Existing entities (nodes)&quot; destination with &quot;Create missing entites&quot; option enabled.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:600;\">Import data on new relations (edges)</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:1"
                        "0pt;\">Create a new relation (edge) for each row and import the data of selected columns on created relations (edges). </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        createNewPropertyPushButton->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "Add new property in the list", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">The selected columns specify source and target entities.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Values in these columns are compared to values found in the specified property ( see below ) against existing node entities and mapped to any existing node entity. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; marg"
                        "in-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">When no node entity is found, a new node is created, unless the &quot;Create missing entities&quot; checkbox is left empty.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Select property against which newly found values are tested.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        addMissingEdgeAndNodeCheckBox->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "Create missing entities", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Import data on existing entities (nodes)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Import the data of selected columns on existing entities (node). </span><span style=\" font-siz"
                        "e:10pt;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">For each row we compare the destination entity id to graph entities ids. If there is a correspondence we import the row data on the first matching entity. If there is no entity with such id you can force the creation of a new entity with the \342\200\234Create missing entities\342\200\235 option. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        createMissingNodesCheckBox->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "Create missing entities", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CSVGraphMappingConfigurationWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Import data on existing relations (edges)</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Import selected columns on existing relations(edges). </span></p>\n"
"<p styl"
                        "e=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">For each row we compare the destination relation id to graph relations ids. If there is a correspondence we import the row data on the first matching relation. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CSVGraphMappingConfigurationWidget: public Ui_CSVGraphMappingConfigurationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CSVGRAPHMAPPINGCONFIGURATIONWIDGETDATA_H
