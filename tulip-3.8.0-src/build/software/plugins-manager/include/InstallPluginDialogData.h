/********************************************************************************
** Form generated from reading UI file 'InstallPluginDialog.ui'
**
** Created: Tue Apr 30 11:10:28 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef INSTALLPLUGINDIALOGDATA_H
#define INSTALLPLUGINDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InstallPluginDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *titleLabel;
    QLabel *label_2;
    QTableWidget *installTableWidget;
    QLabel *Remove;
    QTableWidget *removeTableWidget;
    QLabel *label;
    QProgressBar *progressBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *InstallPluginDialogData)
    {
        if (InstallPluginDialogData->objectName().isEmpty())
            InstallPluginDialogData->setObjectName(QString::fromUtf8("InstallPluginDialogData"));
        InstallPluginDialogData->resize(314, 395);
        gridLayout = new QGridLayout(InstallPluginDialogData);
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
        titleLabel = new QLabel(InstallPluginDialogData);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        vboxLayout->addWidget(titleLabel);

        label_2 = new QLabel(InstallPluginDialogData);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        vboxLayout->addWidget(label_2);

        installTableWidget = new QTableWidget(InstallPluginDialogData);
        installTableWidget->setObjectName(QString::fromUtf8("installTableWidget"));
        installTableWidget->setColumnCount(0);

        vboxLayout->addWidget(installTableWidget);

        Remove = new QLabel(InstallPluginDialogData);
        Remove->setObjectName(QString::fromUtf8("Remove"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Remove->sizePolicy().hasHeightForWidth());
        Remove->setSizePolicy(sizePolicy1);
        Remove->setFont(font1);

        vboxLayout->addWidget(Remove);

        removeTableWidget = new QTableWidget(InstallPluginDialogData);
        removeTableWidget->setObjectName(QString::fromUtf8("removeTableWidget"));
        removeTableWidget->setColumnCount(0);

        vboxLayout->addWidget(removeTableWidget);

        label = new QLabel(InstallPluginDialogData);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        vboxLayout->addWidget(label);

        progressBar = new QProgressBar(InstallPluginDialogData);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Horizontal);

        vboxLayout->addWidget(progressBar);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        cancelButton = new QPushButton(InstallPluginDialogData);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);

        okButton = new QPushButton(InstallPluginDialogData);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        hboxLayout->addWidget(okButton);


        vboxLayout->addLayout(hboxLayout);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);


        retranslateUi(InstallPluginDialogData);

        QMetaObject::connectSlotsByName(InstallPluginDialogData);
    } // setupUi

    void retranslateUi(QDialog *InstallPluginDialogData)
    {
        InstallPluginDialogData->setWindowTitle(QApplication::translate("InstallPluginDialogData", "Plugins install/remove", 0, QApplication::UnicodeUTF8));
        titleLabel->setText(QApplication::translate("InstallPluginDialogData", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("InstallPluginDialogData", "Install : ", 0, QApplication::UnicodeUTF8));
        Remove->setText(QApplication::translate("InstallPluginDialogData", "Remove :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("InstallPluginDialogData", "Progress :", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("InstallPluginDialogData", "Cancel", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("InstallPluginDialogData", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InstallPluginDialogData: public Ui_InstallPluginDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // INSTALLPLUGINDIALOGDATA_H
