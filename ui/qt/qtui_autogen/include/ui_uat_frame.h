/********************************************************************************
** Form generated from reading UI file 'uat_frame.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UAT_FRAME_H
#define UI_UAT_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "widgets/copy_from_profile_button.h"
#include "widgets/elided_label.h"
#include "widgets/rowmove_tree_view.h"
#include "widgets/stock_icon_tool_button.h"

QT_BEGIN_NAMESPACE

class Ui_UatFrame
{
public:
    QVBoxLayout *verticalLayout;
    RowMoveTreeView *uatTreeView;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    StockIconToolButton *newToolButton;
    StockIconToolButton *deleteToolButton;
    StockIconToolButton *copyToolButton;
    StockIconToolButton *moveUpToolButton;
    StockIconToolButton *moveDownToolButton;
    StockIconToolButton *clearToolButton;
    CopyFromProfileButton *copyFromProfileButton;
    ElidedLabel *pathLabel;

    void setupUi(QFrame *UatFrame)
    {
        if (UatFrame->objectName().isEmpty())
            UatFrame->setObjectName("UatFrame");
        UatFrame->resize(513, 397);
        UatFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(UatFrame);
        verticalLayout->setObjectName("verticalLayout");
        uatTreeView = new RowMoveTreeView(UatFrame);
        uatTreeView->setObjectName("uatTreeView");

        verticalLayout->addWidget(uatTreeView);

        hintLabel = new QLabel(UatFrame);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        hintLabel->setTextFormat(Qt::RichText);
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        newToolButton = new StockIconToolButton(UatFrame);
        newToolButton->setObjectName("newToolButton");

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new StockIconToolButton(UatFrame);
        deleteToolButton->setObjectName("deleteToolButton");
        deleteToolButton->setEnabled(false);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new StockIconToolButton(UatFrame);
        copyToolButton->setObjectName("copyToolButton");
        copyToolButton->setEnabled(false);

        horizontalLayout->addWidget(copyToolButton);

        moveUpToolButton = new StockIconToolButton(UatFrame);
        moveUpToolButton->setObjectName("moveUpToolButton");

        horizontalLayout->addWidget(moveUpToolButton);

        moveDownToolButton = new StockIconToolButton(UatFrame);
        moveDownToolButton->setObjectName("moveDownToolButton");

        horizontalLayout->addWidget(moveDownToolButton);

        clearToolButton = new StockIconToolButton(UatFrame);
        clearToolButton->setObjectName("clearToolButton");

        horizontalLayout->addWidget(clearToolButton);

        copyFromProfileButton = new CopyFromProfileButton(UatFrame);
        copyFromProfileButton->setObjectName("copyFromProfileButton");

        horizontalLayout->addWidget(copyFromProfileButton);

        pathLabel = new ElidedLabel(UatFrame);
        pathLabel->setObjectName("pathLabel");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pathLabel->sizePolicy().hasHeightForWidth());
        pathLabel->setSizePolicy(sizePolicy);
        pathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pathLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(pathLabel);

        horizontalLayout->setStretch(7, 1);

        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UatFrame);

        QMetaObject::connectSlotsByName(UatFrame);
    } // setupUi

    void retranslateUi(QFrame *UatFrame)
    {
        UatFrame->setWindowTitle(QCoreApplication::translate("UatFrame", "Frame", nullptr));
        hintLabel->setText(QString());
#if QT_CONFIG(tooltip)
        newToolButton->setToolTip(QCoreApplication::translate("UatFrame", "Create a new entry.", nullptr));
#endif // QT_CONFIG(tooltip)
        newToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        deleteToolButton->setToolTip(QCoreApplication::translate("UatFrame", "Remove the selected entry(ies).", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        copyToolButton->setToolTip(QCoreApplication::translate("UatFrame", "Copy the selected entry(ies).", nullptr));
#endif // QT_CONFIG(tooltip)
        copyToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        moveUpToolButton->setToolTip(QCoreApplication::translate("UatFrame", "Move the selected entry(ies) up.", nullptr));
#endif // QT_CONFIG(tooltip)
        moveUpToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        moveDownToolButton->setToolTip(QCoreApplication::translate("UatFrame", "Move the selected entry(ies) down.", nullptr));
#endif // QT_CONFIG(tooltip)
        moveDownToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        clearToolButton->setToolTip(QCoreApplication::translate("UatFrame", "Clear all entries.", nullptr));
#endif // QT_CONFIG(tooltip)
        clearToolButton->setText(QString());
#if QT_CONFIG(tooltip)
        copyFromProfileButton->setToolTip(QCoreApplication::translate("UatFrame", "Copy entries from another profile.", nullptr));
#endif // QT_CONFIG(tooltip)
        copyFromProfileButton->setText(QCoreApplication::translate("UatFrame", "Copy from", nullptr));
        pathLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UatFrame: public Ui_UatFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UAT_FRAME_H
