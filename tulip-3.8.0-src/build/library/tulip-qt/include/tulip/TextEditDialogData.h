/********************************************************************************
** Form generated from reading UI file 'TextEditDialog.ui'
**
** Created: Mon Apr 29 01:40:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TEXTEDITDIALOGDATA_H
#define TEXTEDITDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TextEditDialogData
{
public:
    QVBoxLayout *vboxLayout;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TextEditDialogData)
    {
        if (TextEditDialogData->objectName().isEmpty())
            TextEditDialogData->setObjectName(QString::fromUtf8("TextEditDialogData"));
        TextEditDialogData->resize(291, 129);
        vboxLayout = new QVBoxLayout(TextEditDialogData);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textEdit = new QTextEdit(TextEditDialogData);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        vboxLayout->addWidget(textEdit);

        buttonBox = new QDialogButtonBox(TextEditDialogData);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(TextEditDialogData);
        QObject::connect(buttonBox, SIGNAL(accepted()), TextEditDialogData, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TextEditDialogData, SLOT(reject()));

        QMetaObject::connectSlotsByName(TextEditDialogData);
    } // setupUi

    void retranslateUi(QDialog *TextEditDialogData)
    {
        TextEditDialogData->setWindowTitle(QApplication::translate("TextEditDialogData", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TextEditDialogData: public Ui_TextEditDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TEXTEDITDIALOGDATA_H
