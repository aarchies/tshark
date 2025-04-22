/********************************************************************************
** Form generated from reading UI file 'decode_as_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECODE_AS_DIALOG_H
#define UI_DECODE_AS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"
#include "widgets/stock_icon_tool_button.h"
#include "widgets/tabnav_tree_view.h"

QT_BEGIN_NAMESPACE

class Ui_DecodeAsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    TabnavTreeView *decodeAsTreeView;
    QHBoxLayout *horizontalLayout;
    StockIconToolButton *newToolButton;
    StockIconToolButton *deleteToolButton;
    StockIconToolButton *copyToolButton;
    StockIconToolButton *clearToolButton;
    QSpacerItem *horizontalSpacer;
    ElidedLabel *pathLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DecodeAsDialog)
    {
        if (DecodeAsDialog->objectName().isEmpty())
            DecodeAsDialog->setObjectName("DecodeAsDialog");
        DecodeAsDialog->resize(750, 460);
        verticalLayout_2 = new QVBoxLayout(DecodeAsDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        decodeAsTreeView = new TabnavTreeView(DecodeAsDialog);
        decodeAsTreeView->setObjectName("decodeAsTreeView");
        decodeAsTreeView->setIndentation(0);

        verticalLayout_2->addWidget(decodeAsTreeView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        newToolButton = new StockIconToolButton(DecodeAsDialog);
        newToolButton->setObjectName("newToolButton");

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new StockIconToolButton(DecodeAsDialog);
        deleteToolButton->setObjectName("deleteToolButton");
        deleteToolButton->setEnabled(false);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new StockIconToolButton(DecodeAsDialog);
        copyToolButton->setObjectName("copyToolButton");

        horizontalLayout->addWidget(copyToolButton);

        clearToolButton = new StockIconToolButton(DecodeAsDialog);
        clearToolButton->setObjectName("clearToolButton");
        clearToolButton->setEnabled(false);

        horizontalLayout->addWidget(clearToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pathLabel = new ElidedLabel(DecodeAsDialog);
        pathLabel->setObjectName("pathLabel");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pathLabel->sizePolicy().hasHeightForWidth());
        pathLabel->setSizePolicy(sizePolicy);
        pathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pathLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(pathLabel);

        horizontalLayout->setStretch(5, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DecodeAsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok|QDialogButtonBox::Save);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(DecodeAsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DecodeAsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DecodeAsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DecodeAsDialog);
    } // setupUi

    void retranslateUi(QDialog *DecodeAsDialog)
    {
#if QT_CONFIG(tooltip)
        newToolButton->setToolTip(QCoreApplication::translate("DecodeAsDialog", "Change the dissection behavior for a protocol.", nullptr));
#endif // QT_CONFIG(tooltip)
        newToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        deleteToolButton->setToolTip(QCoreApplication::translate("DecodeAsDialog", "Remove this dissection behavior.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        copyToolButton->setToolTip(QCoreApplication::translate("DecodeAsDialog", "Copy this dissection behavior.", nullptr));
#endif // QT_CONFIG(tooltip)
        copyToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        clearToolButton->setToolTip(QCoreApplication::translate("DecodeAsDialog", "Clear all dissection behaviors.", nullptr));
#endif // QT_CONFIG(tooltip)
        pathLabel->setText(QString());
        (void)DecodeAsDialog;
    } // retranslateUi

};

namespace Ui {
    class DecodeAsDialog: public Ui_DecodeAsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECODE_AS_DIALOG_H
