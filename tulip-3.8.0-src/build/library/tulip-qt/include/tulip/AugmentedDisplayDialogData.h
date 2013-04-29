/********************************************************************************
** Form generated from reading UI file 'AugmentedDisplayDialog.ui'
**
** Created: Mon Apr 29 01:40:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef AUGMENTEDDISPLAYDIALOGDATA_H
#define AUGMENTEDDISPLAYDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AugmentedDisplayDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *removeButton;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;

    void setupUi(QDialog *AugmentedDisplayDialogData)
    {
        if (AugmentedDisplayDialogData->objectName().isEmpty())
            AugmentedDisplayDialogData->setObjectName(QString::fromUtf8("AugmentedDisplayDialogData"));
        AugmentedDisplayDialogData->resize(168, 282);
        gridLayout = new QGridLayout(AugmentedDisplayDialogData);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(0);
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        removeButton = new QPushButton(AugmentedDisplayDialogData);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        hboxLayout->addWidget(removeButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(AugmentedDisplayDialogData);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        gridLayout->addLayout(vboxLayout, 1, 0, 1, 1);

        listWidget = new QListWidget(AugmentedDisplayDialogData);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);


        retranslateUi(AugmentedDisplayDialogData);
        QObject::connect(buttonBox, SIGNAL(accepted()), AugmentedDisplayDialogData, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AugmentedDisplayDialogData, SLOT(reject()));

        QMetaObject::connectSlotsByName(AugmentedDisplayDialogData);
    } // setupUi

    void retranslateUi(QDialog *AugmentedDisplayDialogData)
    {
        AugmentedDisplayDialogData->setWindowTitle(QApplication::translate("AugmentedDisplayDialogData", "Augmented Display", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("AugmentedDisplayDialogData", "Remove", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AugmentedDisplayDialogData: public Ui_AugmentedDisplayDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // AUGMENTEDDISPLAYDIALOGDATA_H
