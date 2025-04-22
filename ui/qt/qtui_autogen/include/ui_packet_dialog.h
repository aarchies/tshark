/********************************************************************************
** Form generated from reading UI file 'packet_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKET_DIALOG_H
#define UI_PACKET_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"

QT_BEGIN_NAMESPACE

class Ui_PacketDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *packetSplitter;
    ElidedLabel *hintLabel;
    QHBoxLayout *prefsLayout;
    QCheckBox *chkShowByteView;
    QLabel *layoutLabel;
    QComboBox *layoutComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PacketDialog)
    {
        if (PacketDialog->objectName().isEmpty())
            PacketDialog->setObjectName("PacketDialog");
        PacketDialog->resize(641, 450);
        verticalLayout = new QVBoxLayout(PacketDialog);
        verticalLayout->setObjectName("verticalLayout");
        packetSplitter = new QSplitter(PacketDialog);
        packetSplitter->setObjectName("packetSplitter");
        packetSplitter->setFrameShape(QFrame::StyledPanel);
        packetSplitter->setFrameShadow(QFrame::Raised);
        packetSplitter->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(packetSplitter);

        hintLabel = new ElidedLabel(PacketDialog);
        hintLabel->setObjectName("hintLabel");

        verticalLayout->addWidget(hintLabel);

        prefsLayout = new QHBoxLayout();
        prefsLayout->setObjectName("prefsLayout");
        chkShowByteView = new QCheckBox(PacketDialog);
        chkShowByteView->setObjectName("chkShowByteView");
        chkShowByteView->setChecked(true);

        prefsLayout->addWidget(chkShowByteView);

        layoutLabel = new QLabel(PacketDialog);
        layoutLabel->setObjectName("layoutLabel");

        prefsLayout->addWidget(layoutLabel);

        layoutComboBox = new QComboBox(PacketDialog);
        layoutComboBox->setObjectName("layoutComboBox");

        prefsLayout->addWidget(layoutComboBox);


        verticalLayout->addLayout(prefsLayout);

        buttonBox = new QDialogButtonBox(PacketDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);

        verticalLayout->setStretch(0, 1);

        retranslateUi(PacketDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PacketDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PacketDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PacketDialog);
    } // setupUi

    void retranslateUi(QDialog *PacketDialog)
    {
        PacketDialog->setWindowTitle(QCoreApplication::translate("PacketDialog", "Dialog", nullptr));
        hintLabel->setText(QCoreApplication::translate("PacketDialog", "<small><i></i></small>", nullptr));
        chkShowByteView->setText(QCoreApplication::translate("PacketDialog", "Show packet bytes", nullptr));
        layoutLabel->setText(QCoreApplication::translate("PacketDialog", "Layout:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PacketDialog: public Ui_PacketDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKET_DIALOG_H
