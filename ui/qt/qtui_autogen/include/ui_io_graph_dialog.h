/********************************************************************************
** Form generated from reading UI file 'io_graph_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IO_GRAPH_DIALOG_H
#define UI_IO_GRAPH_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/elided_label.h"
#include "widgets/qcp_string_legend_item.h"
#include "widgets/qcustomplot.h"
#include "widgets/resize_header_view.h"
#include "widgets/rowmove_tree_view.h"
#include "widgets/stock_icon_tool_button.h"

QT_BEGIN_NAMESPACE

class Ui_IOGraphDialog
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
    QAction *actionGoToPacket;
    QAction *actionDragZoom;
    QAction *actionToggleTimeOrigin;
    QAction *actionTimeOfDay;
    QAction *actionLogScale;
    QAction *actionCrosshairs;
    QAction *actionLegend;
    QAction *actionZoomInX;
    QAction *actionZoomOutX;
    QAction *actionZoomInY;
    QAction *actionZoomOutY;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCustomPlot *ioPlot;
    ElidedLabel *hintLabel;
    RowMoveTreeView *graphUat;
    QHBoxLayout *horizontalLayout;
    StockIconToolButton *newToolButton;
    StockIconToolButton *deleteToolButton;
    StockIconToolButton *copyToolButton;
    StockIconToolButton *moveUpwardsToolButton;
    StockIconToolButton *moveDownwardsToolButton;
    StockIconToolButton *clearToolButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *mouseLabel;
    QRadioButton *dragRadioButton;
    QRadioButton *zoomRadioButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QComboBox *intervalComboBox;
    QSpacerItem *horizontalSpacer_1;
    QCheckBox *automaticUpdateCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IOGraphDialog)
    {
        if (IOGraphDialog->objectName().isEmpty())
            IOGraphDialog->setObjectName("IOGraphDialog");
        IOGraphDialog->resize(850, 640);
        actionReset = new QAction(IOGraphDialog);
        actionReset->setObjectName("actionReset");
        actionZoomIn = new QAction(IOGraphDialog);
        actionZoomIn->setObjectName("actionZoomIn");
        actionZoomOut = new QAction(IOGraphDialog);
        actionZoomOut->setObjectName("actionZoomOut");
        actionMoveUp10 = new QAction(IOGraphDialog);
        actionMoveUp10->setObjectName("actionMoveUp10");
        actionMoveLeft10 = new QAction(IOGraphDialog);
        actionMoveLeft10->setObjectName("actionMoveLeft10");
        actionMoveRight10 = new QAction(IOGraphDialog);
        actionMoveRight10->setObjectName("actionMoveRight10");
        actionMoveDown10 = new QAction(IOGraphDialog);
        actionMoveDown10->setObjectName("actionMoveDown10");
        actionMoveUp1 = new QAction(IOGraphDialog);
        actionMoveUp1->setObjectName("actionMoveUp1");
        actionMoveLeft1 = new QAction(IOGraphDialog);
        actionMoveLeft1->setObjectName("actionMoveLeft1");
        actionMoveRight1 = new QAction(IOGraphDialog);
        actionMoveRight1->setObjectName("actionMoveRight1");
        actionMoveDown1 = new QAction(IOGraphDialog);
        actionMoveDown1->setObjectName("actionMoveDown1");
        actionGoToPacket = new QAction(IOGraphDialog);
        actionGoToPacket->setObjectName("actionGoToPacket");
        actionDragZoom = new QAction(IOGraphDialog);
        actionDragZoom->setObjectName("actionDragZoom");
        actionToggleTimeOrigin = new QAction(IOGraphDialog);
        actionToggleTimeOrigin->setObjectName("actionToggleTimeOrigin");
        actionTimeOfDay = new QAction(IOGraphDialog);
        actionTimeOfDay->setObjectName("actionTimeOfDay");
        actionTimeOfDay->setCheckable(true);
        actionLogScale = new QAction(IOGraphDialog);
        actionLogScale->setObjectName("actionLogScale");
        actionLogScale->setCheckable(true);
        actionCrosshairs = new QAction(IOGraphDialog);
        actionCrosshairs->setObjectName("actionCrosshairs");
        actionLegend = new QAction(IOGraphDialog);
        actionLegend->setObjectName("actionLegend");
        actionLegend->setCheckable(true);
        actionZoomInX = new QAction(IOGraphDialog);
        actionZoomInX->setObjectName("actionZoomInX");
        actionZoomOutX = new QAction(IOGraphDialog);
        actionZoomOutX->setObjectName("actionZoomOutX");
        actionZoomInY = new QAction(IOGraphDialog);
        actionZoomInY->setObjectName("actionZoomInY");
        actionZoomOutY = new QAction(IOGraphDialog);
        actionZoomOutY->setObjectName("actionZoomOutY");
        verticalLayout_2 = new QVBoxLayout(IOGraphDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        splitter = new QSplitter(IOGraphDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ioPlot = new QCustomPlot(widget);
        ioPlot->setObjectName("ioPlot");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(90);
        sizePolicy.setHeightForWidth(ioPlot->sizePolicy().hasHeightForWidth());
        ioPlot->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(ioPlot);

        hintLabel = new ElidedLabel(widget);
        hintLabel->setObjectName("hintLabel");

        verticalLayout->addWidget(hintLabel);

        splitter->addWidget(widget);
        graphUat = new RowMoveTreeView(splitter);
        graphUat->setObjectName("graphUat");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphUat->sizePolicy().hasHeightForWidth());
        graphUat->setSizePolicy(sizePolicy1);
        splitter->addWidget(graphUat);

        verticalLayout_2->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        newToolButton = new StockIconToolButton(IOGraphDialog);
        newToolButton->setObjectName("newToolButton");

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new StockIconToolButton(IOGraphDialog);
        deleteToolButton->setObjectName("deleteToolButton");

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new StockIconToolButton(IOGraphDialog);
        copyToolButton->setObjectName("copyToolButton");

        horizontalLayout->addWidget(copyToolButton);

        moveUpwardsToolButton = new StockIconToolButton(IOGraphDialog);
        moveUpwardsToolButton->setObjectName("moveUpwardsToolButton");
        moveUpwardsToolButton->setEnabled(false);

        horizontalLayout->addWidget(moveUpwardsToolButton);

        moveDownwardsToolButton = new StockIconToolButton(IOGraphDialog);
        moveDownwardsToolButton->setObjectName("moveDownwardsToolButton");
        moveDownwardsToolButton->setEnabled(false);

        horizontalLayout->addWidget(moveDownwardsToolButton);

        clearToolButton = new StockIconToolButton(IOGraphDialog);
        clearToolButton->setObjectName("clearToolButton");
        clearToolButton->setEnabled(false);

        horizontalLayout->addWidget(clearToolButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        mouseLabel = new QLabel(IOGraphDialog);
        mouseLabel->setObjectName("mouseLabel");

        horizontalLayout->addWidget(mouseLabel);

        dragRadioButton = new QRadioButton(IOGraphDialog);
        dragRadioButton->setObjectName("dragRadioButton");
        dragRadioButton->setCheckable(true);

        horizontalLayout->addWidget(dragRadioButton);

        zoomRadioButton = new QRadioButton(IOGraphDialog);
        zoomRadioButton->setObjectName("zoomRadioButton");
        zoomRadioButton->setCheckable(true);

        horizontalLayout->addWidget(zoomRadioButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_2 = new QLabel(IOGraphDialog);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        intervalComboBox = new QComboBox(IOGraphDialog);
        intervalComboBox->setObjectName("intervalComboBox");

        horizontalLayout->addWidget(intervalComboBox);

        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_1);

        automaticUpdateCheckBox = new QCheckBox(IOGraphDialog);
        automaticUpdateCheckBox->setObjectName("automaticUpdateCheckBox");

        horizontalLayout->addWidget(automaticUpdateCheckBox);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(IOGraphDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Save|QDialogButtonBox::Reset);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(IOGraphDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IOGraphDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IOGraphDialog);
    } // setupUi

    void retranslateUi(QDialog *IOGraphDialog)
    {
        IOGraphDialog->setWindowTitle(QCoreApplication::translate("IOGraphDialog", "Dialog", nullptr));
        actionReset->setText(QCoreApplication::translate("IOGraphDialog", "Reset Graph", nullptr));
#if QT_CONFIG(tooltip)
        actionReset->setToolTip(QCoreApplication::translate("IOGraphDialog", "Reset the graph to its initial state.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionReset->setShortcut(QCoreApplication::translate("IOGraphDialog", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomIn->setText(QCoreApplication::translate("IOGraphDialog", "Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("IOGraphDialog", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QCoreApplication::translate("IOGraphDialog", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("IOGraphDialog", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("IOGraphDialog", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QCoreApplication::translate("IOGraphDialog", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp10->setText(QCoreApplication::translate("IOGraphDialog", "Move Up 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveUp10->setToolTip(QCoreApplication::translate("IOGraphDialog", "Move Up 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveUp10->setShortcut(QCoreApplication::translate("IOGraphDialog", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft10->setText(QCoreApplication::translate("IOGraphDialog", "Move Left 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft10->setToolTip(QCoreApplication::translate("IOGraphDialog", "Move Left 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveLeft10->setShortcut(QCoreApplication::translate("IOGraphDialog", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveRight10->setText(QCoreApplication::translate("IOGraphDialog", "Move Right 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight10->setToolTip(QCoreApplication::translate("IOGraphDialog", "Move Right 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveRight10->setShortcut(QCoreApplication::translate("IOGraphDialog", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown10->setText(QCoreApplication::translate("IOGraphDialog", "Move Down 10 Pixels", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveDown10->setToolTip(QCoreApplication::translate("IOGraphDialog", "Move Down 10 Pixels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveDown10->setShortcut(QCoreApplication::translate("IOGraphDialog", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp1->setText(QCoreApplication::translate("IOGraphDialog", "Move Up 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveUp1->setToolTip(QCoreApplication::translate("IOGraphDialog", "Move Up 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveUp1->setShortcut(QCoreApplication::translate("IOGraphDialog", "Shift+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveLeft1->setText(QCoreApplication::translate("IOGraphDialog", "Move Left 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveLeft1->setToolTip(QCoreApplication::translate("IOGraphDialog", "Move Left 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveLeft1->setShortcut(QCoreApplication::translate("IOGraphDialog", "Shift+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveRight1->setText(QCoreApplication::translate("IOGraphDialog", "Move Right 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveRight1->setToolTip(QCoreApplication::translate("IOGraphDialog", "Move Right 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveRight1->setShortcut(QCoreApplication::translate("IOGraphDialog", "Shift+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown1->setText(QCoreApplication::translate("IOGraphDialog", "Move Down 1 Pixel", nullptr));
#if QT_CONFIG(tooltip)
        actionMoveDown1->setToolTip(QCoreApplication::translate("IOGraphDialog", "Move down 1 Pixel", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMoveDown1->setShortcut(QCoreApplication::translate("IOGraphDialog", "Shift+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoToPacket->setText(QCoreApplication::translate("IOGraphDialog", "Go To Packet Under Cursor", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPacket->setToolTip(QCoreApplication::translate("IOGraphDialog", "Go to packet currently under the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoToPacket->setShortcut(QCoreApplication::translate("IOGraphDialog", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDragZoom->setText(QCoreApplication::translate("IOGraphDialog", "Drag / Zoom", nullptr));
#if QT_CONFIG(tooltip)
        actionDragZoom->setToolTip(QCoreApplication::translate("IOGraphDialog", "Toggle mouse drag / zoom behavior", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDragZoom->setShortcut(QCoreApplication::translate("IOGraphDialog", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleTimeOrigin->setText(QCoreApplication::translate("IOGraphDialog", "Capture / Session Time Origin", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleTimeOrigin->setToolTip(QCoreApplication::translate("IOGraphDialog", "Toggle capture / session time origin", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleTimeOrigin->setShortcut(QCoreApplication::translate("IOGraphDialog", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTimeOfDay->setText(QCoreApplication::translate("IOGraphDialog", "Time of day", nullptr));
#if QT_CONFIG(tooltip)
        actionTimeOfDay->setToolTip(QCoreApplication::translate("IOGraphDialog", "Toggle X-axis between relative time and time of day", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLogScale->setText(QCoreApplication::translate("IOGraphDialog", "Log scale", nullptr));
#if QT_CONFIG(tooltip)
        actionLogScale->setToolTip(QCoreApplication::translate("IOGraphDialog", "Toggle Y-axis between logarithmic and linear scale", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCrosshairs->setText(QCoreApplication::translate("IOGraphDialog", "Crosshairs", nullptr));
#if QT_CONFIG(tooltip)
        actionCrosshairs->setToolTip(QCoreApplication::translate("IOGraphDialog", "Toggle crosshairs", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCrosshairs->setShortcut(QCoreApplication::translate("IOGraphDialog", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLegend->setText(QCoreApplication::translate("IOGraphDialog", "Legend", nullptr));
#if QT_CONFIG(tooltip)
        actionLegend->setToolTip(QCoreApplication::translate("IOGraphDialog", "Toggle legend", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomInX->setText(QCoreApplication::translate("IOGraphDialog", "Zoom In X Axis", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomInX->setToolTip(QCoreApplication::translate("IOGraphDialog", "Zoom In X Axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomInX->setShortcut(QCoreApplication::translate("IOGraphDialog", "X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOutX->setText(QCoreApplication::translate("IOGraphDialog", "Zoom Out X Axis", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOutX->setToolTip(QCoreApplication::translate("IOGraphDialog", "Zoom Out X Axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOutX->setShortcut(QCoreApplication::translate("IOGraphDialog", "Shift+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomInY->setText(QCoreApplication::translate("IOGraphDialog", "Zoom In Y Axis", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomInY->setToolTip(QCoreApplication::translate("IOGraphDialog", "Zoom In Y Axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomInY->setShortcut(QCoreApplication::translate("IOGraphDialog", "Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOutY->setText(QCoreApplication::translate("IOGraphDialog", "Zoom Out Y Axis", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOutY->setToolTip(QCoreApplication::translate("IOGraphDialog", "Zoom Out Y Axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionZoomOutY->setShortcut(QCoreApplication::translate("IOGraphDialog", "Shift+Y", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        hintLabel->setToolTip(QCoreApplication::translate("IOGraphDialog", "<html><head/><body>\n"
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
"<tr><th>g</th><"
                        "td>Go to packet under cursor</td></th>\n"
"\n"
"<tr><th>z</th><td>Toggle mouse drag / zoom</td></th>\n"
"<tr><th>t</th><td>Toggle capture / session time origin</td></th>\n"
"<tr><th>Space</th><td>Toggle crosshairs</td></th>\n"
"\n"
"</tbody></table>\n"
"</body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        hintLabel->setText(QString());
#if QT_CONFIG(tooltip)
        newToolButton->setToolTip(QCoreApplication::translate("IOGraphDialog", "Add a new graph.", nullptr));
#endif // QT_CONFIG(tooltip)
        newToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        deleteToolButton->setToolTip(QCoreApplication::translate("IOGraphDialog", "Remove the selected graph(s).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        copyToolButton->setToolTip(QCoreApplication::translate("IOGraphDialog", "Duplicate the selected graph(s).", nullptr));
#endif // QT_CONFIG(tooltip)
        copyToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        moveUpwardsToolButton->setToolTip(QCoreApplication::translate("IOGraphDialog", "Move the selected graph(s) upwards.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        moveDownwardsToolButton->setToolTip(QCoreApplication::translate("IOGraphDialog", "Move the selected graph(s) downwards.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        clearToolButton->setToolTip(QCoreApplication::translate("IOGraphDialog", "Clear all graphs.", nullptr));
#endif // QT_CONFIG(tooltip)
        mouseLabel->setText(QCoreApplication::translate("IOGraphDialog", "Mouse", nullptr));
#if QT_CONFIG(tooltip)
        dragRadioButton->setToolTip(QCoreApplication::translate("IOGraphDialog", "Drag using the mouse button.", nullptr));
#endif // QT_CONFIG(tooltip)
        dragRadioButton->setText(QCoreApplication::translate("IOGraphDialog", "drags", nullptr));
#if QT_CONFIG(tooltip)
        zoomRadioButton->setToolTip(QCoreApplication::translate("IOGraphDialog", "Select using the mouse button.", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomRadioButton->setText(QCoreApplication::translate("IOGraphDialog", "zooms", nullptr));
        label_2->setText(QCoreApplication::translate("IOGraphDialog", "Interval", nullptr));
        automaticUpdateCheckBox->setText(QCoreApplication::translate("IOGraphDialog", "Automatic update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IOGraphDialog: public Ui_IOGraphDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IO_GRAPH_DIALOG_H
