/********************************************************************************
** Form generated from reading UI file 'display_filter_expression_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_FILTER_EXPRESSION_DIALOG_H
#define UI_DISPLAY_FILTER_EXPRESSION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "widgets/display_filter_edit.h"

QT_BEGIN_NAMESPACE

class Ui_DisplayFilterExpressionDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *fieldLabel;
    QTreeWidget *fieldTreeWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *searchLabel;
    QLineEdit *searchLineEdit;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *relationLayout;
    QLabel *relationLabel;
    QListWidget *relationListWidget;
    QVBoxLayout *quantityLayout;
    QLabel *quantityLabel;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *anyRadioButton;
    QRadioButton *allRadioButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *valueLayout;
    QLabel *valueLabel;
    QLineEdit *valueLineEdit;
    QVBoxLayout *enumLayout;
    QLabel *enumLabel;
    QListWidget *enumListWidget;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *rangeLayout;
    QLabel *rangeLabel;
    QLineEdit *rangeLineEdit;
    DisplayFilterEdit *displayFilterLineEdit;
    QLabel *hintLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DisplayFilterExpressionDialog)
    {
        if (DisplayFilterExpressionDialog->objectName().isEmpty())
            DisplayFilterExpressionDialog->setObjectName("DisplayFilterExpressionDialog");
        DisplayFilterExpressionDialog->resize(657, 588);
        verticalLayout_2 = new QVBoxLayout(DisplayFilterExpressionDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        fieldLabel = new QLabel(DisplayFilterExpressionDialog);
        fieldLabel->setObjectName("fieldLabel");

        verticalLayout->addWidget(fieldLabel);

        fieldTreeWidget = new QTreeWidget(DisplayFilterExpressionDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        fieldTreeWidget->setHeaderItem(__qtreewidgetitem);
        fieldTreeWidget->setObjectName("fieldTreeWidget");
        fieldTreeWidget->setUniformRowHeights(true);
        fieldTreeWidget->setHeaderHidden(true);

        verticalLayout->addWidget(fieldTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        searchLabel = new QLabel(DisplayFilterExpressionDialog);
        searchLabel->setObjectName("searchLabel");

        horizontalLayout->addWidget(searchLabel);

        searchLineEdit = new QLineEdit(DisplayFilterExpressionDialog);
        searchLineEdit->setObjectName("searchLineEdit");

        horizontalLayout->addWidget(searchLineEdit);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        relationLayout = new QVBoxLayout();
        relationLayout->setObjectName("relationLayout");
        relationLabel = new QLabel(DisplayFilterExpressionDialog);
        relationLabel->setObjectName("relationLabel");

        relationLayout->addWidget(relationLabel);

        relationListWidget = new QListWidget(DisplayFilterExpressionDialog);
        relationListWidget->setObjectName("relationListWidget");

        relationLayout->addWidget(relationListWidget);


        verticalLayout_6->addLayout(relationLayout);

        quantityLayout = new QVBoxLayout();
        quantityLayout->setObjectName("quantityLayout");
        quantityLabel = new QLabel(DisplayFilterExpressionDialog);
        quantityLabel->setObjectName("quantityLabel");

        quantityLayout->addWidget(quantityLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        anyRadioButton = new QRadioButton(DisplayFilterExpressionDialog);
        anyRadioButton->setObjectName("anyRadioButton");
        anyRadioButton->setChecked(true);

        horizontalLayout_3->addWidget(anyRadioButton);

        allRadioButton = new QRadioButton(DisplayFilterExpressionDialog);
        allRadioButton->setObjectName("allRadioButton");
        allRadioButton->setChecked(false);

        horizontalLayout_3->addWidget(allRadioButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        quantityLayout->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(quantityLayout);

        verticalSpacer = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        valueLayout = new QVBoxLayout();
        valueLayout->setObjectName("valueLayout");
        valueLabel = new QLabel(DisplayFilterExpressionDialog);
        valueLabel->setObjectName("valueLabel");

        valueLayout->addWidget(valueLabel);

        valueLineEdit = new QLineEdit(DisplayFilterExpressionDialog);
        valueLineEdit->setObjectName("valueLineEdit");

        valueLayout->addWidget(valueLineEdit);


        verticalLayout_6->addLayout(valueLayout);

        enumLayout = new QVBoxLayout();
        enumLayout->setObjectName("enumLayout");
        enumLabel = new QLabel(DisplayFilterExpressionDialog);
        enumLabel->setObjectName("enumLabel");

        enumLayout->addWidget(enumLabel);

        enumListWidget = new QListWidget(DisplayFilterExpressionDialog);
        enumListWidget->setObjectName("enumListWidget");

        enumLayout->addWidget(enumListWidget);


        verticalLayout_6->addLayout(enumLayout);

        verticalSpacer_2 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        rangeLayout = new QVBoxLayout();
        rangeLayout->setObjectName("rangeLayout");
        rangeLabel = new QLabel(DisplayFilterExpressionDialog);
        rangeLabel->setObjectName("rangeLabel");

        rangeLayout->addWidget(rangeLabel);

        rangeLineEdit = new QLineEdit(DisplayFilterExpressionDialog);
        rangeLineEdit->setObjectName("rangeLineEdit");

        rangeLayout->addWidget(rangeLineEdit);


        verticalLayout_6->addLayout(rangeLayout);

        verticalLayout_6->setStretch(2, 1);
        verticalLayout_6->setStretch(4, 4);
        verticalLayout_6->setStretch(5, 1);

        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_2->addLayout(horizontalLayout_2);

        displayFilterLineEdit = new DisplayFilterEdit(DisplayFilterExpressionDialog);
        displayFilterLineEdit->setObjectName("displayFilterLineEdit");
        displayFilterLineEdit->setReadOnly(true);

        verticalLayout_2->addWidget(displayFilterLineEdit);

        hintLabel = new QLabel(DisplayFilterExpressionDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        verticalLayout_2->addWidget(hintLabel);

        buttonBox = new QDialogButtonBox(DisplayFilterExpressionDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(DisplayFilterExpressionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DisplayFilterExpressionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DisplayFilterExpressionDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DisplayFilterExpressionDialog);
    } // setupUi

    void retranslateUi(QDialog *DisplayFilterExpressionDialog)
    {
        DisplayFilterExpressionDialog->setWindowTitle(QCoreApplication::translate("DisplayFilterExpressionDialog", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        fieldLabel->setToolTip(QCoreApplication::translate("DisplayFilterExpressionDialog", "Select a field to start building a display filter.", nullptr));
#endif // QT_CONFIG(tooltip)
        fieldLabel->setText(QCoreApplication::translate("DisplayFilterExpressionDialog", "Field Name", nullptr));
#if QT_CONFIG(tooltip)
        searchLabel->setToolTip(QCoreApplication::translate("DisplayFilterExpressionDialog", "<html><head/><body><p>Search the list of field names.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        searchLabel->setText(QCoreApplication::translate("DisplayFilterExpressionDialog", "Search:", nullptr));
#if QT_CONFIG(tooltip)
        relationLabel->setToolTip(QCoreApplication::translate("DisplayFilterExpressionDialog", "<html><head/><body><p>Relations can be used to restrict fields to specific values. Each relation does the following:</p><table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td><p align=\"center\"><span style=\" font-weight:600;\">is present</span></p></td><td><p>Match any packet that contains this field</p></td></tr><tr><td><p align=\"center\"><span style=\" font-weight:600;\">==, !=, etc.</span></p></td><td><p>Compare the field to a specific value.</p></td></tr><tr><td><p align=\"center\"><span style=\" font-weight:600;\">contains, matches</span></p></td><td><p>Check the field against a string (contains) or a regular expression (matches)</p></td></tr><tr><td><p align=\"center\"><span style=\" font-weight:600;\">in</span></p></td><td><p>Compare the field to a specific set of values</p></td></tr></table></body></html>\n"
"\n"
"", nullptr));
#endif // QT_CONFIG(tooltip)
        relationLabel->setText(QCoreApplication::translate("DisplayFilterExpressionDialog", "Relation", nullptr));
#if QT_CONFIG(tooltip)
        quantityLabel->setToolTip(QCoreApplication::translate("DisplayFilterExpressionDialog", "By default order comparisons and contains/matches/in relations are true if any value matches. The quantifier \"all\" can be used to apply the test to all values in a frame.", nullptr));
#endif // QT_CONFIG(tooltip)
        quantityLabel->setText(QCoreApplication::translate("DisplayFilterExpressionDialog", "Quantifier", nullptr));
        anyRadioButton->setText(QCoreApplication::translate("DisplayFilterExpressionDialog", "Any", nullptr));
        allRadioButton->setText(QCoreApplication::translate("DisplayFilterExpressionDialog", "All", nullptr));
#if QT_CONFIG(tooltip)
        valueLabel->setToolTip(QCoreApplication::translate("DisplayFilterExpressionDialog", "Match against this value.", nullptr));
#endif // QT_CONFIG(tooltip)
        valueLabel->setText(QCoreApplication::translate("DisplayFilterExpressionDialog", "Value", nullptr));
#if QT_CONFIG(tooltip)
        enumLabel->setToolTip(QCoreApplication::translate("DisplayFilterExpressionDialog", "If the field you have selected has a known set of valid values they will be listed here.", nullptr));
#endif // QT_CONFIG(tooltip)
        enumLabel->setText(QCoreApplication::translate("DisplayFilterExpressionDialog", "Predefined Values", nullptr));
#if QT_CONFIG(tooltip)
        rangeLabel->setToolTip(QCoreApplication::translate("DisplayFilterExpressionDialog", "If the field you have selected covers a range of bytes (e.g. you have selected a protocol) you can restrict the match to a range of bytes here.", nullptr));
#endif // QT_CONFIG(tooltip)
        rangeLabel->setText(QCoreApplication::translate("DisplayFilterExpressionDialog", "Range (offset:length)", nullptr));
        displayFilterLineEdit->setPlaceholderText(QCoreApplication::translate("DisplayFilterExpressionDialog", "No display filter", nullptr));
        hintLabel->setText(QCoreApplication::translate("DisplayFilterExpressionDialog", "<small><i>A hint.</i></small>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayFilterExpressionDialog: public Ui_DisplayFilterExpressionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_FILTER_EXPRESSION_DIALOG_H
