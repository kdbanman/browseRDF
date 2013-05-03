/********************************************************************************
** Form generated from reading UI file 'GWOverviewWidget.ui'
**
** Created: Tue Apr 30 11:12:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef GWOVERVIEWWIDGETDATA_H
#define GWOVERVIEWWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GWOverviewWidgetData
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;

    void setupUi(QWidget *GWOverviewWidgetData)
    {
        if (GWOverviewWidgetData->objectName().isEmpty())
            GWOverviewWidgetData->setObjectName(QString::fromUtf8("GWOverviewWidgetData"));
        GWOverviewWidgetData->resize(100, 30);
        GWOverviewWidgetData->setAutoFillBackground(true);
        gridLayout = new QGridLayout(GWOverviewWidgetData);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(GWOverviewWidgetData);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(GWOverviewWidgetData);

        QMetaObject::connectSlotsByName(GWOverviewWidgetData);
    } // setupUi

    void retranslateUi(QWidget *GWOverviewWidgetData)
    {
        GWOverviewWidgetData->setWindowTitle(QApplication::translate("GWOverviewWidgetData", "OverviewWidget", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GWOverviewWidgetData: public Ui_GWOverviewWidgetData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GWOVERVIEWWIDGETDATA_H
