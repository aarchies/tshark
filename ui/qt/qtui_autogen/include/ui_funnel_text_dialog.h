/********************************************************************************
** Form generated from reading UI file 'funnel_text_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNNEL_TEXT_DIALOG_H
#define UI_FUNNEL_TEXT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FunnelTextDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *findLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FunnelTextDialog)
    {
        if (FunnelTextDialog->objectName().isEmpty())
            FunnelTextDialog->setObjectName("FunnelTextDialog");
        FunnelTextDialog->resize(620, 450);
        verticalLayout = new QVBoxLayout(FunnelTextDialog);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(FunnelTextDialog);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(FunnelTextDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        findLineEdit = new QLineEdit(FunnelTextDialog);
        findLineEdit->setObjectName("findLineEdit");

        horizontalLayout->addWidget(findLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(FunnelTextDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FunnelTextDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FunnelTextDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FunnelTextDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FunnelTextDialog);
    } // setupUi

    void retranslateUi(QDialog *FunnelTextDialog)
    {
        FunnelTextDialog->setWindowTitle(QCoreApplication::translate("FunnelTextDialog", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("FunnelTextDialog", "<html><head/><body><p>Enter some text or a regular expression. It will be highlighted above.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("FunnelTextDialog", "Highlight:", nullptr));
#if QT_CONFIG(tooltip)
        findLineEdit->setToolTip(QCoreApplication::translate("FunnelTextDialog", "<html><head/><body><p>Enter some text or a regular expression. It will be highlighted above.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class FunnelTextDialog: public Ui_FunnelTextDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNNEL_TEXT_DIALOG_H
