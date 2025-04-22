/********************************************************************************
** Form generated from reading UI file 'lbm_lbtru_transport_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LBM_LBTRU_TRANSPORT_DIALOG_H
#define UI_LBM_LBTRU_TRANSPORT_DIALOG_H

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

class Ui_LBMLBTRUTransportDialog
{
public:
    QAction *actionCopyAsCSV;
    QAction *actionCopyAsYAML;
    QAction *action_SourceDataFrames;
    QAction *action_SourceDataBytes;
    QAction *action_SourceDataFramesBytes;
    QAction *action_SourceDataRate;
    QAction *action_SourceRXDataFrames;
    QAction *action_SourceRXDataBytes;
    QAction *action_SourceRXDataFramesBytes;
    QAction *action_SourceRXDataRate;
    QAction *action_SourceNCFFrames;
    QAction *action_SourceNCFCount;
    QAction *action_SourceNCFBytes;
    QAction *action_SourceNCFFramesBytes;
    QAction *action_SourceNCFCountBytes;
    QAction *action_SourceNCFFramesCount;
    QAction *action_SourceNCFFramesCountBytes;
    QAction *action_SourceSMFrames;
    QAction *action_SourceSMBytes;
    QAction *action_SourceSMFramesBytes;
    QAction *action_SourceSMRate;
    QAction *action_SourceRSTFrames;
    QAction *action_SourceRSTBytes;
    QAction *action_SourceRSTFramesBytes;
    QAction *action_SourceRSTRate;
    QAction *action_ReceiverNAKFrames;
    QAction *action_ReceiverNAKCount;
    QAction *action_ReceiverNAKBytes;
    QAction *action_ReceiverNAKFramesCount;
    QAction *action_ReceiverNAKCountBytes;
    QAction *action_ReceiverNAKFramesBytes;
    QAction *action_ReceiverNAKFramesCountBytes;
    QAction *action_ReceiverNAKRate;
    QAction *action_ReceiverACKFrames;
    QAction *action_ReceiverACKBytes;
    QAction *action_ReceiverACKFramesBytes;
    QAction *action_ReceiverACKRate;
    QAction *action_ReceiverCREQFrames;
    QAction *action_ReceiverCREQBytes;
    QAction *action_ReceiverCREQFramesBytes;
    QAction *action_ReceiverCREQRate;
    QAction *action_SourceAutoResizeColumns;
    QAction *action_ReceiverAutoResizeColumns;
    QAction *action_SourceNCFRate;
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
    QStackedWidget *sources_stackedWidget;
    QWidget *sources_detail_sqn_page;
    QHBoxLayout *horizontalLayout_4;
    QTreeWidget *sources_detail_sqn_TreeWidget;
    QWidget *sources_detail_rst_page;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *sources_detail_rst_TreeWidget;
    QWidget *sources_detail_ncf_sqn_page;
    QHBoxLayout *horizontalLayout_6;
    QTreeWidget *sources_detail_ncf_sqn_TreeWidget;
    QWidget *receiversTab;
    QHBoxLayout *horizontalLayout_9;
    QSplitter *splitter_2;
    QTreeWidget *receivers_TreeWidget;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *receivers_detail_ComboBox;
    QLabel *label_5;
    QLabel *receivers_detail_transport_Label;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *receivers_stackedWidget;
    QWidget *receivers_detail_sqn_page;
    QHBoxLayout *horizontalLayout_7;
    QTreeWidget *receivers_detail_sqn_TreeWidget;
    QWidget *receivers_detail_reason_page;
    QHBoxLayout *horizontalLayout_8;
    QTreeWidget *receivers_detail_reason_TreeWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    DisplayFilterEdit *displayFilterLineEdit;
    QPushButton *applyFilterButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LBMLBTRUTransportDialog)
    {
        if (LBMLBTRUTransportDialog->objectName().isEmpty())
            LBMLBTRUTransportDialog->setObjectName("LBMLBTRUTransportDialog");
        LBMLBTRUTransportDialog->resize(872, 667);
        LBMLBTRUTransportDialog->setSizeGripEnabled(true);
        actionCopyAsCSV = new QAction(LBMLBTRUTransportDialog);
        actionCopyAsCSV->setObjectName("actionCopyAsCSV");
#if QT_CONFIG(shortcut)
        actionCopyAsCSV->setShortcut(QString::fromUtf8("Ctrl+C"));
#endif // QT_CONFIG(shortcut)
        actionCopyAsYAML = new QAction(LBMLBTRUTransportDialog);
        actionCopyAsYAML->setObjectName("actionCopyAsYAML");
#if QT_CONFIG(shortcut)
        actionCopyAsYAML->setShortcut(QString::fromUtf8("Ctrl+Y"));
#endif // QT_CONFIG(shortcut)
        action_SourceDataFrames = new QAction(LBMLBTRUTransportDialog);
        action_SourceDataFrames->setObjectName("action_SourceDataFrames");
        action_SourceDataFrames->setCheckable(true);
        action_SourceDataBytes = new QAction(LBMLBTRUTransportDialog);
        action_SourceDataBytes->setObjectName("action_SourceDataBytes");
        action_SourceDataBytes->setCheckable(true);
        action_SourceDataFramesBytes = new QAction(LBMLBTRUTransportDialog);
        action_SourceDataFramesBytes->setObjectName("action_SourceDataFramesBytes");
        action_SourceDataFramesBytes->setCheckable(true);
        action_SourceDataRate = new QAction(LBMLBTRUTransportDialog);
        action_SourceDataRate->setObjectName("action_SourceDataRate");
        action_SourceDataRate->setCheckable(true);
        action_SourceRXDataFrames = new QAction(LBMLBTRUTransportDialog);
        action_SourceRXDataFrames->setObjectName("action_SourceRXDataFrames");
        action_SourceRXDataFrames->setCheckable(true);
        action_SourceRXDataBytes = new QAction(LBMLBTRUTransportDialog);
        action_SourceRXDataBytes->setObjectName("action_SourceRXDataBytes");
        action_SourceRXDataBytes->setCheckable(true);
        action_SourceRXDataFramesBytes = new QAction(LBMLBTRUTransportDialog);
        action_SourceRXDataFramesBytes->setObjectName("action_SourceRXDataFramesBytes");
        action_SourceRXDataFramesBytes->setCheckable(true);
        action_SourceRXDataRate = new QAction(LBMLBTRUTransportDialog);
        action_SourceRXDataRate->setObjectName("action_SourceRXDataRate");
        action_SourceRXDataRate->setCheckable(true);
        action_SourceNCFFrames = new QAction(LBMLBTRUTransportDialog);
        action_SourceNCFFrames->setObjectName("action_SourceNCFFrames");
        action_SourceNCFFrames->setCheckable(true);
        action_SourceNCFCount = new QAction(LBMLBTRUTransportDialog);
        action_SourceNCFCount->setObjectName("action_SourceNCFCount");
        action_SourceNCFCount->setCheckable(true);
        action_SourceNCFBytes = new QAction(LBMLBTRUTransportDialog);
        action_SourceNCFBytes->setObjectName("action_SourceNCFBytes");
        action_SourceNCFBytes->setCheckable(true);
        action_SourceNCFFramesBytes = new QAction(LBMLBTRUTransportDialog);
        action_SourceNCFFramesBytes->setObjectName("action_SourceNCFFramesBytes");
        action_SourceNCFFramesBytes->setCheckable(true);
        action_SourceNCFCountBytes = new QAction(LBMLBTRUTransportDialog);
        action_SourceNCFCountBytes->setObjectName("action_SourceNCFCountBytes");
        action_SourceNCFCountBytes->setCheckable(true);
        action_SourceNCFFramesCount = new QAction(LBMLBTRUTransportDialog);
        action_SourceNCFFramesCount->setObjectName("action_SourceNCFFramesCount");
        action_SourceNCFFramesCount->setCheckable(true);
        action_SourceNCFFramesCountBytes = new QAction(LBMLBTRUTransportDialog);
        action_SourceNCFFramesCountBytes->setObjectName("action_SourceNCFFramesCountBytes");
        action_SourceNCFFramesCountBytes->setCheckable(true);
        action_SourceSMFrames = new QAction(LBMLBTRUTransportDialog);
        action_SourceSMFrames->setObjectName("action_SourceSMFrames");
        action_SourceSMFrames->setCheckable(true);
        action_SourceSMBytes = new QAction(LBMLBTRUTransportDialog);
        action_SourceSMBytes->setObjectName("action_SourceSMBytes");
        action_SourceSMBytes->setCheckable(true);
        action_SourceSMFramesBytes = new QAction(LBMLBTRUTransportDialog);
        action_SourceSMFramesBytes->setObjectName("action_SourceSMFramesBytes");
        action_SourceSMFramesBytes->setCheckable(true);
        action_SourceSMRate = new QAction(LBMLBTRUTransportDialog);
        action_SourceSMRate->setObjectName("action_SourceSMRate");
        action_SourceSMRate->setCheckable(true);
        action_SourceRSTFrames = new QAction(LBMLBTRUTransportDialog);
        action_SourceRSTFrames->setObjectName("action_SourceRSTFrames");
        action_SourceRSTFrames->setCheckable(true);
        action_SourceRSTBytes = new QAction(LBMLBTRUTransportDialog);
        action_SourceRSTBytes->setObjectName("action_SourceRSTBytes");
        action_SourceRSTBytes->setCheckable(true);
        action_SourceRSTFramesBytes = new QAction(LBMLBTRUTransportDialog);
        action_SourceRSTFramesBytes->setObjectName("action_SourceRSTFramesBytes");
        action_SourceRSTFramesBytes->setCheckable(true);
        action_SourceRSTRate = new QAction(LBMLBTRUTransportDialog);
        action_SourceRSTRate->setObjectName("action_SourceRSTRate");
        action_SourceRSTRate->setCheckable(true);
        action_ReceiverNAKFrames = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverNAKFrames->setObjectName("action_ReceiverNAKFrames");
        action_ReceiverNAKFrames->setCheckable(true);
        action_ReceiverNAKCount = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverNAKCount->setObjectName("action_ReceiverNAKCount");
        action_ReceiverNAKCount->setCheckable(true);
        action_ReceiverNAKBytes = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverNAKBytes->setObjectName("action_ReceiverNAKBytes");
        action_ReceiverNAKBytes->setCheckable(true);
        action_ReceiverNAKFramesCount = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverNAKFramesCount->setObjectName("action_ReceiverNAKFramesCount");
        action_ReceiverNAKFramesCount->setCheckable(true);
        action_ReceiverNAKCountBytes = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverNAKCountBytes->setObjectName("action_ReceiverNAKCountBytes");
        action_ReceiverNAKCountBytes->setCheckable(true);
        action_ReceiverNAKFramesBytes = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverNAKFramesBytes->setObjectName("action_ReceiverNAKFramesBytes");
        action_ReceiverNAKFramesBytes->setCheckable(true);
        action_ReceiverNAKFramesCountBytes = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverNAKFramesCountBytes->setObjectName("action_ReceiverNAKFramesCountBytes");
        action_ReceiverNAKFramesCountBytes->setCheckable(true);
        action_ReceiverNAKRate = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverNAKRate->setObjectName("action_ReceiverNAKRate");
        action_ReceiverNAKRate->setCheckable(true);
        action_ReceiverACKFrames = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverACKFrames->setObjectName("action_ReceiverACKFrames");
        action_ReceiverACKFrames->setCheckable(true);
        action_ReceiverACKBytes = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverACKBytes->setObjectName("action_ReceiverACKBytes");
        action_ReceiverACKBytes->setCheckable(true);
        action_ReceiverACKFramesBytes = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverACKFramesBytes->setObjectName("action_ReceiverACKFramesBytes");
        action_ReceiverACKFramesBytes->setCheckable(true);
        action_ReceiverACKRate = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverACKRate->setObjectName("action_ReceiverACKRate");
        action_ReceiverACKRate->setCheckable(true);
        action_ReceiverCREQFrames = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverCREQFrames->setObjectName("action_ReceiverCREQFrames");
        action_ReceiverCREQFrames->setCheckable(true);
        action_ReceiverCREQBytes = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverCREQBytes->setObjectName("action_ReceiverCREQBytes");
        action_ReceiverCREQBytes->setCheckable(true);
        action_ReceiverCREQFramesBytes = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverCREQFramesBytes->setObjectName("action_ReceiverCREQFramesBytes");
        action_ReceiverCREQFramesBytes->setCheckable(true);
        action_ReceiverCREQRate = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverCREQRate->setObjectName("action_ReceiverCREQRate");
        action_ReceiverCREQRate->setCheckable(true);
        action_SourceAutoResizeColumns = new QAction(LBMLBTRUTransportDialog);
        action_SourceAutoResizeColumns->setObjectName("action_SourceAutoResizeColumns");
        action_ReceiverAutoResizeColumns = new QAction(LBMLBTRUTransportDialog);
        action_ReceiverAutoResizeColumns->setObjectName("action_ReceiverAutoResizeColumns");
        action_SourceNCFRate = new QAction(LBMLBTRUTransportDialog);
        action_SourceNCFRate->setObjectName("action_SourceNCFRate");
        action_SourceNCFRate->setCheckable(true);
        verticalLayout = new QVBoxLayout(LBMLBTRUTransportDialog);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(LBMLBTRUTransportDialog);
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
        sources_detail_ComboBox->addItem(QString());
        sources_detail_ComboBox->setObjectName("sources_detail_ComboBox");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sources_detail_ComboBox->sizePolicy().hasHeightForWidth());
        sources_detail_ComboBox->setSizePolicy(sizePolicy1);
        sources_detail_ComboBox->setMinimumSize(QSize(120, 0));

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

        sources_stackedWidget = new QStackedWidget(layoutWidget);
        sources_stackedWidget->setObjectName("sources_stackedWidget");
        sources_stackedWidget->setEnabled(true);
        sources_stackedWidget->setFrameShape(QFrame::NoFrame);
        sources_stackedWidget->setLineWidth(1);
        sources_detail_sqn_page = new QWidget();
        sources_detail_sqn_page->setObjectName("sources_detail_sqn_page");
        horizontalLayout_4 = new QHBoxLayout(sources_detail_sqn_page);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        sources_detail_sqn_TreeWidget = new QTreeWidget(sources_detail_sqn_page);
        sources_detail_sqn_TreeWidget->setObjectName("sources_detail_sqn_TreeWidget");

        horizontalLayout_4->addWidget(sources_detail_sqn_TreeWidget);

        sources_stackedWidget->addWidget(sources_detail_sqn_page);
        sources_detail_rst_page = new QWidget();
        sources_detail_rst_page->setObjectName("sources_detail_rst_page");
        verticalLayout_4 = new QVBoxLayout(sources_detail_rst_page);
        verticalLayout_4->setObjectName("verticalLayout_4");
        sources_detail_rst_TreeWidget = new QTreeWidget(sources_detail_rst_page);
        sources_detail_rst_TreeWidget->setObjectName("sources_detail_rst_TreeWidget");

        verticalLayout_4->addWidget(sources_detail_rst_TreeWidget);

        sources_stackedWidget->addWidget(sources_detail_rst_page);
        sources_detail_ncf_sqn_page = new QWidget();
        sources_detail_ncf_sqn_page->setObjectName("sources_detail_ncf_sqn_page");
        horizontalLayout_6 = new QHBoxLayout(sources_detail_ncf_sqn_page);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        sources_detail_ncf_sqn_TreeWidget = new QTreeWidget(sources_detail_ncf_sqn_page);
        sources_detail_ncf_sqn_TreeWidget->setObjectName("sources_detail_ncf_sqn_TreeWidget");

        horizontalLayout_6->addWidget(sources_detail_ncf_sqn_TreeWidget);

        sources_stackedWidget->addWidget(sources_detail_ncf_sqn_page);

        verticalLayout_2->addWidget(sources_stackedWidget);

        splitter->addWidget(layoutWidget);

        horizontalLayout_5->addWidget(splitter);

        tabWidget->addTab(sourcesTab, QString());
        receiversTab = new QWidget();
        receiversTab->setObjectName("receiversTab");
        sizePolicy.setHeightForWidth(receiversTab->sizePolicy().hasHeightForWidth());
        receiversTab->setSizePolicy(sizePolicy);
        horizontalLayout_9 = new QHBoxLayout(receiversTab);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
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

        receivers_detail_ComboBox = new QComboBox(layoutWidget_2);
        receivers_detail_ComboBox->addItem(QString());
        receivers_detail_ComboBox->addItem(QString());
        receivers_detail_ComboBox->addItem(QString());
        receivers_detail_ComboBox->setObjectName("receivers_detail_ComboBox");
        receivers_detail_ComboBox->setMinimumSize(QSize(130, 0));

        horizontalLayout_3->addWidget(receivers_detail_ComboBox);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        receivers_detail_transport_Label = new QLabel(layoutWidget_2);
        receivers_detail_transport_Label->setObjectName("receivers_detail_transport_Label");

        horizontalLayout_3->addWidget(receivers_detail_transport_Label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        receivers_stackedWidget = new QStackedWidget(layoutWidget_2);
        receivers_stackedWidget->setObjectName("receivers_stackedWidget");
        sizePolicy.setHeightForWidth(receivers_stackedWidget->sizePolicy().hasHeightForWidth());
        receivers_stackedWidget->setSizePolicy(sizePolicy);
        receivers_detail_sqn_page = new QWidget();
        receivers_detail_sqn_page->setObjectName("receivers_detail_sqn_page");
        sizePolicy.setHeightForWidth(receivers_detail_sqn_page->sizePolicy().hasHeightForWidth());
        receivers_detail_sqn_page->setSizePolicy(sizePolicy);
        horizontalLayout_7 = new QHBoxLayout(receivers_detail_sqn_page);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        receivers_detail_sqn_TreeWidget = new QTreeWidget(receivers_detail_sqn_page);
        receivers_detail_sqn_TreeWidget->setObjectName("receivers_detail_sqn_TreeWidget");

        horizontalLayout_7->addWidget(receivers_detail_sqn_TreeWidget);

        receivers_stackedWidget->addWidget(receivers_detail_sqn_page);
        receivers_detail_reason_page = new QWidget();
        receivers_detail_reason_page->setObjectName("receivers_detail_reason_page");
        sizePolicy.setHeightForWidth(receivers_detail_reason_page->sizePolicy().hasHeightForWidth());
        receivers_detail_reason_page->setSizePolicy(sizePolicy);
        horizontalLayout_8 = new QHBoxLayout(receivers_detail_reason_page);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        receivers_detail_reason_TreeWidget = new QTreeWidget(receivers_detail_reason_page);
        receivers_detail_reason_TreeWidget->setObjectName("receivers_detail_reason_TreeWidget");

        horizontalLayout_8->addWidget(receivers_detail_reason_TreeWidget);

        receivers_stackedWidget->addWidget(receivers_detail_reason_page);

        verticalLayout_3->addWidget(receivers_stackedWidget);

        splitter_2->addWidget(layoutWidget_2);

        horizontalLayout_9->addWidget(splitter_2);

        tabWidget->addTab(receiversTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(LBMLBTRUTransportDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        displayFilterLineEdit = new DisplayFilterEdit(LBMLBTRUTransportDialog);
        displayFilterLineEdit->setObjectName("displayFilterLineEdit");

        horizontalLayout->addWidget(displayFilterLineEdit);

        applyFilterButton = new QPushButton(LBMLBTRUTransportDialog);
        applyFilterButton->setObjectName("applyFilterButton");

        horizontalLayout->addWidget(applyFilterButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(LBMLBTRUTransportDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LBMLBTRUTransportDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LBMLBTRUTransportDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LBMLBTRUTransportDialog, qOverload<>(&QDialog::reject));
        QObject::connect(sources_detail_ComboBox, SIGNAL(currentIndexChanged(int)), LBMLBTRUTransportDialog, SLOT(sourcesDetailCurrentChanged(int)));
        QObject::connect(sources_TreeWidget, SIGNAL(itemClicked(QTreeWidgetItem*,int)), LBMLBTRUTransportDialog, SLOT(sourcesItemClicked(QTreeWidgetItem*,int)));
        QObject::connect(sources_detail_sqn_TreeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), LBMLBTRUTransportDialog, SLOT(sourcesDetailItemDoubleClicked(QTreeWidgetItem*,int)));
        QObject::connect(sources_detail_ncf_sqn_TreeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), LBMLBTRUTransportDialog, SLOT(sourcesDetailItemDoubleClicked(QTreeWidgetItem*,int)));
        QObject::connect(receivers_TreeWidget, SIGNAL(itemClicked(QTreeWidgetItem*,int)), LBMLBTRUTransportDialog, SLOT(receiversItemClicked(QTreeWidgetItem*,int)));
        QObject::connect(receivers_detail_ComboBox, SIGNAL(currentIndexChanged(int)), LBMLBTRUTransportDialog, SLOT(receiversDetailCurrentChanged(int)));
        QObject::connect(receivers_detail_sqn_TreeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), LBMLBTRUTransportDialog, SLOT(receiversDetailItemDoubleClicked(QTreeWidgetItem*,int)));
        QObject::connect(receivers_detail_reason_TreeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), LBMLBTRUTransportDialog, SLOT(receiversDetailItemDoubleClicked(QTreeWidgetItem*,int)));

        tabWidget->setCurrentIndex(0);
        sources_stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LBMLBTRUTransportDialog);
    } // setupUi

    void retranslateUi(QDialog *LBMLBTRUTransportDialog)
    {
        LBMLBTRUTransportDialog->setWindowTitle(QCoreApplication::translate("LBMLBTRUTransportDialog", "LBT-RU Transport Statistics", nullptr));
        actionCopyAsCSV->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "Copy as CSV", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAsCSV->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Copy the tree as CSV", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyAsYAML->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "Copy as YAML", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAsYAML->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Copy the tree as YAML", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceDataFrames->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "Data frames", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceDataFrames->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the data frames column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceDataBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "Data bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceDataBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the data bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceDataFramesBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "Data frames/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceDataFramesBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the data frames/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceDataRate->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "Data rate", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceDataRate->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the data rate column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceRXDataFrames->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "RX data frames", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceRXDataFrames->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the RX data frames column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceRXDataBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "RX data bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceRXDataBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the RX data bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceRXDataFramesBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "RX data frames/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceRXDataFramesBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the RX data frames/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceRXDataRate->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "RX data rate", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceRXDataRate->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the RX data rate column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFFrames->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF frames", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFFrames->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NCF frames column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFCount->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF count", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFCount->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NCF count column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NCF bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFFramesBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF frames/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFFramesBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NCF frames/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFCountBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF count/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFCountBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NCF count/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFFramesCount->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF frames/count", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFFramesCount->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NCF frames/count column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFFramesCountBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF frames/count/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFFramesCountBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NCF frames/count/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceSMFrames->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "SM frames", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceSMFrames->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the SM frames column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceSMBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "SM bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceSMBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the SM bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceSMFramesBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "SM frames/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceSMFramesBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the SM frames/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceSMRate->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "SM rate", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceSMRate->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the SM rate column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceRSTFrames->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "RST frames", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceRSTFrames->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the RST frames column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceRSTBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "RST bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceRSTBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the RST bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceRSTFramesBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "RST frames/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceRSTFramesBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the RST frames/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceRSTRate->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "RST rate", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceRSTRate->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the RST rate column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverNAKFrames->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK frames", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverNAKFrames->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NAK frames column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverNAKCount->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK count", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverNAKCount->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NAK count column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverNAKBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverNAKBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NAK bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverNAKFramesCount->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK frames/count", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverNAKFramesCount->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NAK frames/count column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverNAKCountBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK count/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverNAKCountBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NAK count/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverNAKFramesBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK frames/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverNAKFramesBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NAK frames/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverNAKFramesCountBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK frames/count/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverNAKFramesCountBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NAK frames/count/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverNAKRate->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK rate", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverNAKRate->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NAK rate column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverACKFrames->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "ACK frames", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverACKFrames->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the ACK frames column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverACKBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "ACK bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverACKBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the ACK bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverACKFramesBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "ACK frames/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverACKFramesBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the ACK frames/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverACKRate->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "ACK rate", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverACKRate->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the ACK rate column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverCREQFrames->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "CREQ frames", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverCREQFrames->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the CREQ frames column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverCREQBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "CREQ bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverCREQBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the CREQ bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverCREQFramesBytes->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "CREQ frames/bytes", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverCREQFramesBytes->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the CREQ frames/bytes column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverCREQRate->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "CREQ rate", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverCREQRate->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the CREQ rate column", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceAutoResizeColumns->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "Auto-resize columns to content", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceAutoResizeColumns->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Resize columns to content size", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ReceiverAutoResizeColumns->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "Auto-resize columns to content", nullptr));
#if QT_CONFIG(tooltip)
        action_ReceiverAutoResizeColumns->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Resize columns to content size", nullptr));
#endif // QT_CONFIG(tooltip)
        action_SourceNCFRate->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF rate", nullptr));
#if QT_CONFIG(tooltip)
        action_SourceNCFRate->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show the NCF rate column", nullptr));
#endif // QT_CONFIG(tooltip)
        QTreeWidgetItem *___qtreewidgetitem = sources_TreeWidget->headerItem();
        ___qtreewidgetitem->setText(24, QCoreApplication::translate("LBMLBTRUTransportDialog", "RST rate", nullptr));
        ___qtreewidgetitem->setText(23, QCoreApplication::translate("LBMLBTRUTransportDialog", "RST frames/bytes", nullptr));
        ___qtreewidgetitem->setText(22, QCoreApplication::translate("LBMLBTRUTransportDialog", "RST bytes", nullptr));
        ___qtreewidgetitem->setText(21, QCoreApplication::translate("LBMLBTRUTransportDialog", "RST frames", nullptr));
        ___qtreewidgetitem->setText(20, QCoreApplication::translate("LBMLBTRUTransportDialog", "SM rate", nullptr));
        ___qtreewidgetitem->setText(19, QCoreApplication::translate("LBMLBTRUTransportDialog", "SM frames/bytes", nullptr));
        ___qtreewidgetitem->setText(18, QCoreApplication::translate("LBMLBTRUTransportDialog", "SM bytes", nullptr));
        ___qtreewidgetitem->setText(17, QCoreApplication::translate("LBMLBTRUTransportDialog", "SM frames", nullptr));
        ___qtreewidgetitem->setText(16, QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF rate", nullptr));
        ___qtreewidgetitem->setText(15, QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF frames/count/bytes", nullptr));
        ___qtreewidgetitem->setText(14, QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF count/bytes", nullptr));
        ___qtreewidgetitem->setText(13, QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF frames/bytes", nullptr));
        ___qtreewidgetitem->setText(12, QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF frames/count", nullptr));
        ___qtreewidgetitem->setText(11, QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF bytes", nullptr));
        ___qtreewidgetitem->setText(10, QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF count", nullptr));
        ___qtreewidgetitem->setText(9, QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF frames", nullptr));
        ___qtreewidgetitem->setText(8, QCoreApplication::translate("LBMLBTRUTransportDialog", "RX data rate", nullptr));
        ___qtreewidgetitem->setText(7, QCoreApplication::translate("LBMLBTRUTransportDialog", "RX data frames/bytes", nullptr));
        ___qtreewidgetitem->setText(6, QCoreApplication::translate("LBMLBTRUTransportDialog", "RX data bytes", nullptr));
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("LBMLBTRUTransportDialog", "RX data frames", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("LBMLBTRUTransportDialog", "Data rate", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("LBMLBTRUTransportDialog", "Data frames/bytes", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("LBMLBTRUTransportDialog", "Data bytes", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("LBMLBTRUTransportDialog", "Data frames", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("LBMLBTRUTransportDialog", "Address/Transport/Client", nullptr));
        label_2->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show", nullptr));
        sources_detail_ComboBox->setItemText(0, QCoreApplication::translate("LBMLBTRUTransportDialog", "Data SQN", nullptr));
        sources_detail_ComboBox->setItemText(1, QCoreApplication::translate("LBMLBTRUTransportDialog", "RX Data SQN", nullptr));
        sources_detail_ComboBox->setItemText(2, QCoreApplication::translate("LBMLBTRUTransportDialog", "NCF SQN", nullptr));
        sources_detail_ComboBox->setItemText(3, QCoreApplication::translate("LBMLBTRUTransportDialog", "SM SQN", nullptr));
        sources_detail_ComboBox->setItemText(4, QCoreApplication::translate("LBMLBTRUTransportDialog", "RST reason", nullptr));

        label_3->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "details for transport", nullptr));
        sources_detail_transport_Label->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "XXXXX:XXX.XXX.XXX.XXX:XXXXX:XXXXXXXX:XXX.XXX.XXX.XXX:XXXXX", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = sources_detail_sqn_TreeWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("LBMLBTRUTransportDialog", "Frame", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("LBMLBTRUTransportDialog", "Count", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("LBMLBTRUTransportDialog", "SQN", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = sources_detail_rst_TreeWidget->headerItem();
        ___qtreewidgetitem2->setText(2, QCoreApplication::translate("LBMLBTRUTransportDialog", "Frame", nullptr));
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("LBMLBTRUTransportDialog", "Count", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("LBMLBTRUTransportDialog", "Reason", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = sources_detail_ncf_sqn_TreeWidget->headerItem();
        ___qtreewidgetitem3->setText(2, QCoreApplication::translate("LBMLBTRUTransportDialog", "Frame", nullptr));
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("LBMLBTRUTransportDialog", "Count", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("LBMLBTRUTransportDialog", "SQN/Reason", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(sourcesTab), QCoreApplication::translate("LBMLBTRUTransportDialog", "Sources", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = receivers_TreeWidget->headerItem();
        ___qtreewidgetitem4->setText(16, QCoreApplication::translate("LBMLBTRUTransportDialog", "CREQ rate", nullptr));
        ___qtreewidgetitem4->setText(15, QCoreApplication::translate("LBMLBTRUTransportDialog", "CREQ frames/bytes", nullptr));
        ___qtreewidgetitem4->setText(14, QCoreApplication::translate("LBMLBTRUTransportDialog", "CREQ bytes", nullptr));
        ___qtreewidgetitem4->setText(13, QCoreApplication::translate("LBMLBTRUTransportDialog", "CREQ frames", nullptr));
        ___qtreewidgetitem4->setText(12, QCoreApplication::translate("LBMLBTRUTransportDialog", "ACK rate", nullptr));
        ___qtreewidgetitem4->setText(11, QCoreApplication::translate("LBMLBTRUTransportDialog", "ACK frames/bytes", nullptr));
        ___qtreewidgetitem4->setText(10, QCoreApplication::translate("LBMLBTRUTransportDialog", "ACK bytes", nullptr));
        ___qtreewidgetitem4->setText(9, QCoreApplication::translate("LBMLBTRUTransportDialog", "ACK frames", nullptr));
        ___qtreewidgetitem4->setText(8, QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK rate", nullptr));
        ___qtreewidgetitem4->setText(7, QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK frames/count/bytes", nullptr));
        ___qtreewidgetitem4->setText(6, QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK frames/bytes", nullptr));
        ___qtreewidgetitem4->setText(5, QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK count/bytes", nullptr));
        ___qtreewidgetitem4->setText(4, QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK frames/count", nullptr));
        ___qtreewidgetitem4->setText(3, QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK bytes", nullptr));
        ___qtreewidgetitem4->setText(2, QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK count", nullptr));
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK frames", nullptr));
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("LBMLBTRUTransportDialog", "Address/Transport", nullptr));
        label_4->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "Show", nullptr));
        receivers_detail_ComboBox->setItemText(0, QCoreApplication::translate("LBMLBTRUTransportDialog", "NAK SQN", nullptr));
        receivers_detail_ComboBox->setItemText(1, QCoreApplication::translate("LBMLBTRUTransportDialog", "ACK SQN", nullptr));
        receivers_detail_ComboBox->setItemText(2, QCoreApplication::translate("LBMLBTRUTransportDialog", "CREQ request", nullptr));

        label_5->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "details for transport", nullptr));
        receivers_detail_transport_Label->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "XXXXX:XXX.XXX.XXX.XXX:XXXXX:XXXXXXXX:XXX.XXX.XXX.XXX:XXXXX", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = receivers_detail_sqn_TreeWidget->headerItem();
        ___qtreewidgetitem5->setText(2, QCoreApplication::translate("LBMLBTRUTransportDialog", "Frame", nullptr));
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("LBMLBTRUTransportDialog", "Count", nullptr));
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("LBMLBTRUTransportDialog", "SQN", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = receivers_detail_reason_TreeWidget->headerItem();
        ___qtreewidgetitem6->setText(2, QCoreApplication::translate("LBMLBTRUTransportDialog", "Frame", nullptr));
        ___qtreewidgetitem6->setText(1, QCoreApplication::translate("LBMLBTRUTransportDialog", "Count", nullptr));
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("LBMLBTRUTransportDialog", "Reason", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(receiversTab), QCoreApplication::translate("LBMLBTRUTransportDialog", "Receivers", nullptr));
        label->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "Display filter:", nullptr));
#if QT_CONFIG(tooltip)
        applyFilterButton->setToolTip(QCoreApplication::translate("LBMLBTRUTransportDialog", "Regenerate statistics using this display filter", nullptr));
#endif // QT_CONFIG(tooltip)
        applyFilterButton->setText(QCoreApplication::translate("LBMLBTRUTransportDialog", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LBMLBTRUTransportDialog: public Ui_LBMLBTRUTransportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LBM_LBTRU_TRANSPORT_DIALOG_H
