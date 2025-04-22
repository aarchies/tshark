/********************************************************************************
** Form generated from reading UI file 'firewall_rules_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIREWALL_RULES_DIALOG_H
#define UI_FIREWALL_RULES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FirewallRulesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *productComboBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *inboundCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *denyCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FirewallRulesDialog)
    {
        if (FirewallRulesDialog->objectName().isEmpty())
            FirewallRulesDialog->setObjectName("FirewallRulesDialog");
        FirewallRulesDialog->resize(650, 450);
        verticalLayout = new QVBoxLayout(FirewallRulesDialog);
        verticalLayout->setObjectName("verticalLayout");
        textBrowser = new QTextBrowser(FirewallRulesDialog);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(FirewallRulesDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        productComboBox = new QComboBox(FirewallRulesDialog);
        productComboBox->setObjectName("productComboBox");

        horizontalLayout->addWidget(productComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        inboundCheckBox = new QCheckBox(FirewallRulesDialog);
        inboundCheckBox->setObjectName("inboundCheckBox");
        inboundCheckBox->setChecked(true);

        horizontalLayout->addWidget(inboundCheckBox);

        horizontalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        denyCheckBox = new QCheckBox(FirewallRulesDialog);
        denyCheckBox->setObjectName("denyCheckBox");
        denyCheckBox->setChecked(true);

        horizontalLayout->addWidget(denyCheckBox);

        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(FirewallRulesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FirewallRulesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FirewallRulesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FirewallRulesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FirewallRulesDialog);
    } // setupUi

    void retranslateUi(QDialog *FirewallRulesDialog)
    {
        label->setText(QCoreApplication::translate("FirewallRulesDialog", "Create rules for", nullptr));
        inboundCheckBox->setText(QCoreApplication::translate("FirewallRulesDialog", "Inbound", nullptr));
        denyCheckBox->setText(QCoreApplication::translate("FirewallRulesDialog", "Deny", nullptr));
        (void)FirewallRulesDialog;
    } // retranslateUi

};

namespace Ui {
    class FirewallRulesDialog: public Ui_FirewallRulesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIREWALL_RULES_DIALOG_H
