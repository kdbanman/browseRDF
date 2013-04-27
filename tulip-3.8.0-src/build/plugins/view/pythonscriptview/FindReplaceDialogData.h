/********************************************************************************
** Form generated from reading UI file 'FindReplaceDialog.ui'
**
** Created: Fri Apr 26 16:36:23 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef FINDREPLACEDIALOGDATA_H
#define FINDREPLACEDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FindReplaceDialogData
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *textToFind;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *replaceText;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *forwardRB;
    QRadioButton *backwardRB;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *caseSensitiveCB;
    QCheckBox *regexpCB;
    QCheckBox *wholeWordCB;
    QCheckBox *wrapSearchCB;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *findButton;
    QPushButton *replaceFindButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *replaceButton;
    QPushButton *replaceAllButton;
    QPushButton *closeButton;
    QLabel *searchStatusLabel;

    void setupUi(QDialog *FindReplaceDialogData)
    {
        if (FindReplaceDialogData->objectName().isEmpty())
            FindReplaceDialogData->setObjectName(QString::fromUtf8("FindReplaceDialogData"));
        FindReplaceDialogData->resize(340, 329);
        verticalLayout = new QVBoxLayout(FindReplaceDialogData);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(FindReplaceDialogData);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        textToFind = new QLineEdit(FindReplaceDialogData);
        textToFind->setObjectName(QString::fromUtf8("textToFind"));

        horizontalLayout->addWidget(textToFind);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(FindReplaceDialogData);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        replaceText = new QLineEdit(FindReplaceDialogData);
        replaceText->setObjectName(QString::fromUtf8("replaceText"));

        horizontalLayout_2->addWidget(replaceText);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(FindReplaceDialogData);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        forwardRB = new QRadioButton(groupBox);
        forwardRB->setObjectName(QString::fromUtf8("forwardRB"));
        forwardRB->setChecked(true);

        verticalLayout_2->addWidget(forwardRB);

        backwardRB = new QRadioButton(groupBox);
        backwardRB->setObjectName(QString::fromUtf8("backwardRB"));

        verticalLayout_2->addWidget(backwardRB);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(FindReplaceDialogData);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        caseSensitiveCB = new QCheckBox(groupBox_2);
        caseSensitiveCB->setObjectName(QString::fromUtf8("caseSensitiveCB"));

        gridLayout_2->addWidget(caseSensitiveCB, 0, 0, 1, 1);

        regexpCB = new QCheckBox(groupBox_2);
        regexpCB->setObjectName(QString::fromUtf8("regexpCB"));

        gridLayout_2->addWidget(regexpCB, 0, 1, 1, 1);

        wholeWordCB = new QCheckBox(groupBox_2);
        wholeWordCB->setObjectName(QString::fromUtf8("wholeWordCB"));

        gridLayout_2->addWidget(wholeWordCB, 1, 0, 1, 1);

        wrapSearchCB = new QCheckBox(groupBox_2);
        wrapSearchCB->setObjectName(QString::fromUtf8("wrapSearchCB"));
        wrapSearchCB->setChecked(true);

        gridLayout_2->addWidget(wrapSearchCB, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        findButton = new QPushButton(FindReplaceDialogData);
        findButton->setObjectName(QString::fromUtf8("findButton"));
        findButton->setMinimumSize(QSize(102, 0));

        gridLayout->addWidget(findButton, 0, 1, 1, 1);

        replaceFindButton = new QPushButton(FindReplaceDialogData);
        replaceFindButton->setObjectName(QString::fromUtf8("replaceFindButton"));
        replaceFindButton->setEnabled(false);

        gridLayout->addWidget(replaceFindButton, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        replaceButton = new QPushButton(FindReplaceDialogData);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setEnabled(false);
        replaceButton->setMinimumSize(QSize(102, 0));

        gridLayout->addWidget(replaceButton, 1, 1, 1, 1);

        replaceAllButton = new QPushButton(FindReplaceDialogData);
        replaceAllButton->setObjectName(QString::fromUtf8("replaceAllButton"));

        gridLayout->addWidget(replaceAllButton, 1, 2, 1, 1);

        closeButton = new QPushButton(FindReplaceDialogData);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        gridLayout->addWidget(closeButton, 2, 2, 1, 1);

        searchStatusLabel = new QLabel(FindReplaceDialogData);
        searchStatusLabel->setObjectName(QString::fromUtf8("searchStatusLabel"));

        gridLayout->addWidget(searchStatusLabel, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(FindReplaceDialogData);

        QMetaObject::connectSlotsByName(FindReplaceDialogData);
    } // setupUi

    void retranslateUi(QDialog *FindReplaceDialogData)
    {
        FindReplaceDialogData->setWindowTitle(QApplication::translate("FindReplaceDialogData", "Find / Replace", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FindReplaceDialogData", "Find :                  ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FindReplaceDialogData", "Replace with :", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("FindReplaceDialogData", "Direction", 0, QApplication::UnicodeUTF8));
        forwardRB->setText(QApplication::translate("FindReplaceDialogData", "Forward", 0, QApplication::UnicodeUTF8));
        backwardRB->setText(QApplication::translate("FindReplaceDialogData", "Backward", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("FindReplaceDialogData", "Options", 0, QApplication::UnicodeUTF8));
        caseSensitiveCB->setText(QApplication::translate("FindReplaceDialogData", "Case sensitive", 0, QApplication::UnicodeUTF8));
        regexpCB->setText(QApplication::translate("FindReplaceDialogData", "Regular expression", 0, QApplication::UnicodeUTF8));
        wholeWordCB->setText(QApplication::translate("FindReplaceDialogData", "Whole word", 0, QApplication::UnicodeUTF8));
        wrapSearchCB->setText(QApplication::translate("FindReplaceDialogData", "Wrap search", 0, QApplication::UnicodeUTF8));
        findButton->setText(QApplication::translate("FindReplaceDialogData", "Find", 0, QApplication::UnicodeUTF8));
        replaceFindButton->setText(QApplication::translate("FindReplaceDialogData", "Replace / Find", 0, QApplication::UnicodeUTF8));
        replaceButton->setText(QApplication::translate("FindReplaceDialogData", "Replace", 0, QApplication::UnicodeUTF8));
        replaceAllButton->setText(QApplication::translate("FindReplaceDialogData", "Replace All", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("FindReplaceDialogData", "Close", 0, QApplication::UnicodeUTF8));
        searchStatusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FindReplaceDialogData: public Ui_FindReplaceDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FINDREPLACEDIALOGDATA_H
