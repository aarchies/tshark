/********************************************************************************
** Form generated from reading UI file 'conversation_hash_tables_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERSATION_HASH_TABLES_DIALOG_H
#define UI_CONVERSATION_HASH_TABLES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConversationHashTablesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *conversationTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConversationHashTablesDialog)
    {
        if (ConversationHashTablesDialog->objectName().isEmpty())
            ConversationHashTablesDialog->setObjectName("ConversationHashTablesDialog");
        ConversationHashTablesDialog->resize(640, 450);
        verticalLayout = new QVBoxLayout(ConversationHashTablesDialog);
        verticalLayout->setObjectName("verticalLayout");
        conversationTextEdit = new QTextEdit(ConversationHashTablesDialog);
        conversationTextEdit->setObjectName("conversationTextEdit");

        verticalLayout->addWidget(conversationTextEdit);

        buttonBox = new QDialogButtonBox(ConversationHashTablesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ConversationHashTablesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ConversationHashTablesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConversationHashTablesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ConversationHashTablesDialog);
    } // setupUi

    void retranslateUi(QDialog *ConversationHashTablesDialog)
    {
        ConversationHashTablesDialog->setWindowTitle(QCoreApplication::translate("ConversationHashTablesDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConversationHashTablesDialog: public Ui_ConversationHashTablesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSATION_HASH_TABLES_DIALOG_H
