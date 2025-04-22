/********************************************************************************
** Form generated from reading UI file 'capture_preferences_frame.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTURE_PREFERENCES_FRAME_H
#define UI_CAPTURE_PREFERENCES_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widgets/syntax_line_edit.h"

QT_BEGIN_NAMESPACE

class Ui_CapturePreferencesFrame
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *defaultInterfaceSpacer;
    QComboBox *defaultInterfaceComboBox;
    QCheckBox *capturePromModeCheckBox;
    QCheckBox *captureMonitorModeCheckBox;
    QCheckBox *capturePcapNgCheckBox;
    QCheckBox *captureRealTimeCheckBox;
    QHBoxLayout *captureUpdateInterval;
    QLabel *captureUpdateIntervalLabel;
    SyntaxLineEdit *captureUpdateIntervalLineEdit;
    QSpacerItem *captureUpdateIntervalHorizontalSpacer;
    QCheckBox *captureNoInterfaceLoad;
    QCheckBox *captureNoExtcapCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *CapturePreferencesFrame)
    {
        if (CapturePreferencesFrame->objectName().isEmpty())
            CapturePreferencesFrame->setObjectName("CapturePreferencesFrame");
        CapturePreferencesFrame->resize(354, 220);
        CapturePreferencesFrame->setMinimumSize(QSize(0, 191));
        CapturePreferencesFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(CapturePreferencesFrame);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(CapturePreferencesFrame);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        defaultInterfaceSpacer = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(defaultInterfaceSpacer);

        defaultInterfaceComboBox = new QComboBox(CapturePreferencesFrame);
        defaultInterfaceComboBox->setObjectName("defaultInterfaceComboBox");
        defaultInterfaceComboBox->setEditable(true);

        horizontalLayout->addWidget(defaultInterfaceComboBox);


        verticalLayout->addLayout(horizontalLayout);

        capturePromModeCheckBox = new QCheckBox(CapturePreferencesFrame);
        capturePromModeCheckBox->setObjectName("capturePromModeCheckBox");

        verticalLayout->addWidget(capturePromModeCheckBox);

        captureMonitorModeCheckBox = new QCheckBox(CapturePreferencesFrame);
        captureMonitorModeCheckBox->setObjectName("captureMonitorModeCheckBox");

        verticalLayout->addWidget(captureMonitorModeCheckBox);

        capturePcapNgCheckBox = new QCheckBox(CapturePreferencesFrame);
        capturePcapNgCheckBox->setObjectName("capturePcapNgCheckBox");

        verticalLayout->addWidget(capturePcapNgCheckBox);

        captureRealTimeCheckBox = new QCheckBox(CapturePreferencesFrame);
        captureRealTimeCheckBox->setObjectName("captureRealTimeCheckBox");

        verticalLayout->addWidget(captureRealTimeCheckBox);

        captureUpdateInterval = new QHBoxLayout();
        captureUpdateInterval->setObjectName("captureUpdateInterval");
        captureUpdateIntervalLabel = new QLabel(CapturePreferencesFrame);
        captureUpdateIntervalLabel->setObjectName("captureUpdateIntervalLabel");

        captureUpdateInterval->addWidget(captureUpdateIntervalLabel);

        captureUpdateIntervalLineEdit = new SyntaxLineEdit(CapturePreferencesFrame);
        captureUpdateIntervalLineEdit->setObjectName("captureUpdateIntervalLineEdit");

        captureUpdateInterval->addWidget(captureUpdateIntervalLineEdit);

        captureUpdateIntervalHorizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        captureUpdateInterval->addItem(captureUpdateIntervalHorizontalSpacer);


        verticalLayout->addLayout(captureUpdateInterval);

        captureNoInterfaceLoad = new QCheckBox(CapturePreferencesFrame);
        captureNoInterfaceLoad->setObjectName("captureNoInterfaceLoad");

        verticalLayout->addWidget(captureNoInterfaceLoad);

        captureNoExtcapCheckBox = new QCheckBox(CapturePreferencesFrame);
        captureNoExtcapCheckBox->setObjectName("captureNoExtcapCheckBox");

        verticalLayout->addWidget(captureNoExtcapCheckBox);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(CapturePreferencesFrame);

        QMetaObject::connectSlotsByName(CapturePreferencesFrame);
    } // setupUi

    void retranslateUi(QFrame *CapturePreferencesFrame)
    {
        CapturePreferencesFrame->setWindowTitle(QCoreApplication::translate("CapturePreferencesFrame", "Frame", nullptr));
        label->setText(QCoreApplication::translate("CapturePreferencesFrame", "Default interface", nullptr));
#if QT_CONFIG(tooltip)
        capturePromModeCheckBox->setToolTip(QCoreApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>You probably want to enable this. Usually a network card will only capture the traffic sent to its own network address. If you want to capture all traffic that the network card can &quot;see&quot;, mark this option. See the FAQ for some more details of capturing packets from a switched network.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        capturePromModeCheckBox->setText(QCoreApplication::translate("CapturePreferencesFrame", "Capture packets in promiscuous mode", nullptr));
#if QT_CONFIG(tooltip)
        captureMonitorModeCheckBox->setToolTip(QCoreApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>Usually a wireless network card will only capture the traffic sent to and from its own network address, and only captures <em>user data</em> traffic with &quot;fake&quot; Ethernet headers. If you want to capture all traffic that wireless network cards can &quot;see&quot;, or are interested in 802.11 management or control packets, or radio-layer information, mark this option. Monitor mode availability depends on the wireless card and driver. See the Wiki for more details of capturing packets on WLAN networks.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        captureMonitorModeCheckBox->setText(QCoreApplication::translate("CapturePreferencesFrame", "Capture packets in monitor mode on 802.11 devices", nullptr));
#if QT_CONFIG(tooltip)
        capturePcapNgCheckBox->setToolTip(QCoreApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>Capture packets in the next-generation capture file format.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        capturePcapNgCheckBox->setText(QCoreApplication::translate("CapturePreferencesFrame", "Capture packets in pcapng format", nullptr));
#if QT_CONFIG(tooltip)
        captureRealTimeCheckBox->setToolTip(QCoreApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>Update the list of packets while capture is in progress. This can result in dropped packets on high-speed networks.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        captureRealTimeCheckBox->setText(QCoreApplication::translate("CapturePreferencesFrame", "Update list of packets in real time", nullptr));
        captureUpdateIntervalLabel->setText(QCoreApplication::translate("CapturePreferencesFrame", "Interval between updates (ms)", nullptr));
#if QT_CONFIG(tooltip)
        captureUpdateIntervalLabel->setToolTip(QCoreApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>How often the capture notifies the GUI of new packets. Affects how often the GUI updates and the granularity of timers.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        captureUpdateIntervalLineEdit->setToolTip(QCoreApplication::translate("CapturePreferencesFrame", "<html><head/><body><p>The interval between new packet updates. Affects how often the GUI updates and the granularity of timers.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        captureNoInterfaceLoad->setText(QCoreApplication::translate("CapturePreferencesFrame", "Don't load interfaces on startup", nullptr));
        captureNoExtcapCheckBox->setText(QCoreApplication::translate("CapturePreferencesFrame", "Disable external capture interfaces", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CapturePreferencesFrame: public Ui_CapturePreferencesFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTURE_PREFERENCES_FRAME_H
