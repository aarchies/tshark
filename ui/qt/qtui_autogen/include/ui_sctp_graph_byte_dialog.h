/********************************************************************************
** Form generated from reading UI file 'sctp_graph_byte_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTP_GRAPH_BYTE_DIALOG_H
#define UI_SCTP_GRAPH_BYTE_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_SCTPGraphByteDialog
{
public:
    QAction *actionGoToPacket;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCustomPlot *sctpPlot;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SCTPGraphByteDialog)
    {
        if (SCTPGraphByteDialog->objectName().isEmpty())
            SCTPGraphByteDialog->setObjectName("SCTPGraphByteDialog");
        SCTPGraphByteDialog->resize(987, 546);
        actionGoToPacket = new QAction(SCTPGraphByteDialog);
        actionGoToPacket->setObjectName("actionGoToPacket");
        verticalLayout_2 = new QVBoxLayout(SCTPGraphByteDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        sctpPlot = new QCustomPlot(SCTPGraphByteDialog);
        sctpPlot->setObjectName("sctpPlot");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(sctpPlot->sizePolicy().hasHeightForWidth());
        sctpPlot->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(sctpPlot);

        hintLabel = new QLabel(SCTPGraphByteDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_4 = new QPushButton(SCTPGraphByteDialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButton_4);

        saveButton = new QPushButton(SCTPGraphByteDialog);
        saveButton->setObjectName("saveButton");

        horizontalLayout->addWidget(saveButton);

        horizontalSpacer = new QSpacerItem(428, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SCTPGraphByteDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SCTPGraphByteDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::clicked, SCTPGraphByteDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(SCTPGraphByteDialog);
    } // setupUi

    void retranslateUi(QDialog *SCTPGraphByteDialog)
    {
        SCTPGraphByteDialog->setWindowTitle(QCoreApplication::translate("SCTPGraphByteDialog", "SCTP Graph", nullptr));
        actionGoToPacket->setText(QCoreApplication::translate("SCTPGraphByteDialog", "goToPacket", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPacket->setToolTip(QCoreApplication::translate("SCTPGraphByteDialog", "Go to Packet", nullptr));
#endif // QT_CONFIG(tooltip)
        hintLabel->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("SCTPGraphByteDialog", "Reset to full size", nullptr));
        saveButton->setText(QCoreApplication::translate("SCTPGraphByteDialog", "Save Graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCTPGraphByteDialog: public Ui_SCTPGraphByteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTP_GRAPH_BYTE_DIALOG_H
