/********************************************************************************
** Form generated from reading UI file 'sctp_all_assocs_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTP_ALL_ASSOCS_DIALOG_H
#define UI_SCTP_ALL_ASSOCS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SCTPAllAssocsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *assocList;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *setFilterButton;
    QPushButton *analyseButton;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SCTPAllAssocsDialog)
    {
        if (SCTPAllAssocsDialog->objectName().isEmpty())
            SCTPAllAssocsDialog->setObjectName("SCTPAllAssocsDialog");
        SCTPAllAssocsDialog->resize(827, 546);
        verticalLayout = new QVBoxLayout(SCTPAllAssocsDialog);
        verticalLayout->setObjectName("verticalLayout");
        assocList = new QTableWidget(SCTPAllAssocsDialog);
        if (assocList->columnCount() < 6)
            assocList->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        assocList->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (assocList->rowCount() < 2)
            assocList->setRowCount(2);
        assocList->setObjectName("assocList");
        assocList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        assocList->setProperty("showDropIndicator", QVariant(false));
        assocList->setDragDropOverwriteMode(false);
        assocList->setSelectionMode(QAbstractItemView::SingleSelection);
        assocList->setSelectionBehavior(QAbstractItemView::SelectRows);
        assocList->setSortingEnabled(true);
        assocList->setWordWrap(false);
        assocList->setRowCount(2);
        assocList->setColumnCount(6);
        assocList->horizontalHeader()->setMinimumSectionSize(50);
        assocList->horizontalHeader()->setDefaultSectionSize(120);
        assocList->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(assocList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        setFilterButton = new QPushButton(SCTPAllAssocsDialog);
        setFilterButton->setObjectName("setFilterButton");
        setFilterButton->setEnabled(false);
        setFilterButton->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_2->addWidget(setFilterButton);

        analyseButton = new QPushButton(SCTPAllAssocsDialog);
        analyseButton->setObjectName("analyseButton");
        analyseButton->setEnabled(false);
        analyseButton->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_2->addWidget(analyseButton);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(SCTPAllAssocsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SCTPAllAssocsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::clicked, SCTPAllAssocsDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(SCTPAllAssocsDialog);
    } // setupUi

    void retranslateUi(QDialog *SCTPAllAssocsDialog)
    {
        SCTPAllAssocsDialog->setWindowTitle(QCoreApplication::translate("SCTPAllAssocsDialog", "Wireshark - SCTP Associations", nullptr));
        QTableWidgetItem *___qtablewidgetitem = assocList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = assocList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Port 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = assocList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Port 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = assocList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Number of Packets", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = assocList->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Number of DATA Chunks", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = assocList->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Number of Bytes", nullptr));
        setFilterButton->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Filter Selected Association", nullptr));
        analyseButton->setText(QCoreApplication::translate("SCTPAllAssocsDialog", "Analyze", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCTPAllAssocsDialog: public Ui_SCTPAllAssocsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTP_ALL_ASSOCS_DIALOG_H
