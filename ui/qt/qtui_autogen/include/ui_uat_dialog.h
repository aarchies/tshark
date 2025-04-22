/********************************************************************************
** Form generated from reading UI file 'uat_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UAT_DIALOG_H
#define UI_UAT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"
#include "widgets/rowmove_tree_view.h"
#include "widgets/stock_icon_tool_button.h"

QT_BEGIN_NAMESPACE

class Ui_UatDialog
{
public:
    QVBoxLayout *verticalLayout;
    RowMoveTreeView *uatTreeView;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    StockIconToolButton *newToolButton;
    StockIconToolButton *deleteToolButton;
    StockIconToolButton *copyToolButton;
    StockIconToolButton *moveUpToolButton;
    StockIconToolButton *moveDownToolButton;
    StockIconToolButton *clearToolButton;
    ElidedLabel *pathLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UatDialog)
    {
        if (UatDialog->objectName().isEmpty())
            UatDialog->setObjectName("UatDialog");
        UatDialog->resize(566, 403);
        verticalLayout = new QVBoxLayout(UatDialog);
        verticalLayout->setObjectName("verticalLayout");
        uatTreeView = new RowMoveTreeView(UatDialog);
        uatTreeView->setObjectName("uatTreeView");

        verticalLayout->addWidget(uatTreeView);

        hintLabel = new QLabel(UatDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        hintLabel->setTextFormat(Qt::RichText);
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        newToolButton = new StockIconToolButton(UatDialog);
        newToolButton->setObjectName("newToolButton");

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new StockIconToolButton(UatDialog);
        deleteToolButton->setObjectName("deleteToolButton");
        deleteToolButton->setEnabled(false);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new StockIconToolButton(UatDialog);
        copyToolButton->setObjectName("copyToolButton");
        copyToolButton->setEnabled(false);

        horizontalLayout->addWidget(copyToolButton);

        moveUpToolButton = new StockIconToolButton(UatDialog);
        moveUpToolButton->setObjectName("moveUpToolButton");
        moveUpToolButton->setEnabled(false);

        horizontalLayout->addWidget(moveUpToolButton);

        moveDownToolButton = new StockIconToolButton(UatDialog);
        moveDownToolButton->setObjectName("moveDownToolButton");
        moveDownToolButton->setEnabled(false);

        horizontalLayout->addWidget(moveDownToolButton);

        clearToolButton = new StockIconToolButton(UatDialog);
        clearToolButton->setObjectName("clearToolButton");
        clearToolButton->setEnabled(false);

        horizontalLayout->addWidget(clearToolButton);

        pathLabel = new ElidedLabel(UatDialog);
        pathLabel->setObjectName("pathLabel");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pathLabel->sizePolicy().hasHeightForWidth());
        pathLabel->setSizePolicy(sizePolicy);
        pathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pathLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(pathLabel);

        horizontalLayout->setStretch(6, 1);

        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(UatDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(UatDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, UatDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, UatDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(UatDialog);
    } // setupUi

    void retranslateUi(QDialog *UatDialog)
    {
        hintLabel->setText(QString());
#if QT_CONFIG(tooltip)
        newToolButton->setToolTip(QCoreApplication::translate("UatDialog", "Create a new entry.", nullptr));
#endif // QT_CONFIG(tooltip)
        newToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        deleteToolButton->setToolTip(QCoreApplication::translate("UatDialog", "Remove the selected entry(ies).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        copyToolButton->setToolTip(QCoreApplication::translate("UatDialog", "Copy the selected entry(ies).", nullptr));
#endif // QT_CONFIG(tooltip)
        copyToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        moveUpToolButton->setToolTip(QCoreApplication::translate("UatDialog", "Move the selected entry(ies) up.", nullptr));
#endif // QT_CONFIG(tooltip)
        moveUpToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        moveDownToolButton->setToolTip(QCoreApplication::translate("UatDialog", "Move the selected entry(ies) down.", nullptr));
#endif // QT_CONFIG(tooltip)
        moveDownToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        clearToolButton->setToolTip(QCoreApplication::translate("UatDialog", "Clear all entries.", nullptr));
#endif // QT_CONFIG(tooltip)
        clearToolButton->setText(QString());
        pathLabel->setText(QString());
        (void)UatDialog;
    } // retranslateUi

};

namespace Ui {
    class UatDialog: public Ui_UatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UAT_DIALOG_H
