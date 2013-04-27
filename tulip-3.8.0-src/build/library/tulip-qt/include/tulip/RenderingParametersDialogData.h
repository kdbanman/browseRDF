/********************************************************************************
** Form generated from reading UI file 'RenderingParametersDialog.ui'
**
** Created: Fri Apr 26 16:35:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef RENDERINGPARAMETERSDIALOGDATA_H
#define RENDERINGPARAMETERSDIALOGDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RenderingParametersDialogData
{
public:
    QVBoxLayout *mainLayout;
    QGroupBox *labels;
    QGridLayout *labelsLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *ordering;
    QComboBox *orderingProperty;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelDensity;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *noLabels;
    QLabel *noOverlap;
    QLabel *allLabels;
    QSlider *density;
    QCheckBox *scaled;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *minSizeSpinBox;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpinBox *maxSizeSpinBox;
    QLabel *label_5;
    QLabel *label_3;
    QCheckBox *billboarded;
    QGroupBox *edges;
    QGridLayout *edgesLayout;
    QVBoxLayout *vLayout1;
    QHBoxLayout *hLayout1;
    QCheckBox *arrows;
    QCheckBox *edge3D;
    QHBoxLayout *hLayout2;
    QCheckBox *colorInterpolation;
    QCheckBox *sizeInterpolation;
    QHBoxLayout *hLayout3;
    QCheckBox *blockEdgeSizeCheckBox;
    QGroupBox *others;
    QVBoxLayout *othersLayout;
    QHBoxLayout *hLayout5;
    QCheckBox *orthogonal;
    QPushButton *background;
    QSpacerItem *spacer3;
    QHBoxLayout *hLayout4;
    QPushButton *selection;
    QPushButton *selectionSaveAtDefault;
    QSpacerItem *spacer2;
    QCheckBox *initview;
    QSpacerItem *spacer;

    void setupUi(QWidget *RenderingParametersDialogData)
    {
        if (RenderingParametersDialogData->objectName().isEmpty())
            RenderingParametersDialogData->setObjectName(QString::fromUtf8("RenderingParametersDialogData"));
        RenderingParametersDialogData->resize(357, 504);
        mainLayout = new QVBoxLayout(RenderingParametersDialogData);
#ifndef Q_OS_MAC
        mainLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        mainLayout->setContentsMargins(9, 9, 9, 9);
#endif
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        labels = new QGroupBox(RenderingParametersDialogData);
        labels->setObjectName(QString::fromUtf8("labels"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labels->sizePolicy().hasHeightForWidth());
        labels->setSizePolicy(sizePolicy);
        labels->setFlat(false);
        labelsLayout = new QGridLayout(labels);
#ifndef Q_OS_MAC
        labelsLayout->setSpacing(6);
#endif
        labelsLayout->setContentsMargins(0, 0, 0, 0);
        labelsLayout->setObjectName(QString::fromUtf8("labelsLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ordering = new QCheckBox(labels);
        ordering->setObjectName(QString::fromUtf8("ordering"));
        ordering->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_6->addWidget(ordering);

        orderingProperty = new QComboBox(labels);
        orderingProperty->setObjectName(QString::fromUtf8("orderingProperty"));

        horizontalLayout_6->addWidget(orderingProperty);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelDensity = new QLabel(labels);
        labelDensity->setObjectName(QString::fromUtf8("labelDensity"));
        labelDensity->setWordWrap(false);

        horizontalLayout_2->addWidget(labelDensity);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        noLabels = new QLabel(labels);
        noLabels->setObjectName(QString::fromUtf8("noLabels"));
        QFont font;
        font.setPointSize(8);
        noLabels->setFont(font);
        noLabels->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(noLabels);

        noOverlap = new QLabel(labels);
        noOverlap->setObjectName(QString::fromUtf8("noOverlap"));
        noOverlap->setFont(font);
        noOverlap->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(noOverlap);

        allLabels = new QLabel(labels);
        allLabels->setObjectName(QString::fromUtf8("allLabels"));
        allLabels->setFont(font);
        allLabels->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(allLabels);


        verticalLayout_3->addLayout(horizontalLayout_4);

        density = new QSlider(labels);
        density->setObjectName(QString::fromUtf8("density"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(density->sizePolicy().hasHeightForWidth());
        density->setSizePolicy(sizePolicy1);
        density->setMinimum(-105);
        density->setMaximum(105);
        density->setValue(105);
        density->setOrientation(Qt::Horizontal);
        density->setInvertedControls(false);
        density->setTickPosition(QSlider::TicksAbove);
        density->setTickInterval(105);

        verticalLayout_3->addWidget(density);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        scaled = new QCheckBox(labels);
        scaled->setObjectName(QString::fromUtf8("scaled"));

        verticalLayout->addWidget(scaled);

        frame_2 = new QFrame(labels);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        minSizeSpinBox = new QSpinBox(frame_2);
        minSizeSpinBox->setObjectName(QString::fromUtf8("minSizeSpinBox"));
        minSizeSpinBox->setMaximum(100);
        minSizeSpinBox->setValue(0);

        horizontalLayout->addWidget(minSizeSpinBox);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        maxSizeSpinBox = new QSpinBox(frame_2);
        maxSizeSpinBox->setObjectName(QString::fromUtf8("maxSizeSpinBox"));
        maxSizeSpinBox->setMinimum(0);
        maxSizeSpinBox->setMaximum(100);
        maxSizeSpinBox->setValue(100);

        horizontalLayout->addWidget(maxSizeSpinBox);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(7);
        font1.setItalic(true);
        label_3->setFont(font1);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        billboarded = new QCheckBox(labels);
        billboarded->setObjectName(QString::fromUtf8("billboarded"));

        verticalLayout->addWidget(billboarded);


        labelsLayout->addLayout(verticalLayout, 3, 0, 1, 1);


        mainLayout->addWidget(labels);

        edges = new QGroupBox(RenderingParametersDialogData);
        edges->setObjectName(QString::fromUtf8("edges"));
        sizePolicy.setHeightForWidth(edges->sizePolicy().hasHeightForWidth());
        edges->setSizePolicy(sizePolicy);
        edgesLayout = new QGridLayout(edges);
#ifndef Q_OS_MAC
        edgesLayout->setSpacing(6);
#endif
        edgesLayout->setContentsMargins(0, 0, 0, 0);
        edgesLayout->setObjectName(QString::fromUtf8("edgesLayout"));
        vLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vLayout1->setSpacing(6);
#endif
        vLayout1->setContentsMargins(2, 2, 2, 2);
        vLayout1->setObjectName(QString::fromUtf8("vLayout1"));
        hLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hLayout1->setObjectName(QString::fromUtf8("hLayout1"));
        arrows = new QCheckBox(edges);
        arrows->setObjectName(QString::fromUtf8("arrows"));
        arrows->setFocusPolicy(Qt::StrongFocus);

        hLayout1->addWidget(arrows);

        edge3D = new QCheckBox(edges);
        edge3D->setObjectName(QString::fromUtf8("edge3D"));
        edge3D->setFocusPolicy(Qt::StrongFocus);

        hLayout1->addWidget(edge3D);


        vLayout1->addLayout(hLayout1);

        hLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hLayout2->setSpacing(6);
#endif
        hLayout2->setContentsMargins(0, 0, 0, 0);
        hLayout2->setObjectName(QString::fromUtf8("hLayout2"));
        colorInterpolation = new QCheckBox(edges);
        colorInterpolation->setObjectName(QString::fromUtf8("colorInterpolation"));
        colorInterpolation->setFocusPolicy(Qt::StrongFocus);
        colorInterpolation->setChecked(true);

        hLayout2->addWidget(colorInterpolation);

        sizeInterpolation = new QCheckBox(edges);
        sizeInterpolation->setObjectName(QString::fromUtf8("sizeInterpolation"));
        sizeInterpolation->setFocusPolicy(Qt::StrongFocus);
        sizeInterpolation->setChecked(true);

        hLayout2->addWidget(sizeInterpolation);


        vLayout1->addLayout(hLayout2);

        hLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hLayout3->setSpacing(6);
#endif
        hLayout3->setContentsMargins(0, 0, 0, 0);
        hLayout3->setObjectName(QString::fromUtf8("hLayout3"));
        blockEdgeSizeCheckBox = new QCheckBox(edges);
        blockEdgeSizeCheckBox->setObjectName(QString::fromUtf8("blockEdgeSizeCheckBox"));
        blockEdgeSizeCheckBox->setFocusPolicy(Qt::StrongFocus);
        blockEdgeSizeCheckBox->setChecked(true);

        hLayout3->addWidget(blockEdgeSizeCheckBox);


        vLayout1->addLayout(hLayout3);


        edgesLayout->addLayout(vLayout1, 0, 0, 1, 1);


        mainLayout->addWidget(edges);

        others = new QGroupBox(RenderingParametersDialogData);
        others->setObjectName(QString::fromUtf8("others"));
        othersLayout = new QVBoxLayout(others);
#ifndef Q_OS_MAC
        othersLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        othersLayout->setContentsMargins(9, 9, 9, 9);
#endif
        othersLayout->setObjectName(QString::fromUtf8("othersLayout"));
        hLayout5 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hLayout5->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hLayout5->setContentsMargins(0, 0, 0, 0);
#endif
        hLayout5->setObjectName(QString::fromUtf8("hLayout5"));
        orthogonal = new QCheckBox(others);
        orthogonal->setObjectName(QString::fromUtf8("orthogonal"));
        orthogonal->setFocusPolicy(Qt::StrongFocus);
        orthogonal->setChecked(true);

        hLayout5->addWidget(orthogonal);

        background = new QPushButton(others);
        background->setObjectName(QString::fromUtf8("background"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(background->sizePolicy().hasHeightForWidth());
        background->setSizePolicy(sizePolicy2);
        background->setFocusPolicy(Qt::StrongFocus);
        background->setAutoFillBackground(true);

        hLayout5->addWidget(background);

        spacer3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout5->addItem(spacer3);


        othersLayout->addLayout(hLayout5);

        hLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hLayout4->setSpacing(6);
#endif
        hLayout4->setContentsMargins(0, 0, 0, 0);
        hLayout4->setObjectName(QString::fromUtf8("hLayout4"));
        selection = new QPushButton(others);
        selection->setObjectName(QString::fromUtf8("selection"));

        hLayout4->addWidget(selection);

        selectionSaveAtDefault = new QPushButton(others);
        selectionSaveAtDefault->setObjectName(QString::fromUtf8("selectionSaveAtDefault"));

        hLayout4->addWidget(selectionSaveAtDefault);

        spacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout4->addItem(spacer2);


        othersLayout->addLayout(hLayout4);

        initview = new QCheckBox(others);
        initview->setObjectName(QString::fromUtf8("initview"));
        initview->setFocusPolicy(Qt::StrongFocus);
        initview->setChecked(true);

        othersLayout->addWidget(initview);


        mainLayout->addWidget(others);

        spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainLayout->addItem(spacer);


        retranslateUi(RenderingParametersDialogData);
        QObject::connect(arrows, SIGNAL(stateChanged(int)), RenderingParametersDialogData, SLOT(updateView()));
        QObject::connect(colorInterpolation, SIGNAL(stateChanged(int)), RenderingParametersDialogData, SLOT(updateView()));
        QObject::connect(blockEdgeSizeCheckBox, SIGNAL(stateChanged(int)), RenderingParametersDialogData, SLOT(updateView()));
        QObject::connect(edge3D, SIGNAL(stateChanged(int)), RenderingParametersDialogData, SLOT(updateView()));
        QObject::connect(orthogonal, SIGNAL(stateChanged(int)), RenderingParametersDialogData, SLOT(updateView()));
        QObject::connect(sizeInterpolation, SIGNAL(stateChanged(int)), RenderingParametersDialogData, SLOT(updateView()));
        QObject::connect(background, SIGNAL(clicked()), RenderingParametersDialogData, SLOT(backColor()));
        QObject::connect(selection, SIGNAL(clicked()), RenderingParametersDialogData, SLOT(selectionColor()));
        QObject::connect(selectionSaveAtDefault, SIGNAL(clicked()), RenderingParametersDialogData, SLOT(selectionSaveAtDefaultColor()));
        QObject::connect(density, SIGNAL(valueChanged(int)), RenderingParametersDialogData, SLOT(updateView()));
        QObject::connect(ordering, SIGNAL(stateChanged(int)), RenderingParametersDialogData, SLOT(updateView()));
        QObject::connect(scaled, SIGNAL(clicked()), RenderingParametersDialogData, SLOT(updateView()));
        QObject::connect(scaled, SIGNAL(clicked(bool)), frame_2, SLOT(setDisabled(bool)));
        QObject::connect(minSizeSpinBox, SIGNAL(valueChanged(int)), RenderingParametersDialogData, SLOT(labelSizeChanged(int)));
        QObject::connect(maxSizeSpinBox, SIGNAL(valueChanged(int)), RenderingParametersDialogData, SLOT(labelSizeChanged(int)));
        QObject::connect(billboarded, SIGNAL(clicked()), RenderingParametersDialogData, SLOT(updateView()));
        QObject::connect(initview, SIGNAL(stateChanged(int)), RenderingParametersDialogData, SLOT(setInitViewOnSetGraph()));

        QMetaObject::connectSlotsByName(RenderingParametersDialogData);
    } // setupUi

    void retranslateUi(QWidget *RenderingParametersDialogData)
    {
        RenderingParametersDialogData->setWindowTitle(QApplication::translate("RenderingParametersDialogData", "Form", 0, QApplication::UnicodeUTF8));
        labels->setTitle(QApplication::translate("RenderingParametersDialogData", "Labels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ordering->setToolTip(QApplication::translate("RenderingParametersDialogData", "Use viewMetric decreasing order as display order", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ordering->setText(QApplication::translate("RenderingParametersDialogData", "metric ordering", 0, QApplication::UnicodeUTF8));
        labelDensity->setText(QApplication::translate("RenderingParametersDialogData", "Density : ", 0, QApplication::UnicodeUTF8));
        noLabels->setText(QApplication::translate("RenderingParametersDialogData", "No labels", 0, QApplication::UnicodeUTF8));
        noOverlap->setText(QApplication::translate("RenderingParametersDialogData", "No overlap", 0, QApplication::UnicodeUTF8));
        allLabels->setText(QApplication::translate("RenderingParametersDialogData", "All labels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        scaled->setToolTip(QApplication::translate("RenderingParametersDialogData", "Fit to node size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        scaled->setText(QApplication::translate("RenderingParametersDialogData", "Scale labels to fit nodes sizes", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RenderingParametersDialogData", "Min size : ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RenderingParametersDialogData", "px", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RenderingParametersDialogData", "Max size :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RenderingParametersDialogData", "px", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RenderingParametersDialogData", "Limit rendered labels size (when not in scaled mode)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        billboarded->setToolTip(QApplication::translate("RenderingParametersDialogData", "For a better readability, the labels are always displayed in the screen plane.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        billboarded->setText(QApplication::translate("RenderingParametersDialogData", "Always face to point of view", 0, QApplication::UnicodeUTF8));
        edges->setTitle(QApplication::translate("RenderingParametersDialogData", "Edges", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        arrows->setToolTip(QApplication::translate("RenderingParametersDialogData", "show/hide arrow on edges", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        arrows->setText(QApplication::translate("RenderingParametersDialogData", "arrows", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        edge3D->setToolTip(QApplication::translate("RenderingParametersDialogData", "enable/disable 3D rendering of edges", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        edge3D->setText(QApplication::translate("RenderingParametersDialogData", "3D", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        colorInterpolation->setToolTip(QApplication::translate("RenderingParametersDialogData", "Interpolate edge color from the colors of its nodes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        colorInterpolation->setText(QApplication::translate("RenderingParametersDialogData", "Color interpolation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sizeInterpolation->setToolTip(QApplication::translate("RenderingParametersDialogData", "Interpolate edge size from the sizes of its nodes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sizeInterpolation->setText(QApplication::translate("RenderingParametersDialogData", "Size interpolation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        blockEdgeSizeCheckBox->setToolTip(QApplication::translate("RenderingParametersDialogData", "With this option edge size can't be greater than node size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        blockEdgeSizeCheckBox->setText(QApplication::translate("RenderingParametersDialogData", "Block max edge size to node size", 0, QApplication::UnicodeUTF8));
        others->setTitle(QApplication::translate("RenderingParametersDialogData", "Others", 0, QApplication::UnicodeUTF8));
        orthogonal->setText(QApplication::translate("RenderingParametersDialogData", "Orthogonal projection", 0, QApplication::UnicodeUTF8));
        background->setText(QApplication::translate("RenderingParametersDialogData", "Background color", 0, QApplication::UnicodeUTF8));
        selection->setText(QApplication::translate("RenderingParametersDialogData", "Selection color", 0, QApplication::UnicodeUTF8));
        selectionSaveAtDefault->setText(QApplication::translate("RenderingParametersDialogData", "Save as default", 0, QApplication::UnicodeUTF8));
        initview->setText(QApplication::translate("RenderingParametersDialogData", "Center view when changing graph", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RenderingParametersDialogData: public Ui_RenderingParametersDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // RENDERINGPARAMETERSDIALOGDATA_H
