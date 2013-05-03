/********************************************************************************
** Form generated from reading UI file 'InfoDialog.ui'
**
** Created: Tue Apr 30 11:13:49 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef INFODIALOGDATA_H
#define INFODIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *TextLabel2;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QTabWidget *TabWidget2;
    QWidget *tabAbout;
    QGridLayout *gridLayout1;
    QTextEdit *MultiLineEdit3;
    QWidget *tabBugs;
    QGridLayout *gridLayout2;
    QTextEdit *MultiLineEdit2;
    QWidget *tab;
    QGridLayout *gridLayout3;
    QTextEdit *MultiLineEdit1;

    void setupUi(QDialog *InfoDialogData)
    {
        if (InfoDialogData->objectName().isEmpty())
            InfoDialogData->setObjectName(QString::fromUtf8("InfoDialogData"));
        InfoDialogData->resize(512, 299);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InfoDialogData->sizePolicy().hasHeightForWidth());
        InfoDialogData->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(InfoDialogData);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        TextLabel2 = new QLabel(InfoDialogData);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        QFont font;
        font.setFamily(QString::fromUtf8("times"));
        font.setPointSize(18);
        TextLabel2->setFont(font);
        TextLabel2->setFrameShape(QFrame::NoFrame);
        TextLabel2->setFrameShadow(QFrame::Sunken);
        TextLabel2->setAlignment(Qt::AlignCenter);
        TextLabel2->setWordWrap(false);

        vboxLayout->addWidget(TextLabel2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(InfoDialogData);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setPixmap(QPixmap(QString::fromUtf8(":/logo160x145.png")));
        label->setScaledContents(false);

        hboxLayout->addWidget(label);

        TabWidget2 = new QTabWidget(InfoDialogData);
        TabWidget2->setObjectName(QString::fromUtf8("TabWidget2"));
        tabAbout = new QWidget();
        tabAbout->setObjectName(QString::fromUtf8("tabAbout"));
        gridLayout1 = new QGridLayout(tabAbout);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        MultiLineEdit3 = new QTextEdit(tabAbout);
        MultiLineEdit3->setObjectName(QString::fromUtf8("MultiLineEdit3"));
        MultiLineEdit3->setReadOnly(true);

        gridLayout1->addWidget(MultiLineEdit3, 0, 0, 1, 1);

        TabWidget2->addTab(tabAbout, QString());
        tabBugs = new QWidget();
        tabBugs->setObjectName(QString::fromUtf8("tabBugs"));
        gridLayout2 = new QGridLayout(tabBugs);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        MultiLineEdit2 = new QTextEdit(tabBugs);
        MultiLineEdit2->setObjectName(QString::fromUtf8("MultiLineEdit2"));
        MultiLineEdit2->setReadOnly(true);

        gridLayout2->addWidget(MultiLineEdit2, 0, 0, 1, 1);

        TabWidget2->addTab(tabBugs, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout3 = new QGridLayout(tab);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        MultiLineEdit1 = new QTextEdit(tab);
        MultiLineEdit1->setObjectName(QString::fromUtf8("MultiLineEdit1"));

        gridLayout3->addWidget(MultiLineEdit1, 0, 0, 1, 1);

        TabWidget2->addTab(tab, QString());

        hboxLayout->addWidget(TabWidget2);


        vboxLayout->addLayout(hboxLayout);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);


        retranslateUi(InfoDialogData);

        TabWidget2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InfoDialogData);
    } // setupUi

    void retranslateUi(QDialog *InfoDialogData)
    {
        InfoDialogData->setWindowTitle(QApplication::translate("InfoDialogData", "About Tulip", 0, QApplication::UnicodeUTF8));
        TextLabel2->setText(QApplication::translate("InfoDialogData", "Tulip", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        MultiLineEdit3->setHtml(QApplication::translate("InfoDialogData", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Tulip is a Graph Visualisation Software</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">written and maintained by the University</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">of Bordeaux I.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The Tulip "
                        "project is under LGPL licence and</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">everyone can give his contribution to this software.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Visit the Tulip Web Site for more Information about Tulip.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> http://www.tulip-software.org</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Forum, mailing list, and bug report are accessible at:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:"
                        "0px;\">http://sourceforge.net/projects/auber</p></body></html>", 0, QApplication::UnicodeUTF8));
        TabWidget2->setTabText(TabWidget2->indexOf(tabAbout), QApplication::translate("InfoDialogData", "About", 0, QApplication::UnicodeUTF8));
        MultiLineEdit2->setHtml(QApplication::translate("InfoDialogData", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Software can always be improved, and the Tulip team is ready to do so.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">However you - the user - must tell us when something does not work as expected or could be improved.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Tulip has a mailing list and bug report system at:</p>\n"
"<p s"
                        "tyle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">http://sourceforge.net/projects/auber</p></body></html>", 0, QApplication::UnicodeUTF8));
        TabWidget2->setTabText(TabWidget2->indexOf(tabBugs), QApplication::translate("InfoDialogData", "Bugs or wishes", 0, QApplication::UnicodeUTF8));
        MultiLineEdit1->setHtml(QApplication::translate("InfoDialogData", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The Tulip Team:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Original Author and maintainers: David Auber, Patrick Mary, Morgan Mathiaut.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Contributors:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "> - Daniel Archambault</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Robert Auber</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Sophie Bardet</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Romain Bourqui</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Maylis Delest</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Jean Philippe Domenger</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Jonathan Dubois</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-"
                        "indent:0px;\"> - David Duke</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Ludwig Fiolka</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - S\303\251bastien Grivet</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - G\303\251rald Gainant</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Charles Huet</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Lo\303\257c J\303\251z\303\251quel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Antoine Lambert</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-ri"
                        "ght:0px; -qt-block-indent:0; text-indent:0px;\"> - Bertrand Mathieu</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Chris Myers</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Bruno Pinaud</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Fran\303\247ois Queyroi</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Vincent Rabeux</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> - Martin Schaffner</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">To contact us send email to: </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">auber@tulip-software.org</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Or use sourceforge site:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">http://sourceforge.net/projects/auber</p></body></html>", 0, QApplication::UnicodeUTF8));
        TabWidget2->setTabText(TabWidget2->indexOf(tab), QApplication::translate("InfoDialogData", "The TULIP team", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InfoDialogData: public Ui_InfoDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // INFODIALOGDATA_H
