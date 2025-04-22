/********************************************************************************
** Form generated from reading UI file 'main_window_preferences_frame.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_PREFERENCES_FRAME_H
#define UI_MAIN_WINDOW_PREFERENCES_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainWindowPreferencesFrame
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *geometryCheckBox;
    QLabel *label;
    QGridLayout *gridLayout;
    QRadioButton *foStyleSpecifiedRadioButton;
    QLineEdit *foStyleSpecifiedLineEdit;
    QPushButton *foStyleSpecifiedPushButton;
    QRadioButton *foStyleLastOpenedRadioButton;
    QRadioButton *foStyleCWDRadioButton;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *maxFilterLineEdit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *maxRecentLineEdit;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *confirmUnsavedCheckBox;
    QCheckBox *displayAutoCompleteCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *mainToolbarComboBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *windowTitle;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *prependWindowTitle;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *languageComboBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QButtonGroup *openInButtonGroup;

    void setupUi(QFrame *MainWindowPreferencesFrame)
    {
        if (MainWindowPreferencesFrame->objectName().isEmpty())
            MainWindowPreferencesFrame->setObjectName("MainWindowPreferencesFrame");
        MainWindowPreferencesFrame->resize(405, 445);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowPreferencesFrame->sizePolicy().hasHeightForWidth());
        MainWindowPreferencesFrame->setSizePolicy(sizePolicy);
        MainWindowPreferencesFrame->setMinimumSize(QSize(0, 384));
        MainWindowPreferencesFrame->setFrameShape(QFrame::NoFrame);
        MainWindowPreferencesFrame->setFrameShadow(QFrame::Plain);
        MainWindowPreferencesFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(MainWindowPreferencesFrame);
        verticalLayout->setObjectName("verticalLayout");
        geometryCheckBox = new QCheckBox(MainWindowPreferencesFrame);
        geometryCheckBox->setObjectName("geometryCheckBox");

        verticalLayout->addWidget(geometryCheckBox);

        label = new QLabel(MainWindowPreferencesFrame);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        foStyleSpecifiedRadioButton = new QRadioButton(MainWindowPreferencesFrame);
        openInButtonGroup = new QButtonGroup(MainWindowPreferencesFrame);
        openInButtonGroup->setObjectName("openInButtonGroup");
        openInButtonGroup->addButton(foStyleSpecifiedRadioButton);
        foStyleSpecifiedRadioButton->setObjectName("foStyleSpecifiedRadioButton");

        gridLayout->addWidget(foStyleSpecifiedRadioButton, 1, 0, 1, 1);

        foStyleSpecifiedLineEdit = new QLineEdit(MainWindowPreferencesFrame);
        foStyleSpecifiedLineEdit->setObjectName("foStyleSpecifiedLineEdit");

        gridLayout->addWidget(foStyleSpecifiedLineEdit, 1, 1, 1, 1);

        foStyleSpecifiedPushButton = new QPushButton(MainWindowPreferencesFrame);
        foStyleSpecifiedPushButton->setObjectName("foStyleSpecifiedPushButton");

        gridLayout->addWidget(foStyleSpecifiedPushButton, 1, 2, 1, 1);

        foStyleLastOpenedRadioButton = new QRadioButton(MainWindowPreferencesFrame);
        openInButtonGroup->addButton(foStyleLastOpenedRadioButton);
        foStyleLastOpenedRadioButton->setObjectName("foStyleLastOpenedRadioButton");

        gridLayout->addWidget(foStyleLastOpenedRadioButton, 0, 0, 1, 3);

        foStyleCWDRadioButton = new QRadioButton(MainWindowPreferencesFrame);
        openInButtonGroup->addButton(foStyleCWDRadioButton);
        foStyleCWDRadioButton->setObjectName("foStyleCWDRadioButton");

        gridLayout->addWidget(foStyleCWDRadioButton, 2, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);

        label_2 = new QLabel(MainWindowPreferencesFrame);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        maxFilterLineEdit = new QLineEdit(MainWindowPreferencesFrame);
        maxFilterLineEdit->setObjectName("maxFilterLineEdit");

        horizontalLayout_2->addWidget(maxFilterLineEdit);

        label_3 = new QLabel(MainWindowPreferencesFrame);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        maxRecentLineEdit = new QLineEdit(MainWindowPreferencesFrame);
        maxRecentLineEdit->setObjectName("maxRecentLineEdit");

        horizontalLayout_3->addWidget(maxRecentLineEdit);

        label_4 = new QLabel(MainWindowPreferencesFrame);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        confirmUnsavedCheckBox = new QCheckBox(MainWindowPreferencesFrame);
        confirmUnsavedCheckBox->setObjectName("confirmUnsavedCheckBox");

        verticalLayout->addWidget(confirmUnsavedCheckBox);

        displayAutoCompleteCheckBox = new QCheckBox(MainWindowPreferencesFrame);
        displayAutoCompleteCheckBox->setObjectName("displayAutoCompleteCheckBox");

        verticalLayout->addWidget(displayAutoCompleteCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(MainWindowPreferencesFrame);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        mainToolbarComboBox = new QComboBox(MainWindowPreferencesFrame);
        mainToolbarComboBox->addItem(QString());
        mainToolbarComboBox->addItem(QString());
        mainToolbarComboBox->addItem(QString());
        mainToolbarComboBox->setObjectName("mainToolbarComboBox");

        horizontalLayout->addWidget(mainToolbarComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(MainWindowPreferencesFrame);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        windowTitle = new QLineEdit(MainWindowPreferencesFrame);
        windowTitle->setObjectName("windowTitle");

        horizontalLayout_4->addWidget(windowTitle);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_8 = new QLabel(MainWindowPreferencesFrame);
        label_8->setObjectName("label_8");

        horizontalLayout_5->addWidget(label_8);

        prependWindowTitle = new QLineEdit(MainWindowPreferencesFrame);
        prependWindowTitle->setObjectName("prependWindowTitle");

        horizontalLayout_5->addWidget(prependWindowTitle);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_7 = new QLabel(MainWindowPreferencesFrame);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        languageComboBox = new QComboBox(MainWindowPreferencesFrame);
        languageComboBox->addItem(QString());
        languageComboBox->setObjectName("languageComboBox");
        languageComboBox->setEnabled(true);
        languageComboBox->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(languageComboBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(MainWindowPreferencesFrame);

        QMetaObject::connectSlotsByName(MainWindowPreferencesFrame);
    } // setupUi

    void retranslateUi(QFrame *MainWindowPreferencesFrame)
    {
        MainWindowPreferencesFrame->setWindowTitle(QCoreApplication::translate("MainWindowPreferencesFrame", "Frame", nullptr));
#if QT_CONFIG(tooltip)
        geometryCheckBox->setToolTip(QCoreApplication::translate("MainWindowPreferencesFrame", "Checking this will save the size, position, and maximized state of the main window.", nullptr));
#endif // QT_CONFIG(tooltip)
        geometryCheckBox->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "Remember main window size and placement", nullptr));
        label->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "Open files in", nullptr));
        foStyleSpecifiedRadioButton->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "This folder:", nullptr));
        foStyleSpecifiedPushButton->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "Browse\342\200\246", nullptr));
        foStyleLastOpenedRadioButton->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "The most recently used folder", nullptr));
        foStyleCWDRadioButton->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "The current working directory", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "Show up to", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "filter entries", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "recent files", nullptr));
        confirmUnsavedCheckBox->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "Confirm unsaved capture files", nullptr));
        displayAutoCompleteCheckBox->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "Display autocompletion for filter text", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "Main toolbar style:", nullptr));
        mainToolbarComboBox->setItemText(0, QCoreApplication::translate("MainWindowPreferencesFrame", "Icons only", nullptr));
        mainToolbarComboBox->setItemText(1, QCoreApplication::translate("MainWindowPreferencesFrame", "Text only", nullptr));
        mainToolbarComboBox->setItemText(2, QCoreApplication::translate("MainWindowPreferencesFrame", "Icons & Text", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "Window title", nullptr));
#if QT_CONFIG(tooltip)
        windowTitle->setToolTip(QCoreApplication::translate("MainWindowPreferencesFrame", "<html><head/><body><p>Custom window title to be appended to the existing title<br/>%F = file path of the capture file<br/>%P = profile name<br/>%S = a conditional separator (&quot; - &quot;) that only shows when surrounded by variables with values or static text<br/>%V = version info</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "Prepend window title", nullptr));
#if QT_CONFIG(tooltip)
        prependWindowTitle->setToolTip(QCoreApplication::translate("MainWindowPreferencesFrame", "<html><head/><body><p>Custom window title to be prepended to the existing title<br/>%F = file path of the capture file<br/>%P = profile name<br/>%S = a conditional separator (&quot; - &quot;) that only shows when surrounded by variables with values or static text<br/>%V = version info</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("MainWindowPreferencesFrame", "Language: ", nullptr));
        languageComboBox->setItemText(0, QCoreApplication::translate("MainWindowPreferencesFrame", "Use system setting", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindowPreferencesFrame: public Ui_MainWindowPreferencesFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_PREFERENCES_FRAME_H
