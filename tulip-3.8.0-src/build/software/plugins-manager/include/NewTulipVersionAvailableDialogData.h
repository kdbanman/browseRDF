/********************************************************************************
** Form generated from reading UI file 'NewTulipVersionAvailableDialog.ui'
**
** Created: Tue Apr 30 11:10:28 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef NEWTULIPVERSIONAVAILABLEDIALOGDATA_H
#define NEWTULIPVERSIONAVAILABLEDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewTulipVersionAvailableDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QLabel *tulipVersion;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QCheckBox *askMeAgain;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;

    void setupUi(QDialog *NewTulipVersionAvailableDialogData)
    {
        if (NewTulipVersionAvailableDialogData->objectName().isEmpty())
            NewTulipVersionAvailableDialogData->setObjectName(QString::fromUtf8("NewTulipVersionAvailableDialogData"));
        NewTulipVersionAvailableDialogData->resize(403, 84);
        gridLayout = new QGridLayout(NewTulipVersionAvailableDialogData);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(NewTulipVersionAvailableDialogData);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        tulipVersion = new QLabel(NewTulipVersionAvailableDialogData);
        tulipVersion->setObjectName(QString::fromUtf8("tulipVersion"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        tulipVersion->setFont(font);
        tulipVersion->setTextFormat(Qt::LogText);
        tulipVersion->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(tulipVersion);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_3 = new QLabel(NewTulipVersionAvailableDialogData);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setItalic(false);
        label_3->setFont(font1);

        hboxLayout->addWidget(label_3);

        label_2 = new QLabel(NewTulipVersionAvailableDialogData);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(true);
        font2.setWeight(50);
        label_2->setFont(font2);

        hboxLayout->addWidget(label_2);

        label_4 = new QLabel(NewTulipVersionAvailableDialogData);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout->addWidget(label_4);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        askMeAgain = new QCheckBox(NewTulipVersionAvailableDialogData);
        askMeAgain->setObjectName(QString::fromUtf8("askMeAgain"));
        askMeAgain->setChecked(true);

        hboxLayout1->addWidget(askMeAgain);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        okButton = new QPushButton(NewTulipVersionAvailableDialogData);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        hboxLayout1->addWidget(okButton);


        vboxLayout->addLayout(hboxLayout1);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);


        retranslateUi(NewTulipVersionAvailableDialogData);

        QMetaObject::connectSlotsByName(NewTulipVersionAvailableDialogData);
    } // setupUi

    void retranslateUi(QDialog *NewTulipVersionAvailableDialogData)
    {
        NewTulipVersionAvailableDialogData->setWindowTitle(QApplication::translate("NewTulipVersionAvailableDialogData", "New version of Tulip available", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewTulipVersionAvailableDialogData", "A new version of tulip is available : ", 0, QApplication::UnicodeUTF8));
        tulipVersion->setText(QApplication::translate("NewTulipVersionAvailableDialogData", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NewTulipVersionAvailableDialogData", "Visit ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewTulipVersionAvailableDialogData", "http://tulip.labri.fr ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("NewTulipVersionAvailableDialogData", "to download it", 0, QApplication::UnicodeUTF8));
        askMeAgain->setText(QApplication::translate("NewTulipVersionAvailableDialogData", "Ask me again ?", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("NewTulipVersionAvailableDialogData", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewTulipVersionAvailableDialogData: public Ui_NewTulipVersionAvailableDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // NEWTULIPVERSIONAVAILABLEDIALOGDATA_H
