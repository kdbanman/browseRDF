/********************************************************************************
** Form generated from reading UI file 'FindSelection.ui'
**
** Created: Fri Apr 26 16:35:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef FINDSELECTIONDATA_H
#define FINDSELECTIONDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
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

class Ui_FindSelectionData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *textLabel1;
    QLabel *textLabel3;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout2;
    QComboBox *inputProp;
    QHBoxLayout *hboxLayout1;
    QComboBox *filterOp;
    QLineEdit *filterValue;
    QLabel *valueComment;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout3;
    QPushButton *findButton;
    QPushButton *cancelButton;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout2;
    QRadioButton *setToSelectionOpt;
    QRadioButton *addToSelectionOpt;
    QRadioButton *rmvFromSelectionOpt;
    QRadioButton *keepSelectionOpt;
    QComboBox *srcOpt;

    void setupUi(QDialog *FindSelectionData)
    {
        if (FindSelectionData->objectName().isEmpty())
            FindSelectionData->setObjectName(QString::fromUtf8("FindSelectionData"));
        FindSelectionData->resize(540, 149);
        gridLayout = new QGridLayout(FindSelectionData);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(12);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        textLabel1 = new QLabel(FindSelectionData);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy);
        textLabel1->setWordWrap(false);

        vboxLayout1->addWidget(textLabel1);

        textLabel3 = new QLabel(FindSelectionData);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        sizePolicy.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
        textLabel3->setSizePolicy(sizePolicy);
        textLabel3->setWordWrap(false);

        vboxLayout1->addWidget(textLabel3);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        inputProp = new QComboBox(FindSelectionData);
        inputProp->setObjectName(QString::fromUtf8("inputProp"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(inputProp->sizePolicy().hasHeightForWidth());
        inputProp->setSizePolicy(sizePolicy1);

        vboxLayout2->addWidget(inputProp);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        filterOp = new QComboBox(FindSelectionData);
        filterOp->setObjectName(QString::fromUtf8("filterOp"));
        sizePolicy.setHeightForWidth(filterOp->sizePolicy().hasHeightForWidth());
        filterOp->setSizePolicy(sizePolicy);
        filterOp->setMinimumSize(QSize(106, 0));

        hboxLayout1->addWidget(filterOp);

        filterValue = new QLineEdit(FindSelectionData);
        filterValue->setObjectName(QString::fromUtf8("filterValue"));

        hboxLayout1->addWidget(filterValue);


        vboxLayout2->addLayout(hboxLayout1);

        valueComment = new QLabel(FindSelectionData);
        valueComment->setObjectName(QString::fromUtf8("valueComment"));
        QFont font;
        font.setPointSize(8);
        valueComment->setFont(font);
        valueComment->setWordWrap(false);

        vboxLayout2->addWidget(valueComment);


        hboxLayout->addLayout(vboxLayout2);

        spacerItem1 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(12);
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        findButton = new QPushButton(FindSelectionData);
        findButton->setObjectName(QString::fromUtf8("findButton"));

        vboxLayout3->addWidget(findButton);

        cancelButton = new QPushButton(FindSelectionData);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        vboxLayout3->addWidget(cancelButton);


        hboxLayout->addLayout(vboxLayout3);


        vboxLayout->addLayout(hboxLayout);

        groupBox = new QGroupBox(FindSelectionData);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout2 = new QHBoxLayout(groupBox);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        setToSelectionOpt = new QRadioButton(groupBox);
        setToSelectionOpt->setObjectName(QString::fromUtf8("setToSelectionOpt"));
        setToSelectionOpt->setChecked(true);

        hboxLayout2->addWidget(setToSelectionOpt);

        addToSelectionOpt = new QRadioButton(groupBox);
        addToSelectionOpt->setObjectName(QString::fromUtf8("addToSelectionOpt"));

        hboxLayout2->addWidget(addToSelectionOpt);

        rmvFromSelectionOpt = new QRadioButton(groupBox);
        rmvFromSelectionOpt->setObjectName(QString::fromUtf8("rmvFromSelectionOpt"));

        hboxLayout2->addWidget(rmvFromSelectionOpt);

        keepSelectionOpt = new QRadioButton(groupBox);
        keepSelectionOpt->setObjectName(QString::fromUtf8("keepSelectionOpt"));

        hboxLayout2->addWidget(keepSelectionOpt);

        srcOpt = new QComboBox(groupBox);
        srcOpt->setObjectName(QString::fromUtf8("srcOpt"));

        hboxLayout2->addWidget(srcOpt);


        vboxLayout->addWidget(groupBox);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);


        retranslateUi(FindSelectionData);
        QObject::connect(cancelButton, SIGNAL(clicked()), FindSelectionData, SLOT(reject()));
        QObject::connect(findButton, SIGNAL(clicked()), FindSelectionData, SLOT(accept()));
        QObject::connect(inputProp, SIGNAL(activated(int)), FindSelectionData, SLOT(propertyChanged(int)));

        filterOp->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(FindSelectionData);
    } // setupUi

    void retranslateUi(QDialog *FindSelectionData)
    {
        FindSelectionData->setWindowTitle(QApplication::translate("FindSelectionData", "Find Selection", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("FindSelectionData", "Input property :", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("FindSelectionData", "Filter :", 0, QApplication::UnicodeUTF8));
        filterOp->clear();
        filterOp->insertItems(0, QStringList()
         << QApplication::translate("FindSelectionData", "<", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FindSelectionData", "<=", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FindSelectionData", "==", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FindSelectionData", ">=", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FindSelectionData", ">", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FindSelectionData", "!=", 0, QApplication::UnicodeUTF8)
        );
        valueComment->setText(QApplication::translate("FindSelectionData", "( enter a value)", 0, QApplication::UnicodeUTF8));
        findButton->setText(QApplication::translate("FindSelectionData", "Find", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("FindSelectionData", "Cancel", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("FindSelectionData", "Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        setToSelectionOpt->setToolTip(QApplication::translate("FindSelectionData", "Replace the current selection by the graph elements found", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        setToSelectionOpt->setText(QApplication::translate("FindSelectionData", "Replace", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addToSelectionOpt->setToolTip(QApplication::translate("FindSelectionData", "Add the graph elements found to the current selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addToSelectionOpt->setText(QApplication::translate("FindSelectionData", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rmvFromSelectionOpt->setToolTip(QApplication::translate("FindSelectionData", "Remove the graph elements found from the current selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        rmvFromSelectionOpt->setText(QApplication::translate("FindSelectionData", "Remove", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        keepSelectionOpt->setToolTip(QApplication::translate("FindSelectionData", "Deselect the elements of the current selection which are not in the graph elements found", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        keepSelectionOpt->setText(QApplication::translate("FindSelectionData", "Intersect", 0, QApplication::UnicodeUTF8));
        srcOpt->clear();
        srcOpt->insertItems(0, QStringList()
         << QApplication::translate("FindSelectionData", "On nodes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FindSelectionData", "On edges", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FindSelectionData", "On both", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class FindSelectionData: public Ui_FindSelectionData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FINDSELECTIONDATA_H
