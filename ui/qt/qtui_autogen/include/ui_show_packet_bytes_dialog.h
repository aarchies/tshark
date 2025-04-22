/********************************************************************************
** Form generated from reading UI file 'show_packet_bytes_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_PACKET_BYTES_DIALOG_H
#define UI_SHOW_PACKET_BYTES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "show_packet_bytes_dialog.h"
#include "widgets/find_line_edit.h"

QT_BEGIN_NAMESPACE

class Ui_ShowPacketBytesDialog
{
public:
    QVBoxLayout *verticalLayout;
    ShowPacketBytesTextEdit *tePacketBytes;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout_1;
    QLabel *lDecodeAs;
    QComboBox *cbDecodeAs;
    QLabel *lShowAs;
    QComboBox *cbShowAs;
    QSpacerItem *horizontalSpacer;
    QLabel *lStart;
    QSpinBox *sbStart;
    QLabel *lEnd;
    QSpinBox *sbEnd;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lFind;
    FindLineEdit *leFind;
    QCheckBox *caseCheckBox;
    QPushButton *bFind;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ShowPacketBytesDialog)
    {
        if (ShowPacketBytesDialog->objectName().isEmpty())
            ShowPacketBytesDialog->setObjectName("ShowPacketBytesDialog");
        ShowPacketBytesDialog->resize(710, 620);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShowPacketBytesDialog->sizePolicy().hasHeightForWidth());
        ShowPacketBytesDialog->setSizePolicy(sizePolicy);
        ShowPacketBytesDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(ShowPacketBytesDialog);
        verticalLayout->setObjectName("verticalLayout");
        tePacketBytes = new ShowPacketBytesTextEdit(ShowPacketBytesDialog);
        tePacketBytes->setObjectName("tePacketBytes");
        tePacketBytes->setReadOnly(true);

        verticalLayout->addWidget(tePacketBytes);

        hintLabel = new QLabel(ShowPacketBytesDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);
        hintLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        lDecodeAs = new QLabel(ShowPacketBytesDialog);
        lDecodeAs->setObjectName("lDecodeAs");

        horizontalLayout_1->addWidget(lDecodeAs);

        cbDecodeAs = new QComboBox(ShowPacketBytesDialog);
        cbDecodeAs->setObjectName("cbDecodeAs");

        horizontalLayout_1->addWidget(cbDecodeAs);

        lShowAs = new QLabel(ShowPacketBytesDialog);
        lShowAs->setObjectName("lShowAs");

        horizontalLayout_1->addWidget(lShowAs);

        cbShowAs = new QComboBox(ShowPacketBytesDialog);
        cbShowAs->setObjectName("cbShowAs");

        horizontalLayout_1->addWidget(cbShowAs);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer);

        lStart = new QLabel(ShowPacketBytesDialog);
        lStart->setObjectName("lStart");

        horizontalLayout_1->addWidget(lStart);

        sbStart = new QSpinBox(ShowPacketBytesDialog);
        sbStart->setObjectName("sbStart");

        horizontalLayout_1->addWidget(sbStart);

        lEnd = new QLabel(ShowPacketBytesDialog);
        lEnd->setObjectName("lEnd");

        horizontalLayout_1->addWidget(lEnd);

        sbEnd = new QSpinBox(ShowPacketBytesDialog);
        sbEnd->setObjectName("sbEnd");

        horizontalLayout_1->addWidget(sbEnd);

        horizontalLayout_1->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lFind = new QLabel(ShowPacketBytesDialog);
        lFind->setObjectName("lFind");

        horizontalLayout_2->addWidget(lFind);

        leFind = new FindLineEdit(ShowPacketBytesDialog);
        leFind->setObjectName("leFind");

        horizontalLayout_2->addWidget(leFind);

        caseCheckBox = new QCheckBox(ShowPacketBytesDialog);
        caseCheckBox->setObjectName("caseCheckBox");

        horizontalLayout_2->addWidget(caseCheckBox);

        bFind = new QPushButton(ShowPacketBytesDialog);
        bFind->setObjectName("bFind");

        horizontalLayout_2->addWidget(bFind);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(ShowPacketBytesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ShowPacketBytesDialog);

        cbShowAs->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ShowPacketBytesDialog);
    } // setupUi

    void retranslateUi(QDialog *ShowPacketBytesDialog)
    {
        ShowPacketBytesDialog->setWindowTitle(QCoreApplication::translate("ShowPacketBytesDialog", "Show Packet Bytes", nullptr));
        hintLabel->setText(QCoreApplication::translate("ShowPacketBytesDialog", "Hint.", nullptr));
        lDecodeAs->setText(QCoreApplication::translate("ShowPacketBytesDialog", "Decode as", nullptr));
        lShowAs->setText(QCoreApplication::translate("ShowPacketBytesDialog", "Show as", nullptr));
        lStart->setText(QCoreApplication::translate("ShowPacketBytesDialog", "Start", nullptr));
        lEnd->setText(QCoreApplication::translate("ShowPacketBytesDialog", "End", nullptr));
        lFind->setText(QCoreApplication::translate("ShowPacketBytesDialog", "Find:", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("ShowPacketBytesDialog", "Case sensitive", nullptr));
        bFind->setText(QCoreApplication::translate("ShowPacketBytesDialog", "Find &Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowPacketBytesDialog: public Ui_ShowPacketBytesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_PACKET_BYTES_DIALOG_H
