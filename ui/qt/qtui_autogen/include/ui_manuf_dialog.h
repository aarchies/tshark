/********************************************************************************
** Form generated from reading UI file 'manuf_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUF_DIALOG_H
#define UI_MANUF_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ManufDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *ouiRadioButton;
    QRadioButton *vendorRadioButton;
    QCheckBox *checkShortNameButton;
    QSpacerItem *horizontalSpacer;
    QLabel *hintLabel;
    QLineEdit *manufLineEdit;
    QTableView *manufTableView;
    QDialogButtonBox *buttonBox;
    QButtonGroup *radioButtonGroup;

    void setupUi(QDialog *ManufDialog)
    {
        if (ManufDialog->objectName().isEmpty())
            ManufDialog->setObjectName("ManufDialog");
        ManufDialog->resize(503, 394);
        gridLayout = new QGridLayout(ManufDialog);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        ouiRadioButton = new QRadioButton(ManufDialog);
        radioButtonGroup = new QButtonGroup(ManufDialog);
        radioButtonGroup->setObjectName("radioButtonGroup");
        radioButtonGroup->addButton(ouiRadioButton);
        ouiRadioButton->setObjectName("ouiRadioButton");
        ouiRadioButton->setChecked(true);

        horizontalLayout_2->addWidget(ouiRadioButton);

        vendorRadioButton = new QRadioButton(ManufDialog);
        radioButtonGroup->addButton(vendorRadioButton);
        vendorRadioButton->setObjectName("vendorRadioButton");

        horizontalLayout_2->addWidget(vendorRadioButton);

        checkShortNameButton = new QCheckBox(ManufDialog);
        checkShortNameButton->setObjectName("checkShortNameButton");

        horizontalLayout_2->addWidget(checkShortNameButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        hintLabel = new QLabel(ManufDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setText(QString::fromUtf8("<small><i>A hint.</i></small>"));
        hintLabel->setWordWrap(true);

        gridLayout->addWidget(hintLabel, 3, 0, 1, 1);

        manufLineEdit = new QLineEdit(ManufDialog);
        manufLineEdit->setObjectName("manufLineEdit");

        gridLayout->addWidget(manufLineEdit, 0, 0, 1, 1);

        manufTableView = new QTableView(ManufDialog);
        manufTableView->setObjectName("manufTableView");
        manufTableView->horizontalHeader()->setDefaultSectionSize(140);
        manufTableView->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(manufTableView, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ManufDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);


        retranslateUi(ManufDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ManufDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ManufDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ManufDialog);
    } // setupUi

    void retranslateUi(QDialog *ManufDialog)
    {
        ManufDialog->setWindowTitle(QCoreApplication::translate("ManufDialog", "MAC Address Blocks", nullptr));
#if QT_CONFIG(tooltip)
        ouiRadioButton->setToolTip(QCoreApplication::translate("ManufDialog", "Search MAC address or address prefix. Special purpose bits are masked.", nullptr));
#endif // QT_CONFIG(tooltip)
        ouiRadioButton->setText(QCoreApplication::translate("ManufDialog", "MAC Address", nullptr));
#if QT_CONFIG(tooltip)
        vendorRadioButton->setToolTip(QCoreApplication::translate("ManufDialog", "Search vendor name using a case-insentitive regular expression.", nullptr));
#endif // QT_CONFIG(tooltip)
        vendorRadioButton->setText(QCoreApplication::translate("ManufDialog", "Vendor Name", nullptr));
#if QT_CONFIG(tooltip)
        checkShortNameButton->setToolTip(QCoreApplication::translate("ManufDialog", "Show short name column.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkShortNameButton->setText(QCoreApplication::translate("ManufDialog", "Short name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManufDialog: public Ui_ManufDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUF_DIALOG_H
