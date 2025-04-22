/********************************************************************************
** Form generated from reading UI file 'search_frame.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_FRAME_H
#define UI_SEARCH_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "accordion_frame.h"
#include "widgets/display_filter_edit.h"

QT_BEGIN_NAMESPACE

class Ui_SearchFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *searchInComboBox;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *searchTypeComboBox;
    DisplayFilterEdit *searchLineEdit;
    QPushButton *findButton;
    QPushButton *cancelButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *optionLabel;
    QComboBox *charEncodingComboBox;
    QCheckBox *caseCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *dirCheckBox;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *multipleCheckBox;

    void setupUi(AccordionFrame *SearchFrame)
    {
        if (SearchFrame->objectName().isEmpty())
            SearchFrame->setObjectName("SearchFrame");
        SearchFrame->resize(1026, 34);
        SearchFrame->setFrameShape(QFrame::NoFrame);
        SearchFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(SearchFrame);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        searchInComboBox = new QComboBox(SearchFrame);
        searchInComboBox->addItem(QString());
        searchInComboBox->addItem(QString());
        searchInComboBox->addItem(QString());
        searchInComboBox->setObjectName("searchInComboBox");

        horizontalLayout->addWidget(searchInComboBox);

        horizontalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        searchTypeComboBox = new QComboBox(SearchFrame);
        searchTypeComboBox->addItem(QString());
        searchTypeComboBox->addItem(QString());
        searchTypeComboBox->addItem(QString());
        searchTypeComboBox->addItem(QString());
        searchTypeComboBox->setObjectName("searchTypeComboBox");

        horizontalLayout->addWidget(searchTypeComboBox);

        searchLineEdit = new DisplayFilterEdit(SearchFrame);
        searchLineEdit->setObjectName("searchLineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchLineEdit->sizePolicy().hasHeightForWidth());
        searchLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(searchLineEdit);

        findButton = new QPushButton(SearchFrame);
        findButton->setObjectName("findButton");
        findButton->setMaximumSize(QSize(16777215, 27));

        horizontalLayout->addWidget(findButton);

        cancelButton = new QPushButton(SearchFrame);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setMaximumSize(QSize(16777215, 27));

        horizontalLayout->addWidget(cancelButton);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        optionLabel = new QLabel(SearchFrame);
        optionLabel->setObjectName("optionLabel");

        horizontalLayout_2->addWidget(optionLabel);

        charEncodingComboBox = new QComboBox(SearchFrame);
        charEncodingComboBox->addItem(QString());
        charEncodingComboBox->addItem(QString());
        charEncodingComboBox->addItem(QString());
        charEncodingComboBox->setObjectName("charEncodingComboBox");

        horizontalLayout_2->addWidget(charEncodingComboBox);

        caseCheckBox = new QCheckBox(SearchFrame);
        caseCheckBox->setObjectName("caseCheckBox");

        horizontalLayout_2->addWidget(caseCheckBox);

        horizontalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        dirCheckBox = new QCheckBox(SearchFrame);
        dirCheckBox->setObjectName("dirCheckBox");

        horizontalLayout_2->addWidget(dirCheckBox);

        horizontalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        multipleCheckBox = new QCheckBox(SearchFrame);
        multipleCheckBox->setObjectName("multipleCheckBox");

        horizontalLayout_2->addWidget(multipleCheckBox);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(7, 1);

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SearchFrame);

        findButton->setDefault(true);


        QMetaObject::connectSlotsByName(SearchFrame);
    } // setupUi

    void retranslateUi(AccordionFrame *SearchFrame)
    {
        SearchFrame->setWindowTitle(QCoreApplication::translate("SearchFrame", "Frame", nullptr));
        searchInComboBox->setItemText(0, QCoreApplication::translate("SearchFrame", "Packet list", nullptr));
        searchInComboBox->setItemText(1, QCoreApplication::translate("SearchFrame", "Packet details", nullptr));
        searchInComboBox->setItemText(2, QCoreApplication::translate("SearchFrame", "Packet bytes", nullptr));

#if QT_CONFIG(tooltip)
        searchInComboBox->setToolTip(QCoreApplication::translate("SearchFrame", "<html><head/><body><p>Search the Info column of the packet list (summary pane), decoded packet display labels (tree view pane) or the ASCII-converted packet data (hex view pane).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        searchTypeComboBox->setItemText(0, QCoreApplication::translate("SearchFrame", "Display filter", nullptr));
        searchTypeComboBox->setItemText(1, QCoreApplication::translate("SearchFrame", "Hex value", nullptr));
        searchTypeComboBox->setItemText(2, QCoreApplication::translate("SearchFrame", "String", nullptr));
        searchTypeComboBox->setItemText(3, QCoreApplication::translate("SearchFrame", "Regular Expression", nullptr));

#if QT_CONFIG(tooltip)
        searchTypeComboBox->setToolTip(QCoreApplication::translate("SearchFrame", "<html><head/><body><p>Search for data using display filter syntax (e.g. ip.addr==10.1.1.1), a hexadecimal string (e.g. fffffda5), a plain string (e.g. My String) or a regular expression (e.g. colou?r).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        findButton->setText(QCoreApplication::translate("SearchFrame", "Find", nullptr));
        cancelButton->setText(QCoreApplication::translate("SearchFrame", "Cancel", nullptr));
        optionLabel->setText(QCoreApplication::translate("SearchFrame", "<b>Options:</b>", nullptr));
        charEncodingComboBox->setItemText(0, QCoreApplication::translate("SearchFrame", "Narrow & Wide", nullptr));
        charEncodingComboBox->setItemText(1, QCoreApplication::translate("SearchFrame", "Narrow (UTF-8 / ASCII)", nullptr));
        charEncodingComboBox->setItemText(2, QCoreApplication::translate("SearchFrame", "Wide (UTF-16)", nullptr));

#if QT_CONFIG(tooltip)
        charEncodingComboBox->setToolTip(QCoreApplication::translate("SearchFrame", "<html><head/><body><p>Search for strings containing narrow (UTF-8 and ASCII) or wide (UTF-16) characters.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        caseCheckBox->setText(QCoreApplication::translate("SearchFrame", "Case sensitive", nullptr));
        dirCheckBox->setText(QCoreApplication::translate("SearchFrame", "Backwards", nullptr));
#if QT_CONFIG(tooltip)
        multipleCheckBox->setToolTip(QCoreApplication::translate("SearchFrame", "<html><head/><body><p>Search for a subsequent occurrence in the current packet before advancing to the next packet.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        multipleCheckBox->setText(QCoreApplication::translate("SearchFrame", "Multiple occurrences", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchFrame: public Ui_SearchFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_FRAME_H
