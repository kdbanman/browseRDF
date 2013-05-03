/********************************************************************************
** Form generated from reading UI file 'ChooseControllerDialog.ui'
**
** Created: Tue Apr 30 11:13:49 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CHOOSECONTROLLERDIALOGDATA_H
#define CHOOSECONTROLLERDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseControllerDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *label_2;
    QLabel *savedControllerLabel;
    QFrame *line;
    QLabel *label;
    QListWidget *listWidget;
    QCheckBox *askAgain;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChooseControllerDialogData)
    {
        if (ChooseControllerDialogData->objectName().isEmpty())
            ChooseControllerDialogData->setObjectName(QString::fromUtf8("ChooseControllerDialogData"));
        ChooseControllerDialogData->resize(275, 308);
        gridLayout = new QGridLayout(ChooseControllerDialogData);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(3);
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label_2 = new QLabel(ChooseControllerDialogData);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(label_2);

        savedControllerLabel = new QLabel(ChooseControllerDialogData);
        savedControllerLabel->setObjectName(QString::fromUtf8("savedControllerLabel"));
        QFont font1;
        font1.setItalic(true);
        savedControllerLabel->setFont(font1);
        savedControllerLabel->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(savedControllerLabel);

        line = new QFrame(ChooseControllerDialogData);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        label = new QLabel(ChooseControllerDialogData);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(label);

        listWidget = new QListWidget(ChooseControllerDialogData);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        vboxLayout->addWidget(listWidget);

        askAgain = new QCheckBox(ChooseControllerDialogData);
        askAgain->setObjectName(QString::fromUtf8("askAgain"));

        vboxLayout->addWidget(askAgain);

        label_3 = new QLabel(ChooseControllerDialogData);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(7);
        font2.setItalic(true);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(label_3);

        buttonBox = new QDialogButtonBox(ChooseControllerDialogData);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);


        retranslateUi(ChooseControllerDialogData);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChooseControllerDialogData, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChooseControllerDialogData, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChooseControllerDialogData);
    } // setupUi

    void retranslateUi(QDialog *ChooseControllerDialogData)
    {
        ChooseControllerDialogData->setWindowTitle(QApplication::translate("ChooseControllerDialogData", "Choose controller dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ChooseControllerDialogData", "Saved controller with this graph:", 0, QApplication::UnicodeUTF8));
        savedControllerLabel->setText(QApplication::translate("ChooseControllerDialogData", "None", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ChooseControllerDialogData", "Select a controller to load this graph:", 0, QApplication::UnicodeUTF8));
        askAgain->setText(QApplication::translate("ChooseControllerDialogData", "Auto load saved controller next time", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ChooseControllerDialogData", "(If you check this, you can undo it in Help->Preference menu )", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChooseControllerDialogData: public Ui_ChooseControllerDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CHOOSECONTROLLERDIALOGDATA_H
