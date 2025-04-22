/********************************************************************************
** Form generated from reading UI file 'funnel_string_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNNEL_STRING_DIALOG_H
#define UI_FUNNEL_STRING_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FunnelStringDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *stringGridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FunnelStringDialog)
    {
        if (FunnelStringDialog->objectName().isEmpty())
            FunnelStringDialog->setObjectName("FunnelStringDialog");
        FunnelStringDialog->resize(176, 66);
        verticalLayout = new QVBoxLayout(FunnelStringDialog);
        verticalLayout->setObjectName("verticalLayout");
        stringGridLayout = new QGridLayout();
        stringGridLayout->setObjectName("stringGridLayout");

        verticalLayout->addLayout(stringGridLayout);

        buttonBox = new QDialogButtonBox(FunnelStringDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FunnelStringDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FunnelStringDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FunnelStringDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FunnelStringDialog);
    } // setupUi

    void retranslateUi(QDialog *FunnelStringDialog)
    {
        FunnelStringDialog->setWindowTitle(QCoreApplication::translate("FunnelStringDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FunnelStringDialog: public Ui_FunnelStringDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNNEL_STRING_DIALOG_H
