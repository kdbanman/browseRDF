/********************************************************************************
** Form generated from reading UI file 'ConvolutionClusteringSetup.ui'
**
** Created: Fri Apr 26 16:33:30 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CONVOLUTIONCLUSTERINGSETUPDATA_H
#define CONVOLUTIONCLUSTERINGSETUPDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>

QT_BEGIN_NAMESPACE

class Ui_ConvolutionClusteringSetupData
{
public:
    QGridLayout *gridLayout;
    QLabel *TextLabel1;
    QFrame *Frame3;
    QSlider *widthSlider;
    QLCDNumber *LCDNumber1;
    QSlider *discretizationSlider;
    QLabel *TextLabel1_3;
    QLCDNumber *LCDNumber1_3;
    QPushButton *cancelButton;
    QCheckBox *CheckBox1;
    QPushButton *okButton;

    void setupUi(QDialog *ConvolutionClusteringSetupData)
    {
        if (ConvolutionClusteringSetupData->objectName().isEmpty())
            ConvolutionClusteringSetupData->setObjectName(QString::fromUtf8("ConvolutionClusteringSetupData"));
        ConvolutionClusteringSetupData->resize(396, 259);
        gridLayout = new QGridLayout(ConvolutionClusteringSetupData);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(5, 5, 5, 5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TextLabel1 = new QLabel(ConvolutionClusteringSetupData);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setAlignment(Qt::AlignCenter);
        TextLabel1->setWordWrap(false);

        gridLayout->addWidget(TextLabel1, 1, 0, 1, 1);

        Frame3 = new QFrame(ConvolutionClusteringSetupData);
        Frame3->setObjectName(QString::fromUtf8("Frame3"));
        Frame3->setFrameShape(QFrame::NoFrame);
        Frame3->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(Frame3, 0, 0, 1, 4);

        widthSlider = new QSlider(ConvolutionClusteringSetupData);
        widthSlider->setObjectName(QString::fromUtf8("widthSlider"));
        widthSlider->setMinimum(1);
        widthSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(widthSlider, 1, 2, 1, 1);

        LCDNumber1 = new QLCDNumber(ConvolutionClusteringSetupData);
        LCDNumber1->setObjectName(QString::fromUtf8("LCDNumber1"));

        gridLayout->addWidget(LCDNumber1, 1, 1, 1, 1);

        discretizationSlider = new QSlider(ConvolutionClusteringSetupData);
        discretizationSlider->setObjectName(QString::fromUtf8("discretizationSlider"));
        discretizationSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(discretizationSlider, 2, 2, 1, 1);

        TextLabel1_3 = new QLabel(ConvolutionClusteringSetupData);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));
        TextLabel1_3->setAlignment(Qt::AlignCenter);
        TextLabel1_3->setWordWrap(false);

        gridLayout->addWidget(TextLabel1_3, 2, 0, 1, 1);

        LCDNumber1_3 = new QLCDNumber(ConvolutionClusteringSetupData);
        LCDNumber1_3->setObjectName(QString::fromUtf8("LCDNumber1_3"));

        gridLayout->addWidget(LCDNumber1_3, 2, 1, 1, 1);

        cancelButton = new QPushButton(ConvolutionClusteringSetupData);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 3, 1, 1, 2);

        CheckBox1 = new QCheckBox(ConvolutionClusteringSetupData);
        CheckBox1->setObjectName(QString::fromUtf8("CheckBox1"));

        gridLayout->addWidget(CheckBox1, 1, 3, 1, 1);

        okButton = new QPushButton(ConvolutionClusteringSetupData);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gridLayout->addWidget(okButton, 3, 3, 1, 1);


        retranslateUi(ConvolutionClusteringSetupData);
        QObject::connect(widthSlider, SIGNAL(valueChanged(int)), ConvolutionClusteringSetupData, SLOT(update()));
        QObject::connect(okButton, SIGNAL(pressed()), ConvolutionClusteringSetupData, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(pressed()), ConvolutionClusteringSetupData, SLOT(reject()));
        QObject::connect(discretizationSlider, SIGNAL(valueChanged(int)), ConvolutionClusteringSetupData, SLOT(update()));
        QObject::connect(discretizationSlider, SIGNAL(valueChanged(int)), LCDNumber1_3, SLOT(display(int)));
        QObject::connect(CheckBox1, SIGNAL(toggled(bool)), ConvolutionClusteringSetupData, SLOT(setlog(bool)));
        QObject::connect(widthSlider, SIGNAL(valueChanged(int)), LCDNumber1, SLOT(display(int)));

        QMetaObject::connectSlotsByName(ConvolutionClusteringSetupData);
    } // setupUi

    void retranslateUi(QDialog *ConvolutionClusteringSetupData)
    {
        ConvolutionClusteringSetupData->setWindowTitle(QApplication::translate("ConvolutionClusteringSetupData", "Convolution Clustering Parameters", 0, QApplication::UnicodeUTF8));
        TextLabel1->setText(QApplication::translate("ConvolutionClusteringSetupData", "Width", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Frame3->setToolTip(QApplication::translate("ConvolutionClusteringSetupData", "Histogram of value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TextLabel1_3->setText(QApplication::translate("ConvolutionClusteringSetupData", "Discretization", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("ConvolutionClusteringSetupData", "Cancel", 0, QApplication::UnicodeUTF8));
        CheckBox1->setText(QApplication::translate("ConvolutionClusteringSetupData", "log", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ConvolutionClusteringSetupData", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConvolutionClusteringSetupData: public Ui_ConvolutionClusteringSetupData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CONVOLUTIONCLUSTERINGSETUPDATA_H
