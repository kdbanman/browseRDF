/********************************************************************************
** Form generated from reading UI file 'QtOpenGlErrorViewerWithAskAgainDialog.ui'
**
** Created: Tue Apr 30 11:12:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef QTOPENGLERRORVIEWERWITHASKAGAINDIALOGDATA_H
#define QTOPENGLERRORVIEWERWITHASKAGAINDIALOGDATA_H

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

class Ui_QtOpenGlErrorViewerWithAskAgainDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *textLabel;
    QCheckBox *askAgainCheckBox;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;

    void setupUi(QDialog *QtOpenGlErrorViewerWithAskAgainDialogData)
    {
        if (QtOpenGlErrorViewerWithAskAgainDialogData->objectName().isEmpty())
            QtOpenGlErrorViewerWithAskAgainDialogData->setObjectName(QString::fromUtf8("QtOpenGlErrorViewerWithAskAgainDialogData"));
        QtOpenGlErrorViewerWithAskAgainDialogData->resize(321, 195);
        gridLayout = new QGridLayout(QtOpenGlErrorViewerWithAskAgainDialogData);
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
        textLabel = new QLabel(QtOpenGlErrorViewerWithAskAgainDialogData);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));

        vboxLayout->addWidget(textLabel);

        askAgainCheckBox = new QCheckBox(QtOpenGlErrorViewerWithAskAgainDialogData);
        askAgainCheckBox->setObjectName(QString::fromUtf8("askAgainCheckBox"));
        askAgainCheckBox->setChecked(true);

        vboxLayout->addWidget(askAgainCheckBox);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(QtOpenGlErrorViewerWithAskAgainDialogData);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        hboxLayout->addWidget(okButton);


        vboxLayout->addLayout(hboxLayout);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);


        retranslateUi(QtOpenGlErrorViewerWithAskAgainDialogData);

        QMetaObject::connectSlotsByName(QtOpenGlErrorViewerWithAskAgainDialogData);
    } // setupUi

    void retranslateUi(QDialog *QtOpenGlErrorViewerWithAskAgainDialogData)
    {
        QtOpenGlErrorViewerWithAskAgainDialogData->setWindowTitle(QApplication::translate("QtOpenGlErrorViewerWithAskAgainDialogData", "Dialog", 0, QApplication::UnicodeUTF8));
        textLabel->setText(QString());
        askAgainCheckBox->setText(QApplication::translate("QtOpenGlErrorViewerWithAskAgainDialogData", "Ask me again", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("QtOpenGlErrorViewerWithAskAgainDialogData", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QtOpenGlErrorViewerWithAskAgainDialogData: public Ui_QtOpenGlErrorViewerWithAskAgainDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QTOPENGLERRORVIEWERWITHASKAGAINDIALOGDATA_H
