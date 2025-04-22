/********************************************************************************
** Form generated from reading UI file 'traffic_table_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAFFIC_TABLE_DIALOG_H
#define UI_TRAFFIC_TABLE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ui/qt/widgets/traffic_tab.h"
#include "ui/qt/widgets/traffic_types_list.h"

QT_BEGIN_NAMESPACE

class Ui_TrafficTableDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *grpSettings;
    QVBoxLayout *verticalLayout;
    QCheckBox *nameResolutionCheckBox;
    QCheckBox *absoluteTimeCheckBox;
    QCheckBox *displayFilterCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *btnBoxSettings;
    TrafficTypesList *trafficList;
    QLineEdit *trafficListSearch;
    TrafficTab *trafficTab;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TrafficTableDialog)
    {
        if (TrafficTableDialog->objectName().isEmpty())
            TrafficTableDialog->setObjectName("TrafficTableDialog");
        TrafficTableDialog->resize(680, 475);
        verticalLayout_3 = new QVBoxLayout(TrafficTableDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(TrafficTableDialog);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(210, 16777215));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        grpSettings = new QGroupBox(widget);
        grpSettings->setObjectName("grpSettings");
        verticalLayout = new QVBoxLayout(grpSettings);
        verticalLayout->setObjectName("verticalLayout");
        nameResolutionCheckBox = new QCheckBox(grpSettings);
        nameResolutionCheckBox->setObjectName("nameResolutionCheckBox");

        verticalLayout->addWidget(nameResolutionCheckBox);

        absoluteTimeCheckBox = new QCheckBox(grpSettings);
        absoluteTimeCheckBox->setObjectName("absoluteTimeCheckBox");

        verticalLayout->addWidget(absoluteTimeCheckBox);

        displayFilterCheckBox = new QCheckBox(grpSettings);
        displayFilterCheckBox->setObjectName("displayFilterCheckBox");

        verticalLayout->addWidget(displayFilterCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnBoxSettings = new QDialogButtonBox(grpSettings);
        btnBoxSettings->setObjectName("btnBoxSettings");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnBoxSettings->sizePolicy().hasHeightForWidth());
        btnBoxSettings->setSizePolicy(sizePolicy);
        btnBoxSettings->setOrientation(Qt::Vertical);
        btnBoxSettings->setStandardButtons(QDialogButtonBox::NoButton);

        verticalLayout->addWidget(btnBoxSettings);


        verticalLayout_2->addWidget(grpSettings);

        trafficList = new TrafficTypesList(widget);
        trafficList->setObjectName("trafficList");

        verticalLayout_2->addWidget(trafficList);

        trafficListSearch = new QLineEdit(widget);
        trafficListSearch->setObjectName("trafficListSearch");

        verticalLayout_2->addWidget(trafficListSearch);


        horizontalLayout->addWidget(widget);

        trafficTab = new TrafficTab(TrafficTableDialog);
        trafficTab->setObjectName("trafficTab");

        horizontalLayout->addWidget(trafficTab);


        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(TrafficTableDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(TrafficTableDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TrafficTableDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TrafficTableDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TrafficTableDialog);
    } // setupUi

    void retranslateUi(QDialog *TrafficTableDialog)
    {
        grpSettings->setTitle(QCoreApplication::translate("TrafficTableDialog", "GroupBox", nullptr));
#if QT_CONFIG(tooltip)
        nameResolutionCheckBox->setToolTip(QCoreApplication::translate("TrafficTableDialog", "<html><head/><body><p>Show resolved addresses and port names rather than plain values. The corresponding name resolution preference must be enabled.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        nameResolutionCheckBox->setText(QCoreApplication::translate("TrafficTableDialog", "Name resolution", nullptr));
#if QT_CONFIG(tooltip)
        absoluteTimeCheckBox->setToolTip(QCoreApplication::translate("TrafficTableDialog", "<html><head/><body><p>Show absolute times in the start time column.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        absoluteTimeCheckBox->setText(QCoreApplication::translate("TrafficTableDialog", "Absolute start time", nullptr));
#if QT_CONFIG(tooltip)
        displayFilterCheckBox->setToolTip(QCoreApplication::translate("TrafficTableDialog", "<html><head/><body><p>Only show conversations matching the current display filter</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        displayFilterCheckBox->setText(QCoreApplication::translate("TrafficTableDialog", "Limit to display filter", nullptr));
#if QT_CONFIG(tooltip)
        trafficListSearch->setToolTip(QCoreApplication::translate("TrafficTableDialog", "<html><head/><body><p>Only show types matching the filter value</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        trafficListSearch->setText(QString());
        trafficListSearch->setPlaceholderText(QCoreApplication::translate("TrafficTableDialog", "Filter list for specific type", nullptr));
        (void)TrafficTableDialog;
    } // retranslateUi

};

namespace Ui {
    class TrafficTableDialog: public Ui_TrafficTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAFFIC_TABLE_DIALOG_H
