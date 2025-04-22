/********************************************************************************
** Form generated from reading UI file 'extcap_options_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTCAP_OPTIONS_DIALOG_H
#define UI_EXTCAP_OPTIONS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExtcapOptionsDialog
{
public:
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QCheckBox *checkSaveOnStart;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExtcapOptionsDialog)
    {
        if (ExtcapOptionsDialog->objectName().isEmpty())
            ExtcapOptionsDialog->setObjectName("ExtcapOptionsDialog");
        ExtcapOptionsDialog->resize(600, 92);
        ExtcapOptionsDialog->setMinimumSize(QSize(600, 0));
        verticalLayout_12 = new QVBoxLayout(ExtcapOptionsDialog);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        verticalLayout_12->addLayout(verticalLayout);

        line = new QFrame(ExtcapOptionsDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_12->addWidget(line);

        checkSaveOnStart = new QCheckBox(ExtcapOptionsDialog);
        checkSaveOnStart->setObjectName("checkSaveOnStart");
        checkSaveOnStart->setChecked(true);

        verticalLayout_12->addWidget(checkSaveOnStart);

        buttonBox = new QDialogButtonBox(ExtcapOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Help|QDialogButtonBox::Ok|QDialogButtonBox::Save|QDialogButtonBox::RestoreDefaults);

        verticalLayout_12->addWidget(buttonBox);


        retranslateUi(ExtcapOptionsDialog);

        QMetaObject::connectSlotsByName(ExtcapOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *ExtcapOptionsDialog)
    {
        checkSaveOnStart->setText(QCoreApplication::translate("ExtcapOptionsDialog", "Save parameter(s) on capture start", nullptr));
        (void)ExtcapOptionsDialog;
    } // retranslateUi

};

namespace Ui {
    class ExtcapOptionsDialog: public Ui_ExtcapOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTCAP_OPTIONS_DIALOG_H
