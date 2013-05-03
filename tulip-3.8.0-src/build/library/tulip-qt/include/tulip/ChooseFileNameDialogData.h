/********************************************************************************
** Form generated from reading UI file 'ChooseFileNameDialog.ui'
**
** Created: Tue Apr 30 11:12:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CHOOSEFILENAMEDIALOGDATA_H
#define CHOOSEFILENAMEDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseFileNameDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *fileName;
    QPushButton *fileOpenButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChooseFileNameDialogData)
    {
        if (ChooseFileNameDialogData->objectName().isEmpty())
            ChooseFileNameDialogData->setObjectName(QString::fromUtf8("ChooseFileNameDialogData"));
        ChooseFileNameDialogData->resize(350, 78);
        gridLayout = new QGridLayout(ChooseFileNameDialogData);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(ChooseFileNameDialogData);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        fileName = new QLineEdit(ChooseFileNameDialogData);
        fileName->setObjectName(QString::fromUtf8("fileName"));

        hboxLayout->addWidget(fileName);

        fileOpenButton = new QPushButton(ChooseFileNameDialogData);
        fileOpenButton->setObjectName(QString::fromUtf8("fileOpenButton"));

        hboxLayout->addWidget(fileOpenButton);


        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(ChooseFileNameDialogData);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);


        retranslateUi(ChooseFileNameDialogData);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChooseFileNameDialogData, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChooseFileNameDialogData, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChooseFileNameDialogData);
    } // setupUi

    void retranslateUi(QDialog *ChooseFileNameDialogData)
    {
        ChooseFileNameDialogData->setWindowTitle(QApplication::translate("ChooseFileNameDialogData", "Choose file name", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ChooseFileNameDialogData", "file name :", 0, QApplication::UnicodeUTF8));
        fileOpenButton->setText(QApplication::translate("ChooseFileNameDialogData", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChooseFileNameDialogData: public Ui_ChooseFileNameDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CHOOSEFILENAMEDIALOGDATA_H
