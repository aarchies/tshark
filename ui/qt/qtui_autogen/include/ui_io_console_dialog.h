/********************************************************************************
** Form generated from reading UI file 'io_console_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IO_CONSOLE_DIALOG_H
#define UI_IO_CONSOLE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_IOConsoleDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSplitter *splitter;
    QTextEdit *inputTextEdit;
    QTextEdit *outputTextEdit;
    QLabel *hintLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IOConsoleDialog)
    {
        if (IOConsoleDialog->objectName().isEmpty())
            IOConsoleDialog->setObjectName("IOConsoleDialog");
        IOConsoleDialog->resize(596, 430);
        gridLayout = new QGridLayout(IOConsoleDialog);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(IOConsoleDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        splitter = new QSplitter(IOConsoleDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        inputTextEdit = new QTextEdit(splitter);
        inputTextEdit->setObjectName("inputTextEdit");
        splitter->addWidget(inputTextEdit);
        outputTextEdit = new QTextEdit(splitter);
        outputTextEdit->setObjectName("outputTextEdit");
        outputTextEdit->setWordWrapMode(QTextOption::WrapAnywhere);
        splitter->addWidget(outputTextEdit);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);

        hintLabel = new QLabel(IOConsoleDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setText(QString::fromUtf8("<small><i>A hint.</i></small>"));
        hintLabel->setWordWrap(true);

        gridLayout->addWidget(hintLabel, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(IOConsoleDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(IOConsoleDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IOConsoleDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IOConsoleDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IOConsoleDialog);
    } // setupUi

    void retranslateUi(QDialog *IOConsoleDialog)
    {
        IOConsoleDialog->setWindowTitle(QCoreApplication::translate("IOConsoleDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("IOConsoleDialog", "Enter code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IOConsoleDialog: public Ui_IOConsoleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IO_CONSOLE_DIALOG_H
