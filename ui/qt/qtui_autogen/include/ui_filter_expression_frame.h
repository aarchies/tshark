/********************************************************************************
** Form generated from reading UI file 'filter_expression_frame.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTER_EXPRESSION_FRAME_H
#define UI_FILTER_EXPRESSION_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "accordion_frame.h"
#include "widgets/display_filter_edit.h"
#include "widgets/syntax_line_edit.h"

QT_BEGIN_NAMESPACE

class Ui_FilterExpressionFrame
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QToolButton *filterExpressionPreferencesPushButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *labelLabel;
    SyntaxLineEdit *labelLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *filterLabel;
    DisplayFilterEdit *displayFilterLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *commentLabel;
    SyntaxLineEdit *commentLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(AccordionFrame *FilterExpressionFrame)
    {
        if (FilterExpressionFrame->objectName().isEmpty())
            FilterExpressionFrame->setObjectName("FilterExpressionFrame");
        FilterExpressionFrame->resize(796, 82);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FilterExpressionFrame->sizePolicy().hasHeightForWidth());
        FilterExpressionFrame->setSizePolicy(sizePolicy);
        FilterExpressionFrame->setMaximumSize(QSize(16777215, 82));
        FilterExpressionFrame->setFrameShape(QFrame::NoFrame);
        FilterExpressionFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_5 = new QHBoxLayout(FilterExpressionFrame);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        filterExpressionPreferencesPushButton = new QToolButton(FilterExpressionFrame);
        filterExpressionPreferencesPushButton->setObjectName("filterExpressionPreferencesPushButton");

        verticalLayout_2->addWidget(filterExpressionPreferencesPushButton);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelLabel = new QLabel(FilterExpressionFrame);
        labelLabel->setObjectName("labelLabel");

        horizontalLayout->addWidget(labelLabel);

        labelLineEdit = new SyntaxLineEdit(FilterExpressionFrame);
        labelLineEdit->setObjectName("labelLineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelLineEdit->sizePolicy().hasHeightForWidth());
        labelLineEdit->setSizePolicy(sizePolicy1);
        labelLineEdit->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(labelLineEdit);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        filterLabel = new QLabel(FilterExpressionFrame);
        filterLabel->setObjectName("filterLabel");

        horizontalLayout_2->addWidget(filterLabel);

        displayFilterLineEdit = new DisplayFilterEdit(FilterExpressionFrame);
        displayFilterLineEdit->setObjectName("displayFilterLineEdit");
        sizePolicy1.setHeightForWidth(displayFilterLineEdit->sizePolicy().hasHeightForWidth());
        displayFilterLineEdit->setSizePolicy(sizePolicy1);
        displayFilterLineEdit->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(displayFilterLineEdit);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        commentLabel = new QLabel(FilterExpressionFrame);
        commentLabel->setObjectName("commentLabel");

        horizontalLayout_3->addWidget(commentLabel);

        commentLineEdit = new SyntaxLineEdit(FilterExpressionFrame);
        commentLineEdit->setObjectName("commentLineEdit");
        sizePolicy1.setHeightForWidth(commentLineEdit->sizePolicy().hasHeightForWidth());
        commentLineEdit->setSizePolicy(sizePolicy1);
        commentLineEdit->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(commentLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(FilterExpressionFrame);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setMaximumSize(QSize(16777215, 27));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_5->addWidget(buttonBox);


        retranslateUi(FilterExpressionFrame);

        QMetaObject::connectSlotsByName(FilterExpressionFrame);
    } // setupUi

    void retranslateUi(AccordionFrame *FilterExpressionFrame)
    {
        FilterExpressionFrame->setWindowTitle(QCoreApplication::translate("FilterExpressionFrame", "Frame", nullptr));
        filterExpressionPreferencesPushButton->setText(QCoreApplication::translate("FilterExpressionFrame", "Filter Buttons Preferences\342\200\246", nullptr));
        labelLabel->setText(QCoreApplication::translate("FilterExpressionFrame", "Label:", nullptr));
        labelLineEdit->setPlaceholderText(QCoreApplication::translate("FilterExpressionFrame", "Enter a description for the filter button", nullptr));
        filterLabel->setText(QCoreApplication::translate("FilterExpressionFrame", "Filter:", nullptr));
        displayFilterLineEdit->setPlaceholderText(QCoreApplication::translate("FilterExpressionFrame", "Enter a filter expression to be applied", nullptr));
        commentLabel->setText(QCoreApplication::translate("FilterExpressionFrame", "Comment:", nullptr));
        commentLineEdit->setPlaceholderText(QCoreApplication::translate("FilterExpressionFrame", "Enter a comment for the filter button", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilterExpressionFrame: public Ui_FilterExpressionFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTER_EXPRESSION_FRAME_H
