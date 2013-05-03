/********************************************************************************
** Form generated from reading UI file 'FileNameEditorWidget.ui'
**
** Created: Tue Apr 30 11:12:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef FILENAMEEDITORWIDGETDATA_H
#define FILENAMEEDITORWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileNameEditorWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *FileNameEditorWidget)
    {
        if (FileNameEditorWidget->objectName().isEmpty())
            FileNameEditorWidget->setObjectName(QString::fromUtf8("FileNameEditorWidget"));
        FileNameEditorWidget->resize(211, 23);
        horizontalLayout = new QHBoxLayout(FileNameEditorWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(FileNameEditorWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(FileNameEditorWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton);


        retranslateUi(FileNameEditorWidget);

        QMetaObject::connectSlotsByName(FileNameEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *FileNameEditorWidget)
    {
        FileNameEditorWidget->setWindowTitle(QApplication::translate("FileNameEditorWidget", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("FileNameEditorWidget", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FileNameEditorWidget: public Ui_FileNameEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // FILENAMEEDITORWIDGETDATA_H
