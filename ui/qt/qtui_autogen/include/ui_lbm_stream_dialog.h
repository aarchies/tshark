/********************************************************************************
** Form generated from reading UI file 'lbm_stream_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LBM_STREAM_DIALOG_H
#define UI_LBM_STREAM_DIALOG_H

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

class Ui_LBMStreamDialog
{
public:
    QAction *actionCopyAsCSV;
    QAction *actionCopyAsYAML;
    QVBoxLayout *verticalLayout;
    QTreeWidget *lbm_stream_TreeWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    DisplayFilterEdit *displayFilterLineEdit;
    QPushButton *applyFilterButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LBMStreamDialog)
    {
        if (LBMStreamDialog->objectName().isEmpty())
            LBMStreamDialog->setObjectName("LBMStreamDialog");
        LBMStreamDialog->resize(652, 459);
        actionCopyAsCSV = new QAction(LBMStreamDialog);
        actionCopyAsCSV->setObjectName("actionCopyAsCSV");
#if QT_CONFIG(shortcut)
        actionCopyAsCSV->setShortcut(QString::fromUtf8("Ctrl+C"));
#endif // QT_CONFIG(shortcut)
        actionCopyAsYAML = new QAction(LBMStreamDialog);
        actionCopyAsYAML->setObjectName("actionCopyAsYAML");
#if QT_CONFIG(shortcut)
        actionCopyAsYAML->setShortcut(QString::fromUtf8("Ctrl+Y"));
#endif // QT_CONFIG(shortcut)
        verticalLayout = new QVBoxLayout(LBMStreamDialog);
        verticalLayout->setObjectName("verticalLayout");
        lbm_stream_TreeWidget = new QTreeWidget(LBMStreamDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(3, Qt::AlignLeft|Qt::AlignVCenter);
        lbm_stream_TreeWidget->setHeaderItem(__qtreewidgetitem);
        lbm_stream_TreeWidget->setObjectName("lbm_stream_TreeWidget");

        verticalLayout->addWidget(lbm_stream_TreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(LBMStreamDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        displayFilterLineEdit = new DisplayFilterEdit(LBMStreamDialog);
        displayFilterLineEdit->setObjectName("displayFilterLineEdit");

        horizontalLayout->addWidget(displayFilterLineEdit);

        applyFilterButton = new QPushButton(LBMStreamDialog);
        applyFilterButton->setObjectName("applyFilterButton");

        horizontalLayout->addWidget(applyFilterButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(LBMStreamDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LBMStreamDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LBMStreamDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LBMStreamDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LBMStreamDialog);
    } // setupUi

    void retranslateUi(QDialog *LBMStreamDialog)
    {
        LBMStreamDialog->setWindowTitle(QCoreApplication::translate("LBMStreamDialog", "Dialog", nullptr));
        actionCopyAsCSV->setText(QCoreApplication::translate("LBMStreamDialog", "Copy as CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAsCSV->setToolTip(QCoreApplication::translate("LBMStreamDialog", "Copy the tree as CSV", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyAsYAML->setText(QCoreApplication::translate("LBMStreamDialog", "Copy as YAML", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAsYAML->setToolTip(QCoreApplication::translate("LBMStreamDialog", "Copy the tree as YAML", nullptr));
#endif // QT_CONFIG(tooltip)
        QTreeWidgetItem *___qtreewidgetitem = lbm_stream_TreeWidget->headerItem();
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("LBMStreamDialog", "Last Frame", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("LBMStreamDialog", "First Frame", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("LBMStreamDialog", "Bytes", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("LBMStreamDialog", "Messages", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("LBMStreamDialog", "Endpoint B", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("LBMStreamDialog", "Endpoint A", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("LBMStreamDialog", "Stream", nullptr));
        label->setText(QCoreApplication::translate("LBMStreamDialog", "Display filter:", nullptr));
#if QT_CONFIG(tooltip)
        applyFilterButton->setToolTip(QCoreApplication::translate("LBMStreamDialog", "Regenerate statistics using this display filter", nullptr));
#endif // QT_CONFIG(tooltip)
        applyFilterButton->setText(QCoreApplication::translate("LBMStreamDialog", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LBMStreamDialog: public Ui_LBMStreamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LBM_STREAM_DIALOG_H
