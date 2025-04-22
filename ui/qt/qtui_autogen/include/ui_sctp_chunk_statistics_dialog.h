/********************************************************************************
** Form generated from reading UI file 'sctp_chunk_statistics_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTP_CHUNK_STATISTICS_DIALOG_H
#define UI_SCTP_CHUNK_STATISTICS_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SCTPChunkStatisticsDialog
{
public:
    QAction *actionHideChunkType;
    QAction *actionChunkTypePreferences;
    QAction *actionShowAllChunkTypes;
    QDialogButtonBox *buttonBox;
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *SCTPChunkStatisticsDialog)
    {
        if (SCTPChunkStatisticsDialog->objectName().isEmpty())
            SCTPChunkStatisticsDialog->setObjectName("SCTPChunkStatisticsDialog");
        SCTPChunkStatisticsDialog->resize(830, 673);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SCTPChunkStatisticsDialog->sizePolicy().hasHeightForWidth());
        SCTPChunkStatisticsDialog->setSizePolicy(sizePolicy);
        actionHideChunkType = new QAction(SCTPChunkStatisticsDialog);
        actionHideChunkType->setObjectName("actionHideChunkType");
        actionChunkTypePreferences = new QAction(SCTPChunkStatisticsDialog);
        actionChunkTypePreferences->setObjectName("actionChunkTypePreferences");
        actionShowAllChunkTypes = new QAction(SCTPChunkStatisticsDialog);
        actionShowAllChunkTypes->setObjectName("actionShowAllChunkTypes");
        buttonBox = new QDialogButtonBox(SCTPChunkStatisticsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(510, 610, 311, 51));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Close);
        tableWidget = new QTableWidget(SCTPChunkStatisticsDialog);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 10, 831, 591));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setRowCount(0);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        pushButton = new QPushButton(SCTPChunkStatisticsDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 620, 176, 28));

        retranslateUi(SCTPChunkStatisticsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::clicked, SCTPChunkStatisticsDialog, qOverload<>(&QDialog::close));
        QObject::connect(buttonBox, &QDialogButtonBox::clicked, SCTPChunkStatisticsDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(SCTPChunkStatisticsDialog);
    } // setupUi

    void retranslateUi(QDialog *SCTPChunkStatisticsDialog)
    {
        SCTPChunkStatisticsDialog->setWindowTitle(QCoreApplication::translate("SCTPChunkStatisticsDialog", "Dialog", nullptr));
        actionHideChunkType->setText(QCoreApplication::translate("SCTPChunkStatisticsDialog", "Hide Chunk Type", nullptr));
#if QT_CONFIG(tooltip)
        actionHideChunkType->setToolTip(QCoreApplication::translate("SCTPChunkStatisticsDialog", "Remove the chunk type from the table", nullptr));
#endif // QT_CONFIG(tooltip)
        actionChunkTypePreferences->setText(QCoreApplication::translate("SCTPChunkStatisticsDialog", "Chunk Type Preferences", nullptr));
#if QT_CONFIG(tooltip)
        actionChunkTypePreferences->setToolTip(QCoreApplication::translate("SCTPChunkStatisticsDialog", "Go to the chunk type preferences dialog to show or hide other chunk types", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowAllChunkTypes->setText(QCoreApplication::translate("SCTPChunkStatisticsDialog", "Show All Registered Chunk Types", nullptr));
#if QT_CONFIG(tooltip)
        actionShowAllChunkTypes->setToolTip(QCoreApplication::translate("SCTPChunkStatisticsDialog", "Show all chunk types with defined names", nullptr));
#endif // QT_CONFIG(tooltip)
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SCTPChunkStatisticsDialog", "Association", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SCTPChunkStatisticsDialog", "Endpoint 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SCTPChunkStatisticsDialog", "Endpoint 2", nullptr));
        pushButton->setText(QCoreApplication::translate("SCTPChunkStatisticsDialog", "Save Chunk Type Order", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCTPChunkStatisticsDialog: public Ui_SCTPChunkStatisticsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTP_CHUNK_STATISTICS_DIALOG_H
