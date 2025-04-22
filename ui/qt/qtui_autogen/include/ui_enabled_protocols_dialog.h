/********************************************************************************
** Form generated from reading UI file 'enabled_protocols_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENABLED_PROTOCOLS_DIALOG_H
#define UI_ENABLED_PROTOCOLS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EnabledProtocolsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *search_line_edit_;
    QComboBox *cmbSearchType;
    QLabel *label_2;
    QComboBox *cmbProtocolType;
    QTreeView *protocol_tree_;
    QLabel *disable_notice_text_;
    QHBoxLayout *horizontalLayout;
    QPushButton *enable_all_button_;
    QPushButton *disable_all_button_;
    QPushButton *invert_button_;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EnabledProtocolsDialog)
    {
        if (EnabledProtocolsDialog->objectName().isEmpty())
            EnabledProtocolsDialog->setObjectName("EnabledProtocolsDialog");
        EnabledProtocolsDialog->resize(987, 595);
        verticalLayout = new QVBoxLayout(EnabledProtocolsDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(EnabledProtocolsDialog);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        search_line_edit_ = new QLineEdit(EnabledProtocolsDialog);
        search_line_edit_->setObjectName("search_line_edit_");

        horizontalLayout_2->addWidget(search_line_edit_);

        cmbSearchType = new QComboBox(EnabledProtocolsDialog);
        cmbSearchType->setObjectName("cmbSearchType");

        horizontalLayout_2->addWidget(cmbSearchType);

        label_2 = new QLabel(EnabledProtocolsDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        cmbProtocolType = new QComboBox(EnabledProtocolsDialog);
        cmbProtocolType->setObjectName("cmbProtocolType");

        horizontalLayout_2->addWidget(cmbProtocolType);


        verticalLayout->addLayout(horizontalLayout_2);

        protocol_tree_ = new QTreeView(EnabledProtocolsDialog);
        protocol_tree_->setObjectName("protocol_tree_");
        protocol_tree_->setSortingEnabled(true);

        verticalLayout->addWidget(protocol_tree_);

        disable_notice_text_ = new QLabel(EnabledProtocolsDialog);
        disable_notice_text_->setObjectName("disable_notice_text_");
        disable_notice_text_->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(disable_notice_text_);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        enable_all_button_ = new QPushButton(EnabledProtocolsDialog);
        enable_all_button_->setObjectName("enable_all_button_");

        horizontalLayout->addWidget(enable_all_button_);

        disable_all_button_ = new QPushButton(EnabledProtocolsDialog);
        disable_all_button_->setObjectName("disable_all_button_");

        horizontalLayout->addWidget(disable_all_button_);

        invert_button_ = new QPushButton(EnabledProtocolsDialog);
        invert_button_->setObjectName("invert_button_");

        horizontalLayout->addWidget(invert_button_);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(EnabledProtocolsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EnabledProtocolsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EnabledProtocolsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EnabledProtocolsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EnabledProtocolsDialog);
    } // setupUi

    void retranslateUi(QDialog *EnabledProtocolsDialog)
    {
        EnabledProtocolsDialog->setWindowTitle(QCoreApplication::translate("EnabledProtocolsDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EnabledProtocolsDialog", "Search:", nullptr));
        label_2->setText(QCoreApplication::translate("EnabledProtocolsDialog", "in", nullptr));
        disable_notice_text_->setText(QCoreApplication::translate("EnabledProtocolsDialog", "<small><i>Disabling a protocol prevents higher layer protocols from being displayed</i></small>", nullptr));
        enable_all_button_->setText(QCoreApplication::translate("EnabledProtocolsDialog", "Enable All", nullptr));
        disable_all_button_->setText(QCoreApplication::translate("EnabledProtocolsDialog", "Disable All", nullptr));
        invert_button_->setText(QCoreApplication::translate("EnabledProtocolsDialog", "Invert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnabledProtocolsDialog: public Ui_EnabledProtocolsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENABLED_PROTOCOLS_DIALOG_H
