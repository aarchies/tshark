/********************************************************************************
** Form generated from reading UI file 'column_preferences_frame.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLUMN_PREFERENCES_FRAME_H
#define UI_COLUMN_PREFERENCES_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "widgets/stock_icon_tool_button.h"

QT_BEGIN_NAMESPACE

class Ui_ColumnPreferencesFrame
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *columnTreeView;
    QHBoxLayout *horizontalLayout;
    StockIconToolButton *newToolButton;
    StockIconToolButton *deleteToolButton;
    QCheckBox *chkShowDisplayedOnly;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *ColumnPreferencesFrame)
    {
        if (ColumnPreferencesFrame->objectName().isEmpty())
            ColumnPreferencesFrame->setObjectName("ColumnPreferencesFrame");
        ColumnPreferencesFrame->resize(550, 456);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ColumnPreferencesFrame->sizePolicy().hasHeightForWidth());
        ColumnPreferencesFrame->setSizePolicy(sizePolicy);
        ColumnPreferencesFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(ColumnPreferencesFrame);
        verticalLayout->setObjectName("verticalLayout");
        columnTreeView = new QTreeView(ColumnPreferencesFrame);
        columnTreeView->setObjectName("columnTreeView");
        columnTreeView->setDragEnabled(true);
        columnTreeView->setDragDropMode(QAbstractItemView::InternalMove);
        columnTreeView->setRootIsDecorated(false);
        columnTreeView->setSortingEnabled(false);
        columnTreeView->header()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(columnTreeView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        newToolButton = new StockIconToolButton(ColumnPreferencesFrame);
        newToolButton->setObjectName("newToolButton");

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new StockIconToolButton(ColumnPreferencesFrame);
        deleteToolButton->setObjectName("deleteToolButton");

        horizontalLayout->addWidget(deleteToolButton);

        chkShowDisplayedOnly = new QCheckBox(ColumnPreferencesFrame);
        chkShowDisplayedOnly->setObjectName("chkShowDisplayedOnly");

        horizontalLayout->addWidget(chkShowDisplayedOnly);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ColumnPreferencesFrame);

        QMetaObject::connectSlotsByName(ColumnPreferencesFrame);
    } // setupUi

    void retranslateUi(QFrame *ColumnPreferencesFrame)
    {
        ColumnPreferencesFrame->setWindowTitle(QCoreApplication::translate("ColumnPreferencesFrame", "Frame", nullptr));
#if QT_CONFIG(tooltip)
        newToolButton->setToolTip(QCoreApplication::translate("ColumnPreferencesFrame", "Add a new column", nullptr));
#endif // QT_CONFIG(tooltip)
        newToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        deleteToolButton->setToolTip(QCoreApplication::translate("ColumnPreferencesFrame", "Delete selected column", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteToolButton->setText(QString());
        chkShowDisplayedOnly->setText(QCoreApplication::translate("ColumnPreferencesFrame", "Show displayed columns only", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColumnPreferencesFrame: public Ui_ColumnPreferencesFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLUMN_PREFERENCES_FRAME_H
