/********************************************************************************
** Form generated from reading UI file 'sequence_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEQUENCE_DIALOG_H
#define UI_SEQUENCE_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_SequenceDialog
{
public:
    QAction *actionReset;
    QAction *actionResetDiagram;
    QAction *actionExportDiagram;
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
    QAction *actionGoToPacket;
    QAction *actionFlowAny;
    QAction *actionFlowTcp;
    QAction *actionGoToNextPacket;
    QAction *actionGoToPreviousPacket;
    QAction *actionSelectRtpStreams;
    QAction *actionDeselectRtpStreams;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QCustomPlot *sequencePlot;
    QScrollBar *verticalScrollBar;
    QScrollBar *horizontalScrollBar;
    QFrame *frame;
    ElidedLabel *hintLabel;
    QFrame *controlFrame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *displayFilterCheckBox;
    QSpacerItem *horizontalSpacer;
    QLabel *flowLabel;
    QComboBox *flowComboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QComboBox *addressComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SequenceDialog)
    {
        if (SequenceDialog->objectName().isEmpty())
            SequenceDialog->setObjectName("SequenceDialog");
        SequenceDialog->resize(679, 568);
        actionReset = new QAction(SequenceDialog);
        actionReset->setObjectName("actionReset");
        actionResetDiagram = new QAction(SequenceDialog);
        actionResetDiagram->setObjectName("actionResetDiagram");
        actionExportDiagram = new QAction(SequenceDialog);
        actionExportDiagram->setObjectName("actionExportDiagram");
        actionZoomIn = new QAction(SequenceDialog);
        actionZoomIn->setObjectName("actionZoomIn");
        actionZoomOut = new QAction(SequenceDialog);
        actionZoomOut->setObjectName("actionZoomOut");
        actionMoveUp10 = new QAction(SequenceDialog);
        actionMoveUp10->setObjectName("actionMoveUp10");
        actionMoveLeft10 = new QAction(SequenceDialog);
        actionMoveLeft10->setObjectName("actionMoveLeft10");
        actionMoveRight10 = new QAction(SequenceDialog);
        actionMoveRight10->setObjectName("actionMoveRight10");
        actionMoveDown10 = new QAction(SequenceDialog);
        actionMoveDown10->setObjectName("actionMoveDown10");
        actionMoveUp1 = new QAction(SequenceDialog);
        actionMoveUp1->setObjectName("actionMoveUp1");
        actionMoveLeft1 = new QAction(SequenceDialog);
        actionMoveLeft1->setObjectName("actionMoveLeft1");
        actionMoveRight1 = new QAction(SequenceDialog);
        actionMoveRight1->setObjectName("actionMoveRight1");
        actionMoveDown1 = new QAction(SequenceDialog);
        actionMoveDown1->setObjectName("actionMoveDown1");
        actionGoToPacket = new QAction(SequenceDialog);
        actionGoToPacket->setObjectName("actionGoToPacket");
        actionFlowAny = new QAction(SequenceDialog);
        actionFlowAny->setObjectName("actionFlowAny");
        actionFlowTcp = new QAction(SequenceDialog);
        actionFlowTcp->setObjectName("actionFlowTcp");
        actionGoToNextPacket = new QAction(SequenceDialog);
        actionGoToNextPacket->setObjectName("actionGoToNextPacket");
        actionGoToPreviousPacket = new QAction(SequenceDialog);
        actionGoToPreviousPacket->setObjectName("actionGoToPreviousPacket");
        actionSelectRtpStreams = new QAction(SequenceDialog);
        actionSelectRtpStreams->setObjectName("actionSelectRtpStreams");
        actionDeselectRtpStreams = new QAction(SequenceDialog);
        actionDeselectRtpStreams->setObjectName("actionDeselectRtpStreams");
        verticalLayout_2 = new QVBoxLayout(SequenceDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        sequencePlot = new QCustomPlot(SequenceDialog);
        sequencePlot->setObjectName("sequencePlot");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(sequencePlot->sizePolicy().hasHeightForWidth());
        sequencePlot->setSizePolicy(sizePolicy);

        gridLayout->addWidget(sequencePlot, 0, 0, 1, 1);

        verticalScrollBar = new QScrollBar(SequenceDialog);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalScrollBar, 0, 1, 1, 1);

        horizontalScrollBar = new QScrollBar(SequenceDialog);
        horizontalScrollBar->setObjectName("horizontalScrollBar");
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar, 1, 0, 1, 1);

        frame = new QFrame(SequenceDialog);
        frame->setObjectName("frame");

        gridLayout->addWidget(frame, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        hintLabel = new ElidedLabel(SequenceDialog);
        hintLabel->setObjectName("hintLabel");

        verticalLayout_2->addWidget(hintLabel);

        controlFrame = new QFrame(SequenceDialog);
        controlFrame->setObjectName("controlFrame");
        controlFrame->setFrameShape(QFrame::NoFrame);
        controlFrame->setFrameShadow(QFrame::Plain);
        controlFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(controlFrame);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        displayFilterCheckBox = new QCheckBox(controlFrame);
        displayFilterCheckBox->setObjectName("displayFilterCheckBox");

        horizontalLayout_2->addWidget(displayFilterCheckBox);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        flowLabel = new QLabel(controlFrame);
        flowLabel->setObjectName("flowLabel");

        horizontalLayout_2->addWidget(flowLabel);

        flowComboBox = new QComboBox(controlFrame);
        flowComboBox->setObjectName("flowComboBox");

        horizontalLayout_2->addWidget(flowComboBox);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_3 = new QLabel(controlFrame);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        addressComboBox = new QComboBox(controlFrame);
        addressComboBox->setObjectName("addressComboBox");

        horizontalLayout_2->addWidget(addressComboBox);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(controlFrame);

        buttonBox = new QDialogButtonBox(SequenceDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout_2->addWidget(buttonBox);

        verticalLayout_2->setStretch(0, 1);

        retranslateUi(SequenceDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SequenceDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SequenceDialog);
    } // setupUi

    void retranslateUi(QDialog *SequenceDialog)
    {
        actionReset->setText(QCoreApplication::translate("SequenceDialog", "Reset &Diagram", nullptr));
#if QT_CONFIG(tooltip)
        actionReset->setToolTip(QCoreApplication::translate("SequenceDialog", "Reset the diagram to its initial state.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionReset->setShortcut(QCoreApplication::translate("SequenceDialog", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResetDiagram->setText(QCoreApplication::translate("SequenceDialog", "&Reset Diagram", nullptr));
#if QT_CONFIG(tooltip)
        actionResetDiagram->setToolTip(QCoreApplication::translate("SequenceDialog", "Reset the diagram to its initial state", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExportDiagram->setText(QCoreApplication::translate("SequenceDialog", "&Export", nullptr));
#if QT_CONFIG(tooltip)
        actionExportDiagram->setToolTip(QCoreApplication::translate("SequenceDialog", "Export diagram", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomIn->setText(QCoreApplication::translate("SequenceDialog", "Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("SequenceDialog", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QCoreApplication::translate("SequenceDialog", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("SequenceDialog", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("SequenceDialog", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QCoreApplication::translate("SequenceDialog", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp10->setText(QCoreApplication::translate("SequenceDialog", "Move Up 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveUp10->setToolTip(QCoreApplication::translate("SequenceDialog", "Move Up 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveUp10->setShortcut(QCoreApplication::translate("SequenceDialog", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft10->setText(QCoreApplication::translate("SequenceDialog", "Move Left 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft10->setToolTip(QCoreApplication::translate("SequenceDialog", "Move Left 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveLeft10->setShortcut(QCoreApplication::translate("SequenceDialog", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveRight10->setText(QCoreApplication::translate("SequenceDialog", "Move Right 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight10->setToolTip(QCoreApplication::translate("SequenceDialog", "Move Right 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveRight10->setShortcut(QCoreApplication::translate("SequenceDialog", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown10->setText(QCoreApplication::translate("SequenceDialog", "Move Down 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveDown10->setToolTip(QCoreApplication::translate("SequenceDialog", "Move Down 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveDown10->setShortcut(QCoreApplication::translate("SequenceDialog", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp1->setText(QCoreApplication::translate("SequenceDialog", "Move Up 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveUp1->setToolTip(QCoreApplication::translate("SequenceDialog", "Move Up 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveUp1->setShortcut(QCoreApplication::translate("SequenceDialog", "Shift+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft1->setText(QCoreApplication::translate("SequenceDialog", "Move Left 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft1->setToolTip(QCoreApplication::translate("SequenceDialog", "Move Left 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveLeft1->setShortcut(QCoreApplication::translate("SequenceDialog", "Shift+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveRight1->setText(QCoreApplication::translate("SequenceDialog", "Move Right 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight1->setToolTip(QCoreApplication::translate("SequenceDialog", "Move Right 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveRight1->setShortcut(QCoreApplication::translate("SequenceDialog", "Shift+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown1->setText(QCoreApplication::translate("SequenceDialog", "Move Down 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveDown1->setToolTip(QCoreApplication::translate("SequenceDialog", "Move Down 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveDown1->setShortcut(QCoreApplication::translate("SequenceDialog", "Shift+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoToPacket->setText(QCoreApplication::translate("SequenceDialog", "Go To Packet Under Cursor", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPacket->setToolTip(QCoreApplication::translate("SequenceDialog", "Go to packet currently under the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoToPacket->setShortcut(QCoreApplication::translate("SequenceDialog", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFlowAny->setText(QCoreApplication::translate("SequenceDialog", "All Flows", nullptr));
#if QT_CONFIG(tooltip)
        actionFlowAny->setToolTip(QCoreApplication::translate("SequenceDialog", "Show flows for all packets", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFlowAny->setShortcut(QCoreApplication::translate("SequenceDialog", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFlowTcp->setText(QCoreApplication::translate("SequenceDialog", "TCP Flows", nullptr));
#if QT_CONFIG(tooltip)
        actionFlowTcp->setToolTip(QCoreApplication::translate("SequenceDialog", "Show only TCP flow information", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFlowTcp->setShortcut(QCoreApplication::translate("SequenceDialog", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoToNextPacket->setText(QCoreApplication::translate("SequenceDialog", "Go To Next Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToNextPacket->setToolTip(QCoreApplication::translate("SequenceDialog", "Go to the next packet", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoToNextPacket->setShortcut(QCoreApplication::translate("SequenceDialog", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoToPreviousPacket->setText(QCoreApplication::translate("SequenceDialog", "Go To Previous Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPreviousPacket->setToolTip(QCoreApplication::translate("SequenceDialog", "Go to the previous packet", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoToPreviousPacket->setShortcut(QCoreApplication::translate("SequenceDialog", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectRtpStreams->setText(QCoreApplication::translate("SequenceDialog", "Select RTP Stream", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectRtpStreams->setToolTip(QCoreApplication::translate("SequenceDialog", "Select RTP stream in RTP Streams dialog", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSelectRtpStreams->setShortcut(QCoreApplication::translate("SequenceDialog", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDeselectRtpStreams->setText(QCoreApplication::translate("SequenceDialog", "Deselect RTP Stream", nullptr));
#if QT_CONFIG(tooltip)
        actionDeselectRtpStreams->setToolTip(QCoreApplication::translate("SequenceDialog", "Deselect RTP stream in RTP Streams dialog", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDeselectRtpStreams->setShortcut(QCoreApplication::translate("SequenceDialog", "D", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        hintLabel->setToolTip(QCoreApplication::translate("SequenceDialog", "<html><head/><body>\n"
"\n"
"<h3>Valuable and amazing time-saving keyboard shortcuts</h3>\n"
"<table><tbody>\n"
"\n"
"<tr><th>+</th><td>Zoom in</td></th>\n"
"<tr><th>-</th><td>Zoom out</td></th>\n"
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
"<tr><th>g</th><td>Go to packet under cursor</td></th>\n"
"<tr><th>n</th><td>Go to the next packet</td></th>\n"
"<tr><th>p</th><td>Go to the previous packet</td></th>\n"
"\n"
"</tbody></table>\n"
"</body></"
                        "html>", nullptr));
#endif // QT_CONFIG(tooltip)
        hintLabel->setText(QCoreApplication::translate("SequenceDialog", "<small><i>A hint</i></small>", nullptr));
#if QT_CONFIG(tooltip)
        displayFilterCheckBox->setToolTip(QCoreApplication::translate("SequenceDialog", "<html><head/><body><p>Only show flows matching the current display filter</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        displayFilterCheckBox->setText(QCoreApplication::translate("SequenceDialog", "Limit to display filter", nullptr));
        flowLabel->setText(QCoreApplication::translate("SequenceDialog", "Flow type:", nullptr));
        label_3->setText(QCoreApplication::translate("SequenceDialog", "Addresses:", nullptr));
        (void)SequenceDialog;
    } // retranslateUi

};

namespace Ui {
    class SequenceDialog: public Ui_SequenceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEQUENCE_DIALOG_H
