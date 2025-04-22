/********************************************************************************
** Form generated from reading UI file 'profile_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_DIALOG_H
#define UI_PROFILE_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"
#include "widgets/profile_tree_view.h"
#include "widgets/stock_icon_tool_button.h"

QT_BEGIN_NAMESPACE

class Ui_ProfileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineProfileFilter;
    QComboBox *cmbProfileTypes;
    ProfileTreeView *profileTreeView;
    QHBoxLayout *horizontalLayout;
    StockIconToolButton *newToolButton;
    StockIconToolButton *deleteToolButton;
    StockIconToolButton *copyToolButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *autoSwitchLimitLabel;
    QSpinBox *autoSwitchSpinBox;
    QSpacerItem *horizontalSpacer;
    ElidedLabel *hintLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProfileDialog)
    {
        if (ProfileDialog->objectName().isEmpty())
            ProfileDialog->setObjectName("ProfileDialog");
        ProfileDialog->resize(600, 400);
        verticalLayout = new QVBoxLayout(ProfileDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineProfileFilter = new QLineEdit(ProfileDialog);
        lineProfileFilter->setObjectName("lineProfileFilter");

        horizontalLayout_2->addWidget(lineProfileFilter);

        cmbProfileTypes = new QComboBox(ProfileDialog);
        cmbProfileTypes->setObjectName("cmbProfileTypes");

        horizontalLayout_2->addWidget(cmbProfileTypes);


        verticalLayout->addLayout(horizontalLayout_2);

        profileTreeView = new ProfileTreeView(ProfileDialog);
        profileTreeView->setObjectName("profileTreeView");
        profileTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        profileTreeView->setRootIsDecorated(false);
        profileTreeView->setUniformRowHeights(true);
        profileTreeView->setItemsExpandable(false);
        profileTreeView->setSortingEnabled(false);
        profileTreeView->setHeaderHidden(false);
        profileTreeView->setExpandsOnDoubleClick(false);
        profileTreeView->header()->setVisible(true);

        verticalLayout->addWidget(profileTreeView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        newToolButton = new StockIconToolButton(ProfileDialog);
        newToolButton->setObjectName("newToolButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/stock/plus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        newToolButton->setIcon(icon);

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new StockIconToolButton(ProfileDialog);
        deleteToolButton->setObjectName("deleteToolButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/stock/minus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteToolButton->setIcon(icon1);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new StockIconToolButton(ProfileDialog);
        copyToolButton->setObjectName("copyToolButton");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/stock/copy-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyToolButton->setIcon(icon2);

        horizontalLayout->addWidget(copyToolButton);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        autoSwitchLimitLabel = new QLabel(ProfileDialog);
        autoSwitchLimitLabel->setObjectName("autoSwitchLimitLabel");

        horizontalLayout->addWidget(autoSwitchLimitLabel);

        autoSwitchSpinBox = new QSpinBox(ProfileDialog);
        autoSwitchSpinBox->setObjectName("autoSwitchSpinBox");
        autoSwitchSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        autoSwitchSpinBox->setMaximum(10000000);
        autoSwitchSpinBox->setSingleStep(1000);

        horizontalLayout->addWidget(autoSwitchSpinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        hintLabel = new ElidedLabel(ProfileDialog);
        hintLabel->setObjectName("hintLabel");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hintLabel->sizePolicy().hasHeightForWidth());
        hintLabel->setSizePolicy(sizePolicy);
        hintLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        hintLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(hintLabel);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(ProfileDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ProfileDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ProfileDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ProfileDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfileDialog)
    {
        lineProfileFilter->setPlaceholderText(QCoreApplication::translate("ProfileDialog", "Search for profile \342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        newToolButton->setToolTip(QCoreApplication::translate("ProfileDialog", "Create a new profile using default settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        newToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        deleteToolButton->setToolTip(QCoreApplication::translate("ProfileDialog", "<html><head/><body><p>Remove this profile. System provided profiles cannot be removed. The default profile will be reset upon deletion.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        copyToolButton->setToolTip(QCoreApplication::translate("ProfileDialog", "Copy this profile.", nullptr));
#endif // QT_CONFIG(tooltip)
        copyToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        autoSwitchLimitLabel->setToolTip(QCoreApplication::translate("ProfileDialog", "The number of packets or events to check for automatic profile switching.", nullptr));
#endif // QT_CONFIG(tooltip)
        autoSwitchLimitLabel->setText(QCoreApplication::translate("ProfileDialog", "Auto switch packet limit", nullptr));
        hintLabel->setText(QString());
        (void)ProfileDialog;
    } // retranslateUi

};

namespace Ui {
    class ProfileDialog: public Ui_ProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_DIALOG_H
