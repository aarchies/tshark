/********************************************************************************
** Form generated from reading UI file 'preferences_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_DIALOG_H
#define UI_PREFERENCES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include "capture_preferences_frame.h"
#include "column_preferences_frame.h"
#include "font_color_preferences_frame.h"
#include "layout_preferences_frame.h"
#include "main_window_preferences_frame.h"
#include "rsa_keys_frame.h"
#include "uat_frame.h"
#include "widgets/pref_module_view.h"

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    PrefModuleTreeView *prefsView;
    QStackedWidget *stackedWidget;
    MainWindowPreferencesFrame *appearanceFrame;
    LayoutPreferencesFrame *layoutFrame;
    ColumnPreferencesFrame *columnFrame;
    FontColorPreferencesFrame *fontandcolorFrame;
    CapturePreferencesFrame *captureFrame;
    UatFrame *expertFrame;
    UatFrame *filterExpressonsFrame;
    RsaKeysFrame *rsaKeysFrame;
    QFrame *advancedFrame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *advancedSearchLineEdit;
    QCheckBox *showChangedValuesCheckBox;
    QSpacerItem *horizontalSpacer;
    QTreeView *advancedView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName("PreferencesDialog");
        PreferencesDialog->resize(680, 475);
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName("verticalLayout");
        splitter = new QSplitter(PreferencesDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        prefsView = new PrefModuleTreeView(splitter);
        prefsView->setObjectName("prefsView");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(prefsView->sizePolicy().hasHeightForWidth());
        prefsView->setSizePolicy(sizePolicy);
        prefsView->setUniformRowHeights(true);
        prefsView->setHeaderHidden(true);
        prefsView->setSortingEnabled(true);
        splitter->addWidget(prefsView);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        appearanceFrame = new MainWindowPreferencesFrame();
        appearanceFrame->setObjectName("appearanceFrame");
        stackedWidget->addWidget(appearanceFrame);
        layoutFrame = new LayoutPreferencesFrame();
        layoutFrame->setObjectName("layoutFrame");
        stackedWidget->addWidget(layoutFrame);
        columnFrame = new ColumnPreferencesFrame();
        columnFrame->setObjectName("columnFrame");
        stackedWidget->addWidget(columnFrame);
        fontandcolorFrame = new FontColorPreferencesFrame();
        fontandcolorFrame->setObjectName("fontandcolorFrame");
        stackedWidget->addWidget(fontandcolorFrame);
        captureFrame = new CapturePreferencesFrame();
        captureFrame->setObjectName("captureFrame");
        stackedWidget->addWidget(captureFrame);
        expertFrame = new UatFrame();
        expertFrame->setObjectName("expertFrame");
        stackedWidget->addWidget(expertFrame);
        filterExpressonsFrame = new UatFrame();
        filterExpressonsFrame->setObjectName("filterExpressonsFrame");
        stackedWidget->addWidget(filterExpressonsFrame);
        rsaKeysFrame = new RsaKeysFrame();
        rsaKeysFrame->setObjectName("rsaKeysFrame");
        stackedWidget->addWidget(rsaKeysFrame);
        advancedFrame = new QFrame();
        advancedFrame->setObjectName("advancedFrame");
        verticalLayout_2 = new QVBoxLayout(advancedFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(advancedFrame);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        advancedSearchLineEdit = new QLineEdit(advancedFrame);
        advancedSearchLineEdit->setObjectName("advancedSearchLineEdit");

        horizontalLayout_2->addWidget(advancedSearchLineEdit);

        showChangedValuesCheckBox = new QCheckBox(advancedFrame);
        showChangedValuesCheckBox->setObjectName("showChangedValuesCheckBox");

        horizontalLayout_2->addWidget(showChangedValuesCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        advancedView = new QTreeView(advancedFrame);
        advancedView->setObjectName("advancedView");
        advancedView->setIndentation(0);
        advancedView->setUniformRowHeights(true);
        advancedView->setSelectionMode(QAbstractItemView::ContiguousSelection);
        advancedView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(advancedView);

        stackedWidget->addWidget(advancedFrame);
        splitter->addWidget(stackedWidget);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok|QDialogButtonBox::Apply);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PreferencesDialog);

        stackedWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        label->setText(QCoreApplication::translate("PreferencesDialog", "Search:", nullptr));
#if QT_CONFIG(tooltip)
        showChangedValuesCheckBox->setToolTip(QCoreApplication::translate("PreferencesDialog", "Checking this will show only changed preferences.", nullptr));
#endif // QT_CONFIG(tooltip)
        showChangedValuesCheckBox->setText(QCoreApplication::translate("PreferencesDialog", "Show changed values", nullptr));
        (void)PreferencesDialog;
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_DIALOG_H
