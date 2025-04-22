/********************************************************************************
** Form generated from reading UI file 'rtp_player_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTP_PLAYER_DIALOG_H
#define UI_RTP_PLAYER_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMenu>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_RtpPlayerDialog
{
public:
    QAction *actionExportButton;
    QAction *actionSaveAudioFromCursor;
    QAction *actionSaveAudioSyncStream;
    QAction *actionSaveAudioSyncFile;
    QAction *actionSavePayload;
    QAction *actionReset;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionMoveLeft10;
    QAction *actionMoveRight10;
    QAction *actionMoveLeft1;
    QAction *actionMoveRight1;
    QAction *actionGoToPacket;
    QAction *actionGoToSetupPacketPlot;
    QAction *actionGoToSetupPacketTree;
    QAction *actionAudioRoutingMute;
    QAction *actionAudioRoutingUnmute;
    QAction *actionAudioRoutingMuteInvert;
    QAction *actionAudioRoutingP;
    QAction *actionAudioRoutingL;
    QAction *actionAudioRoutingLR;
    QAction *actionAudioRoutingR;
    QAction *actionRemoveStream;
    QAction *actionSelectAll;
    QAction *actionSelectNone;
    QAction *actionSelectInvert;
    QAction *actionPlay;
    QAction *actionStop;
    QAction *actionInaudibleButton;
    QAction *actionSelectInaudible;
    QAction *actionDeselectInaudible;
    QAction *actionPrepareFilter;
    QAction *actionReadCapture;
    QMenu *menuExport;
    QMenu *menuAudioRouting;
    QMenu *menuSelect;
    QMenu *menuInaudible;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QCustomPlot *audioPlot;
    QTreeWidget *streamTreeWidget;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QToolButton *playButton;
    QToolButton *pauseButton;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *stopButton;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *skipSilenceButton;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QDoubleSpinBox *minSilenceSpinBox;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_3;
    QComboBox *outputDeviceComboBox;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_4;
    QComboBox *outputAudioRate;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_1;
    QDoubleSpinBox *jitterSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QComboBox *timingComboBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *todCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RtpPlayerDialog)
    {
        if (RtpPlayerDialog->objectName().isEmpty())
            RtpPlayerDialog->setObjectName("RtpPlayerDialog");
        RtpPlayerDialog->resize(750, 600);
        actionExportButton = new QAction(RtpPlayerDialog);
        actionExportButton->setObjectName("actionExportButton");
        actionSaveAudioFromCursor = new QAction(RtpPlayerDialog);
        actionSaveAudioFromCursor->setObjectName("actionSaveAudioFromCursor");
        actionSaveAudioSyncStream = new QAction(RtpPlayerDialog);
        actionSaveAudioSyncStream->setObjectName("actionSaveAudioSyncStream");
        actionSaveAudioSyncFile = new QAction(RtpPlayerDialog);
        actionSaveAudioSyncFile->setObjectName("actionSaveAudioSyncFile");
        actionSavePayload = new QAction(RtpPlayerDialog);
        actionSavePayload->setObjectName("actionSavePayload");
        actionReset = new QAction(RtpPlayerDialog);
        actionReset->setObjectName("actionReset");
#if QT_CONFIG(shortcut)
        actionReset->setShortcut(QString::fromUtf8("0"));
#endif // QT_CONFIG(shortcut)
        actionZoomIn = new QAction(RtpPlayerDialog);
        actionZoomIn->setObjectName("actionZoomIn");
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QString::fromUtf8("+"));
#endif // QT_CONFIG(shortcut)
        actionZoomOut = new QAction(RtpPlayerDialog);
        actionZoomOut->setObjectName("actionZoomOut");
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QString::fromUtf8("-"));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft10 = new QAction(RtpPlayerDialog);
        actionMoveLeft10->setObjectName("actionMoveLeft10");
#if QT_CONFIG(shortcut)
        actionMoveLeft10->setShortcut(QString::fromUtf8("Left"));
#endif // QT_CONFIG(shortcut)
        actionMoveRight10 = new QAction(RtpPlayerDialog);
        actionMoveRight10->setObjectName("actionMoveRight10");
#if QT_CONFIG(shortcut)
        actionMoveRight10->setShortcut(QString::fromUtf8("Right"));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft1 = new QAction(RtpPlayerDialog);
        actionMoveLeft1->setObjectName("actionMoveLeft1");
#if QT_CONFIG(shortcut)
        actionMoveLeft1->setShortcut(QString::fromUtf8("Shift+Left"));
#endif // QT_CONFIG(shortcut)
        actionMoveRight1 = new QAction(RtpPlayerDialog);
        actionMoveRight1->setObjectName("actionMoveRight1");
#if QT_CONFIG(shortcut)
        actionMoveRight1->setShortcut(QString::fromUtf8("Shift+Right"));
#endif // QT_CONFIG(shortcut)
        actionGoToPacket = new QAction(RtpPlayerDialog);
        actionGoToPacket->setObjectName("actionGoToPacket");
#if QT_CONFIG(shortcut)
        actionGoToPacket->setShortcut(QString::fromUtf8("G"));
#endif // QT_CONFIG(shortcut)
        actionGoToSetupPacketPlot = new QAction(RtpPlayerDialog);
        actionGoToSetupPacketPlot->setObjectName("actionGoToSetupPacketPlot");
#if QT_CONFIG(shortcut)
        actionGoToSetupPacketPlot->setShortcut(QString::fromUtf8("Shift+G"));
#endif // QT_CONFIG(shortcut)
        actionGoToSetupPacketTree = new QAction(RtpPlayerDialog);
        actionGoToSetupPacketTree->setObjectName("actionGoToSetupPacketTree");
#if QT_CONFIG(shortcut)
        actionGoToSetupPacketTree->setShortcut(QString::fromUtf8("Shift+G"));
#endif // QT_CONFIG(shortcut)
        actionAudioRoutingMute = new QAction(RtpPlayerDialog);
        actionAudioRoutingMute->setObjectName("actionAudioRoutingMute");
#if QT_CONFIG(shortcut)
        actionAudioRoutingMute->setShortcut(QString::fromUtf8("M"));
#endif // QT_CONFIG(shortcut)
        actionAudioRoutingUnmute = new QAction(RtpPlayerDialog);
        actionAudioRoutingUnmute->setObjectName("actionAudioRoutingUnmute");
#if QT_CONFIG(shortcut)
        actionAudioRoutingUnmute->setShortcut(QString::fromUtf8("Shift+M"));
#endif // QT_CONFIG(shortcut)
        actionAudioRoutingMuteInvert = new QAction(RtpPlayerDialog);
        actionAudioRoutingMuteInvert->setObjectName("actionAudioRoutingMuteInvert");
#if QT_CONFIG(shortcut)
        actionAudioRoutingMuteInvert->setShortcut(QString::fromUtf8("Ctrl+M"));
#endif // QT_CONFIG(shortcut)
        actionAudioRoutingP = new QAction(RtpPlayerDialog);
        actionAudioRoutingP->setObjectName("actionAudioRoutingP");
        actionAudioRoutingL = new QAction(RtpPlayerDialog);
        actionAudioRoutingL->setObjectName("actionAudioRoutingL");
        actionAudioRoutingLR = new QAction(RtpPlayerDialog);
        actionAudioRoutingLR->setObjectName("actionAudioRoutingLR");
        actionAudioRoutingR = new QAction(RtpPlayerDialog);
        actionAudioRoutingR->setObjectName("actionAudioRoutingR");
        actionRemoveStream = new QAction(RtpPlayerDialog);
        actionRemoveStream->setObjectName("actionRemoveStream");
#if QT_CONFIG(shortcut)
        actionRemoveStream->setShortcut(QString::fromUtf8("Delete"));
#endif // QT_CONFIG(shortcut)
        actionSelectAll = new QAction(RtpPlayerDialog);
        actionSelectAll->setObjectName("actionSelectAll");
#if QT_CONFIG(shortcut)
        actionSelectAll->setShortcut(QString::fromUtf8("Ctrl+A"));
#endif // QT_CONFIG(shortcut)
        actionSelectNone = new QAction(RtpPlayerDialog);
        actionSelectNone->setObjectName("actionSelectNone");
#if QT_CONFIG(shortcut)
        actionSelectNone->setShortcut(QString::fromUtf8("Ctrl+Shift+A"));
#endif // QT_CONFIG(shortcut)
        actionSelectInvert = new QAction(RtpPlayerDialog);
        actionSelectInvert->setObjectName("actionSelectInvert");
#if QT_CONFIG(shortcut)
        actionSelectInvert->setShortcut(QString::fromUtf8("Ctrl+I"));
#endif // QT_CONFIG(shortcut)
        actionPlay = new QAction(RtpPlayerDialog);
        actionPlay->setObjectName("actionPlay");
#if QT_CONFIG(shortcut)
        actionPlay->setShortcut(QString::fromUtf8("P"));
#endif // QT_CONFIG(shortcut)
        actionStop = new QAction(RtpPlayerDialog);
        actionStop->setObjectName("actionStop");
#if QT_CONFIG(shortcut)
        actionStop->setShortcut(QString::fromUtf8("S"));
#endif // QT_CONFIG(shortcut)
        actionInaudibleButton = new QAction(RtpPlayerDialog);
        actionInaudibleButton->setObjectName("actionInaudibleButton");
        actionSelectInaudible = new QAction(RtpPlayerDialog);
        actionSelectInaudible->setObjectName("actionSelectInaudible");
#if QT_CONFIG(shortcut)
        actionSelectInaudible->setShortcut(QString::fromUtf8("N"));
#endif // QT_CONFIG(shortcut)
        actionDeselectInaudible = new QAction(RtpPlayerDialog);
        actionDeselectInaudible->setObjectName("actionDeselectInaudible");
#if QT_CONFIG(shortcut)
        actionDeselectInaudible->setShortcut(QString::fromUtf8("Shift+N"));
#endif // QT_CONFIG(shortcut)
        actionPrepareFilter = new QAction(RtpPlayerDialog);
        actionPrepareFilter->setObjectName("actionPrepareFilter");
        actionReadCapture = new QAction(RtpPlayerDialog);
        actionReadCapture->setObjectName("actionReadCapture");
        menuExport = new QMenu(RtpPlayerDialog);
        menuExport->setObjectName("menuExport");
        menuExport->setToolTipsVisible(true);
        menuAudioRouting = new QMenu(RtpPlayerDialog);
        menuAudioRouting->setObjectName("menuAudioRouting");
        menuAudioRouting->setToolTipsVisible(true);
        menuSelect = new QMenu(RtpPlayerDialog);
        menuSelect->setObjectName("menuSelect");
        menuSelect->setToolTipsVisible(true);
        menuInaudible = new QMenu(RtpPlayerDialog);
        menuInaudible->setObjectName("menuInaudible");
        menuInaudible->setToolTipsVisible(true);
        verticalLayout = new QVBoxLayout(RtpPlayerDialog);
        verticalLayout->setObjectName("verticalLayout");
        splitter = new QSplitter(RtpPlayerDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        audioPlot = new QCustomPlot(splitter);
        audioPlot->setObjectName("audioPlot");
        splitter->addWidget(audioPlot);
        streamTreeWidget = new QTreeWidget(splitter);
        streamTreeWidget->setObjectName("streamTreeWidget");
        streamTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        streamTreeWidget->setRootIsDecorated(false);
        streamTreeWidget->setUniformRowHeights(true);
        streamTreeWidget->setItemsExpandable(false);
        streamTreeWidget->setSortingEnabled(true);
        streamTreeWidget->setExpandsOnDoubleClick(false);
        splitter->addWidget(streamTreeWidget);

        verticalLayout->addWidget(splitter);

        hintLabel = new QLabel(RtpPlayerDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        playButton = new QToolButton(RtpPlayerDialog);
        playButton->setObjectName("playButton");

        horizontalLayout->addWidget(playButton);

        pauseButton = new QToolButton(RtpPlayerDialog);
        pauseButton->setObjectName("pauseButton");

        horizontalLayout->addWidget(pauseButton);

        horizontalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        stopButton = new QToolButton(RtpPlayerDialog);
        stopButton->setObjectName("stopButton");

        horizontalLayout->addWidget(stopButton);

        horizontalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        skipSilenceButton = new QToolButton(RtpPlayerDialog);
        skipSilenceButton->setObjectName("skipSilenceButton");

        horizontalLayout->addWidget(skipSilenceButton);

        horizontalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        label = new QLabel(RtpPlayerDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        minSilenceSpinBox = new QDoubleSpinBox(RtpPlayerDialog);
        minSilenceSpinBox->setObjectName("minSilenceSpinBox");
        minSilenceSpinBox->setDecimals(0);
        minSilenceSpinBox->setMinimum(1.000000000000000);
        minSilenceSpinBox->setSingleStep(1.000000000000000);
        minSilenceSpinBox->setValue(2.000000000000000);

        horizontalLayout->addWidget(minSilenceSpinBox);

        horizontalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        label_3 = new QLabel(RtpPlayerDialog);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        outputDeviceComboBox = new QComboBox(RtpPlayerDialog);
        outputDeviceComboBox->setObjectName("outputDeviceComboBox");

        horizontalLayout->addWidget(outputDeviceComboBox);

        horizontalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        label_4 = new QLabel(RtpPlayerDialog);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        outputAudioRate = new QComboBox(RtpPlayerDialog);
        outputAudioRate->setObjectName("outputAudioRate");

        horizontalLayout->addWidget(outputAudioRate);

        horizontalLayout->setStretch(11, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_1 = new QLabel(RtpPlayerDialog);
        label_1->setObjectName("label_1");

        horizontalLayout_2->addWidget(label_1);

        jitterSpinBox = new QDoubleSpinBox(RtpPlayerDialog);
        jitterSpinBox->setObjectName("jitterSpinBox");
        jitterSpinBox->setDecimals(0);
        jitterSpinBox->setMaximum(2000.000000000000000);
        jitterSpinBox->setSingleStep(5.000000000000000);
        jitterSpinBox->setValue(50.000000000000000);

        horizontalLayout_2->addWidget(jitterSpinBox);

        horizontalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(RtpPlayerDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        timingComboBox = new QComboBox(RtpPlayerDialog);
        timingComboBox->addItem(QString());
        timingComboBox->addItem(QString());
        timingComboBox->addItem(QString());
        timingComboBox->setObjectName("timingComboBox");

        horizontalLayout_2->addWidget(timingComboBox);

        horizontalSpacer = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        todCheckBox = new QCheckBox(RtpPlayerDialog);
        todCheckBox->setObjectName("todCheckBox");

        horizontalLayout_2->addWidget(todCheckBox);

        horizontalSpacer_5 = new QSpacerItem(48, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalLayout_2->setStretch(7, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(RtpPlayerDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        menuExport->addAction(actionSaveAudioFromCursor);
        menuExport->addAction(actionSaveAudioSyncStream);
        menuExport->addAction(actionSaveAudioSyncFile);
        menuExport->addSeparator();
        menuExport->addAction(actionSavePayload);
        menuAudioRouting->addAction(actionAudioRoutingMute);
        menuAudioRouting->addAction(actionAudioRoutingUnmute);
        menuAudioRouting->addAction(actionAudioRoutingMuteInvert);
        menuAudioRouting->addAction(actionAudioRoutingP);
        menuAudioRouting->addAction(actionAudioRoutingL);
        menuAudioRouting->addAction(actionAudioRoutingLR);
        menuAudioRouting->addAction(actionAudioRoutingR);
        menuSelect->addAction(actionSelectAll);
        menuSelect->addAction(actionSelectNone);
        menuSelect->addAction(actionSelectInvert);
        menuInaudible->addAction(actionSelectInaudible);
        menuInaudible->addAction(actionDeselectInaudible);

        retranslateUi(RtpPlayerDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RtpPlayerDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RtpPlayerDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RtpPlayerDialog);
    } // setupUi

    void retranslateUi(QDialog *RtpPlayerDialog)
    {
        RtpPlayerDialog->setWindowTitle(QCoreApplication::translate("RtpPlayerDialog", "RTP Player", nullptr));
        actionExportButton->setText(QCoreApplication::translate("RtpPlayerDialog", "&Export", nullptr));
#if QT_CONFIG(tooltip)
        actionExportButton->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Export audio of all unmuted selected channels or export payload of one channel.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveAudioFromCursor->setText(QCoreApplication::translate("RtpPlayerDialog", "From &cursor", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAudioFromCursor->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Save audio data started at the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveAudioSyncStream->setText(QCoreApplication::translate("RtpPlayerDialog", "&Stream Synchronized Audio", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAudioSyncStream->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Save audio data synchronized to start of the earliest stream.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveAudioSyncFile->setText(QCoreApplication::translate("RtpPlayerDialog", "&File Synchronized Audio", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAudioSyncFile->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Save audio data synchronized to start of the capture file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSavePayload->setText(QCoreApplication::translate("RtpPlayerDialog", "&Payload", nullptr));
#if QT_CONFIG(tooltip)
        actionSavePayload->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Save RTP payload of selected stream.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReset->setText(QCoreApplication::translate("RtpPlayerDialog", "Reset Graph", nullptr));
#if QT_CONFIG(tooltip)
        actionReset->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Reset the graph to its initial state.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomIn->setText(QCoreApplication::translate("RtpPlayerDialog", "Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomOut->setText(QCoreApplication::translate("RtpPlayerDialog", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMoveLeft10->setText(QCoreApplication::translate("RtpPlayerDialog", "Move Left 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft10->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Move Left 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMoveRight10->setText(QCoreApplication::translate("RtpPlayerDialog", "Move Right 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight10->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Move Right 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMoveLeft1->setText(QCoreApplication::translate("RtpPlayerDialog", "Move Left 1 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft1->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Move Left 1 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMoveRight1->setText(QCoreApplication::translate("RtpPlayerDialog", "Move Right 1 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight1->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Move Right 1 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoToPacket->setText(QCoreApplication::translate("RtpPlayerDialog", "Go To Packet Under Cursor", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPacket->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Go to packet currently under the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoToSetupPacketPlot->setText(QCoreApplication::translate("RtpPlayerDialog", "Go To Setup Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToSetupPacketPlot->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Go to setup packet of stream currently under the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoToSetupPacketTree->setText(QCoreApplication::translate("RtpPlayerDialog", "Go To Setup Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToSetupPacketTree->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Go to setup packet of stream currently under the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAudioRoutingMute->setText(QCoreApplication::translate("RtpPlayerDialog", "Mute", nullptr));
#if QT_CONFIG(tooltip)
        actionAudioRoutingMute->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Mute selected streams", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAudioRoutingUnmute->setText(QCoreApplication::translate("RtpPlayerDialog", "Unmute", nullptr));
#if QT_CONFIG(tooltip)
        actionAudioRoutingUnmute->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Unmute selected streams", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAudioRoutingMuteInvert->setText(QCoreApplication::translate("RtpPlayerDialog", "Invert Muting", nullptr));
#if QT_CONFIG(tooltip)
        actionAudioRoutingMuteInvert->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Invert muting of selected streams", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAudioRoutingP->setText(QCoreApplication::translate("RtpPlayerDialog", "Play", nullptr));
#if QT_CONFIG(tooltip)
        actionAudioRoutingP->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Play the stream", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAudioRoutingL->setText(QCoreApplication::translate("RtpPlayerDialog", "To Left", nullptr));
#if QT_CONFIG(tooltip)
        actionAudioRoutingL->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Route audio to left channel of selected streams", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAudioRoutingLR->setText(QCoreApplication::translate("RtpPlayerDialog", "Left + Right", nullptr));
#if QT_CONFIG(tooltip)
        actionAudioRoutingLR->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Route audio to left and right channel of selected streams", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAudioRoutingR->setText(QCoreApplication::translate("RtpPlayerDialog", "To Right", nullptr));
#if QT_CONFIG(tooltip)
        actionAudioRoutingR->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Route audio to right channel of selected streams", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveStream->setText(QCoreApplication::translate("RtpPlayerDialog", "Remove Streams", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveStream->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Remove selected streams from the list", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectAll->setText(QCoreApplication::translate("RtpPlayerDialog", "All", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectAll->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Select all", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectNone->setText(QCoreApplication::translate("RtpPlayerDialog", "None", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectNone->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Clear selection", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectInvert->setText(QCoreApplication::translate("RtpPlayerDialog", "Invert", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectInvert->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Invert selection", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPlay->setText(QCoreApplication::translate("RtpPlayerDialog", "Play/Pause", nullptr));
#if QT_CONFIG(tooltip)
        actionPlay->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Start playing or pause playing", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStop->setText(QCoreApplication::translate("RtpPlayerDialog", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        actionStop->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Stop playing", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInaudibleButton->setText(QCoreApplication::translate("RtpPlayerDialog", "I&naudible streams", nullptr));
#if QT_CONFIG(tooltip)
        actionInaudibleButton->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Select/Deselect inaudible streams", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectInaudible->setText(QCoreApplication::translate("RtpPlayerDialog", "&Select", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectInaudible->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Select inaudible streams", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDeselectInaudible->setText(QCoreApplication::translate("RtpPlayerDialog", "&Deselect", nullptr));
#if QT_CONFIG(tooltip)
        actionDeselectInaudible->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Deselect inaudible streams", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPrepareFilter->setText(QCoreApplication::translate("RtpPlayerDialog", "Prepare &Filter", nullptr));
#if QT_CONFIG(tooltip)
        actionPrepareFilter->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Prepare a filter matching the selected stream(s).", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReadCapture->setText(QCoreApplication::translate("RtpPlayerDialog", "R&efresh streams", nullptr));
#if QT_CONFIG(tooltip)
        actionReadCapture->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Read captured packets from capture in progress to player", nullptr));
#endif // QT_CONFIG(tooltip)
        menuExport->setTitle(QCoreApplication::translate("RtpPlayerDialog", "&Export", nullptr));
        menuAudioRouting->setTitle(QCoreApplication::translate("RtpPlayerDialog", "Audio Routing", nullptr));
        menuSelect->setTitle(QCoreApplication::translate("RtpPlayerDialog", "Select", nullptr));
        menuInaudible->setTitle(QCoreApplication::translate("RtpPlayerDialog", "Inaudible streams", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = streamTreeWidget->headerItem();
        ___qtreewidgetitem->setText(11, QCoreApplication::translate("RtpPlayerDialog", "Payloads", nullptr));
        ___qtreewidgetitem->setText(10, QCoreApplication::translate("RtpPlayerDialog", "PR (Hz)", nullptr));
        ___qtreewidgetitem->setText(9, QCoreApplication::translate("RtpPlayerDialog", "SR (Hz)", nullptr));
        ___qtreewidgetitem->setText(8, QCoreApplication::translate("RtpPlayerDialog", "Time Span (s)", nullptr));
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("RtpPlayerDialog", "Packets", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("RtpPlayerDialog", "Setup Frame", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("RtpPlayerDialog", "SSRC", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("RtpPlayerDialog", "Destination Port", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("RtpPlayerDialog", "Destination Address", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("RtpPlayerDialog", "Source Port", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("RtpPlayerDialog", "Source Address", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("RtpPlayerDialog", "Play", nullptr));
#if QT_CONFIG(tooltip)
        ___qtreewidgetitem->setToolTip(10, QCoreApplication::translate("RtpPlayerDialog", "Play rate of decoded audio (depends e. g. on selected sound card)", nullptr));
        ___qtreewidgetitem->setToolTip(9, QCoreApplication::translate("RtpPlayerDialog", "Sample rate of codec", nullptr));
        ___qtreewidgetitem->setToolTip(0, QCoreApplication::translate("RtpPlayerDialog", "Double click to change audio routing", nullptr));
#endif // QT_CONFIG(tooltip)
        hintLabel->setText(QCoreApplication::translate("RtpPlayerDialog", "<small><i>No audio</i></small>", nullptr));
        playButton->setText(QString());
#if QT_CONFIG(tooltip)
        playButton->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Start playback of all unmuted streams", nullptr));
#endif // QT_CONFIG(tooltip)
        pauseButton->setText(QString());
#if QT_CONFIG(tooltip)
        pauseButton->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Pause/unpause playback", nullptr));
#endif // QT_CONFIG(tooltip)
        stopButton->setText(QString());
#if QT_CONFIG(tooltip)
        stopButton->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Stop playback", nullptr));
#endif // QT_CONFIG(tooltip)
        skipSilenceButton->setText(QString());
#if QT_CONFIG(tooltip)
        skipSilenceButton->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Enable/disable skipping of silence during playback", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("RtpPlayerDialog", "Min silence:", nullptr));
#if QT_CONFIG(tooltip)
        minSilenceSpinBox->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "Minimum silence duration to skip in seconds", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("RtpPlayerDialog", "Output Device:", nullptr));
        label_4->setText(QCoreApplication::translate("RtpPlayerDialog", "Output Audio Rate:", nullptr));
        label_1->setText(QCoreApplication::translate("RtpPlayerDialog", "Jitter Buffer:", nullptr));
#if QT_CONFIG(tooltip)
        jitterSpinBox->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "The simulated jitter buffer in milliseconds.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("RtpPlayerDialog", "Playback Timing:", nullptr));
        timingComboBox->setItemText(0, QCoreApplication::translate("RtpPlayerDialog", "Jitter Buffer", nullptr));
        timingComboBox->setItemText(1, QCoreApplication::translate("RtpPlayerDialog", "RTP Timestamp", nullptr));
        timingComboBox->setItemText(2, QCoreApplication::translate("RtpPlayerDialog", "Uninterrupted Mode", nullptr));

#if QT_CONFIG(tooltip)
        timingComboBox->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "<strong>Jitter Buffer</strong>: Use jitter buffer to simulate the RTP stream as heard by the end user.\n"
"<br/>\n"
"<strong>RTP Timestamp</strong>: Use RTP Timestamp instead of the arriving packet time. This will not reproduce the RTP stream as the user heard it, but is useful when the RTP is being tunneled and the original packet timing is missing.\n"
"<br/>\n"
"<strong>Uninterrupted Mode</strong>: Ignore the RTP Timestamp. Play the stream as it is completed. This is useful when the RTP timestamp is missing.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        todCheckBox->setToolTip(QCoreApplication::translate("RtpPlayerDialog", "<html><head/><body><p>View the timestamps as time of day (checked) or seconds since beginning of capture (unchecked).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        todCheckBox->setText(QCoreApplication::translate("RtpPlayerDialog", "Time of Day", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RtpPlayerDialog: public Ui_RtpPlayerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTP_PLAYER_DIALOG_H
