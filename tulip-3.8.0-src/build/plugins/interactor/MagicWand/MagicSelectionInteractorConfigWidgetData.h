/********************************************************************************
** Form generated from reading UI file 'MagicSelectionInteractorConfigWidget.ui'
**
** Created: Fri Apr 26 16:36:42 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAGICSELECTIONINTERACTORCONFIGWIDGETDATA_H
#define MAGICSELECTIONINTERACTORCONFIGWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MagicSelectionInteractorConfigWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *modeLabel;
    QGridLayout *gridLayout;
    QPushButton *selectionIntersection;
    QPushButton *selectionReplace;
    QPushButton *selectionAdd;
    QPushButton *selectionRemove;
    QHBoxLayout *horizontalLayout_3;
    QLabel *propertyLabel;
    QComboBox *properties;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *OverLabel;
    QDoubleSpinBox *overValue;
    QHBoxLayout *horizontalLayout_6;
    QLabel *UnderLabel;
    QDoubleSpinBox *underValue;
    QCheckBox *directed;

    void setupUi(QWidget *MagicSelectionInteractorConfigWidget)
    {
        if (MagicSelectionInteractorConfigWidget->objectName().isEmpty())
            MagicSelectionInteractorConfigWidget->setObjectName(QString::fromUtf8("MagicSelectionInteractorConfigWidget"));
        MagicSelectionInteractorConfigWidget->resize(523, 558);
        verticalLayout_3 = new QVBoxLayout(MagicSelectionInteractorConfigWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        modeLabel = new QLabel(MagicSelectionInteractorConfigWidget);
        modeLabel->setObjectName(QString::fromUtf8("modeLabel"));

        horizontalLayout->addWidget(modeLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        selectionIntersection = new QPushButton(MagicSelectionInteractorConfigWidget);
        selectionIntersection->setObjectName(QString::fromUtf8("selectionIntersection"));
        selectionIntersection->setCheckable(true);

        gridLayout->addWidget(selectionIntersection, 5, 1, 1, 1);

        selectionReplace = new QPushButton(MagicSelectionInteractorConfigWidget);
        selectionReplace->setObjectName(QString::fromUtf8("selectionReplace"));
        selectionReplace->setCheckable(true);
        selectionReplace->setChecked(true);
        selectionReplace->setAutoDefault(false);
        selectionReplace->setDefault(false);
        selectionReplace->setFlat(false);

        gridLayout->addWidget(selectionReplace, 4, 0, 1, 1);

        selectionAdd = new QPushButton(MagicSelectionInteractorConfigWidget);
        selectionAdd->setObjectName(QString::fromUtf8("selectionAdd"));
        selectionAdd->setCheckable(true);

        gridLayout->addWidget(selectionAdd, 5, 0, 1, 1);

        selectionRemove = new QPushButton(MagicSelectionInteractorConfigWidget);
        selectionRemove->setObjectName(QString::fromUtf8("selectionRemove"));
        selectionRemove->setCheckable(true);

        gridLayout->addWidget(selectionRemove, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        propertyLabel = new QLabel(MagicSelectionInteractorConfigWidget);
        propertyLabel->setObjectName(QString::fromUtf8("propertyLabel"));

        horizontalLayout_3->addWidget(propertyLabel);

        properties = new QComboBox(MagicSelectionInteractorConfigWidget);
        properties->setObjectName(QString::fromUtf8("properties"));

        horizontalLayout_3->addWidget(properties);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        OverLabel = new QLabel(MagicSelectionInteractorConfigWidget);
        OverLabel->setObjectName(QString::fromUtf8("OverLabel"));

        horizontalLayout_4->addWidget(OverLabel);

        overValue = new QDoubleSpinBox(MagicSelectionInteractorConfigWidget);
        overValue->setObjectName(QString::fromUtf8("overValue"));

        horizontalLayout_4->addWidget(overValue);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        UnderLabel = new QLabel(MagicSelectionInteractorConfigWidget);
        UnderLabel->setObjectName(QString::fromUtf8("UnderLabel"));

        horizontalLayout_6->addWidget(UnderLabel);

        underValue = new QDoubleSpinBox(MagicSelectionInteractorConfigWidget);
        underValue->setObjectName(QString::fromUtf8("underValue"));

        horizontalLayout_6->addWidget(underValue);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        directed = new QCheckBox(MagicSelectionInteractorConfigWidget);
        directed->setObjectName(QString::fromUtf8("directed"));

        verticalLayout_3->addWidget(directed);


        retranslateUi(MagicSelectionInteractorConfigWidget);

        QMetaObject::connectSlotsByName(MagicSelectionInteractorConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *MagicSelectionInteractorConfigWidget)
    {
        MagicSelectionInteractorConfigWidget->setWindowTitle(QApplication::translate("MagicSelectionInteractorConfigWidget", "Form", 0, QApplication::UnicodeUTF8));
        modeLabel->setText(QApplication::translate("MagicSelectionInteractorConfigWidget", "Mode: ", 0, QApplication::UnicodeUTF8));
        selectionIntersection->setText(QApplication::translate("MagicSelectionInteractorConfigWidget", "Intersection of selections", 0, QApplication::UnicodeUTF8));
        selectionReplace->setText(QApplication::translate("MagicSelectionInteractorConfigWidget", "Replace Selection", 0, QApplication::UnicodeUTF8));
        selectionAdd->setText(QApplication::translate("MagicSelectionInteractorConfigWidget", "Add to selection", 0, QApplication::UnicodeUTF8));
        selectionRemove->setText(QApplication::translate("MagicSelectionInteractorConfigWidget", "Remove from selection", 0, QApplication::UnicodeUTF8));
        propertyLabel->setText(QApplication::translate("MagicSelectionInteractorConfigWidget", "Property: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        OverLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        OverLabel->setText(QApplication::translate("MagicSelectionInteractorConfigWidget", "upper threshold", 0, QApplication::UnicodeUTF8));
        UnderLabel->setText(QApplication::translate("MagicSelectionInteractorConfigWidget", "lower threshold", 0, QApplication::UnicodeUTF8));
        directed->setText(QApplication::translate("MagicSelectionInteractorConfigWidget", "Directed", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MagicSelectionInteractorConfigWidget: public Ui_MagicSelectionInteractorConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAGICSELECTIONINTERACTORCONFIGWIDGETDATA_H
