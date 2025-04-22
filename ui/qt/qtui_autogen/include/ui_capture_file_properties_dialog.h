/********************************************************************************
** Form generated from reading UI file 'capture_file_properties_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTURE_FILE_PROPERTIES_DIALOG_H
#define UI_CAPTURE_FILE_PROPERTIES_DIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CaptureFilePropertiesDialog
{
public:
    QPushButton *actionEditButton;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *detailsLabel;
    QTextEdit *detailsTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CaptureFilePropertiesDialog)
    {
        if (CaptureFilePropertiesDialog->objectName().isEmpty())
            CaptureFilePropertiesDialog->setObjectName("CaptureFilePropertiesDialog");
        CaptureFilePropertiesDialog->resize(799, 585);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CaptureFilePropertiesDialog->sizePolicy().hasHeightForWidth());
        CaptureFilePropertiesDialog->setSizePolicy(sizePolicy);
        CaptureFilePropertiesDialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        actionEditButton = new QPushButton(CaptureFilePropertiesDialog);
        actionEditButton->setObjectName("actionEditButton");
        verticalLayout_3 = new QVBoxLayout(CaptureFilePropertiesDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget = new QWidget(CaptureFilePropertiesDialog);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        detailsLabel = new QLabel(widget);
        detailsLabel->setObjectName("detailsLabel");

        verticalLayout->addWidget(detailsLabel);

        detailsTextEdit = new QTextEdit(widget);
        detailsTextEdit->setObjectName("detailsTextEdit");
        detailsTextEdit->setReadOnly(true);

        verticalLayout->addWidget(detailsTextEdit);


        verticalLayout_3->addWidget(widget);

        buttonBox = new QDialogButtonBox(CaptureFilePropertiesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Reset);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(CaptureFilePropertiesDialog);

        QMetaObject::connectSlotsByName(CaptureFilePropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *CaptureFilePropertiesDialog)
    {
        actionEditButton->setText(QCoreApplication::translate("CaptureFilePropertiesDialog", "Edit Comments", nullptr));
        detailsLabel->setText(QCoreApplication::translate("CaptureFilePropertiesDialog", "Details", nullptr));
        (void)CaptureFilePropertiesDialog;
    } // retranslateUi

};

namespace Ui {
    class CaptureFilePropertiesDialog: public Ui_CaptureFilePropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTURE_FILE_PROPERTIES_DIALOG_H
