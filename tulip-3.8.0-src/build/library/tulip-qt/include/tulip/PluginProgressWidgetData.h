/********************************************************************************
** Form generated from reading UI file 'PluginProgressWidget.ui'
**
** Created: Tue Apr 30 11:12:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PLUGINPROGRESSWIDGETDATA_H
#define PLUGINPROGRESSWIDGETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginProgressWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *comment;
    QProgressBar *progressBar;
    QHBoxLayout *VBoxLayout;
    QCheckBox *preview;
    QSpacerItem *HorizontalSpacer;
    QPushButton *stopPushButton;
    QPushButton *cancelPushButton;

    void setupUi(QWidget *PluginProgressWidget)
    {
        if (PluginProgressWidget->objectName().isEmpty())
            PluginProgressWidget->setObjectName(QString::fromUtf8("PluginProgressWidget"));
        PluginProgressWidget->resize(417, 92);
        verticalLayout = new QVBoxLayout(PluginProgressWidget);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comment = new QLabel(PluginProgressWidget);
        comment->setObjectName(QString::fromUtf8("comment"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comment->sizePolicy().hasHeightForWidth());
        comment->setSizePolicy(sizePolicy);
        comment->setMinimumSize(QSize(300, 0));
        comment->setWordWrap(false);

        verticalLayout->addWidget(comment);

        progressBar = new QProgressBar(PluginProgressWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximumSize(QSize(800, 32767));
        progressBar->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(progressBar);

        VBoxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        VBoxLayout->setSpacing(6);
#endif
        VBoxLayout->setContentsMargins(2, 2, 2, 2);
        VBoxLayout->setObjectName(QString::fromUtf8("VBoxLayout"));
        preview = new QCheckBox(PluginProgressWidget);
        preview->setObjectName(QString::fromUtf8("preview"));
        sizePolicy.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy);

        VBoxLayout->addWidget(preview);

        HorizontalSpacer = new QSpacerItem(16, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        VBoxLayout->addItem(HorizontalSpacer);

        stopPushButton = new QPushButton(PluginProgressWidget);
        stopPushButton->setObjectName(QString::fromUtf8("stopPushButton"));
        sizePolicy.setHeightForWidth(stopPushButton->sizePolicy().hasHeightForWidth());
        stopPushButton->setSizePolicy(sizePolicy);

        VBoxLayout->addWidget(stopPushButton);

        cancelPushButton = new QPushButton(PluginProgressWidget);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));
        sizePolicy.setHeightForWidth(cancelPushButton->sizePolicy().hasHeightForWidth());
        cancelPushButton->setSizePolicy(sizePolicy);

        VBoxLayout->addWidget(cancelPushButton);


        verticalLayout->addLayout(VBoxLayout);


        retranslateUi(PluginProgressWidget);

        QMetaObject::connectSlotsByName(PluginProgressWidget);
    } // setupUi

    void retranslateUi(QWidget *PluginProgressWidget)
    {
        PluginProgressWidget->setWindowTitle(QApplication::translate("PluginProgressWidget", "Form", 0, QApplication::UnicodeUTF8));
        preview->setText(QApplication::translate("PluginProgressWidget", "preview", 0, QApplication::UnicodeUTF8));
        stopPushButton->setText(QApplication::translate("PluginProgressWidget", "Stop", 0, QApplication::UnicodeUTF8));
        cancelPushButton->setText(QApplication::translate("PluginProgressWidget", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PluginProgressWidget: public Ui_PluginProgressWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PLUGINPROGRESSWIDGETDATA_H
