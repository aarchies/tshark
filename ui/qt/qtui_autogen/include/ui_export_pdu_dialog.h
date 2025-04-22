/********************************************************************************
** Form generated from reading UI file 'export_pdu_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORT_PDU_DIALOG_H
#define UI_EXPORT_PDU_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "widgets/display_filter_edit.h"

QT_BEGIN_NAMESPACE

class Ui_ExportPDUDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    DisplayFilterEdit *displayFilterLineEdit;
    QComboBox *comboBox;

    void setupUi(QDialog *ExportPDUDialog)
    {
        if (ExportPDUDialog->objectName().isEmpty())
            ExportPDUDialog->setObjectName("ExportPDUDialog");
        ExportPDUDialog->resize(393, 158);
        buttonBox = new QDialogButtonBox(ExportPDUDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 100, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Help);
        layoutWidget = new QWidget(ExportPDUDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(16, 20, 361, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        displayFilterLineEdit = new DisplayFilterEdit(layoutWidget);
        displayFilterLineEdit->setObjectName("displayFilterLineEdit");

        horizontalLayout->addWidget(displayFilterLineEdit);

        comboBox = new QComboBox(ExportPDUDialog);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 60, 120, 30));

        retranslateUi(ExportPDUDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ExportPDUDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ExportPDUDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ExportPDUDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportPDUDialog)
    {
        ExportPDUDialog->setWindowTitle(QCoreApplication::translate("ExportPDUDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ExportPDUDialog", "Display filter:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportPDUDialog: public Ui_ExportPDUDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORT_PDU_DIALOG_H
