/********************************************************************************
** Form generated from reading UI file 'lbm_lbtrm_transport_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LBM_LBTRM_TRANSPORT_DIALOG_H
#define UI_LBM_LBTRM_TRANSPORT_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/display_filter_edit.h"

QT_BEGIN_NAMESPACE

class Ui_LBMLBTRMTransportDialog
{
public:
    QAction *actionCopyAsCSV;
    QAction *actionCopyAsYAML;
    QAction *action_SourceDataFrames;
    QAction *action_SourceDataBytes;
    QAction *action_SourceDataFramesBytes;
    QAction *action_SourceRXDataFrames;
    QAction *action_SourceRXDataBytes;
    QAction *action_SourceRXDataFramesBytes;
    QAction *action_SourceNCFFrames;
    QAction *action_SourceNCFBytes;
    QAction *action_SourceNCFCount;
    QAction *action_SourceDataRate;
    QAction *action_SourceRXDataRate;
    QAction *action_SourceNCFFramesBytes;
    QAction *action_SourceNCFCountBytes;
    QAction *action_SourceNCFFramesCount;
    QAction *action_SourceNCFFramesCountBytes;
    QAction *action_SourceNCFRate;
    QAction *action_SourceSMFrames;
    QAction *action_SourceSMBytes;
    QAction *action_SourceSMFramesBytes;
    QAction *action_SourceSMRate;
    QAction *action_SourceAutoResizeColumns;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *sourcesTab;
    QHBoxLayout *horizontalLayout_5;
    QSplitter *splitter;
    QTreeWidget *sources_TreeWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *sources_detail_ComboBox;
    QLabel *label_3;
    QLabel *sources_detail_transport_Label;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *sources_detail_sqn_page;
    QHBoxLayout *horizontalLayout_4;
    QTreeWidget *sources_detail_sqn_TreeWidget;
    QWidget *sources_detail_ncf_sqn_page;
    QHBoxLayout *horizontalLayout_6;
    QTreeWidget *sources_detail_ncf_sqn_TreeWidget;
    QWidget *receiversTab;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter_2;
    QTreeWidget *receivers_TreeWidget;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *receivers_detail_transport_Label;
    QSpacerItem *horizontalSpacer_2;
    QTreeWidget *receivers_detail_TreeWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    DisplayFilterEdit *displayFilterLineEdit;
    QPushButton *applyFilterButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LBMLBTRMTransportDialog)
    {
        if (LBMLBTRMTransportDialog->objectName().isEmpty())
            LBMLBTRMTransportDialog->setObjectName("LBMLBTRMTransportDialog");
        LBMLBTRMTransportDialog->resize(841, 563);
        LBMLBTRMTransportDialog->setSizeGripEnabled(true);
        actionCopyAsCSV = new QAction(LBMLBTRMTransportDialog);
        actionCopyAsCSV->setObjectName("actionCopyAsCSV");
#if QT_CONFIG(shortcut)
        actionCopyAsCSV->setShortcut(QString::fromUtf8("Ctrl+C"));
#endif // QT_CONFIG(shortcut)
        actionCopyAsYAML = new QAction(LBMLBTRMTransportDialog);
        actionCopyAsYAML->setObjectName("actionCopyAsYAML");
#if QT_CONFIG(shortcut)
        actionCopyAsYAML->setShortcut(QString::fromUtf8("Ctrl+Y"));
#endif // QT_CONFIG(shortcut)
        action_SourceDataFrames = new QAction(LBMLBTRMTransportDialog);
        action_SourceDataFrames->setObjectName("action_SourceDataFrames");
        action_SourceDataFrames->setCheckable(true);
        action_SourceDataBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceDataBytes->setObjectName("action_SourceDataBytes");
        action_SourceDataBytes->setCheckable(true);
        action_SourceDataFramesBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceDataFramesBytes->setObjectName("action_SourceDataFramesBytes");
        action_SourceDataFramesBytes->setCheckable(true);
        action_SourceRXDataFrames = new QAction(LBMLBTRMTransportDialog);
        action_SourceRXDataFrames->setObjectName("action_SourceRXDataFrames");
        action_SourceRXDataFrames->setCheckable(true);
        action_SourceRXDataBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceRXDataBytes->setObjectName("action_SourceRXDataBytes");
        action_SourceRXDataBytes->setCheckable(true);
        action_SourceRXDataFramesBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceRXDataFramesBytes->setObjectName("action_SourceRXDataFramesBytes");
        action_SourceRXDataFramesBytes->setCheckable(true);
        action_SourceNCFFrames = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFFrames->setObjectName("action_SourceNCFFrames");
        action_SourceNCFFrames->setCheckable(true);
        action_SourceNCFBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFBytes->setObjectName("action_SourceNCFBytes");
        action_SourceNCFBytes->setCheckable(true);
        action_SourceNCFCount = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFCount->setObjectName("action_SourceNCFCount");
        action_SourceNCFCount->setCheckable(true);
        action_SourceDataRate = new QAction(LBMLBTRMTransportDialog);
        action_SourceDataRate->setObjectName("action_SourceDataRate");
        action_SourceDataRate->setCheckable(true);
        action_SourceRXDataRate = new QAction(LBMLBTRMTransportDialog);
        action_SourceRXDataRate->setObjectName("action_SourceRXDataRate");
        action_SourceRXDataRate->setCheckable(true);
        action_SourceNCFFramesBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFFramesBytes->setObjectName("action_SourceNCFFramesBytes");
        action_SourceNCFFramesBytes->setCheckable(true);
        action_SourceNCFCountBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFCountBytes->setObjectName("action_SourceNCFCountBytes");
        action_SourceNCFCountBytes->setCheckable(true);
        action_SourceNCFFramesCount = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFFramesCount->setObjectName("action_SourceNCFFramesCount");
        action_SourceNCFFramesCount->setCheckable(true);
        action_SourceNCFFramesCountBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFFramesCountBytes->setObjectName("action_SourceNCFFramesCountBytes");
        action_SourceNCFFramesCountBytes->setCheckable(true);
        action_SourceNCFRate = new QAction(LBMLBTRMTransportDialog);
        action_SourceNCFRate->setObjectName("action_SourceNCFRate");
        action_SourceNCFRate->setCheckable(true);
        action_SourceSMFrames = new QAction(LBMLBTRMTransportDialog);
        action_SourceSMFrames->setObjectName("action_SourceSMFrames");
        action_SourceSMFrames->setCheckable(true);
        action_SourceSMBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceSMBytes->setObjectName("action_SourceSMBytes");
        action_SourceSMBytes->setCheckable(true);
        action_SourceSMFramesBytes = new QAction(LBMLBTRMTransportDialog);
        action_SourceSMFramesBytes->setObjectName("action_SourceSMFramesBytes");
        action_SourceSMFramesBytes->setCheckable(true);
        action_SourceSMRate = new QAction(LBMLBTRMTransportDialog);
        action_SourceSMRate->setObjectName("action_SourceSMRate");
        action_SourceSMRate->setCheckable(true);
        action_SourceAutoResizeColumns = new QAction(LBMLBTRMTransportDialog);
        action_SourceAutoResizeColumns->setObjectName("action_SourceAutoResizeColumns");
        verticalLayout = new QVBoxLayout(LBMLBTRMTransportDialog);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(LBMLBTRMTransportDialog);
        tabWidget->setObjectName("tabWidget");
        sourcesTab = new QWidget();
        sourcesTab->setObjectName("sourcesTab");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sourcesTab->sizePolicy().hasHeightForWidth());
        sourcesTab->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(sourcesTab);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        splitter = new QSplitter(sourcesTab);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(10);
        sources_TreeWidget = new QTreeWidget(splitter);
        sources_TreeWidget->setObjectName("sources_TreeWidget");
        sizePolicy.setHeightForWidth(sources_TreeWidget->sizePolicy().hasHeightForWidth());
        sources_TreeWidget->setSizePolicy(sizePolicy);
        sources_TreeWidget->setMaximumSize(QSize(16777215, 16777215));
        splitter->addWidget(sources_TreeWidget);
        sources_TreeWidget->header()->setDefaultSectionSize(80);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        sources_detail_ComboBox = new QComboBox(layoutWidget);
        sources_detail_ComboBox->addItem(QString());
        sources_detail_ComboBox->addItem(QString());
        sources_detail_ComboBox->addItem(QString());
        sources_detail_ComboBox->addItem(QString());
        sources_detail_ComboBox->setObjectName("sources_detail_ComboBox");

        horizontalLayout_2->addWidget(sources_detail_ComboBox);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        sources_detail_transport_Label = new QLabel(layoutWidget);
        sources_detail_transport_Label->setObjectName("sources_detail_transport_Label");

        horizontalLayout_2->addWidget(sources_detail_transport_Label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        stackedWidget = new QStackedWidget(layoutWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setLineWidth(1);
        sources_detail_sqn_page = new QWidget();
        sources_detail_sqn_page->setObjectName("sources_detail_sqn_page");
        horizontalLayout_4 = new QHBoxLayout(sources_detail_sqn_page);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        sources_detail_sqn_TreeWidget = new QTreeWidget(sources_detail_sqn_page);
        sources_detail_sqn_TreeWidget->setObjectName("sources_detail_sqn_TreeWidget");

        horizontalLayout_4->addWidget(sources_detail_sqn_TreeWidget);

        stackedWidget->addWidget(sources_detail_sqn_page);
        sources_detail_ncf_sqn_page = new QWidget();
        sources_detail_ncf_sqn_page->setObjectName("sources_detail_ncf_sqn_page");
        horizontalLayout_6 = new QHBoxLayout(sources_detail_ncf_sqn_page);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        sources_detail_ncf_sqn_TreeWidget = new QTreeWidget(sources_detail_ncf_sqn_page);
        sources_detail_ncf_sqn_TreeWidget->setObjectName("sources_detail_ncf_sqn_TreeWidget");

        horizontalLayout_6->addWidget(sources_detail_ncf_sqn_TreeWidget);

        stackedWidget->addWidget(sources_detail_ncf_sqn_page);

        verticalLayout_2->addWidget(stackedWidget);

        splitter->addWidget(layoutWidget);

        horizontalLayout_5->addWidget(splitter);

        tabWidget->addTab(sourcesTab, QString());
        receiversTab = new QWidget();
        receiversTab->setObjectName("receiversTab");
        verticalLayout_4 = new QVBoxLayout(receiversTab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        splitter_2 = new QSplitter(receiversTab);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Vertical);
        splitter_2->setHandleWidth(10);
        receivers_TreeWidget = new QTreeWidget(splitter_2);
        receivers_TreeWidget->setObjectName("receivers_TreeWidget");
        splitter_2->addWidget(receivers_TreeWidget);
        layoutWidget_2 = new QWidget(splitter_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        receivers_detail_transport_Label = new QLabel(layoutWidget_2);
        receivers_detail_transport_Label->setObjectName("receivers_detail_transport_Label");

        horizontalLayout_3->addWidget(receivers_detail_transport_Label);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        receivers_detail_TreeWidget = new QTreeWidget(layoutWidget_2);
        receivers_detail_TreeWidget->setObjectName("receivers_detail_TreeWidget");

        verticalLayout_3->addWidget(receivers_detail_TreeWidget);

        splitter_2->addWidget(layoutWidget_2);

        verticalLayout_4->addWidget(splitter_2);

        tabWidget->addTab(receiversTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(LBMLBTRMTransportDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        displayFilterLineEdit = new DisplayFilterEdit(LBMLBTRMTransportDialog);
        displayFilterLineEdit->setObjectName("displayFilterLineEdit");

        horizontalLayout->addWidget(displayFilterLineEdit);

        applyFilterButton = new QPushButton(LBMLBTRMTransportDialog);
        applyFilterButton->setObjectName("applyFilterButton");

        horizontalLayout->addWidget(applyFilterButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(LBMLBTRMTransportDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LBMLBTRMTransportDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LBMLBTRMTransportDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LBMLBTRMTransportDialog, qOverload<>(&QDialog::reject));
        QObject::connect(sources_detail_ComboBox, SIGNAL(currentIndexChanged(int)), LBMLBTRMTransportDialog, SLOT(sourcesDetailCurrentChanged(int)));
        QObject::connect(sources_TreeWidget, SIGNAL(itemClicked(QTreeWidgetItem*,int)), LBMLBTRMTransportDialog, SLOT(sourcesItemClicked(QTreeWidgetItem*,int)));
        QObject::connect(receivers_TreeWidget, SIGNAL(itemClicked(QTreeWidgetItem*,int)), LBMLBTRMTransportDialog, SLOT(receiversItemClicked(QTreeWidgetItem*,int)));
        QObject::connect(receivers_detail_TreeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), LBMLBTRMTransportDialog, SLOT(receiversDetailItemDoubleClicked(QTreeWidgetItem*,int)));
        QObject::connect(sources_detail_sqn_TreeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), LBMLBTRMTransportDialog, SLOT(sourcesDetailItemDoubleClicked(QTreeWidgetItem*,int)));
        QObject::connect(sources_detail_ncf_sqn_TreeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), LBMLBTRMTransportDialog, SLOT(sourcesDetailItemDoubleClicked(QTreeWidgetItem*,int)));

        tabWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LBMLBTRMTransportDialog);
    } // setupUi

    void retranslateUi(QDialog *LBMLBTRMTransportDialog)
    {
        LBMLBTRMTransportDialog->setWindowTitle(QCoreApplication::translate("LBMLBTRMTransportDialog", "LBT-RM Transport Statistics", nullptr));
        actionCopyAsCSV->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "Copy as CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAsCSV->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Copy the tree as CSV", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyAsYAML->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "Copy as YAML", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAsYAML->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Copy the tree as YAML", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceDataFrames->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "Data frames", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceDataFrames->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the data frames column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceDataBytes->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "Data bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceDataBytes->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the data bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceDataFramesBytes->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "Data frames/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceDataFramesBytes->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the data frames/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceRXDataFrames->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "RX data frames", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceRXDataFrames->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the RX data frames column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceRXDataBytes->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "RX data bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceRXDataBytes->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the RX data bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceRXDataFramesBytes->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "RX data frames/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceRXDataFramesBytes->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the RX data frames/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFFrames->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF frames", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFFrames->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the NCF frames column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFBytes->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFBytes->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the NCF bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFCount->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF count", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFCount->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the NCF count column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceDataRate->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "Data rate", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceDataRate->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the data rate column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceRXDataRate->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "RX data rate", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceRXDataRate->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the RX data rate column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFFramesBytes->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF frames/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFFramesBytes->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the NCF frames/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFCountBytes->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF count/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFCountBytes->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the NCF count/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFFramesCount->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF frames/count", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFFramesCount->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the NCF frames/count column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFFramesCountBytes->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF frames/count/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFFramesCountBytes->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the NCF frames/count/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFRate->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF rate", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFRate->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the NCF rate column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceSMFrames->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "SM frames", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceSMFrames->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the SM frames column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceSMBytes->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "SM bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceSMBytes->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the SM bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceSMFramesBytes->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "SM frames/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceSMFramesBytes->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the SM frames/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceSMRate->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "SM rate", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceSMRate->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show the SM rate column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceAutoResizeColumns->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "Auto-resize columns to content", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceAutoResizeColumns->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Resize columns to content size", nullptr));
#endif // QT_CONFIG(tooltip)
        QTreeWidgetItem *___qtreewidgetitem = sources_TreeWidget->headerItem();
        ___qtreewidgetitem->setText(20, QCoreApplication::translate("LBMLBTRMTransportDialog", "SM rate", nullptr));
        ___qtreewidgetitem->setText(19, QCoreApplication::translate("LBMLBTRMTransportDialog", "SM frames/bytes", nullptr));
        ___qtreewidgetitem->setText(18, QCoreApplication::translate("LBMLBTRMTransportDialog", "SM bytes", nullptr));
        ___qtreewidgetitem->setText(17, QCoreApplication::translate("LBMLBTRMTransportDialog", "SM frames", nullptr));
        ___qtreewidgetitem->setText(16, QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF rate", nullptr));
        ___qtreewidgetitem->setText(15, QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF frames/count/bytes", nullptr));
        ___qtreewidgetitem->setText(14, QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF frames/count", nullptr));
        ___qtreewidgetitem->setText(13, QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF count/bytes", nullptr));
        ___qtreewidgetitem->setText(12, QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF frames/bytes", nullptr));
        ___qtreewidgetitem->setText(11, QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF bytes", nullptr));
        ___qtreewidgetitem->setText(10, QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF count", nullptr));
        ___qtreewidgetitem->setText(9, QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF frames", nullptr));
        ___qtreewidgetitem->setText(8, QCoreApplication::translate("LBMLBTRMTransportDialog", "RX data rate", nullptr));
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("LBMLBTRMTransportDialog", "RX data frames/bytes", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("LBMLBTRMTransportDialog", "RX data bytes", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("LBMLBTRMTransportDialog", "RX data frames", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("LBMLBTRMTransportDialog", "Data rate", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("LBMLBTRMTransportDialog", "Data frames/bytes", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("LBMLBTRMTransportDialog", "Data bytes", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("LBMLBTRMTransportDialog", "Data frames", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("LBMLBTRMTransportDialog", "Address/Transport", nullptr));
        label_2->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "Show", nullptr));
        sources_detail_ComboBox->setItemText(0, QCoreApplication::translate("LBMLBTRMTransportDialog", "Data", nullptr));
        sources_detail_ComboBox->setItemText(1, QCoreApplication::translate("LBMLBTRMTransportDialog", "RX Data", nullptr));
        sources_detail_ComboBox->setItemText(2, QCoreApplication::translate("LBMLBTRMTransportDialog", "NCF", nullptr));
        sources_detail_ComboBox->setItemText(3, QCoreApplication::translate("LBMLBTRMTransportDialog", "SM", nullptr));

        label_3->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "sequence numbers for transport", nullptr));
        sources_detail_transport_Label->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "XXXXX:XXX.XXX.XXX.XXX:XXXXX:XXXXXXXX:XXX.XXX.XXX.XXX:XXXXX", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = sources_detail_sqn_TreeWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("LBMLBTRMTransportDialog", "Frame", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("LBMLBTRMTransportDialog", "Count", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("LBMLBTRMTransportDialog", "SQN", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = sources_detail_ncf_sqn_TreeWidget->headerItem();
        ___qtreewidgetitem2->setText(2, QCoreApplication::translate("LBMLBTRMTransportDialog", "Frame", nullptr));
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("LBMLBTRMTransportDialog", "Count", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("LBMLBTRMTransportDialog", "SQN/Reason", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(sourcesTab), QCoreApplication::translate("LBMLBTRMTransportDialog", "Sources", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = receivers_TreeWidget->headerItem();
        ___qtreewidgetitem3->setText(4, QCoreApplication::translate("LBMLBTRMTransportDialog", "NAK rate", nullptr));
        ___qtreewidgetitem3->setText(3, QCoreApplication::translate("LBMLBTRMTransportDialog", "NAK bytes", nullptr));
        ___qtreewidgetitem3->setText(2, QCoreApplication::translate("LBMLBTRMTransportDialog", "NAK count", nullptr));
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("LBMLBTRMTransportDialog", "NAK frames", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("LBMLBTRMTransportDialog", "Address/Transport", nullptr));
        label_4->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "NAK sequence numbers for transport", nullptr));
        receivers_detail_transport_Label->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "XXXXX:XXX.XXX.XXX.XXX:XXXXX:XXXXXXXX:XXX.XXX.XXX.XXX:XXXXX", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = receivers_detail_TreeWidget->headerItem();
        ___qtreewidgetitem4->setText(2, QCoreApplication::translate("LBMLBTRMTransportDialog", "Frame", nullptr));
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("LBMLBTRMTransportDialog", "Count", nullptr));
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("LBMLBTRMTransportDialog", "SQN", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(receiversTab), QCoreApplication::translate("LBMLBTRMTransportDialog", "Receivers", nullptr));
        label->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "Display filter:", nullptr));
#if QT_CONFIG(tooltip)
        applyFilterButton->setToolTip(QCoreApplication::translate("LBMLBTRMTransportDialog", "Regenerate statistics using this display filter", nullptr));
#endif // QT_CONFIG(tooltip)
        applyFilterButton->setText(QCoreApplication::translate("LBMLBTRMTransportDialog", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LBMLBTRMTransportDialog: public Ui_LBMLBTRMTransportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LBM_LBTRM_TRANSPORT_DIALOG_H
