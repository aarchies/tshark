/********************************************************************************
** Form generated from reading UI file 'expert_info_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPERT_INFO_DIALOG_H
#define UI_EXPERT_INFO_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenu>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/elided_label.h"
#include "widgets/expert_info_view.h"

QT_BEGIN_NAMESPACE

class Ui_ExpertInfoDialog
{
public:
    QAction *actionShowError;
    QAction *actionShowWarning;
    QAction *actionShowNote;
    QAction *actionShowChat;
    QAction *actionShowComment;
    QVBoxLayout *verticalLayout;
    ExpertInfoTreeView *expertInfoTreeView;
    ElidedLabel *hintLabel;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *limitCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *groupBySummaryCheckBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *searchLineEdit;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *severitiesPushButton;
    QMenu *menuShowExpert;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExpertInfoDialog)
    {
        if (ExpertInfoDialog->objectName().isEmpty())
            ExpertInfoDialog->setObjectName("ExpertInfoDialog");
        ExpertInfoDialog->resize(620, 540);
        actionShowError = new QAction(ExpertInfoDialog);
        actionShowError->setObjectName("actionShowError");
        actionShowError->setCheckable(true);
        actionShowError->setChecked(true);
        actionShowWarning = new QAction(ExpertInfoDialog);
        actionShowWarning->setObjectName("actionShowWarning");
        actionShowWarning->setCheckable(true);
        actionShowWarning->setChecked(true);
        actionShowNote = new QAction(ExpertInfoDialog);
        actionShowNote->setObjectName("actionShowNote");
        actionShowNote->setCheckable(true);
        actionShowNote->setChecked(true);
        actionShowChat = new QAction(ExpertInfoDialog);
        actionShowChat->setObjectName("actionShowChat");
        actionShowChat->setCheckable(true);
        actionShowChat->setChecked(true);
        actionShowComment = new QAction(ExpertInfoDialog);
        actionShowComment->setObjectName("actionShowComment");
        actionShowComment->setCheckable(true);
        actionShowComment->setChecked(true);
        verticalLayout = new QVBoxLayout(ExpertInfoDialog);
        verticalLayout->setObjectName("verticalLayout");
        expertInfoTreeView = new ExpertInfoTreeView(ExpertInfoDialog);
        expertInfoTreeView->setObjectName("expertInfoTreeView");
        expertInfoTreeView->setUniformRowHeights(true);
        expertInfoTreeView->setSortingEnabled(true);

        verticalLayout->addWidget(expertInfoTreeView);

        hintLabel = new ElidedLabel(ExpertInfoDialog);
        hintLabel->setObjectName("hintLabel");

        verticalLayout->addWidget(hintLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        limitCheckBox = new QCheckBox(ExpertInfoDialog);
        limitCheckBox->setObjectName("limitCheckBox");

        horizontalLayout_2->addWidget(limitCheckBox);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        groupBySummaryCheckBox = new QCheckBox(ExpertInfoDialog);
        groupBySummaryCheckBox->setObjectName("groupBySummaryCheckBox");
        groupBySummaryCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(groupBySummaryCheckBox);

        horizontalSpacer = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(ExpertInfoDialog);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        searchLineEdit = new QLineEdit(ExpertInfoDialog);
        searchLineEdit->setObjectName("searchLineEdit");

        horizontalLayout_2->addWidget(searchLineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        severitiesPushButton = new QPushButton(ExpertInfoDialog);
        severitiesPushButton->setObjectName("severitiesPushButton");
        menuShowExpert = new QMenu(severitiesPushButton);
        menuShowExpert->setObjectName("menuShowExpert");

        horizontalLayout_2->addWidget(severitiesPushButton);

        horizontalLayout_2->setStretch(5, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(ExpertInfoDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        menuShowExpert->addAction(actionShowError);
        menuShowExpert->addAction(actionShowWarning);
        menuShowExpert->addAction(actionShowNote);
        menuShowExpert->addAction(actionShowChat);
        menuShowExpert->addAction(actionShowComment);

        retranslateUi(ExpertInfoDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ExpertInfoDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ExpertInfoDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ExpertInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ExpertInfoDialog)
    {
        ExpertInfoDialog->setWindowTitle(QCoreApplication::translate("ExpertInfoDialog", "Dialog", nullptr));
        actionShowError->setText(QCoreApplication::translate("ExpertInfoDialog", "Error", nullptr));
#if QT_CONFIG(tooltip)
        actionShowError->setToolTip(QCoreApplication::translate("ExpertInfoDialog", "Show error packets.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowWarning->setText(QCoreApplication::translate("ExpertInfoDialog", "Warning", nullptr));
#if QT_CONFIG(tooltip)
        actionShowWarning->setToolTip(QCoreApplication::translate("ExpertInfoDialog", "Show warning packets.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowNote->setText(QCoreApplication::translate("ExpertInfoDialog", "Note", nullptr));
#if QT_CONFIG(tooltip)
        actionShowNote->setToolTip(QCoreApplication::translate("ExpertInfoDialog", "Show note packets.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowChat->setText(QCoreApplication::translate("ExpertInfoDialog", "Chat", nullptr));
#if QT_CONFIG(tooltip)
        actionShowChat->setToolTip(QCoreApplication::translate("ExpertInfoDialog", "Show chat packets.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowComment->setText(QCoreApplication::translate("ExpertInfoDialog", "Comment", nullptr));
#if QT_CONFIG(tooltip)
        actionShowComment->setToolTip(QCoreApplication::translate("ExpertInfoDialog", "Show comment packets.", nullptr));
#endif // QT_CONFIG(tooltip)
        hintLabel->setText(QCoreApplication::translate("ExpertInfoDialog", "<small><i>A hint.</i></small>", nullptr));
        limitCheckBox->setText(QCoreApplication::translate("ExpertInfoDialog", "Limit to Display Filter", nullptr));
        groupBySummaryCheckBox->setText(QCoreApplication::translate("ExpertInfoDialog", "Group by summary", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("ExpertInfoDialog", "Search expert summaries.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("ExpertInfoDialog", "Search:", nullptr));
#if QT_CONFIG(tooltip)
        searchLineEdit->setToolTip(QCoreApplication::translate("ExpertInfoDialog", "Search expert summaries.", nullptr));
#endif // QT_CONFIG(tooltip)
        severitiesPushButton->setText(QCoreApplication::translate("ExpertInfoDialog", "Show\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpertInfoDialog: public Ui_ExpertInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERT_INFO_DIALOG_H
