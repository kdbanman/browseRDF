/********************************************************************************
** Form generated from reading UI file 'CopyPropertyDialog.ui'
**
** Created: Mon Apr 29 01:40:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef COPYPROPERTYDIALOGDATA_H
#define COPYPROPERTYDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CopyPropertyDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *_3;
    QLabel *label;
    QFormLayout *formLayout;
    QLineEdit *newPropertyNameLineEdit;
    QRadioButton *newPropertyRadioButton;
    QRadioButton *localPropertyRadioButton;
    QRadioButton *inheritedPropertyRadioButton;
    QComboBox *localPropertiesComboBox;
    QComboBox *inheritedPropertiesComboBox;
    QWidget *errorNotificationWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *errorIconLabel;
    QLabel *errorLabel;
    QHBoxLayout *_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOK;
    QPushButton *buttonCancel;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *CopyPropertyDialogData)
    {
        if (CopyPropertyDialogData->objectName().isEmpty())
            CopyPropertyDialogData->setObjectName(QString::fromUtf8("CopyPropertyDialogData"));
        CopyPropertyDialogData->resize(397, 157);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CopyPropertyDialogData->sizePolicy().hasHeightForWidth());
        CopyPropertyDialogData->setSizePolicy(sizePolicy);
        CopyPropertyDialogData->setSizeGripEnabled(false);
        CopyPropertyDialogData->setModal(true);
        gridLayout = new QGridLayout(CopyPropertyDialogData);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        _3 = new QVBoxLayout();
        _3->setSpacing(3);
        _3->setContentsMargins(0, 0, 0, 0);
        _3->setObjectName(QString::fromUtf8("_3"));
        label = new QLabel(CopyPropertyDialogData);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignVCenter);
        label->setWordWrap(false);

        _3->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        formLayout->setContentsMargins(-1, 0, -1, -1);
        newPropertyNameLineEdit = new QLineEdit(CopyPropertyDialogData);
        newPropertyNameLineEdit->setObjectName(QString::fromUtf8("newPropertyNameLineEdit"));
        newPropertyNameLineEdit->setEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, newPropertyNameLineEdit);

        newPropertyRadioButton = new QRadioButton(CopyPropertyDialogData);
        buttonGroup = new QButtonGroup(CopyPropertyDialogData);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(newPropertyRadioButton);
        newPropertyRadioButton->setObjectName(QString::fromUtf8("newPropertyRadioButton"));
        newPropertyRadioButton->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, newPropertyRadioButton);

        localPropertyRadioButton = new QRadioButton(CopyPropertyDialogData);
        buttonGroup->addButton(localPropertyRadioButton);
        localPropertyRadioButton->setObjectName(QString::fromUtf8("localPropertyRadioButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, localPropertyRadioButton);

        inheritedPropertyRadioButton = new QRadioButton(CopyPropertyDialogData);
        buttonGroup->addButton(inheritedPropertyRadioButton);
        inheritedPropertyRadioButton->setObjectName(QString::fromUtf8("inheritedPropertyRadioButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, inheritedPropertyRadioButton);

        localPropertiesComboBox = new QComboBox(CopyPropertyDialogData);
        localPropertiesComboBox->setObjectName(QString::fromUtf8("localPropertiesComboBox"));
        localPropertiesComboBox->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, localPropertiesComboBox);

        inheritedPropertiesComboBox = new QComboBox(CopyPropertyDialogData);
        inheritedPropertiesComboBox->setObjectName(QString::fromUtf8("inheritedPropertiesComboBox"));
        inheritedPropertiesComboBox->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, inheritedPropertiesComboBox);


        _3->addLayout(formLayout);

        errorNotificationWidget = new QWidget(CopyPropertyDialogData);
        errorNotificationWidget->setObjectName(QString::fromUtf8("errorNotificationWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(errorNotificationWidget->sizePolicy().hasHeightForWidth());
        errorNotificationWidget->setSizePolicy(sizePolicy1);
        errorNotificationWidget->setMinimumSize(QSize(0, 10));
        horizontalLayout = new QHBoxLayout(errorNotificationWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        errorIconLabel = new QLabel(errorNotificationWidget);
        errorIconLabel->setObjectName(QString::fromUtf8("errorIconLabel"));
        sizePolicy.setHeightForWidth(errorIconLabel->sizePolicy().hasHeightForWidth());
        errorIconLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(errorIconLabel);

        errorLabel = new QLabel(errorNotificationWidget);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        sizePolicy1.setHeightForWidth(errorLabel->sizePolicy().hasHeightForWidth());
        errorLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(errorLabel);


        _3->addWidget(errorNotificationWidget);

        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setContentsMargins(0, 0, 0, 0);
        _2->setObjectName(QString::fromUtf8("_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer);

        buttonOK = new QPushButton(CopyPropertyDialogData);
        buttonOK->setObjectName(QString::fromUtf8("buttonOK"));
        buttonOK->setAutoDefault(true);
        buttonOK->setDefault(true);

        _2->addWidget(buttonOK);

        buttonCancel = new QPushButton(CopyPropertyDialogData);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);
        buttonCancel->setDefault(false);

        _2->addWidget(buttonCancel);


        _3->addLayout(_2);


        gridLayout->addLayout(_3, 0, 0, 2, 2);


        retranslateUi(CopyPropertyDialogData);
        QObject::connect(newPropertyRadioButton, SIGNAL(toggled(bool)), newPropertyNameLineEdit, SLOT(setEnabled(bool)));
        QObject::connect(inheritedPropertyRadioButton, SIGNAL(toggled(bool)), inheritedPropertiesComboBox, SLOT(setEnabled(bool)));
        QObject::connect(localPropertyRadioButton, SIGNAL(toggled(bool)), localPropertiesComboBox, SLOT(setEnabled(bool)));
        QObject::connect(buttonOK, SIGNAL(clicked()), CopyPropertyDialogData, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), CopyPropertyDialogData, SLOT(reject()));

        QMetaObject::connectSlotsByName(CopyPropertyDialogData);
    } // setupUi

    void retranslateUi(QDialog *CopyPropertyDialogData)
    {
        CopyPropertyDialogData->setWindowTitle(QApplication::translate("CopyPropertyDialogData", "Copy Property", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CopyPropertyDialogData", "Choose the destination property", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        newPropertyRadioButton->setToolTip(QApplication::translate("CopyPropertyDialogData", "The destination property will be a new property. It's name is given by the contents of  the text field on the right", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        newPropertyRadioButton->setText(QApplication::translate("CopyPropertyDialogData", "New property", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        localPropertyRadioButton->setToolTip(QApplication::translate("CopyPropertyDialogData", "The destination property will be an already existing local property choosen in the list on the right", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        localPropertyRadioButton->setText(QApplication::translate("CopyPropertyDialogData", "Local property", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        inheritedPropertyRadioButton->setToolTip(QApplication::translate("CopyPropertyDialogData", "The destination property will be an already existing parent property choosen in the list on the right", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        inheritedPropertyRadioButton->setText(QApplication::translate("CopyPropertyDialogData", "Inherited property", 0, QApplication::UnicodeUTF8));
        errorIconLabel->setText(QString());
        errorLabel->setText(QString());
        buttonOK->setText(QApplication::translate("CopyPropertyDialogData", "&Copy", 0, QApplication::UnicodeUTF8));
        buttonOK->setShortcut(QApplication::translate("CopyPropertyDialogData", "Alt+O", 0, QApplication::UnicodeUTF8));
        buttonCancel->setText(QApplication::translate("CopyPropertyDialogData", "&Cancel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QApplication::translate("CopyPropertyDialogData", "Alt+C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CopyPropertyDialogData: public Ui_CopyPropertyDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // COPYPROPERTYDIALOGDATA_H
