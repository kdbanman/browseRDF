/********************************************************************************
** Form generated from reading UI file 'PluginsInfoWidget.ui'
**
** Created: Mon Apr 29 01:52:15 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PLUGINSINFOWIDGETDATA_H
#define PLUGINSINFOWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginsInfoWidgetData
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout1;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QFrame *frame;
    QGridLayout *gridLayout2;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *label_2;
    QLabel *nameLabel;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    QLabel *authorLabel;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout2;
    QLabel *label_15;
    QLabel *typeLabel;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout3;
    QLabel *label_11;
    QLabel *dateLabel;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout4;
    QLabel *label_13;
    QLabel *versionLabel;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout5;
    QLabel *label_9;
    QLabel *versionInfoLabel;
    QSpacerItem *spacerItem5;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *PluginsInfoWidgetData)
    {
        if (PluginsInfoWidgetData->objectName().isEmpty())
            PluginsInfoWidgetData->setObjectName(QString::fromUtf8("PluginsInfoWidgetData"));
        PluginsInfoWidgetData->resize(732, 898);
        gridLayout = new QGridLayout(PluginsInfoWidgetData);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_2 = new QFrame(PluginsInfoWidgetData);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame_2);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(6, 6, 6, 6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        vboxLayout1->addWidget(label);


        vboxLayout->addLayout(vboxLayout1);

        frame = new QFrame(frame_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout2 = new QGridLayout(frame);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
        gridLayout2->setContentsMargins(3, 3, 3, 3);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_2->setFont(font1);

        hboxLayout->addWidget(label_2);

        nameLabel = new QLabel(frame);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        hboxLayout->addWidget(nameLabel);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout2->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        hboxLayout1->addWidget(label_3);

        authorLabel = new QLabel(frame);
        authorLabel->setObjectName(QString::fromUtf8("authorLabel"));

        hboxLayout1->addWidget(authorLabel);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        vboxLayout2->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_15->setFont(font2);

        hboxLayout2->addWidget(label_15);

        typeLabel = new QLabel(frame);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        hboxLayout2->addWidget(typeLabel);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);


        vboxLayout2->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);

        hboxLayout3->addWidget(label_11);

        dateLabel = new QLabel(frame);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));

        hboxLayout3->addWidget(dateLabel);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);


        vboxLayout2->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);

        hboxLayout4->addWidget(label_13);

        versionLabel = new QLabel(frame);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));

        hboxLayout4->addWidget(versionLabel);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem4);


        vboxLayout2->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout5->setSpacing(6);
#endif
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Sans Serif"));
        font3.setBold(true);
        font3.setWeight(75);
        label_9->setFont(font3);

        hboxLayout5->addWidget(label_9);

        versionInfoLabel = new QLabel(frame);
        versionInfoLabel->setObjectName(QString::fromUtf8("versionInfoLabel"));

        hboxLayout5->addWidget(versionInfoLabel);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem5);


        vboxLayout2->addLayout(hboxLayout5);


        gridLayout2->addLayout(vboxLayout2, 0, 0, 1, 1);


        vboxLayout->addWidget(frame);

        textBrowser = new QTextBrowser(frame_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        vboxLayout->addWidget(textBrowser);


        gridLayout1->addLayout(vboxLayout, 0, 0, 1, 1);


        gridLayout->addWidget(frame_2, 0, 0, 1, 1);


        retranslateUi(PluginsInfoWidgetData);

        QMetaObject::connectSlotsByName(PluginsInfoWidgetData);
    } // setupUi

    void retranslateUi(QWidget *PluginsInfoWidgetData)
    {
        PluginsInfoWidgetData->setWindowTitle(QApplication::translate("PluginsInfoWidgetData", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PluginsInfoWidgetData", "Plugin Documentation", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PluginsInfoWidgetData", "Name :", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QString());
        label_3->setText(QApplication::translate("PluginsInfoWidgetData", "Author :", 0, QApplication::UnicodeUTF8));
        authorLabel->setText(QString());
        label_15->setText(QApplication::translate("PluginsInfoWidgetData", "Type :", 0, QApplication::UnicodeUTF8));
        typeLabel->setText(QString());
        label_11->setText(QApplication::translate("PluginsInfoWidgetData", "Date :", 0, QApplication::UnicodeUTF8));
        dateLabel->setText(QString());
        label_13->setText(QApplication::translate("PluginsInfoWidgetData", "Version :", 0, QApplication::UnicodeUTF8));
        versionLabel->setText(QString());
        label_9->setText(QApplication::translate("PluginsInfoWidgetData", "Version information :", 0, QApplication::UnicodeUTF8));
        versionInfoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PluginsInfoWidgetData: public Ui_PluginsInfoWidgetData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PLUGINSINFOWIDGETDATA_H
