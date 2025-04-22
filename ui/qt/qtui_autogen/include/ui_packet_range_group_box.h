/********************************************************************************
** Form generated from reading UI file 'packet_range_group_box.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKET_RANGE_GROUP_BOX_H
#define UI_PACKET_RANGE_GROUP_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include "widgets/syntax_line_edit.h"

QT_BEGIN_NAMESPACE

class Ui_PacketRangeGroupBox
{
public:
    QGridLayout *gridLayout;
    QLabel *selectedDisplayedLabel;
    QRadioButton *displayedButton;
    QLabel *allCapturedLabel;
    QRadioButton *markedButton;
    QRadioButton *rangeButton;
    QLabel *rangeDisplayedLabel;
    QCheckBox *ignoredCheckBox;
    QCheckBox *dependedCheckBox;
    QLabel *markedDisplayedLabel;
    QRadioButton *ftlMarkedButton;
    QLabel *selectedCapturedLabel;
    QRadioButton *allButton;
    QLabel *ftlCapturedLabel;
    QLabel *allDisplayedLabel;
    QLabel *rangeCapturedLabel;
    QRadioButton *selectedButton;
    QRadioButton *capturedButton;
    QLabel *markedCapturedLabel;
    QSpacerItem *horizontalSpacer_3;
    SyntaxLineEdit *rangeLineEdit;
    QLabel *ftlDisplayedLabel;
    QLabel *ignoredCapturedLabel;
    QLabel *ignoredDisplayedLabel;
    QLabel *dependedCapturedLabel;
    QLabel *dependedDisplayedLabel;
    QButtonGroup *packetSelectionButtonGroup;
    QButtonGroup *capturedDisplayedButtonGroup;

    void setupUi(QGroupBox *PacketRangeGroupBox)
    {
        if (PacketRangeGroupBox->objectName().isEmpty())
            PacketRangeGroupBox->setObjectName("PacketRangeGroupBox");
        PacketRangeGroupBox->resize(454, 241);
        gridLayout = new QGridLayout(PacketRangeGroupBox);
        gridLayout->setObjectName("gridLayout");
        selectedDisplayedLabel = new QLabel(PacketRangeGroupBox);
        selectedDisplayedLabel->setObjectName("selectedDisplayedLabel");
        selectedDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(selectedDisplayedLabel, 2, 3, 1, 1);

        displayedButton = new QRadioButton(PacketRangeGroupBox);
        capturedDisplayedButtonGroup = new QButtonGroup(PacketRangeGroupBox);
        capturedDisplayedButtonGroup->setObjectName("capturedDisplayedButtonGroup");
        capturedDisplayedButtonGroup->addButton(displayedButton);
        displayedButton->setObjectName("displayedButton");
        displayedButton->setCheckable(true);

        gridLayout->addWidget(displayedButton, 0, 3, 1, 1);

        allCapturedLabel = new QLabel(PacketRangeGroupBox);
        allCapturedLabel->setObjectName("allCapturedLabel");
        allCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(allCapturedLabel, 1, 2, 1, 1);

        markedButton = new QRadioButton(PacketRangeGroupBox);
        packetSelectionButtonGroup = new QButtonGroup(PacketRangeGroupBox);
        packetSelectionButtonGroup->setObjectName("packetSelectionButtonGroup");
        packetSelectionButtonGroup->addButton(markedButton);
        markedButton->setObjectName("markedButton");

        gridLayout->addWidget(markedButton, 3, 0, 1, 2);

        rangeButton = new QRadioButton(PacketRangeGroupBox);
        packetSelectionButtonGroup->addButton(rangeButton);
        rangeButton->setObjectName("rangeButton");

        gridLayout->addWidget(rangeButton, 5, 0, 1, 1);

        rangeDisplayedLabel = new QLabel(PacketRangeGroupBox);
        rangeDisplayedLabel->setObjectName("rangeDisplayedLabel");
        rangeDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(rangeDisplayedLabel, 5, 3, 1, 1);

        ignoredCheckBox = new QCheckBox(PacketRangeGroupBox);
        ignoredCheckBox->setObjectName("ignoredCheckBox");

        gridLayout->addWidget(ignoredCheckBox, 7, 0, 1, 2);

        dependedCheckBox = new QCheckBox(PacketRangeGroupBox);
        dependedCheckBox->setObjectName("dependedCheckBox");

        gridLayout->addWidget(dependedCheckBox, 8, 0, 1, 2);

        markedDisplayedLabel = new QLabel(PacketRangeGroupBox);
        markedDisplayedLabel->setObjectName("markedDisplayedLabel");
        markedDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(markedDisplayedLabel, 3, 3, 1, 1);

        ftlMarkedButton = new QRadioButton(PacketRangeGroupBox);
        packetSelectionButtonGroup->addButton(ftlMarkedButton);
        ftlMarkedButton->setObjectName("ftlMarkedButton");

        gridLayout->addWidget(ftlMarkedButton, 4, 0, 1, 2);

        selectedCapturedLabel = new QLabel(PacketRangeGroupBox);
        selectedCapturedLabel->setObjectName("selectedCapturedLabel");
        selectedCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(selectedCapturedLabel, 2, 2, 1, 1);

        allButton = new QRadioButton(PacketRangeGroupBox);
        packetSelectionButtonGroup->addButton(allButton);
        allButton->setObjectName("allButton");

        gridLayout->addWidget(allButton, 1, 0, 1, 2);

        ftlCapturedLabel = new QLabel(PacketRangeGroupBox);
        ftlCapturedLabel->setObjectName("ftlCapturedLabel");
        ftlCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ftlCapturedLabel, 4, 2, 1, 1);

        allDisplayedLabel = new QLabel(PacketRangeGroupBox);
        allDisplayedLabel->setObjectName("allDisplayedLabel");
        allDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(allDisplayedLabel, 1, 3, 1, 1);

        rangeCapturedLabel = new QLabel(PacketRangeGroupBox);
        rangeCapturedLabel->setObjectName("rangeCapturedLabel");
        rangeCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(rangeCapturedLabel, 5, 2, 1, 1);

        selectedButton = new QRadioButton(PacketRangeGroupBox);
        packetSelectionButtonGroup->addButton(selectedButton);
        selectedButton->setObjectName("selectedButton");

        gridLayout->addWidget(selectedButton, 2, 0, 1, 2);

        capturedButton = new QRadioButton(PacketRangeGroupBox);
        capturedDisplayedButtonGroup->addButton(capturedButton);
        capturedButton->setObjectName("capturedButton");
        capturedButton->setCheckable(true);

        gridLayout->addWidget(capturedButton, 0, 2, 1, 1);

        markedCapturedLabel = new QLabel(PacketRangeGroupBox);
        markedCapturedLabel->setObjectName("markedCapturedLabel");
        markedCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(markedCapturedLabel, 3, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        rangeLineEdit = new SyntaxLineEdit(PacketRangeGroupBox);
        rangeLineEdit->setObjectName("rangeLineEdit");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rangeLineEdit->sizePolicy().hasHeightForWidth());
        rangeLineEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(rangeLineEdit, 5, 1, 1, 1);

        ftlDisplayedLabel = new QLabel(PacketRangeGroupBox);
        ftlDisplayedLabel->setObjectName("ftlDisplayedLabel");
        ftlDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ftlDisplayedLabel, 4, 3, 1, 1);

        ignoredCapturedLabel = new QLabel(PacketRangeGroupBox);
        ignoredCapturedLabel->setObjectName("ignoredCapturedLabel");
        ignoredCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ignoredCapturedLabel, 7, 2, 1, 1);

        ignoredDisplayedLabel = new QLabel(PacketRangeGroupBox);
        ignoredDisplayedLabel->setObjectName("ignoredDisplayedLabel");
        ignoredDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ignoredDisplayedLabel, 7, 3, 1, 1);

        dependedCapturedLabel = new QLabel(PacketRangeGroupBox);
        dependedCapturedLabel->setObjectName("dependedCapturedLabel");
        dependedCapturedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(dependedCapturedLabel, 8, 2, 1, 1);

        dependedDisplayedLabel = new QLabel(PacketRangeGroupBox);
        dependedDisplayedLabel->setObjectName("dependedDisplayedLabel");
        dependedDisplayedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(dependedDisplayedLabel, 8, 3, 1, 1);


        retranslateUi(PacketRangeGroupBox);

        QMetaObject::connectSlotsByName(PacketRangeGroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *PacketRangeGroupBox)
    {
        PacketRangeGroupBox->setWindowTitle(QCoreApplication::translate("PacketRangeGroupBox", "Form", nullptr));
        PacketRangeGroupBox->setTitle(QCoreApplication::translate("PacketRangeGroupBox", "Packet Range", nullptr));
        selectedDisplayedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        displayedButton->setText(QCoreApplication::translate("PacketRangeGroupBox", "Displayed", nullptr));
        allCapturedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        markedButton->setText(QCoreApplication::translate("PacketRangeGroupBox", "&Marked packets only", nullptr));
        rangeButton->setText(QCoreApplication::translate("PacketRangeGroupBox", "&Range:", nullptr));
        rangeDisplayedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        ignoredCheckBox->setText(QCoreApplication::translate("PacketRangeGroupBox", "Remove &ignored packets", nullptr));
        dependedCheckBox->setText(QCoreApplication::translate("PacketRangeGroupBox", "Include &depended upon packets", nullptr));
#if QT_CONFIG(tooltip)
        dependedCheckBox->setToolTip(QCoreApplication::translate("PacketRangeGroupBox", "Also include packets depended upon, such as those used to reassemble displayed packets", nullptr));
#endif // QT_CONFIG(tooltip)
        markedDisplayedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        ftlMarkedButton->setText(QCoreApplication::translate("PacketRangeGroupBox", "First &to last marked", nullptr));
        selectedCapturedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        allButton->setText(QCoreApplication::translate("PacketRangeGroupBox", "&All packets", nullptr));
        ftlCapturedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        allDisplayedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        rangeCapturedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        selectedButton->setText(QCoreApplication::translate("PacketRangeGroupBox", "&Selected packets only", nullptr));
        capturedButton->setText(QCoreApplication::translate("PacketRangeGroupBox", "Captured", nullptr));
        markedCapturedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        ftlDisplayedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        ignoredCapturedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        ignoredDisplayedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        dependedCapturedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
        dependedDisplayedLabel->setText(QCoreApplication::translate("PacketRangeGroupBox", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PacketRangeGroupBox: public Ui_PacketRangeGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKET_RANGE_GROUP_BOX_H
