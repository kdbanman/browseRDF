/********************************************************************************
** Form generated from reading UI file 'UpdatePluginsDialog.ui'
**
** Created: Fri Apr 26 16:32:48 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UPDATEPLUGINSDIALOGDATA_H
#define UPDATEPLUGINSDIALOGDATA_H

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
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdatePluginsDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QListWidget *listWidget;
    QHBoxLayout *hboxLayout;
    QCheckBox *askAgainCheckBox;
    QSpacerItem *spacerItem;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *UpdatePluginsDialogData)
    {
        if (UpdatePluginsDialogData->objectName().isEmpty())
            UpdatePluginsDialogData->setObjectName(QString::fromUtf8("UpdatePluginsDialogData"));
        UpdatePluginsDialogData->resize(307, 335);
        gridLayout = new QGridLayout(UpdatePluginsDialogData);
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
        label = new QLabel(UpdatePluginsDialogData);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setFrameShape(QFrame::NoFrame);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(label);

        listWidget = new QListWidget(UpdatePluginsDialogData);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        vboxLayout->addWidget(listWidget);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        askAgainCheckBox = new QCheckBox(UpdatePluginsDialogData);
        askAgainCheckBox->setObjectName(QString::fromUtf8("askAgainCheckBox"));
        askAgainCheckBox->setChecked(true);

        hboxLayout->addWidget(askAgainCheckBox);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        cancelButton = new QPushButton(UpdatePluginsDialogData);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);

        okButton = new QPushButton(UpdatePluginsDialogData);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        hboxLayout->addWidget(okButton);


        vboxLayout->addLayout(hboxLayout);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);


        retranslateUi(UpdatePluginsDialogData);

        QMetaObject::connectSlotsByName(UpdatePluginsDialogData);
    } // setupUi

    void retranslateUi(QDialog *UpdatePluginsDialogData)
    {
        UpdatePluginsDialogData->setWindowTitle(QApplication::translate("UpdatePluginsDialogData", "Plugins update", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UpdatePluginsDialogData", "Plugins update", 0, QApplication::UnicodeUTF8));
        askAgainCheckBox->setText(QApplication::translate("UpdatePluginsDialogData", "ask again", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("UpdatePluginsDialogData", "Cancel", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("UpdatePluginsDialogData", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UpdatePluginsDialogData: public Ui_UpdatePluginsDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UPDATEPLUGINSDIALOGDATA_H
