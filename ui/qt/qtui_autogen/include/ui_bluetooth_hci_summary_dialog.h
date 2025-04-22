/********************************************************************************
** Form generated from reading UI file 'bluetooth_hci_summary_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLUETOOTH_HCI_SUMMARY_DIALOG_H
#define UI_BLUETOOTH_HCI_SUMMARY_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "widgets/display_filter_edit.h"

QT_BEGIN_NAMESPACE

class Ui_BluetoothHciSummaryDialog
{
public:
    QAction *actionCopy_Cell;
    QAction *actionCopy_Rows;
    QAction *actionCopy_All;
    QAction *actionSave_as_image;
    QAction *actionMark_Unmark_Row;
    QAction *actionMark_Unmark_Cell;
    QVBoxLayout *verticalLayout;
    QTreeWidget *tableTreeWidget;
    QHBoxLayout *resultsFilterHorizontalLayout;
    QLabel *resultsFilterLabel;
    QLineEdit *resultsFilterLineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    DisplayFilterEdit *displayFilterLineEdit;
    QComboBox *interfaceComboBox;
    QComboBox *adapterComboBox;
    QLabel *hintLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BluetoothHciSummaryDialog)
    {
        if (BluetoothHciSummaryDialog->objectName().isEmpty())
            BluetoothHciSummaryDialog->setObjectName("BluetoothHciSummaryDialog");
        BluetoothHciSummaryDialog->resize(880, 477);
        BluetoothHciSummaryDialog->setBaseSize(QSize(0, 0));
        actionCopy_Cell = new QAction(BluetoothHciSummaryDialog);
        actionCopy_Cell->setObjectName("actionCopy_Cell");
        actionCopy_Rows = new QAction(BluetoothHciSummaryDialog);
        actionCopy_Rows->setObjectName("actionCopy_Rows");
        actionCopy_All = new QAction(BluetoothHciSummaryDialog);
        actionCopy_All->setObjectName("actionCopy_All");
        actionSave_as_image = new QAction(BluetoothHciSummaryDialog);
        actionSave_as_image->setObjectName("actionSave_as_image");
        actionMark_Unmark_Row = new QAction(BluetoothHciSummaryDialog);
        actionMark_Unmark_Row->setObjectName("actionMark_Unmark_Row");
        actionMark_Unmark_Cell = new QAction(BluetoothHciSummaryDialog);
        actionMark_Unmark_Cell->setObjectName("actionMark_Unmark_Cell");
        verticalLayout = new QVBoxLayout(BluetoothHciSummaryDialog);
        verticalLayout->setObjectName("verticalLayout");
        tableTreeWidget = new QTreeWidget(BluetoothHciSummaryDialog);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        new QTreeWidgetItem(tableTreeWidget);
        tableTreeWidget->setObjectName("tableTreeWidget");
        tableTreeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        tableTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableTreeWidget->setProperty("showDropIndicator", QVariant(false));
        tableTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableTreeWidget->setTextElideMode(Qt::ElideMiddle);
        tableTreeWidget->setIndentation(30);
        tableTreeWidget->setRootIsDecorated(true);
        tableTreeWidget->setUniformRowHeights(false);
        tableTreeWidget->setItemsExpandable(true);
        tableTreeWidget->setSortingEnabled(false);
        tableTreeWidget->setAnimated(false);
        tableTreeWidget->setAllColumnsShowFocus(false);
        tableTreeWidget->setHeaderHidden(false);
        tableTreeWidget->header()->setCascadingSectionResizes(false);
        tableTreeWidget->header()->setMinimumSectionSize(100);
        tableTreeWidget->header()->setDefaultSectionSize(100);
        tableTreeWidget->header()->setHighlightSections(false);
        tableTreeWidget->header()->setProperty("showSortIndicator", QVariant(false));
        tableTreeWidget->header()->setStretchLastSection(true);

        verticalLayout->addWidget(tableTreeWidget);

        resultsFilterHorizontalLayout = new QHBoxLayout();
        resultsFilterHorizontalLayout->setObjectName("resultsFilterHorizontalLayout");
        resultsFilterHorizontalLayout->setContentsMargins(-1, 0, -1, -1);
        resultsFilterLabel = new QLabel(BluetoothHciSummaryDialog);
        resultsFilterLabel->setObjectName("resultsFilterLabel");

        resultsFilterHorizontalLayout->addWidget(resultsFilterLabel);

        resultsFilterLineEdit = new QLineEdit(BluetoothHciSummaryDialog);
        resultsFilterLineEdit->setObjectName("resultsFilterLineEdit");

        resultsFilterHorizontalLayout->addWidget(resultsFilterLineEdit);


        verticalLayout->addLayout(resultsFilterHorizontalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(BluetoothHciSummaryDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        displayFilterLineEdit = new DisplayFilterEdit(BluetoothHciSummaryDialog);
        displayFilterLineEdit->setObjectName("displayFilterLineEdit");

        horizontalLayout->addWidget(displayFilterLineEdit);

        interfaceComboBox = new QComboBox(BluetoothHciSummaryDialog);
        interfaceComboBox->addItem(QString());
        interfaceComboBox->setObjectName("interfaceComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(interfaceComboBox->sizePolicy().hasHeightForWidth());
        interfaceComboBox->setSizePolicy(sizePolicy);
        interfaceComboBox->setMinimumSize(QSize(350, 0));

        horizontalLayout->addWidget(interfaceComboBox);

        adapterComboBox = new QComboBox(BluetoothHciSummaryDialog);
        adapterComboBox->addItem(QString());
        adapterComboBox->setObjectName("adapterComboBox");
        adapterComboBox->setMinimumSize(QSize(320, 0));

        horizontalLayout->addWidget(adapterComboBox);


        verticalLayout->addLayout(horizontalLayout);

        hintLabel = new QLabel(BluetoothHciSummaryDialog);
        hintLabel->setObjectName("hintLabel");

        verticalLayout->addWidget(hintLabel);

        buttonBox = new QDialogButtonBox(BluetoothHciSummaryDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(BluetoothHciSummaryDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BluetoothHciSummaryDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BluetoothHciSummaryDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BluetoothHciSummaryDialog);
    } // setupUi

    void retranslateUi(QDialog *BluetoothHciSummaryDialog)
    {
        BluetoothHciSummaryDialog->setWindowTitle(QCoreApplication::translate("BluetoothHciSummaryDialog", "Bluetooth HCI Summary", nullptr));
        actionCopy_Cell->setText(QCoreApplication::translate("BluetoothHciSummaryDialog", "Copy Cell", nullptr));
        actionCopy_Rows->setText(QCoreApplication::translate("BluetoothHciSummaryDialog", "Copy Rows", nullptr));
        actionCopy_All->setText(QCoreApplication::translate("BluetoothHciSummaryDialog", "Copy All", nullptr));
        actionSave_as_image->setText(QCoreApplication::translate("BluetoothHciSummaryDialog", "Save as image", nullptr));
        actionMark_Unmark_Row->setText(QCoreApplication::translate("BluetoothHciSummaryDialog", "Mark/Unmark Row", nullptr));
#if QT_CONFIG(tooltip)
        actionMark_Unmark_Row->setToolTip(QCoreApplication::translate("BluetoothHciSummaryDialog", "Mark/Unmark Row", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMark_Unmark_Row->setShortcut(QCoreApplication::translate("BluetoothHciSummaryDialog", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMark_Unmark_Cell->setText(QCoreApplication::translate("BluetoothHciSummaryDialog", "Mark/Unmark Cell", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = tableTreeWidget->headerItem();
        ___qtreewidgetitem->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "Occurrence", nullptr));
        ___qtreewidgetitem->setText(8, QCoreApplication::translate("BluetoothHciSummaryDialog", "Hardware Error", nullptr));
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("BluetoothHciSummaryDialog", "Reason", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("BluetoothHciSummaryDialog", "Status", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("BluetoothHciSummaryDialog", "Subevent", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("BluetoothHciSummaryDialog", "Event", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("BluetoothHciSummaryDialog", "Opcode", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("BluetoothHciSummaryDialog", "OCF", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("BluetoothHciSummaryDialog", "OGF", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Name", nullptr));

        const bool __sortingEnabled = tableTreeWidget->isSortingEnabled();
        tableTreeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = tableTreeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("BluetoothHciSummaryDialog", "0x01", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Link Control Commands", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = tableTreeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("BluetoothHciSummaryDialog", "0x02", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Link Policy Commands", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = tableTreeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("BluetoothHciSummaryDialog", "0x03", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Controller & Baseband Commands", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = tableTreeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("BluetoothHciSummaryDialog", "0x04", nullptr));
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Informational Parameters", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = tableTreeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("BluetoothHciSummaryDialog", "0x05", nullptr));
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Status Parameters", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = tableTreeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem6->setText(1, QCoreApplication::translate("BluetoothHciSummaryDialog", "0x06", nullptr));
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Testing Commands", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = tableTreeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem7->setText(1, QCoreApplication::translate("BluetoothHciSummaryDialog", "0x08", nullptr));
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "LE Controller Commands", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = tableTreeWidget->topLevelItem(7);
        ___qtreewidgetitem8->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem8->setText(1, QCoreApplication::translate("BluetoothHciSummaryDialog", "0x3E", nullptr));
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Bluetooth Logo Testing Commands", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = tableTreeWidget->topLevelItem(8);
        ___qtreewidgetitem9->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem9->setText(1, QCoreApplication::translate("BluetoothHciSummaryDialog", "0x3F", nullptr));
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Vendor-Specific Commands", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = tableTreeWidget->topLevelItem(9);
        ___qtreewidgetitem10->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Unknown OGF", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = tableTreeWidget->topLevelItem(10);
        ___qtreewidgetitem11->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Events", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = tableTreeWidget->topLevelItem(11);
        ___qtreewidgetitem12->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Status", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = tableTreeWidget->topLevelItem(12);
        ___qtreewidgetitem13->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Reason", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = tableTreeWidget->topLevelItem(13);
        ___qtreewidgetitem14->setText(9, QCoreApplication::translate("BluetoothHciSummaryDialog", "0", nullptr));
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "Hardware Errors", nullptr));
        tableTreeWidget->setSortingEnabled(__sortingEnabled);

        resultsFilterLabel->setText(QCoreApplication::translate("BluetoothHciSummaryDialog", "Results filter:", nullptr));
        label->setText(QCoreApplication::translate("BluetoothHciSummaryDialog", "Display filter:", nullptr));
        interfaceComboBox->setItemText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "All Interfaces", nullptr));

        adapterComboBox->setItemText(0, QCoreApplication::translate("BluetoothHciSummaryDialog", "All Adapters", nullptr));

        hintLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BluetoothHciSummaryDialog: public Ui_BluetoothHciSummaryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLUETOOTH_HCI_SUMMARY_DIALOG_H
