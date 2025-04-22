/********************************************************************************
** Form generated from reading UI file 'voip_calls_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOIP_CALLS_DIALOG_H
#define UI_VOIP_CALLS_DIALOG_H

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
#include <QtWidgets/QMenu>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VoipCallsDialog
{
public:
    QAction *actionFlowSequence;
    QAction *actionPrepareFilter;
    QAction *actionCopyButton;
    QAction *actionSelectAll;
    QAction *actionSelectNone;
    QAction *actionSelectInvert;
    QAction *actionSelectRtpStreams;
    QAction *actionDeselectRtpStreams;
    QMenu *menuSelect;
    QVBoxLayout *verticalLayout;
    QTreeView *callTreeView;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *displayFilterCheckBox;
    QCheckBox *todCheckBox;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VoipCallsDialog)
    {
        if (VoipCallsDialog->objectName().isEmpty())
            VoipCallsDialog->setObjectName("VoipCallsDialog");
        VoipCallsDialog->resize(750, 430);
        actionFlowSequence = new QAction(VoipCallsDialog);
        actionFlowSequence->setObjectName("actionFlowSequence");
        actionPrepareFilter = new QAction(VoipCallsDialog);
        actionPrepareFilter->setObjectName("actionPrepareFilter");
        actionCopyButton = new QAction(VoipCallsDialog);
        actionCopyButton->setObjectName("actionCopyButton");
        actionSelectAll = new QAction(VoipCallsDialog);
        actionSelectAll->setObjectName("actionSelectAll");
#if QT_CONFIG(shortcut)
        actionSelectAll->setShortcut(QString::fromUtf8("Ctrl+A"));
#endif // QT_CONFIG(shortcut)
        actionSelectNone = new QAction(VoipCallsDialog);
        actionSelectNone->setObjectName("actionSelectNone");
#if QT_CONFIG(shortcut)
        actionSelectNone->setShortcut(QString::fromUtf8("Ctrl+Shift+A"));
#endif // QT_CONFIG(shortcut)
        actionSelectInvert = new QAction(VoipCallsDialog);
        actionSelectInvert->setObjectName("actionSelectInvert");
#if QT_CONFIG(shortcut)
        actionSelectInvert->setShortcut(QString::fromUtf8("Ctrl+I"));
#endif // QT_CONFIG(shortcut)
        actionSelectRtpStreams = new QAction(VoipCallsDialog);
        actionSelectRtpStreams->setObjectName("actionSelectRtpStreams");
        actionDeselectRtpStreams = new QAction(VoipCallsDialog);
        actionDeselectRtpStreams->setObjectName("actionDeselectRtpStreams");
        menuSelect = new QMenu(VoipCallsDialog);
        menuSelect->setObjectName("menuSelect");
        menuSelect->setToolTipsVisible(true);
        verticalLayout = new QVBoxLayout(VoipCallsDialog);
        verticalLayout->setObjectName("verticalLayout");
        callTreeView = new QTreeView(VoipCallsDialog);
        callTreeView->setObjectName("callTreeView");
        callTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        callTreeView->setTextElideMode(Qt::ElideMiddle);
        callTreeView->setRootIsDecorated(false);
        callTreeView->setUniformRowHeights(true);
        callTreeView->setItemsExpandable(false);

        verticalLayout->addWidget(callTreeView);

        hintLabel = new QLabel(VoipCallsDialog);
        hintLabel->setObjectName("hintLabel");

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        displayFilterCheckBox = new QCheckBox(VoipCallsDialog);
        displayFilterCheckBox->setObjectName("displayFilterCheckBox");

        horizontalLayout->addWidget(displayFilterCheckBox);

        todCheckBox = new QCheckBox(VoipCallsDialog);
        todCheckBox->setObjectName("todCheckBox");

        horizontalLayout->addWidget(todCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(VoipCallsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        menuSelect->addAction(actionSelectAll);
        menuSelect->addAction(actionSelectNone);
        menuSelect->addAction(actionSelectInvert);

        retranslateUi(VoipCallsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, VoipCallsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, VoipCallsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(VoipCallsDialog);
    } // setupUi

    void retranslateUi(QDialog *VoipCallsDialog)
    {
        VoipCallsDialog->setWindowTitle(QCoreApplication::translate("VoipCallsDialog", "VoIP Calls", nullptr));
        actionFlowSequence->setText(QCoreApplication::translate("VoipCallsDialog", "Flow &Sequence", nullptr));
#if QT_CONFIG(tooltip)
        actionFlowSequence->setToolTip(QCoreApplication::translate("VoipCallsDialog", "Show flow sequence for selected call(s).", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPrepareFilter->setText(QCoreApplication::translate("VoipCallsDialog", "Prepare &Filter", nullptr));
#if QT_CONFIG(tooltip)
        actionPrepareFilter->setToolTip(QCoreApplication::translate("VoipCallsDialog", "Prepare a filter matching the selected calls(s).", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyButton->setText(QCoreApplication::translate("VoipCallsDialog", "Cop&y", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyButton->setToolTip(QCoreApplication::translate("VoipCallsDialog", "Open copy menu", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectAll->setText(QCoreApplication::translate("VoipCallsDialog", "All", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectAll->setToolTip(QCoreApplication::translate("VoipCallsDialog", "Select all", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectNone->setText(QCoreApplication::translate("VoipCallsDialog", "None", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectNone->setToolTip(QCoreApplication::translate("VoipCallsDialog", "Clear selection", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectInvert->setText(QCoreApplication::translate("VoipCallsDialog", "Invert", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectInvert->setToolTip(QCoreApplication::translate("VoipCallsDialog", "Invert selection", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectRtpStreams->setText(QCoreApplication::translate("VoipCallsDialog", "Select related RTP streams", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectRtpStreams->setToolTip(QCoreApplication::translate("VoipCallsDialog", "Select RTP streams related to selected calls in RTP Streams dialog", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSelectRtpStreams->setShortcut(QCoreApplication::translate("VoipCallsDialog", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDeselectRtpStreams->setText(QCoreApplication::translate("VoipCallsDialog", "Deselect related RTP Streams", nullptr));
#if QT_CONFIG(tooltip)
        actionDeselectRtpStreams->setToolTip(QCoreApplication::translate("VoipCallsDialog", "Select RTP streams related to selected calls in RTP Streams dialog", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDeselectRtpStreams->setShortcut(QCoreApplication::translate("VoipCallsDialog", "D", nullptr));
#endif // QT_CONFIG(shortcut)
        menuSelect->setTitle(QCoreApplication::translate("VoipCallsDialog", "Select", nullptr));
        hintLabel->setText(QCoreApplication::translate("VoipCallsDialog", "<small></small>", nullptr));
#if QT_CONFIG(tooltip)
        displayFilterCheckBox->setToolTip(QCoreApplication::translate("VoipCallsDialog", "<html><head/><body><p>Only show conversations matching the current display filter</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        displayFilterCheckBox->setText(QCoreApplication::translate("VoipCallsDialog", "Limit to display filter", nullptr));
        todCheckBox->setText(QCoreApplication::translate("VoipCallsDialog", "Time of Day", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VoipCallsDialog: public Ui_VoipCallsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOIP_CALLS_DIALOG_H
