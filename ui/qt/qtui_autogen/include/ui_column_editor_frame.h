/********************************************************************************
** Form generated from reading UI file 'column_editor_frame.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLUMN_EDITOR_FRAME_H
#define UI_COLUMN_EDITOR_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include "accordion_frame.h"
#include "widgets/display_filter_edit.h"
#include "widgets/syntax_line_edit.h"

QT_BEGIN_NAMESPACE

class Ui_ColumnEditorFrame
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *titleLineEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QComboBox *typeComboBox;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    DisplayFilterEdit *fieldsNameLineEdit;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    SyntaxLineEdit *occurrenceLineEdit;
    QLabel *displayLabel;
    QComboBox *displayComboBox;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(AccordionFrame *ColumnEditorFrame)
    {
        if (ColumnEditorFrame->objectName().isEmpty())
            ColumnEditorFrame->setObjectName("ColumnEditorFrame");
        ColumnEditorFrame->resize(1018, 34);
        ColumnEditorFrame->setFrameShape(QFrame::NoFrame);
        ColumnEditorFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(ColumnEditorFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        label = new QLabel(ColumnEditorFrame);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        titleLineEdit = new QLineEdit(ColumnEditorFrame);
        titleLineEdit->setObjectName("titleLineEdit");

        horizontalLayout->addWidget(titleLineEdit);

        horizontalSpacer_2 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(ColumnEditorFrame);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        typeComboBox = new QComboBox(ColumnEditorFrame);
        typeComboBox->setObjectName("typeComboBox");

        horizontalLayout->addWidget(typeComboBox);

        horizontalSpacer_3 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_3 = new QLabel(ColumnEditorFrame);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        fieldsNameLineEdit = new DisplayFilterEdit(ColumnEditorFrame);
        fieldsNameLineEdit->setObjectName("fieldsNameLineEdit");

        horizontalLayout->addWidget(fieldsNameLineEdit);

        horizontalSpacer_4 = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_4 = new QLabel(ColumnEditorFrame);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        occurrenceLineEdit = new SyntaxLineEdit(ColumnEditorFrame);
        occurrenceLineEdit->setObjectName("occurrenceLineEdit");

        horizontalLayout->addWidget(occurrenceLineEdit);

        displayLabel = new QLabel(ColumnEditorFrame);
        displayLabel->setObjectName("displayLabel");

        horizontalLayout->addWidget(displayLabel);

        displayComboBox = new QComboBox(ColumnEditorFrame);
        displayComboBox->setObjectName("displayComboBox");

        horizontalLayout->addWidget(displayComboBox);

        horizontalSpacer = new QSpacerItem(10, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(ColumnEditorFrame);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setMaximumSize(QSize(16777215, 27));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(ColumnEditorFrame);

        QMetaObject::connectSlotsByName(ColumnEditorFrame);
    } // setupUi

    void retranslateUi(AccordionFrame *ColumnEditorFrame)
    {
        ColumnEditorFrame->setWindowTitle(QCoreApplication::translate("ColumnEditorFrame", "Frame", nullptr));
        label->setText(QCoreApplication::translate("ColumnEditorFrame", "Title:", nullptr));
        label_2->setText(QCoreApplication::translate("ColumnEditorFrame", "Type:", nullptr));
        label_3->setText(QCoreApplication::translate("ColumnEditorFrame", "Fields:", nullptr));
        label_4->setText(QCoreApplication::translate("ColumnEditorFrame", "Occurrence:", nullptr));
        displayLabel->setText(QCoreApplication::translate("ColumnEditorFrame", "Display as:", nullptr));
#if QT_CONFIG(tooltip)
        displayComboBox->setToolTip(QCoreApplication::translate("ColumnEditorFrame", "<html><head/><p>Values will show the raw values for fields.<p>Strings will show human-readable strings instead of raw values for fields. Only applicable to custom columns with fields that have value strings and custom columns which can be resolved to strings.<p>Details will show the values using the same format as in Packet Details. Only applicable to custom columns.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class ColumnEditorFrame: public Ui_ColumnEditorFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLUMN_EDITOR_FRAME_H
