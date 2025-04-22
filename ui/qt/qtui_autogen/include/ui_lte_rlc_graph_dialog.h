/********************************************************************************
** Form generated from reading UI file 'lte_rlc_graph_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LTE_RLC_GRAPH_DIALOG_H
#define UI_LTE_RLC_GRAPH_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_LteRlcGraphDialog
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
    QAction *actionDragZoom;
    QAction *actionCrosshairs;
    QAction *actionMoveUp100;
    QAction *actionMoveDown100;
    QAction *actionGoToPacket;
    QAction *actionZoomInX;
    QAction *actionZoomOutY;
    QAction *actionZoomInY;
    QAction *actionZoomOutX;
    QAction *actionSwitchDirection;
    QVBoxLayout *verticalLayout;
    QCustomPlot *rlcPlot;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mouseLabel;
    QRadioButton *dragRadioButton;
    QRadioButton *zoomRadioButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetButton;
    QPushButton *otherDirectionButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LteRlcGraphDialog)
    {
        if (LteRlcGraphDialog->objectName().isEmpty())
            LteRlcGraphDialog->setObjectName("LteRlcGraphDialog");
        LteRlcGraphDialog->resize(660, 447);
        actionReset = new QAction(LteRlcGraphDialog);
        actionReset->setObjectName("actionReset");
        actionZoomIn = new QAction(LteRlcGraphDialog);
        actionZoomIn->setObjectName("actionZoomIn");
        actionZoomOut = new QAction(LteRlcGraphDialog);
        actionZoomOut->setObjectName("actionZoomOut");
        actionMoveUp10 = new QAction(LteRlcGraphDialog);
        actionMoveUp10->setObjectName("actionMoveUp10");
        actionMoveLeft10 = new QAction(LteRlcGraphDialog);
        actionMoveLeft10->setObjectName("actionMoveLeft10");
        actionMoveRight10 = new QAction(LteRlcGraphDialog);
        actionMoveRight10->setObjectName("actionMoveRight10");
        actionMoveDown10 = new QAction(LteRlcGraphDialog);
        actionMoveDown10->setObjectName("actionMoveDown10");
        actionMoveUp1 = new QAction(LteRlcGraphDialog);
        actionMoveUp1->setObjectName("actionMoveUp1");
        actionMoveLeft1 = new QAction(LteRlcGraphDialog);
        actionMoveLeft1->setObjectName("actionMoveLeft1");
        actionMoveRight1 = new QAction(LteRlcGraphDialog);
        actionMoveRight1->setObjectName("actionMoveRight1");
        actionMoveDown1 = new QAction(LteRlcGraphDialog);
        actionMoveDown1->setObjectName("actionMoveDown1");
        actionDragZoom = new QAction(LteRlcGraphDialog);
        actionDragZoom->setObjectName("actionDragZoom");
        actionCrosshairs = new QAction(LteRlcGraphDialog);
        actionCrosshairs->setObjectName("actionCrosshairs");
        actionMoveUp100 = new QAction(LteRlcGraphDialog);
        actionMoveUp100->setObjectName("actionMoveUp100");
        actionMoveDown100 = new QAction(LteRlcGraphDialog);
        actionMoveDown100->setObjectName("actionMoveDown100");
        actionGoToPacket = new QAction(LteRlcGraphDialog);
        actionGoToPacket->setObjectName("actionGoToPacket");
        actionZoomInX = new QAction(LteRlcGraphDialog);
        actionZoomInX->setObjectName("actionZoomInX");
        actionZoomOutY = new QAction(LteRlcGraphDialog);
        actionZoomOutY->setObjectName("actionZoomOutY");
        actionZoomInY = new QAction(LteRlcGraphDialog);
        actionZoomInY->setObjectName("actionZoomInY");
        actionZoomOutX = new QAction(LteRlcGraphDialog);
        actionZoomOutX->setObjectName("actionZoomOutX");
        actionSwitchDirection = new QAction(LteRlcGraphDialog);
        actionSwitchDirection->setObjectName("actionSwitchDirection");
        verticalLayout = new QVBoxLayout(LteRlcGraphDialog);
        verticalLayout->setObjectName("verticalLayout");
        rlcPlot = new QCustomPlot(LteRlcGraphDialog);
        rlcPlot->setObjectName("rlcPlot");

        verticalLayout->addWidget(rlcPlot);

        hintLabel = new QLabel(LteRlcGraphDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        mouseLabel = new QLabel(LteRlcGraphDialog);
        mouseLabel->setObjectName("mouseLabel");

        horizontalLayout_2->addWidget(mouseLabel);

        dragRadioButton = new QRadioButton(LteRlcGraphDialog);
        dragRadioButton->setObjectName("dragRadioButton");
        dragRadioButton->setCheckable(true);

        horizontalLayout_2->addWidget(dragRadioButton);

        zoomRadioButton = new QRadioButton(LteRlcGraphDialog);
        zoomRadioButton->setObjectName("zoomRadioButton");
        zoomRadioButton->setCheckable(true);

        horizontalLayout_2->addWidget(zoomRadioButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        resetButton = new QPushButton(LteRlcGraphDialog);
        resetButton->setObjectName("resetButton");

        horizontalLayout_2->addWidget(resetButton);

        otherDirectionButton = new QPushButton(LteRlcGraphDialog);
        otherDirectionButton->setObjectName("otherDirectionButton");

        horizontalLayout_2->addWidget(otherDirectionButton);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(LteRlcGraphDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        verticalLayout->setStretch(0, 1);

        retranslateUi(LteRlcGraphDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LteRlcGraphDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LteRlcGraphDialog);
    } // setupUi

    void retranslateUi(QDialog *LteRlcGraphDialog)
    {
        LteRlcGraphDialog->setWindowTitle(QCoreApplication::translate("LteRlcGraphDialog", "Dialog", nullptr));
        actionReset->setText(QCoreApplication::translate("LteRlcGraphDialog", "Reset Graph", nullptr));
#if QT_CONFIG(tooltip)
        actionReset->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Reset the graph to its initial state.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionReset->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomIn->setText(QCoreApplication::translate("LteRlcGraphDialog", "Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("LteRlcGraphDialog", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp10->setText(QCoreApplication::translate("LteRlcGraphDialog", "Move Up 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveUp10->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Move Up 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveUp10->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft10->setText(QCoreApplication::translate("LteRlcGraphDialog", "Move Left 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft10->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Move Left 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveLeft10->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveRight10->setText(QCoreApplication::translate("LteRlcGraphDialog", "Move Right 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight10->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Move Right 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveRight10->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown10->setText(QCoreApplication::translate("LteRlcGraphDialog", "Move Down 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveDown10->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Move Down 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveDown10->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp1->setText(QCoreApplication::translate("LteRlcGraphDialog", "Move Up 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveUp1->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Move Up 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveUp1->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Shift+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft1->setText(QCoreApplication::translate("LteRlcGraphDialog", "Move Left 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft1->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Move Left 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveLeft1->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Shift+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveRight1->setText(QCoreApplication::translate("LteRlcGraphDialog", "Move Right 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight1->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Move Right 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveRight1->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Shift+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown1->setText(QCoreApplication::translate("LteRlcGraphDialog", "Move Down 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveDown1->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Move down 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveDown1->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Shift+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDragZoom->setText(QCoreApplication::translate("LteRlcGraphDialog", "Drag / Zoom", nullptr));
#if QT_CONFIG(tooltip)
        actionDragZoom->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Toggle mouse drag / zoom behavior", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDragZoom->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCrosshairs->setText(QCoreApplication::translate("LteRlcGraphDialog", "Crosshairs", nullptr));
#if QT_CONFIG(tooltip)
        actionCrosshairs->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Toggle crosshairs", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCrosshairs->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp100->setText(QCoreApplication::translate("LteRlcGraphDialog", "Move Up 100 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveUp100->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Move Up 100 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveUp100->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "PgUp", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown100->setText(QCoreApplication::translate("LteRlcGraphDialog", "Move Up 100 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveDown100->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Move Up 100 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveDown100->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "PgDown", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoToPacket->setText(QCoreApplication::translate("LteRlcGraphDialog", "Go To Packet Under Cursor", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPacket->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Go to packet currently under the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoToPacket->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomInX->setText(QCoreApplication::translate("LteRlcGraphDialog", "Zoom In X Axis", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomInX->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Zoom In X Axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomInX->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOutY->setText(QCoreApplication::translate("LteRlcGraphDialog", "Zoom Out Y Axis", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOutY->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Zoom Out Y Axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOutY->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Shift+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomInY->setText(QCoreApplication::translate("LteRlcGraphDialog", "Zoom In Y Axis", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomInY->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Zoom In Y Axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomInY->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOutX->setText(QCoreApplication::translate("LteRlcGraphDialog", "Zoom Out X Axis", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOutX->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Zoom Out X Axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOutX->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "Shift+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSwitchDirection->setText(QCoreApplication::translate("LteRlcGraphDialog", "Switch Direction", nullptr));
#if QT_CONFIG(tooltip)
        actionSwitchDirection->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Switch direction (swap between UL and DL)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSwitchDirection->setShortcut(QCoreApplication::translate("LteRlcGraphDialog", "D", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        hintLabel->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "<html><head/><body>\n"
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
"\n"
"<tr><th>z</th><td>Toggle mouse drag / zoom</td></th>\n"
"<tr><th>t</th><td>Toggle capture / session time origin</td></th>\n"
"<tr><th>Space</t"
                        "h><td>Toggle crosshairs</td></th>\n"
"\n"
"</tbody></table>\n"
"</body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        hintLabel->setText(QString());
        mouseLabel->setText(QCoreApplication::translate("LteRlcGraphDialog", "Mouse", nullptr));
#if QT_CONFIG(tooltip)
        dragRadioButton->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Drag using the mouse button.", nullptr));
#endif // QT_CONFIG(tooltip)
        dragRadioButton->setText(QCoreApplication::translate("LteRlcGraphDialog", "drags", nullptr));
#if QT_CONFIG(tooltip)
        zoomRadioButton->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "Select using the mouse button.", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomRadioButton->setText(QCoreApplication::translate("LteRlcGraphDialog", "zooms", nullptr));
#if QT_CONFIG(tooltip)
        resetButton->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "<html><head/><body><p>Reset the graph to its initial state.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        resetButton->setText(QCoreApplication::translate("LteRlcGraphDialog", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        otherDirectionButton->setToolTip(QCoreApplication::translate("LteRlcGraphDialog", "<html><head/><body><p>Switch the direction of the connection (view the opposite flow).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        otherDirectionButton->setText(QCoreApplication::translate("LteRlcGraphDialog", "Switch Direction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LteRlcGraphDialog: public Ui_LteRlcGraphDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LTE_RLC_GRAPH_DIALOG_H
