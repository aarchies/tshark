/********************************************************************************
** Form generated from reading UI file 'coloring_rules_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORING_RULES_DIALOG_H
#define UI_COLORING_RULES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"
#include "widgets/stock_icon_tool_button.h"
#include "widgets/tabnav_tree_view.h"

QT_BEGIN_NAMESPACE

class Ui_ColoringRulesDialog
{
public:
    QVBoxLayout *verticalLayout;
    TabnavTreeView *coloringRulesTreeView;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    StockIconToolButton *newToolButton;
    StockIconToolButton *deleteToolButton;
    StockIconToolButton *copyToolButton;
    StockIconToolButton *clearToolButton;
    QPushButton *fGPushButton;
    QPushButton *bGPushButton;
    QPushButton *displayFilterPushButton;
    QSpacerItem *horizontalSpacer;
    ElidedLabel *pathLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColoringRulesDialog)
    {
        if (ColoringRulesDialog->objectName().isEmpty())
            ColoringRulesDialog->setObjectName("ColoringRulesDialog");
        ColoringRulesDialog->resize(650, 480);
        verticalLayout = new QVBoxLayout(ColoringRulesDialog);
        verticalLayout->setObjectName("verticalLayout");
        coloringRulesTreeView = new TabnavTreeView(ColoringRulesDialog);
        coloringRulesTreeView->setObjectName("coloringRulesTreeView");
        coloringRulesTreeView->setDragEnabled(true);
        coloringRulesTreeView->setDragDropMode(QAbstractItemView::InternalMove);
        coloringRulesTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        coloringRulesTreeView->setTextElideMode(Qt::ElideMiddle);
        coloringRulesTreeView->setRootIsDecorated(false);
        coloringRulesTreeView->setUniformRowHeights(true);
        coloringRulesTreeView->setItemsExpandable(false);
        coloringRulesTreeView->setExpandsOnDoubleClick(false);
        coloringRulesTreeView->setProperty("DropIndicatorShown", QVariant(true));

        verticalLayout->addWidget(coloringRulesTreeView);

        hintLabel = new QLabel(ColoringRulesDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        newToolButton = new StockIconToolButton(ColoringRulesDialog);
        newToolButton->setObjectName("newToolButton");

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new StockIconToolButton(ColoringRulesDialog);
        deleteToolButton->setObjectName("deleteToolButton");
        deleteToolButton->setEnabled(false);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new StockIconToolButton(ColoringRulesDialog);
        copyToolButton->setObjectName("copyToolButton");
        copyToolButton->setEnabled(false);

        horizontalLayout->addWidget(copyToolButton);

        clearToolButton = new StockIconToolButton(ColoringRulesDialog);
        clearToolButton->setObjectName("clearToolButton");
        clearToolButton->setEnabled(false);

        horizontalLayout->addWidget(clearToolButton);

        fGPushButton = new QPushButton(ColoringRulesDialog);
        fGPushButton->setObjectName("fGPushButton");
        fGPushButton->setVisible(false);
        fGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        fGPushButton->setAutoDefault(false);
        fGPushButton->setFlat(true);

        horizontalLayout->addWidget(fGPushButton);

        bGPushButton = new QPushButton(ColoringRulesDialog);
        bGPushButton->setObjectName("bGPushButton");
        bGPushButton->setVisible(false);
        bGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        bGPushButton->setAutoDefault(false);
        bGPushButton->setFlat(true);

        horizontalLayout->addWidget(bGPushButton);

        displayFilterPushButton = new QPushButton(ColoringRulesDialog);
        displayFilterPushButton->setObjectName("displayFilterPushButton");
        displayFilterPushButton->setVisible(false);
        displayFilterPushButton->setAutoDefault(false);

        horizontalLayout->addWidget(displayFilterPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pathLabel = new ElidedLabel(ColoringRulesDialog);
        pathLabel->setObjectName("pathLabel");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pathLabel->sizePolicy().hasHeightForWidth());
        pathLabel->setSizePolicy(sizePolicy);
        pathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pathLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(pathLabel);

        horizontalLayout->setStretch(8, 1);

        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(ColoringRulesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ColoringRulesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ColoringRulesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ColoringRulesDialog);
    } // setupUi

    void retranslateUi(QDialog *ColoringRulesDialog)
    {
        ColoringRulesDialog->setWindowTitle(QCoreApplication::translate("ColoringRulesDialog", "Dialog", nullptr));
        hintLabel->setText(QCoreApplication::translate("ColoringRulesDialog", "<small><i>A hint.</i></small>", nullptr));
#if QT_CONFIG(tooltip)
        newToolButton->setToolTip(QCoreApplication::translate("ColoringRulesDialog", "Add a new coloring rule.", nullptr));
#endif // QT_CONFIG(tooltip)
        newToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        deleteToolButton->setToolTip(QCoreApplication::translate("ColoringRulesDialog", "Delete this coloring rule.", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        copyToolButton->setToolTip(QCoreApplication::translate("ColoringRulesDialog", "Duplicate this coloring rule.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        clearToolButton->setToolTip(QCoreApplication::translate("ColoringRulesDialog", "Clear all coloring rules.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        fGPushButton->setToolTip(QCoreApplication::translate("ColoringRulesDialog", "Set the foreground color for this rule.", nullptr));
#endif // QT_CONFIG(tooltip)
        fGPushButton->setText(QCoreApplication::translate("ColoringRulesDialog", "Foreground", nullptr));
#if QT_CONFIG(tooltip)
        bGPushButton->setToolTip(QCoreApplication::translate("ColoringRulesDialog", "Set the background color for this rule.", nullptr));
#endif // QT_CONFIG(tooltip)
        bGPushButton->setText(QCoreApplication::translate("ColoringRulesDialog", "Background", nullptr));
#if QT_CONFIG(tooltip)
        displayFilterPushButton->setToolTip(QCoreApplication::translate("ColoringRulesDialog", "Set the display filter using this rule.", nullptr));
#endif // QT_CONFIG(tooltip)
        displayFilterPushButton->setText(QCoreApplication::translate("ColoringRulesDialog", "Apply as filter", nullptr));
        pathLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ColoringRulesDialog: public Ui_ColoringRulesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORING_RULES_DIALOG_H
