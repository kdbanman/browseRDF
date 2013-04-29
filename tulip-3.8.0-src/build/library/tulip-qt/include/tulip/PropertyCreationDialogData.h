/********************************************************************************
** Form generated from reading UI file 'PropertyCreationDialog.ui'
**
** Created: Mon Apr 29 01:40:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PROPERTYCREATIONDIALOGDATA_H
#define PROPERTYCREATIONDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertyCreationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *propertyTypeLabel;
    QComboBox *propertyTypeComboBox;
    QLabel *propertyNameLabel;
    QLineEdit *propertyNameLineEdit;
    QWidget *errorNotificationWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *errorIconLabel;
    QLabel *errorLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PropertyCreationDialog)
    {
        if (PropertyCreationDialog->objectName().isEmpty())
            PropertyCreationDialog->setObjectName(QString::fromUtf8("PropertyCreationDialog"));
        PropertyCreationDialog->resize(294, 123);
        verticalLayout = new QVBoxLayout(PropertyCreationDialog);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setVerticalSpacing(6);
        propertyTypeLabel = new QLabel(PropertyCreationDialog);
        propertyTypeLabel->setObjectName(QString::fromUtf8("propertyTypeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, propertyTypeLabel);

        propertyTypeComboBox = new QComboBox(PropertyCreationDialog);
        propertyTypeComboBox->setObjectName(QString::fromUtf8("propertyTypeComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, propertyTypeComboBox);

        propertyNameLabel = new QLabel(PropertyCreationDialog);
        propertyNameLabel->setObjectName(QString::fromUtf8("propertyNameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, propertyNameLabel);

        propertyNameLineEdit = new QLineEdit(PropertyCreationDialog);
        propertyNameLineEdit->setObjectName(QString::fromUtf8("propertyNameLineEdit"));
        propertyNameLineEdit->setMinimumSize(QSize(183, 0));

        formLayout->setWidget(1, QFormLayout::FieldRole, propertyNameLineEdit);


        verticalLayout->addLayout(formLayout);

        errorNotificationWidget = new QWidget(PropertyCreationDialog);
        errorNotificationWidget->setObjectName(QString::fromUtf8("errorNotificationWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(errorNotificationWidget->sizePolicy().hasHeightForWidth());
        errorNotificationWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(errorNotificationWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        errorIconLabel = new QLabel(errorNotificationWidget);
        errorIconLabel->setObjectName(QString::fromUtf8("errorIconLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(errorIconLabel->sizePolicy().hasHeightForWidth());
        errorIconLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(errorIconLabel);

        errorLabel = new QLabel(errorNotificationWidget);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        sizePolicy.setHeightForWidth(errorLabel->sizePolicy().hasHeightForWidth());
        errorLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(errorLabel);


        verticalLayout->addWidget(errorNotificationWidget);

        buttonBox = new QDialogButtonBox(PropertyCreationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PropertyCreationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PropertyCreationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PropertyCreationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PropertyCreationDialog);
    } // setupUi

    void retranslateUi(QDialog *PropertyCreationDialog)
    {
        PropertyCreationDialog->setWindowTitle(QApplication::translate("PropertyCreationDialog", "Create new property", 0, QApplication::UnicodeUTF8));
        propertyTypeLabel->setText(QApplication::translate("PropertyCreationDialog", "Property type", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        propertyTypeComboBox->setToolTip(QApplication::translate("PropertyCreationDialog", "Select the property type", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        propertyNameLabel->setText(QApplication::translate("PropertyCreationDialog", "Property name", 0, QApplication::UnicodeUTF8));
        errorIconLabel->setText(QString());
        errorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PropertyCreationDialog: public Ui_PropertyCreationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PROPERTYCREATIONDIALOGDATA_H
