/********************************************************************************
** Form generated from reading UI file 'gsm_map_summary_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSM_MAP_SUMMARY_DIALOG_H
#define UI_GSM_MAP_SUMMARY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GsmMapSummaryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *summaryTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GsmMapSummaryDialog)
    {
        if (GsmMapSummaryDialog->objectName().isEmpty())
            GsmMapSummaryDialog->setObjectName("GsmMapSummaryDialog");
        GsmMapSummaryDialog->resize(640, 420);
        verticalLayout = new QVBoxLayout(GsmMapSummaryDialog);
        verticalLayout->setObjectName("verticalLayout");
        summaryTextEdit = new QTextEdit(GsmMapSummaryDialog);
        summaryTextEdit->setObjectName("summaryTextEdit");
        summaryTextEdit->setReadOnly(true);

        verticalLayout->addWidget(summaryTextEdit);

        buttonBox = new QDialogButtonBox(GsmMapSummaryDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GsmMapSummaryDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, GsmMapSummaryDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, GsmMapSummaryDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(GsmMapSummaryDialog);
    } // setupUi

    void retranslateUi(QDialog *GsmMapSummaryDialog)
    {
        GsmMapSummaryDialog->setWindowTitle(QCoreApplication::translate("GsmMapSummaryDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GsmMapSummaryDialog: public Ui_GsmMapSummaryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GSM_MAP_SUMMARY_DIALOG_H
