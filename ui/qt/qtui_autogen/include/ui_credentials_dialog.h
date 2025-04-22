/********************************************************************************
** Form generated from reading UI file 'credentials_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDENTIALS_DIALOG_H
#define UI_CREDENTIALS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CredentialsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *auths;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CredentialsDialog)
    {
        if (CredentialsDialog->objectName().isEmpty())
            CredentialsDialog->setObjectName("CredentialsDialog");
        CredentialsDialog->resize(634, 454);
        verticalLayout = new QVBoxLayout(CredentialsDialog);
        verticalLayout->setObjectName("verticalLayout");
        auths = new QTreeView(CredentialsDialog);
        auths->setObjectName("auths");

        verticalLayout->addWidget(auths);

        buttonBox = new QDialogButtonBox(CredentialsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CredentialsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::clicked, CredentialsDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(CredentialsDialog);
    } // setupUi

    void retranslateUi(QDialog *CredentialsDialog)
    {
        CredentialsDialog->setWindowTitle(QCoreApplication::translate("CredentialsDialog", "Wireshark - Credentials", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CredentialsDialog: public Ui_CredentialsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDENTIALS_DIALOG_H
