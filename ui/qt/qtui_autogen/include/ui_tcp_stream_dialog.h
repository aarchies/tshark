/********************************************************************************
** Form generated from reading UI file 'tcp_stream_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCP_STREAM_DIALOG_H
#define UI_TCP_STREAM_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_TCPStreamDialog
{
public:
    QAction *actionReset;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionMoveUp10;
    QAction *actionMoveLeft10;
    QAction *actionMoveRight10;
    QAction *actionMoveDown10;
    QAction *actionMoveUp1;
    QAction *actionMoveLeft1;
    QAction *actionMoveRight1;
    QAction *actionMoveDown1;
    QAction *actionNextStream;
    QAction *actionPreviousStream;
    QAction *actionSwitchDirection;
    QAction *actionGoToPacket;
    QAction *actionDragZoom;
    QAction *actionToggleSequenceNumbers;
    QAction *actionToggleTimeOrigin;
    QAction *actionCrosshairs;
    QAction *actionRoundTripTime;
    QAction *actionThroughput;
    QAction *actionStevens;
    QAction *actionWindowScaling;
    QAction *actionTcptrace;
    QAction *actionZoomInX;
    QAction *actionZoomOutX;
    QAction *actionZoomInY;
    QAction *actionZoomOutY;
    QVBoxLayout *verticalLayout;
    QCustomPlot *streamPlot;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *graphTypeComboBox;
    QSpacerItem *horizontalSpacer_1a;
    QLabel *maWindowSizeLabel;
    QDoubleSpinBox *maWindowSizeSpinBox;
    QCheckBox *selectSACKsCheckBox;
    QSpacerItem *horizontalSpacer_1b;
    QLabel *streamNumberLabel;
    QSpinBox *streamNumberSpinBox;
    QPushButton *otherDirectionButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mouseLabel;
    QRadioButton *dragRadioButton;
    QRadioButton *zoomRadioButton;
    QSpacerItem *horizontalSpacer_2a;
    QCheckBox *bySeqNumberCheckBox;
    QCheckBox *showSegLengthCheckBox;
    QCheckBox *showThroughputCheckBox;
    QCheckBox *showGoodputCheckBox;
    QCheckBox *showRcvWinCheckBox;
    QCheckBox *showBytesOutCheckBox;
    QSpacerItem *horizontalSpacer_2b;
    QPushButton *resetButton;
    QDialogButtonBox *buttonBox;
    QButtonGroup *mouseButtonGroup;

    void setupUi(QDialog *TCPStreamDialog)
    {
        if (TCPStreamDialog->objectName().isEmpty())
            TCPStreamDialog->setObjectName("TCPStreamDialog");
        TCPStreamDialog->resize(969, 640);
        actionReset = new QAction(TCPStreamDialog);
        actionReset->setObjectName("actionReset");
        actionZoomIn = new QAction(TCPStreamDialog);
        actionZoomIn->setObjectName("actionZoomIn");
        actionZoomOut = new QAction(TCPStreamDialog);
        actionZoomOut->setObjectName("actionZoomOut");
        actionMoveUp10 = new QAction(TCPStreamDialog);
        actionMoveUp10->setObjectName("actionMoveUp10");
        actionMoveLeft10 = new QAction(TCPStreamDialog);
        actionMoveLeft10->setObjectName("actionMoveLeft10");
        actionMoveRight10 = new QAction(TCPStreamDialog);
        actionMoveRight10->setObjectName("actionMoveRight10");
        actionMoveDown10 = new QAction(TCPStreamDialog);
        actionMoveDown10->setObjectName("actionMoveDown10");
        actionMoveUp1 = new QAction(TCPStreamDialog);
        actionMoveUp1->setObjectName("actionMoveUp1");
        actionMoveLeft1 = new QAction(TCPStreamDialog);
        actionMoveLeft1->setObjectName("actionMoveLeft1");
        actionMoveRight1 = new QAction(TCPStreamDialog);
        actionMoveRight1->setObjectName("actionMoveRight1");
        actionMoveDown1 = new QAction(TCPStreamDialog);
        actionMoveDown1->setObjectName("actionMoveDown1");
        actionNextStream = new QAction(TCPStreamDialog);
        actionNextStream->setObjectName("actionNextStream");
        actionPreviousStream = new QAction(TCPStreamDialog);
        actionPreviousStream->setObjectName("actionPreviousStream");
        actionSwitchDirection = new QAction(TCPStreamDialog);
        actionSwitchDirection->setObjectName("actionSwitchDirection");
        actionGoToPacket = new QAction(TCPStreamDialog);
        actionGoToPacket->setObjectName("actionGoToPacket");
        actionDragZoom = new QAction(TCPStreamDialog);
        actionDragZoom->setObjectName("actionDragZoom");
        actionToggleSequenceNumbers = new QAction(TCPStreamDialog);
        actionToggleSequenceNumbers->setObjectName("actionToggleSequenceNumbers");
        actionToggleTimeOrigin = new QAction(TCPStreamDialog);
        actionToggleTimeOrigin->setObjectName("actionToggleTimeOrigin");
        actionCrosshairs = new QAction(TCPStreamDialog);
        actionCrosshairs->setObjectName("actionCrosshairs");
        actionRoundTripTime = new QAction(TCPStreamDialog);
        actionRoundTripTime->setObjectName("actionRoundTripTime");
        actionThroughput = new QAction(TCPStreamDialog);
        actionThroughput->setObjectName("actionThroughput");
        actionStevens = new QAction(TCPStreamDialog);
        actionStevens->setObjectName("actionStevens");
        actionWindowScaling = new QAction(TCPStreamDialog);
        actionWindowScaling->setObjectName("actionWindowScaling");
        actionTcptrace = new QAction(TCPStreamDialog);
        actionTcptrace->setObjectName("actionTcptrace");
        actionZoomInX = new QAction(TCPStreamDialog);
        actionZoomInX->setObjectName("actionZoomInX");
        actionZoomOutX = new QAction(TCPStreamDialog);
        actionZoomOutX->setObjectName("actionZoomOutX");
        actionZoomInY = new QAction(TCPStreamDialog);
        actionZoomInY->setObjectName("actionZoomInY");
        actionZoomOutY = new QAction(TCPStreamDialog);
        actionZoomOutY->setObjectName("actionZoomOutY");
        verticalLayout = new QVBoxLayout(TCPStreamDialog);
        verticalLayout->setObjectName("verticalLayout");
        streamPlot = new QCustomPlot(TCPStreamDialog);
        streamPlot->setObjectName("streamPlot");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(streamPlot->sizePolicy().hasHeightForWidth());
        streamPlot->setSizePolicy(sizePolicy);
        streamPlot->setFocusPolicy(Qt::TabFocus);

        verticalLayout->addWidget(streamPlot);

        hintLabel = new QLabel(TCPStreamDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(TCPStreamDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        graphTypeComboBox = new QComboBox(TCPStreamDialog);
        graphTypeComboBox->setObjectName("graphTypeComboBox");
        graphTypeComboBox->setFocusPolicy(Qt::TabFocus);
        graphTypeComboBox->setFrame(false);

        horizontalLayout->addWidget(graphTypeComboBox);

        horizontalSpacer_1a = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_1a);

        maWindowSizeLabel = new QLabel(TCPStreamDialog);
        maWindowSizeLabel->setObjectName("maWindowSizeLabel");

        horizontalLayout->addWidget(maWindowSizeLabel);

        maWindowSizeSpinBox = new QDoubleSpinBox(TCPStreamDialog);
        maWindowSizeSpinBox->setObjectName("maWindowSizeSpinBox");

        horizontalLayout->addWidget(maWindowSizeSpinBox);

        selectSACKsCheckBox = new QCheckBox(TCPStreamDialog);
        selectSACKsCheckBox->setObjectName("selectSACKsCheckBox");
        selectSACKsCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout->addWidget(selectSACKsCheckBox);

        horizontalSpacer_1b = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_1b);

        streamNumberLabel = new QLabel(TCPStreamDialog);
        streamNumberLabel->setObjectName("streamNumberLabel");

        horizontalLayout->addWidget(streamNumberLabel);

        streamNumberSpinBox = new QSpinBox(TCPStreamDialog);
        streamNumberSpinBox->setObjectName("streamNumberSpinBox");

        horizontalLayout->addWidget(streamNumberSpinBox);

        otherDirectionButton = new QPushButton(TCPStreamDialog);
        otherDirectionButton->setObjectName("otherDirectionButton");

        horizontalLayout->addWidget(otherDirectionButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        mouseLabel = new QLabel(TCPStreamDialog);
        mouseLabel->setObjectName("mouseLabel");

        horizontalLayout_2->addWidget(mouseLabel);

        dragRadioButton = new QRadioButton(TCPStreamDialog);
        mouseButtonGroup = new QButtonGroup(TCPStreamDialog);
        mouseButtonGroup->setObjectName("mouseButtonGroup");
        mouseButtonGroup->addButton(dragRadioButton);
        dragRadioButton->setObjectName("dragRadioButton");
        dragRadioButton->setFocusPolicy(Qt::TabFocus);
        dragRadioButton->setCheckable(true);

        horizontalLayout_2->addWidget(dragRadioButton);

        zoomRadioButton = new QRadioButton(TCPStreamDialog);
        mouseButtonGroup->addButton(zoomRadioButton);
        zoomRadioButton->setObjectName("zoomRadioButton");
        zoomRadioButton->setFocusPolicy(Qt::TabFocus);
        zoomRadioButton->setCheckable(true);

        horizontalLayout_2->addWidget(zoomRadioButton);

        horizontalSpacer_2a = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2a);

        bySeqNumberCheckBox = new QCheckBox(TCPStreamDialog);
        bySeqNumberCheckBox->setObjectName("bySeqNumberCheckBox");
        bySeqNumberCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(bySeqNumberCheckBox);

        showSegLengthCheckBox = new QCheckBox(TCPStreamDialog);
        showSegLengthCheckBox->setObjectName("showSegLengthCheckBox");
        showSegLengthCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(showSegLengthCheckBox);

        showThroughputCheckBox = new QCheckBox(TCPStreamDialog);
        showThroughputCheckBox->setObjectName("showThroughputCheckBox");
        showThroughputCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(showThroughputCheckBox);

        showGoodputCheckBox = new QCheckBox(TCPStreamDialog);
        showGoodputCheckBox->setObjectName("showGoodputCheckBox");
        showGoodputCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(showGoodputCheckBox);

        showRcvWinCheckBox = new QCheckBox(TCPStreamDialog);
        showRcvWinCheckBox->setObjectName("showRcvWinCheckBox");
        showRcvWinCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(showRcvWinCheckBox);

        showBytesOutCheckBox = new QCheckBox(TCPStreamDialog);
        showBytesOutCheckBox->setObjectName("showBytesOutCheckBox");
        showBytesOutCheckBox->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(showBytesOutCheckBox);

        horizontalSpacer_2b = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2b);

        resetButton = new QPushButton(TCPStreamDialog);
        resetButton->setObjectName("resetButton");

        horizontalLayout_2->addWidget(resetButton);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(TCPStreamDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TCPStreamDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TCPStreamDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TCPStreamDialog);
    } // setupUi

    void retranslateUi(QDialog *TCPStreamDialog)
    {
        TCPStreamDialog->setWindowTitle(QCoreApplication::translate("TCPStreamDialog", "Dialog", nullptr));
        actionReset->setText(QCoreApplication::translate("TCPStreamDialog", "Reset Graph", nullptr));
#if QT_CONFIG(tooltip)
        actionReset->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Reset the graph to its initial state.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionReset->setShortcut(QCoreApplication::translate("TCPStreamDialog", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomIn->setText(QCoreApplication::translate("TCPStreamDialog", "Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QCoreApplication::translate("TCPStreamDialog", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("TCPStreamDialog", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QCoreApplication::translate("TCPStreamDialog", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp10->setText(QCoreApplication::translate("TCPStreamDialog", "Move Up 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveUp10->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Move Up 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveUp10->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft10->setText(QCoreApplication::translate("TCPStreamDialog", "Move Left 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft10->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Move Left 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveLeft10->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveRight10->setText(QCoreApplication::translate("TCPStreamDialog", "Move Right 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight10->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Move Right 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveRight10->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown10->setText(QCoreApplication::translate("TCPStreamDialog", "Move Down 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveDown10->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Move Down 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveDown10->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp1->setText(QCoreApplication::translate("TCPStreamDialog", "Move Up 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveUp1->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Move Up 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveUp1->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Shift+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft1->setText(QCoreApplication::translate("TCPStreamDialog", "Move Left 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft1->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Move Left 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveLeft1->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Shift+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveRight1->setText(QCoreApplication::translate("TCPStreamDialog", "Move Right 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight1->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Move Right 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveRight1->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Shift+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown1->setText(QCoreApplication::translate("TCPStreamDialog", "Move Down 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveDown1->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Move Down 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveDown1->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Shift+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNextStream->setText(QCoreApplication::translate("TCPStreamDialog", "Next Stream", nullptr));
#if QT_CONFIG(tooltip)
        actionNextStream->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Go to the next stream in the capture", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNextStream->setShortcut(QCoreApplication::translate("TCPStreamDialog", "PgUp", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreviousStream->setText(QCoreApplication::translate("TCPStreamDialog", "Previous Stream", nullptr));
#if QT_CONFIG(tooltip)
        actionPreviousStream->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Go to the previous stream in the capture", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPreviousStream->setShortcut(QCoreApplication::translate("TCPStreamDialog", "PgDown", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSwitchDirection->setText(QCoreApplication::translate("TCPStreamDialog", "Switch Direction", nullptr));
#if QT_CONFIG(tooltip)
        actionSwitchDirection->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Switch direction (swap TCP endpoints)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSwitchDirection->setShortcut(QCoreApplication::translate("TCPStreamDialog", "D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoToPacket->setText(QCoreApplication::translate("TCPStreamDialog", "Go To Packet Under Cursor", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPacket->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Go to packet currently under the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoToPacket->setShortcut(QCoreApplication::translate("TCPStreamDialog", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDragZoom->setText(QCoreApplication::translate("TCPStreamDialog", "Drag / Zoom", nullptr));
#if QT_CONFIG(tooltip)
        actionDragZoom->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Toggle mouse drag / zoom behavior", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDragZoom->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleSequenceNumbers->setText(QCoreApplication::translate("TCPStreamDialog", "Relative / Absolute Sequence Numbers", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleSequenceNumbers->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Toggle relative / absolute sequence numbers", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleSequenceNumbers->setShortcut(QCoreApplication::translate("TCPStreamDialog", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleTimeOrigin->setText(QCoreApplication::translate("TCPStreamDialog", "Capture / Session Time Origin", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleTimeOrigin->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Toggle capture / session time origin", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleTimeOrigin->setShortcut(QCoreApplication::translate("TCPStreamDialog", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCrosshairs->setText(QCoreApplication::translate("TCPStreamDialog", "Crosshairs", nullptr));
#if QT_CONFIG(tooltip)
        actionCrosshairs->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Toggle crosshairs", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCrosshairs->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRoundTripTime->setText(QCoreApplication::translate("TCPStreamDialog", "Round Trip Time", nullptr));
#if QT_CONFIG(tooltip)
        actionRoundTripTime->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Switch to the Round Trip Time graph", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRoundTripTime->setShortcut(QCoreApplication::translate("TCPStreamDialog", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionThroughput->setText(QCoreApplication::translate("TCPStreamDialog", "Throughput", nullptr));
#if QT_CONFIG(tooltip)
        actionThroughput->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Switch to the Throughput graph", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionThroughput->setShortcut(QCoreApplication::translate("TCPStreamDialog", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStevens->setText(QCoreApplication::translate("TCPStreamDialog", "Time / Sequence (Stevens)", nullptr));
#if QT_CONFIG(tooltip)
        actionStevens->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Switch to the Stevens-style Time / Sequence graph", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionStevens->setShortcut(QCoreApplication::translate("TCPStreamDialog", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWindowScaling->setText(QCoreApplication::translate("TCPStreamDialog", "Window Scaling", nullptr));
#if QT_CONFIG(tooltip)
        actionWindowScaling->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Switch to the Window Scaling graph", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionWindowScaling->setShortcut(QCoreApplication::translate("TCPStreamDialog", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTcptrace->setText(QCoreApplication::translate("TCPStreamDialog", "Time / Sequence (tcptrace)", nullptr));
#if QT_CONFIG(tooltip)
        actionTcptrace->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Switch to the tcptrace-style Time / Sequence graph", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionTcptrace->setShortcut(QCoreApplication::translate("TCPStreamDialog", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomInX->setText(QCoreApplication::translate("TCPStreamDialog", "Zoom In X Axis", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomInX->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Zoom In X Axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomInX->setShortcut(QCoreApplication::translate("TCPStreamDialog", "X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOutX->setText(QCoreApplication::translate("TCPStreamDialog", "Zoom Out X Axis", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOutX->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Zoom Out X Axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOutX->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Shift+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomInY->setText(QCoreApplication::translate("TCPStreamDialog", "Zoom In Y Axis", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomInY->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Zoom In Y Axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomInY->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOutY->setText(QCoreApplication::translate("TCPStreamDialog", "Zoom Out Y Axis", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOutY->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Zoom Out Y Axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOutY->setShortcut(QCoreApplication::translate("TCPStreamDialog", "Shift+Y", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        hintLabel->setToolTip(QCoreApplication::translate("TCPStreamDialog", "<html><head/><body>\n"
"\n"
"<h3>Valuable and amazing time-saving keyboard shortcuts</h3>\n"
"<table><tbody>\n"
"\n"
"<tr><th>+</th><td>Zoom in</td></th>\n"
"<tr><th>-</th><td>Zoom out</td></th>\n"
"<tr><th>x</th><td>Zoom in X axis</td></th>\n"
"<tr><th>X</th><td>Zoom out X axis</td></th>\n"
"<tr><th>y</th><td>Zoom in Y axis</td></th>\n"
"<tr><th>Y</th><td>Zoom out Y axis</td></th>\n"
"<tr><th>0</th><td>Reset graph to its initial state</td></th>\n"
"\n"
"<tr><th>\342\206\222</th><td>Move right 10 pixels</td></th>\n"
"<tr><th>\342\206\220</th><td>Move left 10 pixels</td></th>\n"
"<tr><th>\342\206\221</th><td>Move up 10 pixels</td></th>\n"
"<tr><th>\342\206\223</th><td>Move down 10 pixels</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\222</th><td>Move right 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\220</th><td>Move left 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\221</th><td>Move up 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\223</th><td>Move down 1 pixel</td></th>\n"
"\n"
"<tr><th><i>Pg U"
                        "p</i></th><td>Next stream</td></th>\n"
"<tr><th><i>Pg Dn</i></th><td>Previous stream</td></th>\n"
"<tr><th>d</th><td>Switch direction (swap TCP endpoints)</td></th>\n"
"<tr><th>g</th><td>Go to packet under cursor</td></th>\n"
"\n"
"<tr><th>z</th><td>Toggle mouse drag / zoom</td></th>\n"
"<tr><th>s</th><td>Toggle relative / absolute sequence numbers</td></th>\n"
"<tr><th>t</th><td>Toggle capture / session time origin</td></th>\n"
"<tr><th>Space</th><td>Toggle crosshairs</td></th>\n"
"\n"
"<tr><th>1</th><td>Round Trip Time graph</td></th>\n"
"<tr><th>2</th><td>Throughput graph</td></th>\n"
"<tr><th>3</th><td>Stevens-style Time / Sequence graph</td></th>\n"
"<tr><th>4</th><td>tcptrace-style Time / Sequence graph</td></th>\n"
"<tr><th>5</th><td>Window Scaling graph</td></th>\n"
"\n"
"</tbody></table>\n"
"</body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        hintLabel->setText(QCoreApplication::translate("TCPStreamDialog", "<small><i>Mouse over for shortcuts</i></small>", nullptr));
        label->setText(QCoreApplication::translate("TCPStreamDialog", "Type", nullptr));
        maWindowSizeLabel->setText(QCoreApplication::translate("TCPStreamDialog", "MA Window (s)", nullptr));
#if QT_CONFIG(tooltip)
        selectSACKsCheckBox->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Allow SACK segments as well as data packets to be selected by clicking on the graph", nullptr));
#endif // QT_CONFIG(tooltip)
        selectSACKsCheckBox->setText(QCoreApplication::translate("TCPStreamDialog", "Select SACKs", nullptr));
        streamNumberLabel->setText(QCoreApplication::translate("TCPStreamDialog", "Stream", nullptr));
#if QT_CONFIG(tooltip)
        otherDirectionButton->setToolTip(QCoreApplication::translate("TCPStreamDialog", "<html><head/><body><p>Switch the direction of the connection (view the opposite flow).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        otherDirectionButton->setText(QCoreApplication::translate("TCPStreamDialog", "Switch Direction", nullptr));
        mouseLabel->setText(QCoreApplication::translate("TCPStreamDialog", "Mouse", nullptr));
#if QT_CONFIG(tooltip)
        dragRadioButton->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Drag using the mouse button.", nullptr));
#endif // QT_CONFIG(tooltip)
        dragRadioButton->setText(QCoreApplication::translate("TCPStreamDialog", "drags", nullptr));
#if QT_CONFIG(tooltip)
        zoomRadioButton->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Select using the mouse button.", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomRadioButton->setText(QCoreApplication::translate("TCPStreamDialog", "zooms", nullptr));
#if QT_CONFIG(tooltip)
        bySeqNumberCheckBox->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Display Round Trip Time vs Sequence Number", nullptr));
#endif // QT_CONFIG(tooltip)
        bySeqNumberCheckBox->setText(QCoreApplication::translate("TCPStreamDialog", "RTT By Sequence Number", nullptr));
#if QT_CONFIG(tooltip)
        showSegLengthCheckBox->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Display graph of Segment Length vs Time", nullptr));
#endif // QT_CONFIG(tooltip)
        showSegLengthCheckBox->setText(QCoreApplication::translate("TCPStreamDialog", "Segment Length", nullptr));
#if QT_CONFIG(tooltip)
        showThroughputCheckBox->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Display graph of Mean Transmitted Bytes vs Time", nullptr));
#endif // QT_CONFIG(tooltip)
        showThroughputCheckBox->setText(QCoreApplication::translate("TCPStreamDialog", "Throughput", nullptr));
#if QT_CONFIG(tooltip)
        showGoodputCheckBox->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Display graph of Mean ACKed Bytes vs Time", nullptr));
#endif // QT_CONFIG(tooltip)
        showGoodputCheckBox->setText(QCoreApplication::translate("TCPStreamDialog", "Goodput", nullptr));
#if QT_CONFIG(tooltip)
        showRcvWinCheckBox->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Display graph of Receive Window Size vs Time", nullptr));
#endif // QT_CONFIG(tooltip)
        showRcvWinCheckBox->setText(QCoreApplication::translate("TCPStreamDialog", "Rcv Win", nullptr));
#if QT_CONFIG(tooltip)
        showBytesOutCheckBox->setToolTip(QCoreApplication::translate("TCPStreamDialog", "Display graph of Outstanding Bytes vs Time", nullptr));
#endif // QT_CONFIG(tooltip)
        showBytesOutCheckBox->setText(QCoreApplication::translate("TCPStreamDialog", "Bytes Out", nullptr));
#if QT_CONFIG(tooltip)
        resetButton->setToolTip(QCoreApplication::translate("TCPStreamDialog", "<html><head/><body><p>Reset the graph to its initial state.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        resetButton->setText(QCoreApplication::translate("TCPStreamDialog", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TCPStreamDialog: public Ui_TCPStreamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCP_STREAM_DIALOG_H
