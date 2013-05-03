/********************************************************************************
** Form generated from reading UI file 'GridOptions.ui'
**
** Created: Tue Apr 30 11:12:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef GRIDOPTIONSDATA_H
#define GRIDOPTIONSDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_GridOptionsData
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox10;
    QGridLayout *gridLayout2;
    QHBoxLayout *hboxLayout;
    QCheckBox *ActivatedCB;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QGroupBox *groupBox11;
    QGridLayout *gridLayout3;
    QFrame *SubdivisionsFrame;
    QGridLayout *gridLayout4;
    QGridLayout *gridLayout5;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QLabel *textLabel1_3;
    QLineEdit *GridSubZ;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel1_7;
    QLineEdit *GridSubX;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabel1_2;
    QLineEdit *GridSubY;
    QRadioButton *SubdivisionsRB;
    QFrame *SizeFrame;
    QGridLayout *gridLayout6;
    QGridLayout *gridLayout7;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem3;
    QLabel *textLabel1_6;
    QLineEdit *GridSizeZ;
    QHBoxLayout *hboxLayout6;
    QLabel *textLabel1_4;
    QLineEdit *GridSizeX;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout7;
    QLabel *textLabel1_5;
    QLineEdit *GridSizeY;
    QRadioButton *SizeRB;
    QSpacerItem *spacerItem5;
    QGroupBox *groupBox12;
    QGridLayout *gridLayout8;
    QCheckBox *DisplayYCB;
    QCheckBox *DisplayXCB;
    QSpacerItem *spacerItem6;
    QSpacerItem *spacerItem7;
    QCheckBox *DisplayZCB;
    QSpacerItem *spacerItem8;
    QSpacerItem *spacerItem9;
    QHBoxLayout *hboxLayout8;
    QSpacerItem *spacerItem10;
    QPushButton *CancelBtn;
    QPushButton *OkBtn;

    void setupUi(QDialog *GridOptionsData)
    {
        if (GridOptionsData->objectName().isEmpty())
            GridOptionsData->setObjectName(QString::fromUtf8("GridOptionsData"));
        GridOptionsData->resize(332, 324);
        GridOptionsData->setModal(true);
        gridLayout = new QGridLayout(GridOptionsData);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        groupBox10 = new QGroupBox(GridOptionsData);
        groupBox10->setObjectName(QString::fromUtf8("groupBox10"));
        gridLayout2 = new QGridLayout(groupBox10);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(4, 4, 4, 4);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        ActivatedCB = new QCheckBox(groupBox10);
        ActivatedCB->setObjectName(QString::fromUtf8("ActivatedCB"));

        hboxLayout->addWidget(ActivatedCB);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        gridLayout2->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        groupBox11 = new QGroupBox(groupBox10);
        groupBox11->setObjectName(QString::fromUtf8("groupBox11"));
        gridLayout3 = new QGridLayout(groupBox11);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(3, 3, 3, 3);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        SubdivisionsFrame = new QFrame(groupBox11);
        SubdivisionsFrame->setObjectName(QString::fromUtf8("SubdivisionsFrame"));
        SubdivisionsFrame->setEnabled(true);
        SubdivisionsFrame->setFrameShape(QFrame::NoFrame);
        SubdivisionsFrame->setFrameShadow(QFrame::Plain);
        gridLayout4 = new QGridLayout(SubdivisionsFrame);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout5 = new QGridLayout();
        gridLayout5->setSpacing(6);
        gridLayout5->setContentsMargins(0, 0, 0, 0);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem1 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        textLabel1_3 = new QLabel(SubdivisionsFrame);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setWordWrap(false);

        hboxLayout2->addWidget(textLabel1_3);

        GridSubZ = new QLineEdit(SubdivisionsFrame);
        GridSubZ->setObjectName(QString::fromUtf8("GridSubZ"));
        GridSubZ->setEnabled(true);
        GridSubZ->setMaximumSize(QSize(30, 32767));

        hboxLayout2->addWidget(GridSubZ);


        gridLayout5->addLayout(hboxLayout2, 0, 2, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        textLabel1_7 = new QLabel(SubdivisionsFrame);
        textLabel1_7->setObjectName(QString::fromUtf8("textLabel1_7"));
        textLabel1_7->setWordWrap(false);

        hboxLayout3->addWidget(textLabel1_7);

        GridSubX = new QLineEdit(SubdivisionsFrame);
        GridSubX->setObjectName(QString::fromUtf8("GridSubX"));
        GridSubX->setEnabled(true);
        GridSubX->setMaximumSize(QSize(30, 32767));

        hboxLayout3->addWidget(GridSubX);

        spacerItem2 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);


        gridLayout5->addLayout(hboxLayout3, 0, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        textLabel1_2 = new QLabel(SubdivisionsFrame);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setWordWrap(false);

        hboxLayout4->addWidget(textLabel1_2);

        GridSubY = new QLineEdit(SubdivisionsFrame);
        GridSubY->setObjectName(QString::fromUtf8("GridSubY"));
        GridSubY->setEnabled(true);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GridSubY->sizePolicy().hasHeightForWidth());
        GridSubY->setSizePolicy(sizePolicy);
        GridSubY->setMaximumSize(QSize(30, 32767));

        hboxLayout4->addWidget(GridSubY);


        gridLayout5->addLayout(hboxLayout4, 0, 1, 1, 1);


        gridLayout4->addLayout(gridLayout5, 0, 0, 1, 1);


        gridLayout3->addWidget(SubdivisionsFrame, 1, 0, 1, 1);

        SubdivisionsRB = new QRadioButton(groupBox11);
        SubdivisionsRB->setObjectName(QString::fromUtf8("SubdivisionsRB"));
        sizePolicy.setHeightForWidth(SubdivisionsRB->sizePolicy().hasHeightForWidth());
        SubdivisionsRB->setSizePolicy(sizePolicy);
        SubdivisionsRB->setChecked(true);

        gridLayout3->addWidget(SubdivisionsRB, 0, 0, 1, 1);

        SizeFrame = new QFrame(groupBox11);
        SizeFrame->setObjectName(QString::fromUtf8("SizeFrame"));
        SizeFrame->setEnabled(false);
        sizePolicy.setHeightForWidth(SizeFrame->sizePolicy().hasHeightForWidth());
        SizeFrame->setSizePolicy(sizePolicy);
        SizeFrame->setFrameShape(QFrame::NoFrame);
        SizeFrame->setFrameShadow(QFrame::Plain);
        gridLayout6 = new QGridLayout(SizeFrame);
        gridLayout6->setSpacing(6);
        gridLayout6->setContentsMargins(11, 11, 11, 11);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        gridLayout7 = new QGridLayout();
        gridLayout7->setSpacing(6);
        gridLayout7->setContentsMargins(0, 0, 0, 0);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem3);

        textLabel1_6 = new QLabel(SizeFrame);
        textLabel1_6->setObjectName(QString::fromUtf8("textLabel1_6"));
        textLabel1_6->setWordWrap(false);

        hboxLayout5->addWidget(textLabel1_6);

        GridSizeZ = new QLineEdit(SizeFrame);
        GridSizeZ->setObjectName(QString::fromUtf8("GridSizeZ"));
        GridSizeZ->setEnabled(false);
        GridSizeZ->setMaximumSize(QSize(30, 32767));

        hboxLayout5->addWidget(GridSizeZ);


        gridLayout7->addLayout(hboxLayout5, 0, 2, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        textLabel1_4 = new QLabel(SizeFrame);
        textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
        textLabel1_4->setWordWrap(false);

        hboxLayout6->addWidget(textLabel1_4);

        GridSizeX = new QLineEdit(SizeFrame);
        GridSizeX->setObjectName(QString::fromUtf8("GridSizeX"));
        GridSizeX->setEnabled(false);
        GridSizeX->setMaximumSize(QSize(30, 32767));

        hboxLayout6->addWidget(GridSizeX);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem4);


        gridLayout7->addLayout(hboxLayout6, 0, 0, 1, 1);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(6);
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        textLabel1_5 = new QLabel(SizeFrame);
        textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));
        textLabel1_5->setWordWrap(false);

        hboxLayout7->addWidget(textLabel1_5);

        GridSizeY = new QLineEdit(SizeFrame);
        GridSizeY->setObjectName(QString::fromUtf8("GridSizeY"));
        GridSizeY->setEnabled(false);
        sizePolicy.setHeightForWidth(GridSizeY->sizePolicy().hasHeightForWidth());
        GridSizeY->setSizePolicy(sizePolicy);
        GridSizeY->setMaximumSize(QSize(30, 32767));

        hboxLayout7->addWidget(GridSizeY);


        gridLayout7->addLayout(hboxLayout7, 0, 1, 1, 1);


        gridLayout6->addLayout(gridLayout7, 0, 0, 1, 1);


        gridLayout3->addWidget(SizeFrame, 4, 0, 1, 1);

        SizeRB = new QRadioButton(groupBox11);
        SizeRB->setObjectName(QString::fromUtf8("SizeRB"));

        gridLayout3->addWidget(SizeRB, 3, 0, 1, 1);

        spacerItem5 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem5, 2, 0, 1, 1);


        hboxLayout1->addWidget(groupBox11);

        groupBox12 = new QGroupBox(groupBox10);
        groupBox12->setObjectName(QString::fromUtf8("groupBox12"));
        gridLayout8 = new QGridLayout(groupBox12);
        gridLayout8->setSpacing(6);
        gridLayout8->setContentsMargins(3, 3, 3, 3);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        DisplayYCB = new QCheckBox(groupBox12);
        DisplayYCB->setObjectName(QString::fromUtf8("DisplayYCB"));
        DisplayYCB->setChecked(true);

        gridLayout8->addWidget(DisplayYCB, 3, 0, 1, 1);

        DisplayXCB = new QCheckBox(groupBox12);
        DisplayXCB->setObjectName(QString::fromUtf8("DisplayXCB"));
        DisplayXCB->setEnabled(true);
        DisplayXCB->setChecked(true);

        gridLayout8->addWidget(DisplayXCB, 1, 0, 1, 1);

        spacerItem6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout8->addItem(spacerItem6, 2, 0, 1, 1);

        spacerItem7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout8->addItem(spacerItem7, 4, 0, 1, 1);

        DisplayZCB = new QCheckBox(groupBox12);
        DisplayZCB->setObjectName(QString::fromUtf8("DisplayZCB"));
        DisplayZCB->setChecked(true);

        gridLayout8->addWidget(DisplayZCB, 5, 0, 1, 1);

        spacerItem8 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout8->addItem(spacerItem8, 0, 0, 1, 1);

        spacerItem9 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout8->addItem(spacerItem9, 6, 0, 1, 1);


        hboxLayout1->addWidget(groupBox12);


        gridLayout2->addLayout(hboxLayout1, 1, 0, 1, 1);


        gridLayout1->addWidget(groupBox10, 0, 0, 1, 1);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(6);
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem10);

        CancelBtn = new QPushButton(GridOptionsData);
        CancelBtn->setObjectName(QString::fromUtf8("CancelBtn"));

        hboxLayout8->addWidget(CancelBtn);

        OkBtn = new QPushButton(GridOptionsData);
        OkBtn->setObjectName(QString::fromUtf8("OkBtn"));

        hboxLayout8->addWidget(OkBtn);


        gridLayout1->addLayout(hboxLayout8, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);


        retranslateUi(GridOptionsData);

        QMetaObject::connectSlotsByName(GridOptionsData);
    } // setupUi

    void retranslateUi(QDialog *GridOptionsData)
    {
        GridOptionsData->setWindowTitle(QApplication::translate("GridOptionsData", "GridOptions", 0, QApplication::UnicodeUTF8));
        groupBox10->setTitle(QApplication::translate("GridOptionsData", "Grid :", 0, QApplication::UnicodeUTF8));
        ActivatedCB->setText(QApplication::translate("GridOptionsData", "Activated", 0, QApplication::UnicodeUTF8));
        groupBox11->setTitle(QApplication::translate("GridOptionsData", "Cells size :", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("GridOptionsData", "Z", 0, QApplication::UnicodeUTF8));
        GridSubZ->setText(QApplication::translate("GridOptionsData", "1", 0, QApplication::UnicodeUTF8));
        textLabel1_7->setText(QApplication::translate("GridOptionsData", "X", 0, QApplication::UnicodeUTF8));
        GridSubX->setText(QApplication::translate("GridOptionsData", "1", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("GridOptionsData", "Y", 0, QApplication::UnicodeUTF8));
        GridSubY->setText(QApplication::translate("GridOptionsData", "1", 0, QApplication::UnicodeUTF8));
        SubdivisionsRB->setText(QApplication::translate("GridOptionsData", "Subdivisions", 0, QApplication::UnicodeUTF8));
        textLabel1_6->setText(QApplication::translate("GridOptionsData", "Z", 0, QApplication::UnicodeUTF8));
        GridSizeZ->setText(QApplication::translate("GridOptionsData", "1", 0, QApplication::UnicodeUTF8));
        textLabel1_4->setText(QApplication::translate("GridOptionsData", "X", 0, QApplication::UnicodeUTF8));
        GridSizeX->setText(QApplication::translate("GridOptionsData", "1", 0, QApplication::UnicodeUTF8));
        textLabel1_5->setText(QApplication::translate("GridOptionsData", "Y", 0, QApplication::UnicodeUTF8));
        GridSizeY->setText(QApplication::translate("GridOptionsData", "1", 0, QApplication::UnicodeUTF8));
        SizeRB->setText(QApplication::translate("GridOptionsData", "Size", 0, QApplication::UnicodeUTF8));
        groupBox12->setTitle(QApplication::translate("GridOptionsData", "Display Dimensions :", 0, QApplication::UnicodeUTF8));
        DisplayYCB->setText(QApplication::translate("GridOptionsData", "Display Y", 0, QApplication::UnicodeUTF8));
        DisplayXCB->setText(QApplication::translate("GridOptionsData", "Display X", 0, QApplication::UnicodeUTF8));
        DisplayZCB->setText(QApplication::translate("GridOptionsData", "Display Z", 0, QApplication::UnicodeUTF8));
        CancelBtn->setText(QApplication::translate("GridOptionsData", "Cancel", 0, QApplication::UnicodeUTF8));
        OkBtn->setText(QApplication::translate("GridOptionsData", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GridOptionsData: public Ui_GridOptionsData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GRIDOPTIONSDATA_H
