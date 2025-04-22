/********************************************************************************
** Form generated from reading UI file 'tap_parameter_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAP_PARAMETER_DIALOG_H
#define UI_TAP_PARAMETER_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "widgets/display_filter_edit.h"

QT_BEGIN_NAMESPACE

class Ui_TapParameterDialog
{
public:
    QAction *actionCopyToClipboard;
    QAction *actionSaveAs;
    QVBoxLayout *verticalLayout;
    QTreeWidget *statsTreeWidget;
    QLabel *hintLabel;
    QHBoxLayout *filterLayout;
    QLabel *label;
    DisplayFilterEdit *displayFilterLineEdit;
    QPushButton *applyFilterButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TapParameterDialog)
    {
        if (TapParameterDialog->objectName().isEmpty())
            TapParameterDialog->setObjectName("TapParameterDialog");
        TapParameterDialog->resize(587, 459);
        actionCopyToClipboard = new QAction(TapParameterDialog);
        actionCopyToClipboard->setObjectName("actionCopyToClipboard");
#if QT_CONFIG(shortcut)
        actionCopyToClipboard->setShortcut(QString::fromUtf8("Ctrl+C"));
#endif // QT_CONFIG(shortcut)
        actionSaveAs = new QAction(TapParameterDialog);
        actionSaveAs->setObjectName("actionSaveAs");
#if QT_CONFIG(shortcut)
        actionSaveAs->setShortcut(QString::fromUtf8("Ctrl+S"));
#endif // QT_CONFIG(shortcut)
        verticalLayout = new QVBoxLayout(TapParameterDialog);
        verticalLayout->setObjectName("verticalLayout");
        statsTreeWidget = new QTreeWidget(TapParameterDialog);
        statsTreeWidget->setObjectName("statsTreeWidget");
        statsTreeWidget->setUniformRowHeights(true);
        statsTreeWidget->setSortingEnabled(true);

        verticalLayout->addWidget(statsTreeWidget);

        hintLabel = new QLabel(TapParameterDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        filterLayout = new QHBoxLayout();
        filterLayout->setObjectName("filterLayout");
        label = new QLabel(TapParameterDialog);
        label->setObjectName("label");

        filterLayout->addWidget(label);

        displayFilterLineEdit = new DisplayFilterEdit(TapParameterDialog);
        displayFilterLineEdit->setObjectName("displayFilterLineEdit");

        filterLayout->addWidget(displayFilterLineEdit);

        applyFilterButton = new QPushButton(TapParameterDialog);
        applyFilterButton->setObjectName("applyFilterButton");

        filterLayout->addWidget(applyFilterButton);

        filterLayout->setStretch(1, 2);

        verticalLayout->addLayout(filterLayout);

        buttonBox = new QDialogButtonBox(TapParameterDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TapParameterDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TapParameterDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TapParameterDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TapParameterDialog);
    } // setupUi

    void retranslateUi(QDialog *TapParameterDialog)
    {
        TapParameterDialog->setWindowTitle(QCoreApplication::translate("TapParameterDialog", "Dialog", nullptr));
        actionCopyToClipboard->setText(QCoreApplication::translate("TapParameterDialog", "Copy", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyToClipboard->setToolTip(QCoreApplication::translate("TapParameterDialog", "Copy a text representation of the tree to the clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveAs->setText(QCoreApplication::translate("TapParameterDialog", "Save as\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAs->setToolTip(QCoreApplication::translate("TapParameterDialog", "Save the displayed data in various formats", nullptr));
#endif // QT_CONFIG(tooltip)
        QTreeWidgetItem *___qtreewidgetitem = statsTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("TapParameterDialog", "Item", nullptr));
        hintLabel->setText(QCoreApplication::translate("TapParameterDialog", "<small><i>A hint.</i></small>", nullptr));
        label->setText(QCoreApplication::translate("TapParameterDialog", "Display filter:", nullptr));
#if QT_CONFIG(tooltip)
        applyFilterButton->setToolTip(QCoreApplication::translate("TapParameterDialog", "Regenerate statistics using this display filter", nullptr));
#endif // QT_CONFIG(tooltip)
        applyFilterButton->setText(QCoreApplication::translate("TapParameterDialog", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TapParameterDialog: public Ui_TapParameterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAP_PARAMETER_DIALOG_H
