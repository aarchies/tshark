/********************************************************************************
** Form generated from reading UI file 'font_color_preferences_frame.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONT_COLOR_PREFERENCES_FRAME_H
#define UI_FONT_COLOR_PREFERENCES_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FontColorPreferencesFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *fontPushButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *fontSampleLineEdit;
    QLabel *colorsLabel;
    QGridLayout *gridLayout;
    QPushButton *activeFGPushButton;
    QPushButton *activeBGPushButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *activeSampleLineEdit;
    QLabel *label_2;
    QComboBox *activeStyleComboBox;
    QPushButton *inactiveFGPushButton;
    QPushButton *inactiveBGPushButton;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *inactiveSampleLineEdit;
    QLabel *label_4;
    QComboBox *inactiveStyleComboBox;
    QPushButton *markedFGPushButton;
    QPushButton *markedBGPushButton;
    QLineEdit *markedSampleLineEdit;
    QPushButton *ignoredFGPushButton;
    QPushButton *ignoredBGPushButton;
    QLineEdit *ignoredSampleLineEdit;
    QPushButton *clientFGPushButton;
    QPushButton *clientBGPushButton;
    QLineEdit *clientSampleLineEdit;
    QPushButton *serverFGPushButton;
    QPushButton *serverBGPushButton;
    QLineEdit *serverSampleLineEdit;
    QPushButton *validFilterBGPushButton;
    QLineEdit *validFilterSampleLineEdit;
    QPushButton *invalidFilterBGPushButton;
    QLineEdit *invalidFilterSampleLineEdit;
    QPushButton *deprecatedFilterBGPushButton;
    QLineEdit *deprecatedFilterSampleLineEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *FontColorPreferencesFrame)
    {
        if (FontColorPreferencesFrame->objectName().isEmpty())
            FontColorPreferencesFrame->setObjectName("FontColorPreferencesFrame");
        FontColorPreferencesFrame->resize(540, 390);
        FontColorPreferencesFrame->setMinimumSize(QSize(540, 390));
        FontColorPreferencesFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(FontColorPreferencesFrame);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(FontColorPreferencesFrame);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        fontPushButton = new QPushButton(FontColorPreferencesFrame);
        fontPushButton->setObjectName("fontPushButton");

        horizontalLayout->addWidget(fontPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        fontSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        fontSampleLineEdit->setObjectName("fontSampleLineEdit");
        fontSampleLineEdit->setReadOnly(true);

        verticalLayout->addWidget(fontSampleLineEdit);

        colorsLabel = new QLabel(FontColorPreferencesFrame);
        colorsLabel->setObjectName("colorsLabel");

        verticalLayout->addWidget(colorsLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        activeFGPushButton = new QPushButton(FontColorPreferencesFrame);
        activeFGPushButton->setObjectName("activeFGPushButton");
        activeFGPushButton->setEnabled(true);
        activeFGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        activeFGPushButton->setFlat(true);

        gridLayout->addWidget(activeFGPushButton, 0, 0, 1, 1);

        activeBGPushButton = new QPushButton(FontColorPreferencesFrame);
        activeBGPushButton->setObjectName("activeBGPushButton");
        activeBGPushButton->setEnabled(true);
        activeBGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));

        gridLayout->addWidget(activeBGPushButton, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        activeSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        activeSampleLineEdit->setObjectName("activeSampleLineEdit");
        activeSampleLineEdit->setEnabled(true);
        activeSampleLineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(activeSampleLineEdit);

        label_2 = new QLabel(FontColorPreferencesFrame);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        activeStyleComboBox = new QComboBox(FontColorPreferencesFrame);
        activeStyleComboBox->addItem(QString());
        activeStyleComboBox->addItem(QString());
        activeStyleComboBox->addItem(QString());
        activeStyleComboBox->setObjectName("activeStyleComboBox");

        horizontalLayout_2->addWidget(activeStyleComboBox);


        gridLayout->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        inactiveFGPushButton = new QPushButton(FontColorPreferencesFrame);
        inactiveFGPushButton->setObjectName("inactiveFGPushButton");
        inactiveFGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));

        gridLayout->addWidget(inactiveFGPushButton, 1, 0, 1, 1);

        inactiveBGPushButton = new QPushButton(FontColorPreferencesFrame);
        inactiveBGPushButton->setObjectName("inactiveBGPushButton");
        inactiveBGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));

        gridLayout->addWidget(inactiveBGPushButton, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        inactiveSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        inactiveSampleLineEdit->setObjectName("inactiveSampleLineEdit");
        inactiveSampleLineEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(inactiveSampleLineEdit);

        label_4 = new QLabel(FontColorPreferencesFrame);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        inactiveStyleComboBox = new QComboBox(FontColorPreferencesFrame);
        inactiveStyleComboBox->addItem(QString());
        inactiveStyleComboBox->addItem(QString());
        inactiveStyleComboBox->addItem(QString());
        inactiveStyleComboBox->setObjectName("inactiveStyleComboBox");

        horizontalLayout_3->addWidget(inactiveStyleComboBox);


        gridLayout->addLayout(horizontalLayout_3, 1, 2, 1, 1);

        markedFGPushButton = new QPushButton(FontColorPreferencesFrame);
        markedFGPushButton->setObjectName("markedFGPushButton");
        markedFGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        markedFGPushButton->setFlat(true);

        gridLayout->addWidget(markedFGPushButton, 2, 0, 1, 1);

        markedBGPushButton = new QPushButton(FontColorPreferencesFrame);
        markedBGPushButton->setObjectName("markedBGPushButton");
        markedBGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        markedBGPushButton->setFlat(true);

        gridLayout->addWidget(markedBGPushButton, 2, 1, 1, 1);

        markedSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        markedSampleLineEdit->setObjectName("markedSampleLineEdit");
        markedSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(markedSampleLineEdit, 2, 2, 1, 1);

        ignoredFGPushButton = new QPushButton(FontColorPreferencesFrame);
        ignoredFGPushButton->setObjectName("ignoredFGPushButton");
        ignoredFGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        ignoredFGPushButton->setFlat(true);

        gridLayout->addWidget(ignoredFGPushButton, 3, 0, 1, 1);

        ignoredBGPushButton = new QPushButton(FontColorPreferencesFrame);
        ignoredBGPushButton->setObjectName("ignoredBGPushButton");
        ignoredBGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        ignoredBGPushButton->setFlat(true);

        gridLayout->addWidget(ignoredBGPushButton, 3, 1, 1, 1);

        ignoredSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        ignoredSampleLineEdit->setObjectName("ignoredSampleLineEdit");
        ignoredSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(ignoredSampleLineEdit, 3, 2, 1, 1);

        clientFGPushButton = new QPushButton(FontColorPreferencesFrame);
        clientFGPushButton->setObjectName("clientFGPushButton");
        clientFGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        clientFGPushButton->setFlat(true);

        gridLayout->addWidget(clientFGPushButton, 4, 0, 1, 1);

        clientBGPushButton = new QPushButton(FontColorPreferencesFrame);
        clientBGPushButton->setObjectName("clientBGPushButton");
        clientBGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        clientBGPushButton->setFlat(true);

        gridLayout->addWidget(clientBGPushButton, 4, 1, 1, 1);

        clientSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        clientSampleLineEdit->setObjectName("clientSampleLineEdit");
        clientSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(clientSampleLineEdit, 4, 2, 1, 1);

        serverFGPushButton = new QPushButton(FontColorPreferencesFrame);
        serverFGPushButton->setObjectName("serverFGPushButton");
        serverFGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        serverFGPushButton->setFlat(true);

        gridLayout->addWidget(serverFGPushButton, 5, 0, 1, 1);

        serverBGPushButton = new QPushButton(FontColorPreferencesFrame);
        serverBGPushButton->setObjectName("serverBGPushButton");
        serverBGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        serverBGPushButton->setFlat(true);

        gridLayout->addWidget(serverBGPushButton, 5, 1, 1, 1);

        serverSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        serverSampleLineEdit->setObjectName("serverSampleLineEdit");
        serverSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(serverSampleLineEdit, 5, 2, 1, 1);

        validFilterBGPushButton = new QPushButton(FontColorPreferencesFrame);
        validFilterBGPushButton->setObjectName("validFilterBGPushButton");
        validFilterBGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        validFilterBGPushButton->setFlat(true);

        gridLayout->addWidget(validFilterBGPushButton, 6, 1, 1, 1);

        validFilterSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        validFilterSampleLineEdit->setObjectName("validFilterSampleLineEdit");
        validFilterSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(validFilterSampleLineEdit, 6, 2, 1, 1);

        invalidFilterBGPushButton = new QPushButton(FontColorPreferencesFrame);
        invalidFilterBGPushButton->setObjectName("invalidFilterBGPushButton");
        invalidFilterBGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        invalidFilterBGPushButton->setFlat(true);

        gridLayout->addWidget(invalidFilterBGPushButton, 7, 1, 1, 1);

        invalidFilterSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        invalidFilterSampleLineEdit->setObjectName("invalidFilterSampleLineEdit");
        invalidFilterSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(invalidFilterSampleLineEdit, 7, 2, 1, 1);

        deprecatedFilterBGPushButton = new QPushButton(FontColorPreferencesFrame);
        deprecatedFilterBGPushButton->setObjectName("deprecatedFilterBGPushButton");
        deprecatedFilterBGPushButton->setStyleSheet(QString::fromUtf8("QPushButton { border: 1px solid palette(Dark); }"));
        deprecatedFilterBGPushButton->setFlat(true);

        gridLayout->addWidget(deprecatedFilterBGPushButton, 8, 1, 1, 1);

        deprecatedFilterSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        deprecatedFilterSampleLineEdit->setObjectName("deprecatedFilterSampleLineEdit");
        deprecatedFilterSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(deprecatedFilterSampleLineEdit, 8, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(178, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(FontColorPreferencesFrame);

        QMetaObject::connectSlotsByName(FontColorPreferencesFrame);
    } // setupUi

    void retranslateUi(QFrame *FontColorPreferencesFrame)
    {
        FontColorPreferencesFrame->setWindowTitle(QCoreApplication::translate("FontColorPreferencesFrame", "Frame", nullptr));
        label->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Main window font:", nullptr));
        fontPushButton->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Select Font", nullptr));
        fontSampleLineEdit->setText(QString());
        colorsLabel->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Colors:", nullptr));
        activeSampleLineEdit->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Sample active selected item", nullptr));
        label_2->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Style:", nullptr));
        activeStyleComboBox->setItemText(0, QCoreApplication::translate("FontColorPreferencesFrame", "System Default", nullptr));
        activeStyleComboBox->setItemText(1, QCoreApplication::translate("FontColorPreferencesFrame", "Solid", nullptr));
        activeStyleComboBox->setItemText(2, QCoreApplication::translate("FontColorPreferencesFrame", "Gradient", nullptr));

        inactiveFGPushButton->setText(QString());
        inactiveBGPushButton->setText(QString());
        inactiveSampleLineEdit->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Sample inactive selected item", nullptr));
        label_4->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Style:", nullptr));
        inactiveStyleComboBox->setItemText(0, QCoreApplication::translate("FontColorPreferencesFrame", "System Default", nullptr));
        inactiveStyleComboBox->setItemText(1, QCoreApplication::translate("FontColorPreferencesFrame", "Solid", nullptr));
        inactiveStyleComboBox->setItemText(2, QCoreApplication::translate("FontColorPreferencesFrame", "Gradient", nullptr));

        markedSampleLineEdit->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Sample marked packet text", nullptr));
        ignoredSampleLineEdit->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Sample ignored packet text", nullptr));
        clientSampleLineEdit->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Sample \"Follow Stream\" client text", nullptr));
        serverSampleLineEdit->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Sample \"Follow Stream\" server text", nullptr));
        validFilterSampleLineEdit->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Sample valid filter", nullptr));
        invalidFilterSampleLineEdit->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Sample invalid filter", nullptr));
        deprecatedFilterSampleLineEdit->setText(QCoreApplication::translate("FontColorPreferencesFrame", "Sample warning filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FontColorPreferencesFrame: public Ui_FontColorPreferencesFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONT_COLOR_PREFERENCES_FRAME_H
