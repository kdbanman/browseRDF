/********************************************************************************
** Form generated from reading UI file 'AppStartUp.ui'
**
** Created: Fri Apr 26 16:36:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef APPSTARTUPDATA_H
#define APPSTARTUPDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AppStartUpData
{
public:
    QFrame *line;
    QLabel *label;
    QFrame *line_2;
    QTextBrowser *textBrowser;
    QPushButton *closeButton;
    QPushButton *nextButton;
    QLabel *PixmapLabel1;
    QProgressBar *progressBar;
    QCheckBox *showAgain;

    void setupUi(QDialog *AppStartUpData)
    {
        if (AppStartUpData->objectName().isEmpty())
            AppStartUpData->setObjectName(QString::fromUtf8("AppStartUpData"));
        AppStartUpData->resize(501, 414);
        line = new QFrame(AppStartUpData);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 250, 501, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(AppStartUpData);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(5, 260, 491, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(AppStartUpData);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 380, 501, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        textBrowser = new QTextBrowser(AppStartUpData);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 280, 481, 101));
        closeButton = new QPushButton(AppStartUpData);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(434, 390, 61, 23));
        closeButton->setDefault(true);
        nextButton = new QPushButton(AppStartUpData);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(364, 390, 61, 23));
        PixmapLabel1 = new QLabel(AppStartUpData);
        PixmapLabel1->setObjectName(QString::fromUtf8("PixmapLabel1"));
        PixmapLabel1->setGeometry(QRect(0, 0, 501, 255));
        PixmapLabel1->setFrameShape(QFrame::NoFrame);
        PixmapLabel1->setFrameShadow(QFrame::Raised);
        PixmapLabel1->setScaledContents(false);
        PixmapLabel1->setAlignment(Qt::AlignCenter);
        PixmapLabel1->setWordWrap(false);
        progressBar = new QProgressBar(AppStartUpData);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(70, 210, 361, 23));
        progressBar->setValue(24);
        progressBar->setAlignment(Qt::AlignHCenter);
        progressBar->setOrientation(Qt::Horizontal);
        showAgain = new QCheckBox(AppStartUpData);
        showAgain->setObjectName(QString::fromUtf8("showAgain"));
        showAgain->setGeometry(QRect(0, 390, 361, 18));
        showAgain->setChecked(true);

        retranslateUi(AppStartUpData);

        QMetaObject::connectSlotsByName(AppStartUpData);
    } // setupUi

    void retranslateUi(QDialog *AppStartUpData)
    {
        AppStartUpData->setWindowTitle(QApplication::translate("AppStartUpData", "Tulip", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AppStartUpData", "Do you know?", 0, QApplication::UnicodeUTF8));
        textBrowser->setDocumentTitle(QString());
        closeButton->setText(QApplication::translate("AppStartUpData", "Close", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("AppStartUpData", "Next", 0, QApplication::UnicodeUTF8));
        showAgain->setText(QApplication::translate("AppStartUpData", "Show again?", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AppStartUpData: public Ui_AppStartUpData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // APPSTARTUPDATA_H
