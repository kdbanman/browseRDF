/********************************************************************************
** Form generated from reading UI file 'SnapshotDialog.ui'
**
** Created: Fri Apr 26 16:35:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SNAPSHOTDIALOGDATA_H
#define SNAPSHOTDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SnapshotDialogData
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *widthSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *heightSpinBox;
    QVBoxLayout *lockLayout;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QSpinBox *qualitySpinBox;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *fileName;
    QPushButton *browseButton;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *clipboardbutton;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *SnapshotDialogData)
    {
        if (SnapshotDialogData->objectName().isEmpty())
            SnapshotDialogData->setObjectName(QString::fromUtf8("SnapshotDialogData"));
        SnapshotDialogData->setWindowModality(Qt::WindowModal);
        SnapshotDialogData->resize(502, 421);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SnapshotDialogData->sizePolicy().hasHeightForWidth());
        SnapshotDialogData->setSizePolicy(sizePolicy);
        SnapshotDialogData->setMinimumSize(QSize(0, 0));
        SnapshotDialogData->setMaximumSize(QSize(1000, 1000));
        SnapshotDialogData->setSizeGripEnabled(true);
        SnapshotDialogData->setModal(true);
        gridLayout = new QGridLayout(SnapshotDialogData);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(3, 0, 6, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(9);
        verticalLayout_5->setContentsMargins(9, 9, 9, 9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        graphicsView = new QGraphicsView(SnapshotDialogData);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setMinimumSize(QSize(0, 0));
        graphicsView->setMaximumSize(QSize(1000, 1000));

        verticalLayout_3->addWidget(graphicsView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        frame = new QFrame(SnapshotDialogData);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        widthSpinBox = new QSpinBox(frame);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));
        widthSpinBox->setMinimum(16);
        widthSpinBox->setMaximum(4192);

        horizontalLayout_2->addWidget(widthSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        heightSpinBox = new QSpinBox(frame);
        heightSpinBox->setObjectName(QString::fromUtf8("heightSpinBox"));
        heightSpinBox->setMinimum(16);
        heightSpinBox->setMaximum(4192);

        horizontalLayout_3->addWidget(heightSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_4);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        lockLayout = new QVBoxLayout();
        lockLayout->setObjectName(QString::fromUtf8("lockLayout"));

        gridLayout_2->addLayout(lockLayout, 0, 1, 1, 1);


        horizontalLayout_5->addWidget(frame);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        frame_2 = new QFrame(SnapshotDialogData);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(3, 3, 3, 3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setTextFormat(Qt::AutoText);

        verticalLayout_6->addWidget(label_4);

        qualitySpinBox = new QSpinBox(frame_2);
        qualitySpinBox->setObjectName(QString::fromUtf8("qualitySpinBox"));
        qualitySpinBox->setMaximum(100);
        qualitySpinBox->setValue(100);

        verticalLayout_6->addWidget(qualitySpinBox);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_6->addWidget(label_5);


        gridLayout_3->addLayout(verticalLayout_6, 1, 0, 1, 1);


        horizontalLayout_5->addWidget(frame_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        fileName = new QLineEdit(SnapshotDialogData);
        fileName->setObjectName(QString::fromUtf8("fileName"));

        horizontalLayout_4->addWidget(fileName);

        browseButton = new QPushButton(SnapshotDialogData);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));
        browseButton->setMaximumSize(QSize(32, 32));

        horizontalLayout_4->addWidget(browseButton);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        clipboardbutton = new QPushButton(SnapshotDialogData);
        clipboardbutton->setObjectName(QString::fromUtf8("clipboardbutton"));

        horizontalLayout_8->addWidget(clipboardbutton);

        cancelButton = new QPushButton(SnapshotDialogData);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_8->addWidget(cancelButton);

        okButton = new QPushButton(SnapshotDialogData);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setEnabled(false);
        okButton->setDefault(true);

        horizontalLayout_8->addWidget(okButton);


        verticalLayout_5->addLayout(horizontalLayout_8);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);


        retranslateUi(SnapshotDialogData);
        QObject::connect(okButton, SIGNAL(clicked()), SnapshotDialogData, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), SnapshotDialogData, SLOT(reject()));

        QMetaObject::connectSlotsByName(SnapshotDialogData);
    } // setupUi

    void retranslateUi(QDialog *SnapshotDialogData)
    {
        SnapshotDialogData->setWindowTitle(QApplication::translate("SnapshotDialogData", "Snapshot", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SnapshotDialogData", "Width:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SnapshotDialogData", "Height:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SnapshotDialogData", "Picture quality:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SnapshotDialogData", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-style:italic;\">If the format supports it </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        browseButton->setText(QApplication::translate("SnapshotDialogData", "...", 0, QApplication::UnicodeUTF8));
        clipboardbutton->setText(QApplication::translate("SnapshotDialogData", "Copy to clipboard", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("SnapshotDialogData", "Cancel", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("SnapshotDialogData", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SnapshotDialogData: public Ui_SnapshotDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SNAPSHOTDIALOGDATA_H
