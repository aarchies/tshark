/********************************************************************************
** Form generated from reading UI file 'manage_interfaces_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_INTERFACES_DIALOG_H
#define UI_MANAGE_INTERFACES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/stock_icon_tool_button.h"

QT_BEGIN_NAMESPACE

class Ui_ManageInterfacesDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *localTab;
    QVBoxLayout *verticalLayout;
    QTreeView *localView;
    QWidget *pipeTab;
    QVBoxLayout *verticalLayout_2;
    QTreeView *pipeView;
    QHBoxLayout *horizontalLayout_2;
    StockIconToolButton *addPipe;
    StockIconToolButton *delPipe;
    QSpacerItem *horizontalSpacer;
    QWidget *remoteTab;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *remoteList;
    QHBoxLayout *horizontalLayout_3;
    StockIconToolButton *addRemote;
    StockIconToolButton *delRemote;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *remoteSettings;
    QLabel *hintLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ManageInterfacesDialog)
    {
        if (ManageInterfacesDialog->objectName().isEmpty())
            ManageInterfacesDialog->setObjectName("ManageInterfacesDialog");
        ManageInterfacesDialog->setWindowModality(Qt::ApplicationModal);
        ManageInterfacesDialog->resize(750, 425);
        ManageInterfacesDialog->setModal(false);
        verticalLayout_4 = new QVBoxLayout(ManageInterfacesDialog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        tabWidget = new QTabWidget(ManageInterfacesDialog);
        tabWidget->setObjectName("tabWidget");
        localTab = new QWidget();
        localTab->setObjectName("localTab");
        verticalLayout = new QVBoxLayout(localTab);
        verticalLayout->setObjectName("verticalLayout");
        localView = new QTreeView(localTab);
        localView->setObjectName("localView");
        localView->setFocusPolicy(Qt::NoFocus);
        localView->setIndentation(0);
        localView->setRootIsDecorated(false);
        localView->setUniformRowHeights(true);
        localView->setItemsExpandable(false);

        verticalLayout->addWidget(localView);

        tabWidget->addTab(localTab, QString());
        pipeTab = new QWidget();
        pipeTab->setObjectName("pipeTab");
        verticalLayout_2 = new QVBoxLayout(pipeTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pipeView = new QTreeView(pipeTab);
        pipeView->setObjectName("pipeView");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pipeView->sizePolicy().hasHeightForWidth());
        pipeView->setSizePolicy(sizePolicy);
        pipeView->setBaseSize(QSize(0, 0));
        pipeView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        pipeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pipeView->setTextElideMode(Qt::ElideMiddle);
        pipeView->setRootIsDecorated(false);
        pipeView->setItemsExpandable(false);

        verticalLayout_2->addWidget(pipeView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        addPipe = new StockIconToolButton(pipeTab);
        addPipe->setObjectName("addPipe");

        horizontalLayout_2->addWidget(addPipe);

        delPipe = new StockIconToolButton(pipeTab);
        delPipe->setObjectName("delPipe");

        horizontalLayout_2->addWidget(delPipe);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget->addTab(pipeTab, QString());
        remoteTab = new QWidget();
        remoteTab->setObjectName("remoteTab");
        verticalLayout_3 = new QVBoxLayout(remoteTab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        remoteList = new QTreeWidget(remoteTab);
        remoteList->setObjectName("remoteList");
        remoteList->setUniformRowHeights(true);

        verticalLayout_3->addWidget(remoteList);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        addRemote = new StockIconToolButton(remoteTab);
        addRemote->setObjectName("addRemote");

        horizontalLayout_3->addWidget(addRemote);

        delRemote = new StockIconToolButton(remoteTab);
        delRemote->setObjectName("delRemote");

        horizontalLayout_3->addWidget(delRemote);

        horizontalSpacer_2 = new QSpacerItem(328, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        remoteSettings = new QPushButton(remoteTab);
        remoteSettings->setObjectName("remoteSettings");

        horizontalLayout_3->addWidget(remoteSettings);


        verticalLayout_3->addLayout(horizontalLayout_3);

        tabWidget->addTab(remoteTab, QString());

        verticalLayout_4->addWidget(tabWidget);

        hintLabel = new QLabel(ManageInterfacesDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        verticalLayout_4->addWidget(hintLabel);

        buttonBox = new QDialogButtonBox(ManageInterfacesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(ManageInterfacesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ManageInterfacesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ManageInterfacesDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ManageInterfacesDialog);
    } // setupUi

    void retranslateUi(QDialog *ManageInterfacesDialog)
    {
        ManageInterfacesDialog->setWindowTitle(QCoreApplication::translate("ManageInterfacesDialog", "Manage Interfaces", nullptr));
#if QT_CONFIG(tooltip)
        localTab->setToolTip(QCoreApplication::translate("ManageInterfacesDialog", "<html><head/><body><p>Click the checkbox to hide or show a hidden interface.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(localTab), QCoreApplication::translate("ManageInterfacesDialog", "Local Interfaces", nullptr));
#if QT_CONFIG(tooltip)
        pipeTab->setToolTip(QCoreApplication::translate("ManageInterfacesDialog", "<html><head/><body><p>Add a pipe to capture from or remove an existing pipe from the list.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        addPipe->setToolTip(QCoreApplication::translate("ManageInterfacesDialog", "<html><head/><body><p>Add a new pipe using default settings.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        addPipe->setText(QString());
#if QT_CONFIG(tooltip)
        delPipe->setToolTip(QCoreApplication::translate("ManageInterfacesDialog", "<html><head/><body><p>Remove the selected pipe from the list.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        delPipe->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(pipeTab), QCoreApplication::translate("ManageInterfacesDialog", "Pipes", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = remoteList->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("ManageInterfacesDialog", "Host / Device URL", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ManageInterfacesDialog", "Show", nullptr));
#if QT_CONFIG(tooltip)
        addRemote->setToolTip(QCoreApplication::translate("ManageInterfacesDialog", "<html><head/><body><p>Add a remote host and its interfaces</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        addRemote->setText(QString());
#if QT_CONFIG(tooltip)
        delRemote->setToolTip(QCoreApplication::translate("ManageInterfacesDialog", "<html><head/><body><p>Remove the selected host from the list.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        delRemote->setText(QString());
        remoteSettings->setText(QCoreApplication::translate("ManageInterfacesDialog", "Remote Settings", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(remoteTab), QCoreApplication::translate("ManageInterfacesDialog", "Remote Interfaces", nullptr));
        hintLabel->setText(QCoreApplication::translate("ManageInterfacesDialog", "<small><i></i></small>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageInterfacesDialog: public Ui_ManageInterfacesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_INTERFACES_DIALOG_H
