/********************************************************************************
** Form generated from reading UI file 'iax2_analysis_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IAX2_ANALYSIS_DIALOG_H
#define UI_IAX2_ANALYSIS_DIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "progress_frame.h"
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Iax2AnalysisDialog
{
public:
    QAction *actionSaveAudio;
    QAction *actionSaveForwardAudio;
    QAction *actionSaveReverseAudio;
    QAction *actionSaveCsv;
    QAction *actionSaveForwardCsv;
    QAction *actionSaveReverseCsv;
    QAction *actionSaveGraph;
    QAction *actionGoToPacket;
    QAction *actionNextProblem;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *statisticsLabel;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;
    QTreeWidget *forwardTreeWidget;
    QTreeWidget *reverseTreeWidget;
    QWidget *graphTab;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *streamGraph;
    QHBoxLayout *forwardHorizontalLayout;
    QCheckBox *fJitterCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *fDiffCheckBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *reverseHorizontalLayout;
    QCheckBox *rJitterCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *rDiffCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *hintLabel;
    ProgressFrame *progressFrame;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Iax2AnalysisDialog)
    {
        if (Iax2AnalysisDialog->objectName().isEmpty())
            Iax2AnalysisDialog->setObjectName("Iax2AnalysisDialog");
        Iax2AnalysisDialog->resize(650, 475);
        actionSaveAudio = new QAction(Iax2AnalysisDialog);
        actionSaveAudio->setObjectName("actionSaveAudio");
        actionSaveForwardAudio = new QAction(Iax2AnalysisDialog);
        actionSaveForwardAudio->setObjectName("actionSaveForwardAudio");
        actionSaveReverseAudio = new QAction(Iax2AnalysisDialog);
        actionSaveReverseAudio->setObjectName("actionSaveReverseAudio");
        actionSaveCsv = new QAction(Iax2AnalysisDialog);
        actionSaveCsv->setObjectName("actionSaveCsv");
        actionSaveForwardCsv = new QAction(Iax2AnalysisDialog);
        actionSaveForwardCsv->setObjectName("actionSaveForwardCsv");
        actionSaveReverseCsv = new QAction(Iax2AnalysisDialog);
        actionSaveReverseCsv->setObjectName("actionSaveReverseCsv");
        actionSaveGraph = new QAction(Iax2AnalysisDialog);
        actionSaveGraph->setObjectName("actionSaveGraph");
        actionGoToPacket = new QAction(Iax2AnalysisDialog);
        actionGoToPacket->setObjectName("actionGoToPacket");
        actionNextProblem = new QAction(Iax2AnalysisDialog);
        actionNextProblem->setObjectName("actionNextProblem");
        verticalLayout_3 = new QVBoxLayout(Iax2AnalysisDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        statisticsLabel = new QLabel(Iax2AnalysisDialog);
        statisticsLabel->setObjectName("statisticsLabel");
        statisticsLabel->setTextFormat(Qt::RichText);
        statisticsLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(statisticsLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        tabWidget = new QTabWidget(Iax2AnalysisDialog);
        tabWidget->setObjectName("tabWidget");
        forwardTreeWidget = new QTreeWidget();
        forwardTreeWidget->setObjectName("forwardTreeWidget");
        forwardTreeWidget->setRootIsDecorated(false);
        forwardTreeWidget->setItemsExpandable(false);
        forwardTreeWidget->setExpandsOnDoubleClick(false);
        tabWidget->addTab(forwardTreeWidget, QString());
        reverseTreeWidget = new QTreeWidget();
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        reverseTreeWidget->setHeaderItem(__qtreewidgetitem);
        reverseTreeWidget->setObjectName("reverseTreeWidget");
        reverseTreeWidget->setRootIsDecorated(false);
        reverseTreeWidget->setItemsExpandable(false);
        tabWidget->addTab(reverseTreeWidget, QString());
        graphTab = new QWidget();
        graphTab->setObjectName("graphTab");
        verticalLayout_2 = new QVBoxLayout(graphTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        streamGraph = new QCustomPlot(graphTab);
        streamGraph->setObjectName("streamGraph");

        verticalLayout_2->addWidget(streamGraph);

        forwardHorizontalLayout = new QHBoxLayout();
        forwardHorizontalLayout->setObjectName("forwardHorizontalLayout");
        fJitterCheckBox = new QCheckBox(graphTab);
        fJitterCheckBox->setObjectName("fJitterCheckBox");

        forwardHorizontalLayout->addWidget(fJitterCheckBox);

        horizontalSpacer_3 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        forwardHorizontalLayout->addItem(horizontalSpacer_3);

        fDiffCheckBox = new QCheckBox(graphTab);
        fDiffCheckBox->setObjectName("fDiffCheckBox");

        forwardHorizontalLayout->addWidget(fDiffCheckBox);

        horizontalSpacer = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        forwardHorizontalLayout->addItem(horizontalSpacer);

        forwardHorizontalLayout->setStretch(3, 1);

        verticalLayout_2->addLayout(forwardHorizontalLayout);

        reverseHorizontalLayout = new QHBoxLayout();
        reverseHorizontalLayout->setObjectName("reverseHorizontalLayout");
        rJitterCheckBox = new QCheckBox(graphTab);
        rJitterCheckBox->setObjectName("rJitterCheckBox");

        reverseHorizontalLayout->addWidget(rJitterCheckBox);

        horizontalSpacer_4 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        reverseHorizontalLayout->addItem(horizontalSpacer_4);

        rDiffCheckBox = new QCheckBox(graphTab);
        rDiffCheckBox->setObjectName("rDiffCheckBox");

        reverseHorizontalLayout->addWidget(rDiffCheckBox);

        horizontalSpacer_2 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        reverseHorizontalLayout->addItem(horizontalSpacer_2);

        reverseHorizontalLayout->setStretch(3, 1);

        verticalLayout_2->addLayout(reverseHorizontalLayout);

        verticalLayout_2->setStretch(0, 1);
        tabWidget->addTab(graphTab, QString());

        horizontalLayout->addWidget(tabWidget);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        hintLabel = new QLabel(Iax2AnalysisDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        horizontalLayout_2->addWidget(hintLabel);

        progressFrame = new ProgressFrame(Iax2AnalysisDialog);
        progressFrame->setObjectName("progressFrame");
        progressFrame->setFrameShape(QFrame::NoFrame);
        progressFrame->setFrameShadow(QFrame::Plain);

        horizontalLayout_2->addWidget(progressFrame);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(Iax2AnalysisDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Save);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(Iax2AnalysisDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Iax2AnalysisDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Iax2AnalysisDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Iax2AnalysisDialog);
    } // setupUi

    void retranslateUi(QDialog *Iax2AnalysisDialog)
    {
        Iax2AnalysisDialog->setWindowTitle(QCoreApplication::translate("Iax2AnalysisDialog", "Dialog", nullptr));
        actionSaveAudio->setText(QCoreApplication::translate("Iax2AnalysisDialog", "Audio", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAudio->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "Save the audio data for both channels.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveForwardAudio->setText(QCoreApplication::translate("Iax2AnalysisDialog", "Forward Stream Audio", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveForwardAudio->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "Save the forward stream audio data.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveReverseAudio->setText(QCoreApplication::translate("Iax2AnalysisDialog", "Reverse Stream Audio", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveReverseAudio->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "Save the reverse stream audio data.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveCsv->setText(QCoreApplication::translate("Iax2AnalysisDialog", "CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveCsv->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "Save both tables as CSV.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveForwardCsv->setText(QCoreApplication::translate("Iax2AnalysisDialog", "Forward Stream CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveForwardCsv->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "Save the forward table as CSV.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveReverseCsv->setText(QCoreApplication::translate("Iax2AnalysisDialog", "Reverse Stream CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveReverseCsv->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "Save the reverse table as CSV.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveGraph->setText(QCoreApplication::translate("Iax2AnalysisDialog", "Save Graph", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveGraph->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "Save the graph image.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoToPacket->setText(QCoreApplication::translate("Iax2AnalysisDialog", "Go to Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPacket->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "Select the corresponding packet in the packet list.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoToPacket->setShortcut(QCoreApplication::translate("Iax2AnalysisDialog", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNextProblem->setText(QCoreApplication::translate("Iax2AnalysisDialog", "Next Problem Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionNextProblem->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "Go to the next problem packet", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNextProblem->setShortcut(QCoreApplication::translate("Iax2AnalysisDialog", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        statisticsLabel->setText(QCoreApplication::translate("Iax2AnalysisDialog", "<html><head/><body><p><span style=\" font-size:medium; font-weight:600;\">Forward</span></p><p><span style=\" font-size:medium; font-weight:600;\">Reverse</span></p></body></html>", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = forwardTreeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("Iax2AnalysisDialog", "Length", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("Iax2AnalysisDialog", "Status", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("Iax2AnalysisDialog", "Bandwidth", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("Iax2AnalysisDialog", "Jitter (ms)", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("Iax2AnalysisDialog", "Delta (ms)", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Iax2AnalysisDialog", "Packet", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(forwardTreeWidget), QCoreApplication::translate("Iax2AnalysisDialog", "Forward", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(reverseTreeWidget), QCoreApplication::translate("Iax2AnalysisDialog", "Reverse", nullptr));
#if QT_CONFIG(tooltip)
        fJitterCheckBox->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "<html><head/><body><p>Show or hide forward jitter values.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        fJitterCheckBox->setText(QCoreApplication::translate("Iax2AnalysisDialog", "Forward Jitter", nullptr));
#if QT_CONFIG(tooltip)
        fDiffCheckBox->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "<html><head/><body><p>Show or hide forward difference values.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        fDiffCheckBox->setText(QCoreApplication::translate("Iax2AnalysisDialog", "Forward Difference", nullptr));
#if QT_CONFIG(tooltip)
        rJitterCheckBox->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "<html><head/><body><p>Show or hide reverse jitter values.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rJitterCheckBox->setText(QCoreApplication::translate("Iax2AnalysisDialog", "Reverse Jitter", nullptr));
#if QT_CONFIG(tooltip)
        rDiffCheckBox->setToolTip(QCoreApplication::translate("Iax2AnalysisDialog", "<html><head/><body><p>Show or hide reverse difference values.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rDiffCheckBox->setText(QCoreApplication::translate("Iax2AnalysisDialog", "Reverse Difference", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(graphTab), QCoreApplication::translate("Iax2AnalysisDialog", "Graph", nullptr));
        hintLabel->setText(QCoreApplication::translate("Iax2AnalysisDialog", "<small><i>A hint.</i></small>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Iax2AnalysisDialog: public Ui_Iax2AnalysisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IAX2_ANALYSIS_DIALOG_H
