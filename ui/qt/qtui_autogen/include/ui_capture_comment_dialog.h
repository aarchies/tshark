/********************************************************************************
** Form generated from reading UI file 'capture_comment_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTURE_COMMENT_DIALOG_H
#define UI_CAPTURE_COMMENT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CaptureCommentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *sectionTabWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CaptureCommentDialog)
    {
        if (CaptureCommentDialog->objectName().isEmpty())
            CaptureCommentDialog->setObjectName("CaptureCommentDialog");
        CaptureCommentDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(CaptureCommentDialog);
        verticalLayout->setObjectName("verticalLayout");
        sectionTabWidget = new QTabWidget(CaptureCommentDialog);
        sectionTabWidget->setObjectName("sectionTabWidget");

        verticalLayout->addWidget(sectionTabWidget);

        buttonBox = new QDialogButtonBox(CaptureCommentDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CaptureCommentDialog);

        QMetaObject::connectSlotsByName(CaptureCommentDialog);
    } // setupUi

    void retranslateUi(QDialog *CaptureCommentDialog)
    {
        (void)CaptureCommentDialog;
    } // retranslateUi

};

namespace Ui {
    class CaptureCommentDialog: public Ui_CaptureCommentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTURE_COMMENT_DIALOG_H
