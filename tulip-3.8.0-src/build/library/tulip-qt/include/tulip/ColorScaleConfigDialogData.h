/********************************************************************************
** Form generated from reading UI file 'ColorScaleConfigDialog.ui'
**
** Created: Mon Apr 29 01:40:51 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef COLORSCALECONFIGDIALOGDATA_H
#define COLORSCALECONFIGDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorScaleDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpinBox *nbColors;
    QCheckBox *gradientCB;
    QHBoxLayout *horizontalLayout;
    QTableWidget *colorsTable;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QToolButton *invertColorScaleButton;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *importFromImgButton;
    QPushButton *saveColorScaleButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *userGradientPreview;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_5;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QListWidget *savedColorScalesList;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *deleteColorScaleButton;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *savedGradientPreview;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColorScaleDialog)
    {
        if (ColorScaleDialog->objectName().isEmpty())
            ColorScaleDialog->setObjectName(QString::fromUtf8("ColorScaleDialog"));
        ColorScaleDialog->resize(486, 444);
        verticalLayout_7 = new QVBoxLayout(ColorScaleDialog);
        verticalLayout_7->setContentsMargins(3, 3, 3, 3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        tabWidget = new QTabWidget(ColorScaleDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(480, 400));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_7 = new QHBoxLayout(tab_2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        frame = new QFrame(tab_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(frame);
        verticalLayout_11->setContentsMargins(3, 3, 3, 3);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        nbColors = new QSpinBox(frame);
        nbColors->setObjectName(QString::fromUtf8("nbColors"));
        nbColors->setMinimum(2);

        horizontalLayout_5->addWidget(nbColors);


        verticalLayout_10->addLayout(horizontalLayout_5);

        gradientCB = new QCheckBox(frame);
        gradientCB->setObjectName(QString::fromUtf8("gradientCB"));
        gradientCB->setChecked(true);

        verticalLayout_10->addWidget(gradientCB);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        colorsTable = new QTableWidget(frame);
        if (colorsTable->columnCount() < 1)
            colorsTable->setColumnCount(1);
        if (colorsTable->rowCount() < 2)
            colorsTable->setRowCount(2);
        colorsTable->setObjectName(QString::fromUtf8("colorsTable"));
        colorsTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        colorsTable->setSelectionMode(QAbstractItemView::NoSelection);
        colorsTable->setShowGrid(true);
        colorsTable->setGridStyle(Qt::SolidLine);
        colorsTable->setRowCount(2);
        colorsTable->setColumnCount(1);

        horizontalLayout->addWidget(colorsTable);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        invertColorScaleButton = new QToolButton(frame);
        invertColorScaleButton->setObjectName(QString::fromUtf8("invertColorScaleButton"));
        invertColorScaleButton->setMinimumSize(QSize(15, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/arrow_two_head.png"), QSize(), QIcon::Normal, QIcon::Off);
        invertColorScaleButton->setIcon(icon);
        invertColorScaleButton->setIconSize(QSize(16, 25));

        verticalLayout->addWidget(invertColorScaleButton);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_10->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        importFromImgButton = new QPushButton(frame);
        importFromImgButton->setObjectName(QString::fromUtf8("importFromImgButton"));
        QFont font;
        font.setPointSize(10);
        importFromImgButton->setFont(font);

        horizontalLayout_6->addWidget(importFromImgButton);

        saveColorScaleButton = new QPushButton(frame);
        saveColorScaleButton->setObjectName(QString::fromUtf8("saveColorScaleButton"));
        saveColorScaleButton->setFont(font);

        horizontalLayout_6->addWidget(saveColorScaleButton);


        verticalLayout_10->addLayout(horizontalLayout_6);


        verticalLayout_11->addLayout(verticalLayout_10);


        horizontalLayout_7->addWidget(frame);

        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(30, 200));
        groupBox_2->setMaximumSize(QSize(200, 16777215));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        userGradientPreview = new QLabel(groupBox_2);
        userGradientPreview->setObjectName(QString::fromUtf8("userGradientPreview"));
        userGradientPreview->setMinimumSize(QSize(30, 200));
        userGradientPreview->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_4->addWidget(userGradientPreview);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_6->addWidget(label_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_8);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_6->addWidget(label_5);


        horizontalLayout_4->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_4);


        horizontalLayout_7->addWidget(groupBox_2);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_8 = new QHBoxLayout(tab);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        savedColorScalesList = new QListWidget(tab);
        savedColorScalesList->setObjectName(QString::fromUtf8("savedColorScalesList"));
        savedColorScalesList->setMinimumSize(QSize(298, 0));

        verticalLayout_2->addWidget(savedColorScalesList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        deleteColorScaleButton = new QPushButton(tab);
        deleteColorScaleButton->setObjectName(QString::fromUtf8("deleteColorScaleButton"));

        horizontalLayout_2->addWidget(deleteColorScaleButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_8->addLayout(verticalLayout_2);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(30, 200));
        groupBox->setMaximumSize(QSize(200, 16777215));
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        savedGradientPreview = new QLabel(groupBox);
        savedGradientPreview->setObjectName(QString::fromUtf8("savedGradientPreview"));
        savedGradientPreview->setMinimumSize(QSize(30, 200));
        savedGradientPreview->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_3->addWidget(savedGradientPreview);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_8->addLayout(horizontalLayout_3);


        horizontalLayout_8->addWidget(groupBox);

        tabWidget->addTab(tab, QString());

        verticalLayout_7->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(ColorScaleDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_7->addWidget(buttonBox);


        retranslateUi(ColorScaleDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColorScaleDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColorScaleDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ColorScaleDialog);
    } // setupUi

    void retranslateUi(QDialog *ColorScaleDialog)
    {
        ColorScaleDialog->setWindowTitle(QApplication::translate("ColorScaleDialog", "Color Scale Configuration", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ColorScaleDialog", "Number of colors :", 0, QApplication::UnicodeUTF8));
        gradientCB->setText(QApplication::translate("ColorScaleDialog", "gradient scale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        invertColorScaleButton->setToolTip(QApplication::translate("ColorScaleDialog", "Invert color scale", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        invertColorScaleButton->setText(QApplication::translate("ColorScaleDialog", "...", 0, QApplication::UnicodeUTF8));
        importFromImgButton->setText(QApplication::translate("ColorScaleDialog", "Import\n"
"from image", 0, QApplication::UnicodeUTF8));
        saveColorScaleButton->setText(QApplication::translate("ColorScaleDialog", "Save \n"
"color scale", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ColorScaleDialog", "Color scale preview", 0, QApplication::UnicodeUTF8));
        userGradientPreview->setText(QString());
        label_4->setText(QApplication::translate("ColorScaleDialog", "max", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ColorScaleDialog", "min", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ColorScaleDialog", "Color scale creation", 0, QApplication::UnicodeUTF8));
        deleteColorScaleButton->setText(QApplication::translate("ColorScaleDialog", "Delete color scale", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ColorScaleDialog", "Color scale preview", 0, QApplication::UnicodeUTF8));
        savedGradientPreview->setText(QString());
        label_2->setText(QApplication::translate("ColorScaleDialog", "max", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ColorScaleDialog", "min", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ColorScaleDialog", "Predefined color scale", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ColorScaleDialog: public Ui_ColorScaleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // COLORSCALECONFIGDIALOGDATA_H
