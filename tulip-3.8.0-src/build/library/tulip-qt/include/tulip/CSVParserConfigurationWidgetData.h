/********************************************************************************
** Form generated from reading UI file 'CSVParserConfigurationWidget.ui'
**
** Created: Fri Apr 26 16:35:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CSVPARSERCONFIGURATIONWIDGETDATA_H
#define CSVPARSERCONFIGURATIONWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <tulip/CSVParserConfigurationWidget.h>

QT_BEGIN_NAMESPACE

class Ui_CSVParserConfigurationWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *fileLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *fileLineEdit;
    QPushButton *fileChooserPushButton;
    QComboBox *encodingComboBox;
    QLabel *encodingLabel;
    QCheckBox *switchRowColumnCheckBox;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    tlp::CSVParserConfigurationWidgetEditableComboBox *separatorComboBox;
    QLabel *label_6;
    tlp::CSVParserConfigurationWidgetEditableComboBox *textDelimiterComboBox;

    void setupUi(QWidget *CSVParserConfigurationWidget)
    {
        if (CSVParserConfigurationWidget->objectName().isEmpty())
            CSVParserConfigurationWidget->setObjectName(QString::fromUtf8("CSVParserConfigurationWidget"));
        CSVParserConfigurationWidget->resize(272, 219);
        verticalLayout_2 = new QVBoxLayout(CSVParserConfigurationWidget);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 0, 3, 0);
        groupBox = new QGroupBox(CSVParserConfigurationWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 0, 3, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setVerticalSpacing(7);
        fileLabel = new QLabel(groupBox);
        fileLabel->setObjectName(QString::fromUtf8("fileLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, fileLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fileLineEdit = new QLineEdit(groupBox);
        fileLineEdit->setObjectName(QString::fromUtf8("fileLineEdit"));
        fileLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(fileLineEdit);

        fileChooserPushButton = new QPushButton(groupBox);
        fileChooserPushButton->setObjectName(QString::fromUtf8("fileChooserPushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileChooserPushButton->sizePolicy().hasHeightForWidth());
        fileChooserPushButton->setSizePolicy(sizePolicy);
        fileChooserPushButton->setMaximumSize(QSize(32, 32));

        horizontalLayout->addWidget(fileChooserPushButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        encodingComboBox = new QComboBox(groupBox);
        encodingComboBox->setObjectName(QString::fromUtf8("encodingComboBox"));
        sizePolicy.setHeightForWidth(encodingComboBox->sizePolicy().hasHeightForWidth());
        encodingComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, encodingComboBox);

        encodingLabel = new QLabel(groupBox);
        encodingLabel->setObjectName(QString::fromUtf8("encodingLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, encodingLabel);

        switchRowColumnCheckBox = new QCheckBox(groupBox);
        switchRowColumnCheckBox->setObjectName(QString::fromUtf8("switchRowColumnCheckBox"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, switchRowColumnCheckBox);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(CSVParserConfigurationWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(3, 0, 3, 0);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        separatorComboBox = new tlp::CSVParserConfigurationWidgetEditableComboBox(groupBox_2);
        separatorComboBox->setObjectName(QString::fromUtf8("separatorComboBox"));
        sizePolicy.setHeightForWidth(separatorComboBox->sizePolicy().hasHeightForWidth());
        separatorComboBox->setSizePolicy(sizePolicy);
        separatorComboBox->setEditable(true);
        separatorComboBox->setMinimumContentsLength(1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, separatorComboBox);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

        textDelimiterComboBox = new tlp::CSVParserConfigurationWidgetEditableComboBox(groupBox_2);
        textDelimiterComboBox->setObjectName(QString::fromUtf8("textDelimiterComboBox"));
        sizePolicy.setHeightForWidth(textDelimiterComboBox->sizePolicy().hasHeightForWidth());
        textDelimiterComboBox->setSizePolicy(sizePolicy);
        textDelimiterComboBox->setEditable(true);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, textDelimiterComboBox);


        verticalLayout_2->addWidget(groupBox_2);


        retranslateUi(CSVParserConfigurationWidget);

        QMetaObject::connectSlotsByName(CSVParserConfigurationWidget);
    } // setupUi

    void retranslateUi(QWidget *CSVParserConfigurationWidget)
    {
        CSVParserConfigurationWidget->setWindowTitle(QApplication::translate("CSVParserConfigurationWidget", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CSVParserConfigurationWidget", "File", 0, QApplication::UnicodeUTF8));
        fileLabel->setText(QApplication::translate("CSVParserConfigurationWidget", "Location", 0, QApplication::UnicodeUTF8));
        fileChooserPushButton->setText(QApplication::translate("CSVParserConfigurationWidget", "...", 0, QApplication::UnicodeUTF8));
        encodingLabel->setText(QApplication::translate("CSVParserConfigurationWidget", "Encoding", 0, QApplication::UnicodeUTF8));
        switchRowColumnCheckBox->setText(QApplication::translate("CSVParserConfigurationWidget", "Swap rows and columns", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CSVParserConfigurationWidget", "Delimiters", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CSVParserConfigurationWidget", "Separator", 0, QApplication::UnicodeUTF8));
        separatorComboBox->clear();
        separatorComboBox->insertItems(0, QStringList()
         << QApplication::translate("CSVParserConfigurationWidget", ";", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSVParserConfigurationWidget", ",", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSVParserConfigurationWidget", "Tab", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSVParserConfigurationWidget", "Space", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("CSVParserConfigurationWidget", "Text delimiter", 0, QApplication::UnicodeUTF8));
        textDelimiterComboBox->clear();
        textDelimiterComboBox->insertItems(0, QStringList()
         << QApplication::translate("CSVParserConfigurationWidget", "\"", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CSVParserConfigurationWidget", "'", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class CSVParserConfigurationWidget: public Ui_CSVParserConfigurationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CSVPARSERCONFIGURATIONWIDGETDATA_H
