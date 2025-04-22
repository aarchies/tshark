/********************************************************************************
** Form generated from reading UI file 'rtp_analysis_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTP_ANALYSIS_DIALOG_H
#define UI_RTP_ANALYSIS_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMenu>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "progress_frame.h"
#include "widgets/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_RtpAnalysisDialog
{
public:
    QAction *actionExportButton;
    QAction *actionSaveCsv;
    QAction *actionSaveOneCsv;
    QAction *actionSaveAllCsv;
    QAction *actionSaveGraph;
    QAction *actionGoToPacket;
    QAction *actionNextProblem;
    QAction *actionPrepareButton;
    QAction *actionPrepareFilterOne;
    QAction *actionPrepareFilterAll;
    QMenu *menuPrepareFilter;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *graphTab;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *streamGraph;
    QScrollArea *scrollarea;
    QWidget *qwidget;
    QVBoxLayout *layout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *hintLabel;
    ProgressFrame *progressFrame;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RtpAnalysisDialog)
    {
        if (RtpAnalysisDialog->objectName().isEmpty())
            RtpAnalysisDialog->setObjectName("RtpAnalysisDialog");
        RtpAnalysisDialog->resize(650, 475);
        actionExportButton = new QAction(RtpAnalysisDialog);
        actionExportButton->setObjectName("actionExportButton");
        actionSaveCsv = new QAction(RtpAnalysisDialog);
        actionSaveCsv->setObjectName("actionSaveCsv");
        actionSaveOneCsv = new QAction(RtpAnalysisDialog);
        actionSaveOneCsv->setObjectName("actionSaveOneCsv");
        actionSaveAllCsv = new QAction(RtpAnalysisDialog);
        actionSaveAllCsv->setObjectName("actionSaveAllCsv");
        actionSaveGraph = new QAction(RtpAnalysisDialog);
        actionSaveGraph->setObjectName("actionSaveGraph");
        actionGoToPacket = new QAction(RtpAnalysisDialog);
        actionGoToPacket->setObjectName("actionGoToPacket");
        actionNextProblem = new QAction(RtpAnalysisDialog);
        actionNextProblem->setObjectName("actionNextProblem");
        actionPrepareButton = new QAction(RtpAnalysisDialog);
        actionPrepareButton->setObjectName("actionPrepareButton");
        actionPrepareFilterOne = new QAction(RtpAnalysisDialog);
        actionPrepareFilterOne->setObjectName("actionPrepareFilterOne");
        actionPrepareFilterAll = new QAction(RtpAnalysisDialog);
        actionPrepareFilterAll->setObjectName("actionPrepareFilterAll");
        menuPrepareFilter = new QMenu(RtpAnalysisDialog);
        menuPrepareFilter->setObjectName("menuPrepareFilter");
        menuPrepareFilter->setToolTipsVisible(true);
        verticalLayout_3 = new QVBoxLayout(RtpAnalysisDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tabWidget = new QTabWidget(RtpAnalysisDialog);
        tabWidget->setObjectName("tabWidget");
        graphTab = new QWidget();
        graphTab->setObjectName("graphTab");
        verticalLayout_2 = new QVBoxLayout(graphTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        streamGraph = new QCustomPlot(graphTab);
        streamGraph->setObjectName("streamGraph");

        verticalLayout_2->addWidget(streamGraph);

        scrollarea = new QScrollArea(graphTab);
        scrollarea->setObjectName("scrollarea");
        scrollarea->setMinimumSize(QSize(0, 200));
        scrollarea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollarea->setWidgetResizable(true);
        qwidget = new QWidget();
        qwidget->setObjectName("qwidget");
        qwidget->setGeometry(QRect(0, 0, 606, 298));
        layout = new QVBoxLayout(qwidget);
        layout->setObjectName("layout");
        scrollarea->setWidget(qwidget);

        verticalLayout_2->addWidget(scrollarea);

        verticalLayout_2->setStretch(0, 1);
        tabWidget->addTab(graphTab, QString());

        horizontalLayout->addWidget(tabWidget);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        hintLabel = new QLabel(RtpAnalysisDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        horizontalLayout_2->addWidget(hintLabel);

        progressFrame = new ProgressFrame(RtpAnalysisDialog);
        progressFrame->setObjectName("progressFrame");
        progressFrame->setFrameShape(QFrame::NoFrame);
        progressFrame->setFrameShadow(QFrame::Plain);

        horizontalLayout_2->addWidget(progressFrame);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(RtpAnalysisDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout_3->addWidget(buttonBox);


        menuPrepareFilter->addAction(actionPrepareFilterOne);
        menuPrepareFilter->addAction(actionPrepareFilterAll);

        retranslateUi(RtpAnalysisDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RtpAnalysisDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RtpAnalysisDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RtpAnalysisDialog);
    } // setupUi

    void retranslateUi(QDialog *RtpAnalysisDialog)
    {
        RtpAnalysisDialog->setWindowTitle(QCoreApplication::translate("RtpAnalysisDialog", "Dialog", nullptr));
        actionExportButton->setText(QCoreApplication::translate("RtpAnalysisDialog", "&Export", nullptr));
#if QT_CONFIG(tooltip)
        actionExportButton->setToolTip(QCoreApplication::translate("RtpAnalysisDialog", "Open export menu", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveCsv->setText(QCoreApplication::translate("RtpAnalysisDialog", "CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveCsv->setToolTip(QCoreApplication::translate("RtpAnalysisDialog", "Save tables as CSV.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveOneCsv->setText(QCoreApplication::translate("RtpAnalysisDialog", "Current Tab Stream CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveOneCsv->setToolTip(QCoreApplication::translate("RtpAnalysisDialog", "Save the table on the current tab as CSV.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveAllCsv->setText(QCoreApplication::translate("RtpAnalysisDialog", "All Tab Streams CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAllCsv->setToolTip(QCoreApplication::translate("RtpAnalysisDialog", "Save the table from all tabs as CSV.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveGraph->setText(QCoreApplication::translate("RtpAnalysisDialog", "Save Graph", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveGraph->setToolTip(QCoreApplication::translate("RtpAnalysisDialog", "Save the graph image.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoToPacket->setText(QCoreApplication::translate("RtpAnalysisDialog", "Go to Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionGoToPacket->setToolTip(QCoreApplication::translate("RtpAnalysisDialog", "Select the corresponding packet in the packet list.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGoToPacket->setShortcut(QCoreApplication::translate("RtpAnalysisDialog", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNextProblem->setText(QCoreApplication::translate("RtpAnalysisDialog", "Next Problem Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionNextProblem->setToolTip(QCoreApplication::translate("RtpAnalysisDialog", "Go to the next problem packet", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNextProblem->setShortcut(QCoreApplication::translate("RtpAnalysisDialog", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrepareButton->setText(QCoreApplication::translate("RtpAnalysisDialog", "Prepare &Filter", nullptr));
#if QT_CONFIG(tooltip)
        actionPrepareButton->setToolTip(QCoreApplication::translate("RtpAnalysisDialog", "Prepare a filter matching the selected stream(s).", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPrepareFilterOne->setText(QCoreApplication::translate("RtpAnalysisDialog", "&Current Tab", nullptr));
#if QT_CONFIG(tooltip)
        actionPrepareFilterOne->setToolTip(QCoreApplication::translate("RtpAnalysisDialog", "Prepare a filter matching current tab.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPrepareFilterAll->setText(QCoreApplication::translate("RtpAnalysisDialog", "&All Tabs", nullptr));
#if QT_CONFIG(tooltip)
        actionPrepareFilterAll->setToolTip(QCoreApplication::translate("RtpAnalysisDialog", "Prepare a filter matching all tabs.", nullptr));
#endif // QT_CONFIG(tooltip)
        menuPrepareFilter->setTitle(QCoreApplication::translate("RtpAnalysisDialog", "Prepare &Filter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(graphTab), QCoreApplication::translate("RtpAnalysisDialog", "Graph", nullptr));
        hintLabel->setText(QCoreApplication::translate("RtpAnalysisDialog", "<small><i>A hint.</i></small>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RtpAnalysisDialog: public Ui_RtpAnalysisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTP_ANALYSIS_DIALOG_H
