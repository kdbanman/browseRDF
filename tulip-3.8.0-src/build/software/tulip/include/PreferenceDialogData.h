/********************************************************************************
** Form generated from reading UI file 'PreferenceDialog.ui'
**
** Created: Tue Apr 30 11:13:49 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PREFERENCEDIALOGDATA_H
#define PREFERENCEDIALOGDATA_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferenceDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *main;
    QGridLayout *gridLayout1;
    QVBoxLayout *vboxLayout1;
    QCheckBox *autoLoadControllerButton;
    QLabel *label_2;
    QCheckBox *networkRadioButton;
    QCheckBox *useSpecificMetricCheck;
    QLabel *label;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferenceDialogData)
    {
        if (PreferenceDialogData->objectName().isEmpty())
            PreferenceDialogData->setObjectName(QString::fromUtf8("PreferenceDialogData"));
        PreferenceDialogData->resize(321, 214);
        gridLayout = new QGridLayout(PreferenceDialogData);
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
        tabWidget = new QTabWidget(PreferenceDialogData);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        main = new QWidget();
        main->setObjectName(QString::fromUtf8("main"));
        gridLayout1 = new QGridLayout(main);
        gridLayout1->setSpacing(0);
        gridLayout1->setContentsMargins(6, 6, 6, 6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(0);
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        autoLoadControllerButton = new QCheckBox(main);
        autoLoadControllerButton->setObjectName(QString::fromUtf8("autoLoadControllerButton"));

        vboxLayout1->addWidget(autoLoadControllerButton);

        label_2 = new QLabel(main);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(7);
        font.setItalic(true);
        label_2->setFont(font);

        vboxLayout1->addWidget(label_2);

        networkRadioButton = new QCheckBox(main);
        networkRadioButton->setObjectName(QString::fromUtf8("networkRadioButton"));
        networkRadioButton->setChecked(true);

        vboxLayout1->addWidget(networkRadioButton);

        useSpecificMetricCheck = new QCheckBox(main);
        useSpecificMetricCheck->setObjectName(QString::fromUtf8("useSpecificMetricCheck"));
        useSpecificMetricCheck->setChecked(false);

        vboxLayout1->addWidget(useSpecificMetricCheck);

        label = new QLabel(main);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(7);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        vboxLayout1->addWidget(label);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        gridLayout1->addLayout(vboxLayout1, 0, 0, 1, 1);

        tabWidget->addTab(main, QString());

        vboxLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(PreferenceDialogData);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);


        retranslateUi(PreferenceDialogData);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferenceDialogData, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferenceDialogData, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferenceDialogData);
    } // setupUi

    void retranslateUi(QDialog *PreferenceDialogData)
    {
        PreferenceDialogData->setWindowTitle(QApplication::translate("PreferenceDialogData", "Preferences", 0, QApplication::UnicodeUTF8));
        autoLoadControllerButton->setText(QApplication::translate("PreferenceDialogData", "Auto load saved controller", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PreferenceDialogData", "      ( if you have more than one controller ) ", 0, QApplication::UnicodeUTF8));
        networkRadioButton->setText(QApplication::translate("PreferenceDialogData", "Connect to plugins server at startup", 0, QApplication::UnicodeUTF8));
        useSpecificMetricCheck->setText(QApplication::translate("PreferenceDialogData", "Store metric results in specific properties", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PreferenceDialogData", "The viewMetric property will still contain last computed metric results.", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(main), QApplication::translate("PreferenceDialogData", "Main", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PreferenceDialogData: public Ui_PreferenceDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PREFERENCEDIALOGDATA_H
