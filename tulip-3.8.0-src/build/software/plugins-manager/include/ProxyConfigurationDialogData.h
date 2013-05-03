/********************************************************************************
** Form generated from reading UI file 'ProxyConfigurationDialog.ui'
**
** Created: Tue Apr 30 11:10:28 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PROXYCONFIGURATIONDIALOGDATA_H
#define PROXYCONFIGURATIONDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProxyConfigurationDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QCheckBox *enableProxy;
    QVBoxLayout *vboxLayout1;
    QLabel *hostLabel;
    QLineEdit *hostEdit;
    QLabel *portLabel;
    QLineEdit *portEdit;
    QCheckBox *useUsernamePassword;
    QLabel *usernameLabel;
    QLineEdit *usernameEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProxyConfigurationDialogData)
    {
        if (ProxyConfigurationDialogData->objectName().isEmpty())
            ProxyConfigurationDialogData->setObjectName(QString::fromUtf8("ProxyConfigurationDialogData"));
        ProxyConfigurationDialogData->resize(292, 320);
        gridLayout = new QGridLayout(ProxyConfigurationDialogData);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(3);
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        enableProxy = new QCheckBox(ProxyConfigurationDialogData);
        enableProxy->setObjectName(QString::fromUtf8("enableProxy"));

        vboxLayout->addWidget(enableProxy);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(3);
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hostLabel = new QLabel(ProxyConfigurationDialogData);
        hostLabel->setObjectName(QString::fromUtf8("hostLabel"));

        vboxLayout1->addWidget(hostLabel);

        hostEdit = new QLineEdit(ProxyConfigurationDialogData);
        hostEdit->setObjectName(QString::fromUtf8("hostEdit"));
        hostEdit->setEnabled(false);

        vboxLayout1->addWidget(hostEdit);

        portLabel = new QLabel(ProxyConfigurationDialogData);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));

        vboxLayout1->addWidget(portLabel);

        portEdit = new QLineEdit(ProxyConfigurationDialogData);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));
        portEdit->setEnabled(false);

        vboxLayout1->addWidget(portEdit);

        useUsernamePassword = new QCheckBox(ProxyConfigurationDialogData);
        useUsernamePassword->setObjectName(QString::fromUtf8("useUsernamePassword"));
        useUsernamePassword->setEnabled(false);

        vboxLayout1->addWidget(useUsernamePassword);

        usernameLabel = new QLabel(ProxyConfigurationDialogData);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        vboxLayout1->addWidget(usernameLabel);

        usernameEdit = new QLineEdit(ProxyConfigurationDialogData);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setEnabled(false);

        vboxLayout1->addWidget(usernameEdit);

        passwordLabel = new QLabel(ProxyConfigurationDialogData);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        vboxLayout1->addWidget(passwordLabel);

        passwordEdit = new QLineEdit(ProxyConfigurationDialogData);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setEnabled(false);

        vboxLayout1->addWidget(passwordEdit);


        vboxLayout->addLayout(vboxLayout1);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ProxyConfigurationDialogData);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(ProxyConfigurationDialogData);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProxyConfigurationDialogData, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProxyConfigurationDialogData, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProxyConfigurationDialogData);
    } // setupUi

    void retranslateUi(QDialog *ProxyConfigurationDialogData)
    {
        ProxyConfigurationDialogData->setWindowTitle(QApplication::translate("ProxyConfigurationDialogData", "Proxy Configuration", 0, QApplication::UnicodeUTF8));
        enableProxy->setText(QApplication::translate("ProxyConfigurationDialogData", "Enable http proxy", 0, QApplication::UnicodeUTF8));
        hostLabel->setText(QApplication::translate("ProxyConfigurationDialogData", "Host address : ", 0, QApplication::UnicodeUTF8));
        portLabel->setText(QApplication::translate("ProxyConfigurationDialogData", "Host port : ", 0, QApplication::UnicodeUTF8));
        useUsernamePassword->setText(QApplication::translate("ProxyConfigurationDialogData", "Use username/password", 0, QApplication::UnicodeUTF8));
        usernameLabel->setText(QApplication::translate("ProxyConfigurationDialogData", "Username :", 0, QApplication::UnicodeUTF8));
        passwordLabel->setText(QApplication::translate("ProxyConfigurationDialogData", "Password : ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProxyConfigurationDialogData: public Ui_ProxyConfigurationDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PROXYCONFIGURATIONDIALOGDATA_H
