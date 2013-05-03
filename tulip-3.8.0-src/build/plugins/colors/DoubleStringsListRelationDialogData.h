/********************************************************************************
** Form generated from reading UI file 'DoubleStringsListRelationDialog.ui'
**
** Created: Tue Apr 30 11:13:49 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef DOUBLESTRINGSLISTRELATIONDIALOGDATA_H
#define DOUBLESTRINGSLISTRELATIONDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DoubleStringsListRelationDialogData
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout2;
    QSpacerItem *spacerItem;
    QPushButton *upButton;
    QSpacerItem *spacerItem1;
    QPushButton *downButton;
    QSpacerItem *spacerItem2;
    QVBoxLayout *vboxLayout3;
    QLabel *label_2;
    QListWidget *firstListWidget;
    QVBoxLayout *vboxLayout4;
    QLabel *label_3;
    QListWidget *secondListWidget;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem3;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *DoubleStringsListRelationDialogData)
    {
        if (DoubleStringsListRelationDialogData->objectName().isEmpty())
            DoubleStringsListRelationDialogData->setObjectName(QString::fromUtf8("DoubleStringsListRelationDialogData"));
        DoubleStringsListRelationDialogData->resize(413, 339);
        vboxLayout = new QVBoxLayout(DoubleStringsListRelationDialogData);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(DoubleStringsListRelationDialogData);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        vboxLayout1->addWidget(label);


        vboxLayout->addWidget(frame);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem);

        upButton = new QPushButton(DoubleStringsListRelationDialogData);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton->setIcon(icon);

        vboxLayout2->addWidget(upButton);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem1);

        downButton = new QPushButton(DoubleStringsListRelationDialogData);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downButton->setIcon(icon1);

        vboxLayout2->addWidget(downButton);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem2);


        hboxLayout->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        label_2 = new QLabel(DoubleStringsListRelationDialogData);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        vboxLayout3->addWidget(label_2);

        firstListWidget = new QListWidget(DoubleStringsListRelationDialogData);
        firstListWidget->setObjectName(QString::fromUtf8("firstListWidget"));
        firstListWidget->setDragDropMode(QAbstractItemView::InternalMove);

        vboxLayout3->addWidget(firstListWidget);


        hboxLayout->addLayout(vboxLayout3);

        vboxLayout4 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        label_3 = new QLabel(DoubleStringsListRelationDialogData);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        vboxLayout4->addWidget(label_3);

        secondListWidget = new QListWidget(DoubleStringsListRelationDialogData);
        secondListWidget->setObjectName(QString::fromUtf8("secondListWidget"));
        secondListWidget->setDragDropMode(QAbstractItemView::InternalMove);
        secondListWidget->setSelectionMode(QAbstractItemView::NoSelection);

        vboxLayout4->addWidget(secondListWidget);


        hboxLayout->addLayout(vboxLayout4);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        cancelButton = new QPushButton(DoubleStringsListRelationDialogData);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout1->addWidget(cancelButton);

        okButton = new QPushButton(DoubleStringsListRelationDialogData);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        hboxLayout1->addWidget(okButton);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(DoubleStringsListRelationDialogData);

        QMetaObject::connectSlotsByName(DoubleStringsListRelationDialogData);
    } // setupUi

    void retranslateUi(QDialog *DoubleStringsListRelationDialogData)
    {
        DoubleStringsListRelationDialogData->setWindowTitle(QApplication::translate("DoubleStringsListRelationDialogData", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DoubleStringsListRelationDialogData", "Move values to your preferred colors", 0, QApplication::UnicodeUTF8));
        upButton->setText(QString());
        downButton->setText(QString());
        label_2->setText(QApplication::translate("DoubleStringsListRelationDialogData", "Values", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DoubleStringsListRelationDialogData", "Colors", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("DoubleStringsListRelationDialogData", "Cancel", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("DoubleStringsListRelationDialogData", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DoubleStringsListRelationDialogData: public Ui_DoubleStringsListRelationDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DOUBLESTRINGSLISTRELATIONDIALOGDATA_H
