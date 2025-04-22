/********************************************************************************
** Form generated from reading UI file 'rtp_stream_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTP_STREAM_DIALOG_H
#define UI_RTP_STREAM_DIALOG_H

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
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RtpStreamDialog
{
public:
    QAction *actionFindReverse;
    QAction *actionFindReverseNormal;
    QAction *actionFindReversePair;
    QAction *actionFindReverseSingle;
    QAction *actionMarkPackets;
    QAction *actionSelectAll;
    QAction *actionSelectNone;
    QAction *actionSelectInvert;
    QAction *actionGoToSetup;
    QAction *actionPrepareFilter;
    QAction *actionExportAsRtpDump;
    QAction *actionAnalyze;
    QAction *actionCopyButton;
    QAction *actionCopyAsCsv;
    QAction *actionCopyAsYaml;
    QMenu *menuFindReverse;
    QMenu *menuSelect;
    QVBoxLayout *verticalLayout;
    QTreeWidget *streamTreeWidget;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *displayFilterCheckBox;
    QCheckBox *todCheckBox;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RtpStreamDialog)
    {
        if (RtpStreamDialog->objectName().isEmpty())
            RtpStreamDialog->setObjectName("RtpStreamDialog");
        RtpStreamDialog->resize(600, 460);
        actionFindReverse = new QAction(RtpStreamDialog);
        actionFindReverse->setObjectName("actionFindReverse");
        actionFindReverseNormal = new QAction(RtpStreamDialog);
        actionFindReverseNormal->setObjectName("actionFindReverseNormal");
        actionFindReversePair = new QAction(RtpStreamDialog);
        actionFindReversePair->setObjectName("actionFindReversePair");
        actionFindReverseSingle = new QAction(RtpStreamDialog);
        actionFindReverseSingle->setObjectName("actionFindReverseSingle");
        actionMarkPackets = new QAction(RtpStreamDialog);
        actionMarkPackets->setObjectName("actionMarkPackets");
        actionSelectAll = new QAction(RtpStreamDialog);
        actionSelectAll->setObjectName("actionSelectAll");
#if QT_CONFIG(shortcut)
        actionSelectAll->setShortcut(QString::fromUtf8("Ctrl+A"));
#endif // QT_CONFIG(shortcut)
        actionSelectNone = new QAction(RtpStreamDialog);
        actionSelectNone->setObjectName("actionSelectNone");
#if QT_CONFIG(shortcut)
        actionSelectNone->setShortcut(QString::fromUtf8("Ctrl+Shift+A"));
#endif // QT_CONFIG(shortcut)
        actionSelectInvert = new QAction(RtpStreamDialog);
        actionSelectInvert->setObjectName("actionSelectInvert");
#if QT_CONFIG(shortcut)
        actionSelectInvert->setShortcut(QString::fromUtf8("Ctrl+I"));
#endif // QT_CONFIG(shortcut)
        actionGoToSetup = new QAction(RtpStreamDialog);
        actionGoToSetup->setObjectName("actionGoToSetup");
        actionPrepareFilter = new QAction(RtpStreamDialog);
        actionPrepareFilter->setObjectName("actionPrepareFilter");
        actionExportAsRtpDump = new QAction(RtpStreamDialog);
        actionExportAsRtpDump->setObjectName("actionExportAsRtpDump");
        actionAnalyze = new QAction(RtpStreamDialog);
        actionAnalyze->setObjectName("actionAnalyze");
        actionCopyButton = new QAction(RtpStreamDialog);
        actionCopyButton->setObjectName("actionCopyButton");
        actionCopyAsCsv = new QAction(RtpStreamDialog);
        actionCopyAsCsv->setObjectName("actionCopyAsCsv");
        actionCopyAsYaml = new QAction(RtpStreamDialog);
        actionCopyAsYaml->setObjectName("actionCopyAsYaml");
        menuFindReverse = new QMenu(RtpStreamDialog);
        menuFindReverse->setObjectName("menuFindReverse");
        menuFindReverse->setToolTipsVisible(true);
        menuSelect = new QMenu(RtpStreamDialog);
        menuSelect->setObjectName("menuSelect");
        menuSelect->setToolTipsVisible(true);
        verticalLayout = new QVBoxLayout(RtpStreamDialog);
        verticalLayout->setObjectName("verticalLayout");
        streamTreeWidget = new QTreeWidget(RtpStreamDialog);
        streamTreeWidget->setObjectName("streamTreeWidget");
        streamTreeWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        streamTreeWidget->setTextElideMode(Qt::ElideMiddle);
        streamTreeWidget->setRootIsDecorated(false);
        streamTreeWidget->setUniformRowHeights(true);
        streamTreeWidget->setItemsExpandable(false);
        streamTreeWidget->setSortingEnabled(true);
        streamTreeWidget->setExpandsOnDoubleClick(false);
        streamTreeWidget->header()->setDefaultSectionSize(50);

        verticalLayout->addWidget(streamTreeWidget);

        hintLabel = new QLabel(RtpStreamDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        displayFilterCheckBox = new QCheckBox(RtpStreamDialog);
        displayFilterCheckBox->setObjectName("displayFilterCheckBox");

        horizontalLayout->addWidget(displayFilterCheckBox);

        todCheckBox = new QCheckBox(RtpStreamDialog);
        todCheckBox->setObjectName("todCheckBox");

        horizontalLayout->addWidget(todCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(RtpStreamDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        menuFindReverse->addAction(actionFindReverseNormal);
        menuFindReverse->addAction(actionFindReversePair);
        menuFindReverse->addAction(actionFindReverseSingle);
        menuSelect->addAction(actionSelectAll);
        menuSelect->addAction(actionSelectNone);
        menuSelect->addAction(actionSelectInvert);

        retranslateUi(RtpStreamDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RtpStreamDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RtpStreamDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RtpStreamDialog);
    } // setupUi

    void retranslateUi(QDialog *RtpStreamDialog)
    {
        RtpStreamDialog->setWindowTitle(QCoreApplication::translate("RtpStreamDialog", "Dialog", nullptr));
        actionFindReverse->setText(QCoreApplication::translate("RtpStreamDialog", "Find &Reverse", nullptr));
#if QT_CONFIG(tooltip)
        actionFindReverse->setToolTip(QCoreApplication::translate("RtpStreamDialog", "All forward/reverse stream actions", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFindReverseNormal->setText(QCoreApplication::translate("RtpStreamDialog", "Find &Reverse", nullptr));
#if QT_CONFIG(tooltip)
        actionFindReverseNormal->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Find the reverse stream matching the selected forward stream.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFindReverseNormal->setShortcut(QCoreApplication::translate("RtpStreamDialog", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFindReversePair->setText(QCoreApplication::translate("RtpStreamDialog", "Find All &Pairs", nullptr));
#if QT_CONFIG(tooltip)
        actionFindReversePair->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Select all streams which are paired in forward/reverse relation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFindReversePair->setShortcut(QCoreApplication::translate("RtpStreamDialog", "Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFindReverseSingle->setText(QCoreApplication::translate("RtpStreamDialog", "Find Only &Singles", nullptr));
#if QT_CONFIG(tooltip)
        actionFindReverseSingle->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Find all streams which don't have paired reverse stream", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFindReverseSingle->setShortcut(QCoreApplication::translate("RtpStreamDialog", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMarkPackets->setText(QCoreApplication::translate("RtpStreamDialog", "Mark Packets", nullptr));
#if QT_CONFIG(tooltip)
        actionMarkPackets->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Mark the packets of the selected stream(s).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionMarkPackets->setShortcut(QCoreApplication::translate("RtpStreamDialog", "M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectAll->setText(QCoreApplication::translate("RtpStreamDialog", "All", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectAll->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Select all", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectNone->setText(QCoreApplication::translate("RtpStreamDialog", "None", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectNone->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Clear selection", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSelectInvert->setText(QCoreApplication::translate("RtpStreamDialog", "Invert", nullptr));
#if QT_CONFIG(tooltip)
        actionSelectInvert->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Invert selection", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoToSetup->setText(QCoreApplication::translate("RtpStreamDialog", "Go To Setup", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToSetup->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Go to the setup packet for this stream.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoToSetup->setShortcut(QCoreApplication::translate("RtpStreamDialog", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrepareFilter->setText(QCoreApplication::translate("RtpStreamDialog", "Prepare &Filter", nullptr));
#if QT_CONFIG(tooltip)
        actionPrepareFilter->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Prepare a filter matching the selected stream(s).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPrepareFilter->setShortcut(QCoreApplication::translate("RtpStreamDialog", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExportAsRtpDump->setText(QCoreApplication::translate("RtpStreamDialog", "&Export", nullptr));
#if QT_CONFIG(tooltip)
        actionExportAsRtpDump->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Export the stream payload as rtpdump", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExportAsRtpDump->setShortcut(QCoreApplication::translate("RtpStreamDialog", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAnalyze->setText(QCoreApplication::translate("RtpStreamDialog", "&Analyze", nullptr));
#if QT_CONFIG(tooltip)
        actionAnalyze->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Open the analysis window for the selected stream(s) and add it to it", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAnalyze->setShortcut(QCoreApplication::translate("RtpStreamDialog", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopyButton->setText(QCoreApplication::translate("RtpStreamDialog", "Cop&y", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyButton->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Open copy menu", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyAsCsv->setText(QCoreApplication::translate("RtpStreamDialog", "Copy as CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAsCsv->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Copy stream list as CSV.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyAsYaml->setText(QCoreApplication::translate("RtpStreamDialog", "Copy as YAML", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAsYaml->setToolTip(QCoreApplication::translate("RtpStreamDialog", "Copy stream list as YAML.", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFindReverse->setTitle(QCoreApplication::translate("RtpStreamDialog", "Find &Reverse", nullptr));
        menuSelect->setTitle(QCoreApplication::translate("RtpStreamDialog", "Select", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = streamTreeWidget->headerItem();
        ___qtreewidgetitem->setText(16, QCoreApplication::translate("RtpStreamDialog", "Status", nullptr));
        ___qtreewidgetitem->setText(15, QCoreApplication::translate("RtpStreamDialog", "Max Jitter", nullptr));
        ___qtreewidgetitem->setText(14, QCoreApplication::translate("RtpStreamDialog", "Mean Jitter", nullptr));
        ___qtreewidgetitem->setText(13, QCoreApplication::translate("RtpStreamDialog", "Min Jitter", nullptr));
        ___qtreewidgetitem->setText(12, QCoreApplication::translate("RtpStreamDialog", "Max Delta (ms)", nullptr));
        ___qtreewidgetitem->setText(11, QCoreApplication::translate("RtpStreamDialog", "Mean Delta (ms)", nullptr));
        ___qtreewidgetitem->setText(10, QCoreApplication::translate("RtpStreamDialog", "Min Delta (ms)", nullptr));
        ___qtreewidgetitem->setText(9, QCoreApplication::translate("RtpStreamDialog", "Lost", nullptr));
        ___qtreewidgetitem->setText(8, QCoreApplication::translate("RtpStreamDialog", "Packets", nullptr));
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("RtpStreamDialog", "Payload", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("RtpStreamDialog", "Duration", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("RtpStreamDialog", "Start Time", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("RtpStreamDialog", "SSRC", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("RtpStreamDialog", "Destination Port", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("RtpStreamDialog", "Destination Address", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("RtpStreamDialog", "Source Port", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("RtpStreamDialog", "Source Address", nullptr));
        hintLabel->setText(QCoreApplication::translate("RtpStreamDialog", "<small><i>A hint.</i></small>", nullptr));
#if QT_CONFIG(tooltip)
        displayFilterCheckBox->setToolTip(QCoreApplication::translate("RtpStreamDialog", "<html><head/><body><p>Only show conversations matching the current display filter</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        displayFilterCheckBox->setText(QCoreApplication::translate("RtpStreamDialog", "Limit to display filter", nullptr));
        todCheckBox->setText(QCoreApplication::translate("RtpStreamDialog", "Time of Day", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RtpStreamDialog: public Ui_RtpStreamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTP_STREAM_DIALOG_H
