/********************************************************************************
** Form generated from reading UI file 'follow_stream_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLLOW_STREAM_DIALOG_H
#define UI_FOLLOW_STREAM_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "widgets/find_line_edit.h"
#include "widgets/follow_stream_text.h"

QT_BEGIN_NAMESPACE

class Ui_FollowStreamDialog
{
public:
    QVBoxLayout *verticalLayout;
    FollowStreamText *teStreamContent;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbDirections;
    QSpacerItem *charsetSpacer;
    QLabel *label;
    QComboBox *cbCharset;
    QSpacerItem *deltaSpacer;
    QComboBox *deltaComboBox;
    QSpacerItem *streamNumberSpacer;
    QLabel *streamNumberLabel;
    QSpinBox *streamNumberSpinBox;
    QLabel *subStreamNumberLabel;
    QSpinBox *subStreamNumberSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lFind;
    FindLineEdit *leFind;
    QCheckBox *caseCheckBox;
    QPushButton *bFind;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FollowStreamDialog)
    {
        if (FollowStreamDialog->objectName().isEmpty())
            FollowStreamDialog->setObjectName("FollowStreamDialog");
        FollowStreamDialog->resize(750, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FollowStreamDialog->sizePolicy().hasHeightForWidth());
        FollowStreamDialog->setSizePolicy(sizePolicy);
        FollowStreamDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(FollowStreamDialog);
        verticalLayout->setObjectName("verticalLayout");
        teStreamContent = new FollowStreamText(FollowStreamDialog);
        teStreamContent->setObjectName("teStreamContent");
        teStreamContent->setReadOnly(true);

        verticalLayout->addWidget(teStreamContent);

        hintLabel = new QLabel(FollowStreamDialog);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        cbDirections = new QComboBox(FollowStreamDialog);
        cbDirections->setObjectName("cbDirections");
        cbDirections->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(cbDirections);

        charsetSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(charsetSpacer);

        label = new QLabel(FollowStreamDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        cbCharset = new QComboBox(FollowStreamDialog);
        cbCharset->setObjectName("cbCharset");

        horizontalLayout->addWidget(cbCharset);

        deltaSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(deltaSpacer);

        deltaComboBox = new QComboBox(FollowStreamDialog);
        deltaComboBox->addItem(QString());
        deltaComboBox->addItem(QString());
        deltaComboBox->addItem(QString());
        deltaComboBox->setObjectName("deltaComboBox");

        horizontalLayout->addWidget(deltaComboBox);

        streamNumberSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(streamNumberSpacer);

        streamNumberLabel = new QLabel(FollowStreamDialog);
        streamNumberLabel->setObjectName("streamNumberLabel");

        horizontalLayout->addWidget(streamNumberLabel);

        streamNumberSpinBox = new QSpinBox(FollowStreamDialog);
        streamNumberSpinBox->setObjectName("streamNumberSpinBox");

        horizontalLayout->addWidget(streamNumberSpinBox);

        subStreamNumberLabel = new QLabel(FollowStreamDialog);
        subStreamNumberLabel->setObjectName("subStreamNumberLabel");

        horizontalLayout->addWidget(subStreamNumberLabel);

        subStreamNumberSpinBox = new QSpinBox(FollowStreamDialog);
        subStreamNumberSpinBox->setObjectName("subStreamNumberSpinBox");

        horizontalLayout->addWidget(subStreamNumberSpinBox);

        horizontalLayout->setStretch(6, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lFind = new QLabel(FollowStreamDialog);
        lFind->setObjectName("lFind");

        horizontalLayout_2->addWidget(lFind);

        leFind = new FindLineEdit(FollowStreamDialog);
        leFind->setObjectName("leFind");

        horizontalLayout_2->addWidget(leFind);

        caseCheckBox = new QCheckBox(FollowStreamDialog);
        caseCheckBox->setObjectName("caseCheckBox");

        horizontalLayout_2->addWidget(caseCheckBox);

        bFind = new QPushButton(FollowStreamDialog);
        bFind->setObjectName("bFind");

        horizontalLayout_2->addWidget(bFind);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(FollowStreamDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FollowStreamDialog);

        cbCharset->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(FollowStreamDialog);
    } // setupUi

    void retranslateUi(QDialog *FollowStreamDialog)
    {
        FollowStreamDialog->setWindowTitle(QCoreApplication::translate("FollowStreamDialog", "Follow Stream", nullptr));
        hintLabel->setText(QCoreApplication::translate("FollowStreamDialog", "Hint.", nullptr));
        label->setText(QCoreApplication::translate("FollowStreamDialog", "Show as", nullptr));
        deltaComboBox->setItemText(0, QCoreApplication::translate("FollowStreamDialog", "No delta times", nullptr));
        deltaComboBox->setItemText(1, QCoreApplication::translate("FollowStreamDialog", "Turn delta times", nullptr));
        deltaComboBox->setItemText(2, QCoreApplication::translate("FollowStreamDialog", "All delta times", nullptr));

        streamNumberLabel->setText(QCoreApplication::translate("FollowStreamDialog", "Stream", nullptr));
        subStreamNumberLabel->setText(QCoreApplication::translate("FollowStreamDialog", "Substream", nullptr));
        lFind->setText(QCoreApplication::translate("FollowStreamDialog", "Find:", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("FollowStreamDialog", "Case sensitive", nullptr));
        bFind->setText(QCoreApplication::translate("FollowStreamDialog", "Find &Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FollowStreamDialog: public Ui_FollowStreamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLLOW_STREAM_DIALOG_H
