/********************************************************************************
** Form generated from reading UI file 'PluginCreationDialog.ui'
**
** Created: Tue Apr 30 11:13:56 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PLUGINCREATIONDIALOGDATA_H
#define PLUGINCREATIONDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PluginCreationDialogData
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *pluginFileName;
    QPushButton *browseButton;
    QLabel *label_3;
    QComboBox *pluginType;
    QLabel *label_2;
    QLineEdit *pluginClassName;
    QLabel *label_4;
    QLineEdit *pluginName;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *author;
    QLabel *label_6;
    QLineEdit *date;
    QLabel *label_7;
    QLineEdit *infos;
    QLabel *label_8;
    QLineEdit *release;
    QLabel *label_9;
    QLineEdit *group;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *PluginCreationDialogData)
    {
        if (PluginCreationDialogData->objectName().isEmpty())
            PluginCreationDialogData->setObjectName(QString::fromUtf8("PluginCreationDialogData"));
        PluginCreationDialogData->resize(450, 406);
        verticalLayout = new QVBoxLayout(PluginCreationDialogData);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_10 = new QLabel(PluginCreationDialogData);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 40));

        verticalLayout->addWidget(label_10);

        groupBox = new QGroupBox(PluginCreationDialogData);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pluginFileName = new QLineEdit(groupBox);
        pluginFileName->setObjectName(QString::fromUtf8("pluginFileName"));

        horizontalLayout->addWidget(pluginFileName);

        browseButton = new QPushButton(groupBox);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/i_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        browseButton->setIcon(icon);

        horizontalLayout->addWidget(browseButton);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        pluginType = new QComboBox(groupBox);
        pluginType->setObjectName(QString::fromUtf8("pluginType"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, pluginType);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        pluginClassName = new QLineEdit(groupBox);
        pluginClassName->setObjectName(QString::fromUtf8("pluginClassName"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pluginClassName);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        pluginName = new QLineEdit(groupBox);
        pluginName->setObjectName(QString::fromUtf8("pluginName"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, pluginName);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(PluginCreationDialogData);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        author = new QLineEdit(groupBox_2);
        author->setObjectName(QString::fromUtf8("author"));

        formLayout->setWidget(0, QFormLayout::FieldRole, author);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        date = new QLineEdit(groupBox_2);
        date->setObjectName(QString::fromUtf8("date"));

        formLayout->setWidget(1, QFormLayout::FieldRole, date);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        infos = new QLineEdit(groupBox_2);
        infos->setObjectName(QString::fromUtf8("infos"));

        formLayout->setWidget(2, QFormLayout::FieldRole, infos);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        release = new QLineEdit(groupBox_2);
        release->setObjectName(QString::fromUtf8("release"));

        formLayout->setWidget(3, QFormLayout::FieldRole, release);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        group = new QLineEdit(groupBox_2);
        group->setObjectName(QString::fromUtf8("group"));

        formLayout->setWidget(4, QFormLayout::FieldRole, group);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(PluginCreationDialogData);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(PluginCreationDialogData);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(PluginCreationDialogData);

        QMetaObject::connectSlotsByName(PluginCreationDialogData);
    } // setupUi

    void retranslateUi(QDialog *PluginCreationDialogData)
    {
        PluginCreationDialogData->setWindowTitle(QApplication::translate("PluginCreationDialogData", "Tulip Python plugin creation", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("PluginCreationDialogData", "Please provide the required fields in order to generate the source code\n"
"skeleton of the Tulip Python plugin to create.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PluginCreationDialogData", "Required fields", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("PluginCreationDialogData", "the path to the file where the plugin source code will be saved", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("PluginCreationDialogData", "Plugin file : ", 0, QApplication::UnicodeUTF8));
        browseButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("PluginCreationDialogData", "The type of plugin to create", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("PluginCreationDialogData", "Plugin type : ", 0, QApplication::UnicodeUTF8));
        pluginType->clear();
        pluginType->insertItems(0, QStringList()
         << QApplication::translate("PluginCreationDialogData", "General", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PluginCreationDialogData", "Layout", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PluginCreationDialogData", "Size", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PluginCreationDialogData", "Measure", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PluginCreationDialogData", "Color", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PluginCreationDialogData", "Selection", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PluginCreationDialogData", "Import", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PluginCreationDialogData", "Export", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("PluginCreationDialogData", "The name of the Python plugin class", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("PluginCreationDialogData", "Plugin class name :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("PluginCreationDialogData", "The name of the plugin as it will appear in the interface", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("PluginCreationDialogData", "Plugin name :", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("PluginCreationDialogData", "Optional fields", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("PluginCreationDialogData", "The name of the plugin's author", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("PluginCreationDialogData", "Author :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("PluginCreationDialogData", "The creation date of the plugin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("PluginCreationDialogData", "Date :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("PluginCreationDialogData", "Some informations about the plugin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("PluginCreationDialogData", "Informations :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("PluginCreationDialogData", "The version number of the plugin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("PluginCreationDialogData", "Release :", 0, QApplication::UnicodeUTF8));
        release->setText(QApplication::translate("PluginCreationDialogData", "1.0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("PluginCreationDialogData", "The plugin can be added to a group (will appear in a sub-menu in the interface)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("PluginCreationDialogData", "Group : ", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("PluginCreationDialogData", "Ok", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("PluginCreationDialogData", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PluginCreationDialogData: public Ui_PluginCreationDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PLUGINCREATIONDIALOGDATA_H
