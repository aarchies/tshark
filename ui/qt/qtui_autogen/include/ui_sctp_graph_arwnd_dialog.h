/********************************************************************************
** Form generated from reading UI file 'sctp_graph_arwnd_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTP_GRAPH_ARWND_DIALOG_H
#define UI_SCTP_GRAPH_ARWND_DIALOG_H

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

class Ui_SCTPGraphArwndDialog
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

    void setupUi(QDialog *SCTPGraphArwndDialog)
    {
        if (SCTPGraphArwndDialog->objectName().isEmpty())
            SCTPGraphArwndDialog->setObjectName("SCTPGraphArwndDialog");
        SCTPGraphArwndDialog->resize(826, 546);
        actionGoToPacket = new QAction(SCTPGraphArwndDialog);
        actionGoToPacket->setObjectName("actionGoToPacket");
        verticalLayout_2 = new QVBoxLayout(SCTPGraphArwndDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        sctpPlot = new QCustomPlot(SCTPGraphArwndDialog);
        sctpPlot->setObjectName("sctpPlot");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(sctpPlot->sizePolicy().hasHeightForWidth());
        sctpPlot->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(sctpPlot);

        hintLabel = new QLabel(SCTPGraphArwndDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_4 = new QPushButton(SCTPGraphArwndDialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButton_4);

        saveButton = new QPushButton(SCTPGraphArwndDialog);
        saveButton->setObjectName("saveButton");

        horizontalLayout->addWidget(saveButton);

        horizontalSpacer = new QSpacerItem(428, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SCTPGraphArwndDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SCTPGraphArwndDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::clicked, SCTPGraphArwndDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(SCTPGraphArwndDialog);
    } // setupUi

    void retranslateUi(QDialog *SCTPGraphArwndDialog)
    {
        SCTPGraphArwndDialog->setWindowTitle(QCoreApplication::translate("SCTPGraphArwndDialog", "SCTP Graph", nullptr));
        actionGoToPacket->setText(QCoreApplication::translate("SCTPGraphArwndDialog", "goToPacket", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPacket->setToolTip(QCoreApplication::translate("SCTPGraphArwndDialog", "Go to Packet", nullptr));
#endif // QT_CONFIG(tooltip)
        hintLabel->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("SCTPGraphArwndDialog", "Reset to full size", nullptr));
        saveButton->setText(QCoreApplication::translate("SCTPGraphArwndDialog", "Save Graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCTPGraphArwndDialog: public Ui_SCTPGraphArwndDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTP_GRAPH_ARWND_DIALOG_H
