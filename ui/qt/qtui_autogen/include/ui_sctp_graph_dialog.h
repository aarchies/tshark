/********************************************************************************
** Form generated from reading UI file 'sctp_graph_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTP_GRAPH_DIALOG_H
#define UI_SCTP_GRAPH_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_SCTPGraphDialog
{
public:
    QAction *actionGoToPacket;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCustomPlot *sctpPlot;
    QHBoxLayout *horizontalLayout;
    QLabel *hintLabel;
    QCheckBox *relativeTsn;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SCTPGraphDialog)
    {
        if (SCTPGraphDialog->objectName().isEmpty())
            SCTPGraphDialog->setObjectName("SCTPGraphDialog");
        SCTPGraphDialog->resize(800, 546);
        actionGoToPacket = new QAction(SCTPGraphDialog);
        actionGoToPacket->setObjectName("actionGoToPacket");
        verticalLayout_2 = new QVBoxLayout(SCTPGraphDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        sctpPlot = new QCustomPlot(SCTPGraphDialog);
        sctpPlot->setObjectName("sctpPlot");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(sctpPlot->sizePolicy().hasHeightForWidth());
        sctpPlot->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(sctpPlot);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        hintLabel = new QLabel(SCTPGraphDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(hintLabel, 0, Qt::AlignLeft);

        relativeTsn = new QCheckBox(SCTPGraphDialog);
        relativeTsn->setObjectName("relativeTsn");

        horizontalLayout->addWidget(relativeTsn, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(SCTPGraphDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(SCTPGraphDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(SCTPGraphDialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(SCTPGraphDialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButton_4);

        saveButton = new QPushButton(SCTPGraphDialog);
        saveButton->setObjectName("saveButton");

        horizontalLayout_2->addWidget(saveButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SCTPGraphDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SCTPGraphDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::clicked, SCTPGraphDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(SCTPGraphDialog);
    } // setupUi

    void retranslateUi(QDialog *SCTPGraphDialog)
    {
        SCTPGraphDialog->setWindowTitle(QCoreApplication::translate("SCTPGraphDialog", "SCTP Graph", nullptr));
        actionGoToPacket->setText(QCoreApplication::translate("SCTPGraphDialog", "goToPacket", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPacket->setToolTip(QCoreApplication::translate("SCTPGraphDialog", "Go to Packet", nullptr));
#endif // QT_CONFIG(tooltip)
        relativeTsn->setText(QCoreApplication::translate("SCTPGraphDialog", "Relative TSNs", nullptr));
        pushButton->setText(QCoreApplication::translate("SCTPGraphDialog", "Only SACKs", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SCTPGraphDialog", "Only TSNs", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SCTPGraphDialog", "Show both", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SCTPGraphDialog", "Reset to full size", nullptr));
        saveButton->setText(QCoreApplication::translate("SCTPGraphDialog", "Save Graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCTPGraphDialog: public Ui_SCTPGraphDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTP_GRAPH_DIALOG_H
