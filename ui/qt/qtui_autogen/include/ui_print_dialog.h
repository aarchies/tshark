/********************************************************************************
** Form generated from reading UI file 'print_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINT_DIALOG_H
#define UI_PRINT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "packet_format_group_box.h"
#include "packet_range_group_box.h"

QT_BEGIN_NAMESPACE

class Ui_PrintDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *previewLayout;
    QVBoxLayout *verticalLayout;
    PacketFormatGroupBox *formatGroupBox;
    QCheckBox *formFeedCheckBox;
    QCheckBox *bannerCheckBox;
    QSpacerItem *verticalSpacer;
    QLabel *zoomLabel;
    PacketRangeGroupBox *rangeGroupBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PrintDialog)
    {
        if (PrintDialog->objectName().isEmpty())
            PrintDialog->setObjectName("PrintDialog");
        PrintDialog->resize(496, 328);
        verticalLayout_2 = new QVBoxLayout(PrintDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        previewLayout = new QHBoxLayout();
        previewLayout->setObjectName("previewLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formatGroupBox = new PacketFormatGroupBox(PrintDialog);
        formatGroupBox->setObjectName("formatGroupBox");
        formatGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formatGroupBox->setFlat(true);

        verticalLayout->addWidget(formatGroupBox);

        formFeedCheckBox = new QCheckBox(PrintDialog);
        formFeedCheckBox->setObjectName("formFeedCheckBox");

        verticalLayout->addWidget(formFeedCheckBox);

        bannerCheckBox = new QCheckBox(PrintDialog);
        bannerCheckBox->setObjectName("bannerCheckBox");
        bannerCheckBox->setChecked(true);

        verticalLayout->addWidget(bannerCheckBox);

        verticalSpacer = new QSpacerItem(118, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        zoomLabel = new QLabel(PrintDialog);
        zoomLabel->setObjectName("zoomLabel");
        zoomLabel->setEnabled(false);

        verticalLayout->addWidget(zoomLabel);


        previewLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(previewLayout);

        rangeGroupBox = new PacketRangeGroupBox(PrintDialog);
        rangeGroupBox->setObjectName("rangeGroupBox");
        rangeGroupBox->setFlat(true);

        verticalLayout_2->addWidget(rangeGroupBox);

        buttonBox = new QDialogButtonBox(PrintDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(PrintDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PrintDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PrintDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PrintDialog);
    } // setupUi

    void retranslateUi(QDialog *PrintDialog)
    {
        formatGroupBox->setTitle(QCoreApplication::translate("PrintDialog", "Packet Format", nullptr));
        formFeedCheckBox->setText(QCoreApplication::translate("PrintDialog", "Print each packet on a new page", nullptr));
#if QT_CONFIG(tooltip)
        bannerCheckBox->setToolTip(QCoreApplication::translate("PrintDialog", "<html><head/><body><p>Print capture file information on each page</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        bannerCheckBox->setText(QCoreApplication::translate("PrintDialog", "Capture information header", nullptr));
#if QT_CONFIG(tooltip)
        zoomLabel->setToolTip(QCoreApplication::translate("PrintDialog", "<html><head/><body><p>Use the &quot;+&quot; and &quot;-&quot; keys to zoom the preview in and out. Use the &quot;0&quot; key to reset the zoom level.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomLabel->setText(QCoreApplication::translate("PrintDialog", "<html><head/><body><p><span style=\" font-size:small; font-style:italic;\">+ and - zoom, 0 resets</span></p></body></html>", nullptr));
        rangeGroupBox->setTitle(QCoreApplication::translate("PrintDialog", "Packet Range", nullptr));
        (void)PrintDialog;
    } // retranslateUi

};

namespace Ui {
    class PrintDialog: public Ui_PrintDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINT_DIALOG_H
