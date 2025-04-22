/********************************************************************************
** Form generated from reading UI file 'sctp_assoc_analyse_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCTP_ASSOC_ANALYSE_DIALOG_H
#define UI_SCTP_ASSOC_ANALYSE_DIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SCTPAssocAnalyseDialog
{
public:
    QTabWidget *SCTPAssocAnalyseTab;
    QWidget *Statistics;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QLabel *data21Label;
    QLabel *label_18;
    QLabel *label_15;
    QLabel *bytes12Label;
    QLabel *bytes21Label;
    QLabel *data12Label;
    QLabel *label_17;
    QLabel *checksumLabel;
    QLabel *label_16;
    QWidget *gridLayoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *setFilterButton;
    QPushButton *chunkStatisticsButton;
    QDialogButtonBox *buttonBox;
    QLabel *hintLabel;
    QWidget *Endpoint_1;
    QLabel *labelEP1;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_226;
    QLabel *label_224;
    QLabel *label_222;
    QLabel *label_216;
    QLabel *label_215;
    QLabel *label_214;
    QLabel *label_212;
    QLabel *label_225;
    QLabel *label_211;
    QLabel *label_223;
    QLabel *label_221;
    QLabel *label_213;
    QListWidget *listWidgetEP1;
    QWidget *gridLayoutWidget_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *GraphBytes_1;
    QPushButton *GraphTSN_1;
    QPushButton *GraphArwnd_1;
    QDialogButtonBox *buttonBox_2;
    QLabel *hintLabel_2;
    QWidget *Endpoint_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_313;
    QLabel *label_324;
    QLabel *label_321;
    QLabel *label_312;
    QLabel *label_316;
    QLabel *label_311;
    QLabel *label_314;
    QLabel *label_322;
    QLabel *label_323;
    QLabel *label_326;
    QLabel *label_315;
    QLabel *label_325;
    QLabel *labelEP2;
    QListWidget *listWidgetEP2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *GraphBytes_2;
    QPushButton *GraphTSN_2;
    QPushButton *GraphArwnd_2;
    QDialogButtonBox *buttonBox_3;
    QLabel *hintLabel_3;

    void setupUi(QDialog *SCTPAssocAnalyseDialog)
    {
        if (SCTPAssocAnalyseDialog->objectName().isEmpty())
            SCTPAssocAnalyseDialog->setObjectName("SCTPAssocAnalyseDialog");
        SCTPAssocAnalyseDialog->resize(826, 672);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SCTPAssocAnalyseDialog->sizePolicy().hasHeightForWidth());
        SCTPAssocAnalyseDialog->setSizePolicy(sizePolicy);
        SCTPAssocAnalyseDialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        SCTPAssocAnalyseTab = new QTabWidget(SCTPAssocAnalyseDialog);
        SCTPAssocAnalyseTab->setObjectName("SCTPAssocAnalyseTab");
        SCTPAssocAnalyseTab->setGeometry(QRect(5, 10, 821, 661));
        Statistics = new QWidget();
        Statistics->setObjectName("Statistics");
        Statistics->setFocusPolicy(Qt::NoFocus);
        gridLayoutWidget_3 = new QWidget(Statistics);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(20, 40, 781, 231));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(gridLayoutWidget_3);
        label_13->setObjectName("label_13");

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        data21Label = new QLabel(gridLayoutWidget_3);
        data21Label->setObjectName("data21Label");

        gridLayout_3->addWidget(data21Label, 3, 1, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_3);
        label_18->setObjectName("label_18");

        gridLayout_3->addWidget(label_18, 4, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_3);
        label_15->setObjectName("label_15");

        gridLayout_3->addWidget(label_15, 0, 0, 1, 1);

        bytes12Label = new QLabel(gridLayoutWidget_3);
        bytes12Label->setObjectName("bytes12Label");

        gridLayout_3->addWidget(bytes12Label, 2, 1, 1, 1);

        bytes21Label = new QLabel(gridLayoutWidget_3);
        bytes21Label->setObjectName("bytes21Label");

        gridLayout_3->addWidget(bytes21Label, 4, 1, 1, 1);

        data12Label = new QLabel(gridLayoutWidget_3);
        data12Label->setObjectName("data12Label");

        gridLayout_3->addWidget(data12Label, 1, 1, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_3);
        label_17->setObjectName("label_17");

        gridLayout_3->addWidget(label_17, 3, 0, 1, 1);

        checksumLabel = new QLabel(gridLayoutWidget_3);
        checksumLabel->setObjectName("checksumLabel");

        gridLayout_3->addWidget(checksumLabel, 0, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_3);
        label_16->setObjectName("label_16");

        gridLayout_3->addWidget(label_16, 1, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(Statistics);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(10, 540, 791, 55));
        horizontalLayout = new QHBoxLayout(gridLayoutWidget_4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        setFilterButton = new QPushButton(gridLayoutWidget_4);
        setFilterButton->setObjectName("setFilterButton");
        setFilterButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(setFilterButton);

        chunkStatisticsButton = new QPushButton(gridLayoutWidget_4);
        chunkStatisticsButton->setObjectName("chunkStatisticsButton");
        chunkStatisticsButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(chunkStatisticsButton);

        buttonBox = new QDialogButtonBox(gridLayoutWidget_4);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);

        hintLabel = new QLabel(Statistics);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setGeometry(QRect(10, 510, 791, 20));
        SCTPAssocAnalyseTab->addTab(Statistics, QString());
        Endpoint_1 = new QWidget();
        Endpoint_1->setObjectName("Endpoint_1");
        labelEP1 = new QLabel(Endpoint_1);
        labelEP1->setObjectName("labelEP1");
        labelEP1->setGeometry(QRect(10, 10, 791, 41));
        gridLayoutWidget = new QWidget(Endpoint_1);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 210, 791, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_226 = new QLabel(gridLayoutWidget);
        label_226->setObjectName("label_226");

        gridLayout->addWidget(label_226, 5, 1, 1, 1);

        label_224 = new QLabel(gridLayoutWidget);
        label_224->setObjectName("label_224");

        gridLayout->addWidget(label_224, 3, 1, 1, 1);

        label_222 = new QLabel(gridLayoutWidget);
        label_222->setObjectName("label_222");

        gridLayout->addWidget(label_222, 1, 1, 1, 1);

        label_216 = new QLabel(gridLayoutWidget);
        label_216->setObjectName("label_216");

        gridLayout->addWidget(label_216, 5, 0, 1, 1);

        label_215 = new QLabel(gridLayoutWidget);
        label_215->setObjectName("label_215");

        gridLayout->addWidget(label_215, 4, 0, 1, 1);

        label_214 = new QLabel(gridLayoutWidget);
        label_214->setObjectName("label_214");

        gridLayout->addWidget(label_214, 3, 0, 1, 1);

        label_212 = new QLabel(gridLayoutWidget);
        label_212->setObjectName("label_212");

        gridLayout->addWidget(label_212, 1, 0, 1, 1);

        label_225 = new QLabel(gridLayoutWidget);
        label_225->setObjectName("label_225");

        gridLayout->addWidget(label_225, 4, 1, 1, 1);

        label_211 = new QLabel(gridLayoutWidget);
        label_211->setObjectName("label_211");

        gridLayout->addWidget(label_211, 0, 0, 1, 1);

        label_223 = new QLabel(gridLayoutWidget);
        label_223->setObjectName("label_223");

        gridLayout->addWidget(label_223, 2, 1, 1, 1);

        label_221 = new QLabel(gridLayoutWidget);
        label_221->setObjectName("label_221");

        gridLayout->addWidget(label_221, 0, 1, 1, 1);

        label_213 = new QLabel(gridLayoutWidget);
        label_213->setObjectName("label_213");

        gridLayout->addWidget(label_213, 2, 0, 1, 1);

        listWidgetEP1 = new QListWidget(Endpoint_1);
        listWidgetEP1->setObjectName("listWidgetEP1");
        listWidgetEP1->setGeometry(QRect(10, 60, 791, 141));
        gridLayoutWidget_5 = new QWidget(Endpoint_1);
        gridLayoutWidget_5->setObjectName("gridLayoutWidget_5");
        gridLayoutWidget_5->setGeometry(QRect(10, 540, 791, 55));
        horizontalLayout_3 = new QHBoxLayout(gridLayoutWidget_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        GraphBytes_1 = new QPushButton(gridLayoutWidget_5);
        GraphBytes_1->setObjectName("GraphBytes_1");
        GraphBytes_1->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(GraphBytes_1);

        GraphTSN_1 = new QPushButton(gridLayoutWidget_5);
        GraphTSN_1->setObjectName("GraphTSN_1");
        GraphTSN_1->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(GraphTSN_1);

        GraphArwnd_1 = new QPushButton(gridLayoutWidget_5);
        GraphArwnd_1->setObjectName("GraphArwnd_1");

        horizontalLayout_3->addWidget(GraphArwnd_1);

        buttonBox_2 = new QDialogButtonBox(gridLayoutWidget_5);
        buttonBox_2->setObjectName("buttonBox_2");
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_3->addWidget(buttonBox_2);

        hintLabel_2 = new QLabel(Endpoint_1);
        hintLabel_2->setObjectName("hintLabel_2");
        hintLabel_2->setGeometry(QRect(10, 520, 791, 20));
        SCTPAssocAnalyseTab->addTab(Endpoint_1, QString());
        Endpoint_2 = new QWidget();
        Endpoint_2->setObjectName("Endpoint_2");
        gridLayoutWidget_2 = new QWidget(Endpoint_2);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 210, 791, 301));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_313 = new QLabel(gridLayoutWidget_2);
        label_313->setObjectName("label_313");

        gridLayout_2->addWidget(label_313, 2, 0, 1, 1);

        label_324 = new QLabel(gridLayoutWidget_2);
        label_324->setObjectName("label_324");

        gridLayout_2->addWidget(label_324, 3, 1, 1, 1);

        label_321 = new QLabel(gridLayoutWidget_2);
        label_321->setObjectName("label_321");

        gridLayout_2->addWidget(label_321, 0, 1, 1, 1);

        label_312 = new QLabel(gridLayoutWidget_2);
        label_312->setObjectName("label_312");

        gridLayout_2->addWidget(label_312, 1, 0, 1, 1);

        label_316 = new QLabel(gridLayoutWidget_2);
        label_316->setObjectName("label_316");

        gridLayout_2->addWidget(label_316, 5, 0, 1, 1);

        label_311 = new QLabel(gridLayoutWidget_2);
        label_311->setObjectName("label_311");

        gridLayout_2->addWidget(label_311, 0, 0, 1, 1);

        label_314 = new QLabel(gridLayoutWidget_2);
        label_314->setObjectName("label_314");

        gridLayout_2->addWidget(label_314, 3, 0, 1, 1);

        label_322 = new QLabel(gridLayoutWidget_2);
        label_322->setObjectName("label_322");

        gridLayout_2->addWidget(label_322, 1, 1, 1, 1);

        label_323 = new QLabel(gridLayoutWidget_2);
        label_323->setObjectName("label_323");

        gridLayout_2->addWidget(label_323, 2, 1, 1, 1);

        label_326 = new QLabel(gridLayoutWidget_2);
        label_326->setObjectName("label_326");

        gridLayout_2->addWidget(label_326, 5, 1, 1, 1);

        label_315 = new QLabel(gridLayoutWidget_2);
        label_315->setObjectName("label_315");

        gridLayout_2->addWidget(label_315, 4, 0, 1, 1);

        label_325 = new QLabel(gridLayoutWidget_2);
        label_325->setObjectName("label_325");

        gridLayout_2->addWidget(label_325, 4, 1, 1, 1);

        labelEP2 = new QLabel(Endpoint_2);
        labelEP2->setObjectName("labelEP2");
        labelEP2->setGeometry(QRect(10, 10, 791, 41));
        listWidgetEP2 = new QListWidget(Endpoint_2);
        listWidgetEP2->setObjectName("listWidgetEP2");
        listWidgetEP2->setGeometry(QRect(10, 60, 791, 141));
        horizontalLayoutWidget = new QWidget(Endpoint_2);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 540, 791, 55));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        GraphBytes_2 = new QPushButton(horizontalLayoutWidget);
        GraphBytes_2->setObjectName("GraphBytes_2");
        GraphBytes_2->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(GraphBytes_2);

        GraphTSN_2 = new QPushButton(horizontalLayoutWidget);
        GraphTSN_2->setObjectName("GraphTSN_2");
        GraphTSN_2->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(GraphTSN_2);

        GraphArwnd_2 = new QPushButton(horizontalLayoutWidget);
        GraphArwnd_2->setObjectName("GraphArwnd_2");

        horizontalLayout_2->addWidget(GraphArwnd_2);

        buttonBox_3 = new QDialogButtonBox(horizontalLayoutWidget);
        buttonBox_3->setObjectName("buttonBox_3");
        buttonBox_3->setOrientation(Qt::Horizontal);
        buttonBox_3->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox_3);

        hintLabel_3 = new QLabel(Endpoint_2);
        hintLabel_3->setObjectName("hintLabel_3");
        hintLabel_3->setGeometry(QRect(10, 520, 791, 20));
        SCTPAssocAnalyseTab->addTab(Endpoint_2, QString());

        retranslateUi(SCTPAssocAnalyseDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::clicked, SCTPAssocAnalyseDialog, qOverload<>(&QDialog::close));
        QObject::connect(buttonBox_2, &QDialogButtonBox::clicked, SCTPAssocAnalyseDialog, qOverload<>(&QDialog::close));
        QObject::connect(buttonBox_3, &QDialogButtonBox::clicked, SCTPAssocAnalyseDialog, qOverload<>(&QDialog::close));

        SCTPAssocAnalyseTab->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SCTPAssocAnalyseDialog);
    } // setupUi

    void retranslateUi(QDialog *SCTPAssocAnalyseDialog)
    {
        SCTPAssocAnalyseDialog->setWindowTitle(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Wireshark - Analyse Association", nullptr));
        SCTPAssocAnalyseTab->setWindowTitle(QCoreApplication::translate("SCTPAssocAnalyseDialog", "TabWidget", nullptr));
        label_13->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Number of Data Bytes from EP1 to EP2:", nullptr));
        data21Label->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_18->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Number of Data Bytes from EP2 to EP1: ", nullptr));
        label_15->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Checksum Type:", nullptr));
        bytes12Label->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        bytes21Label->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        data12Label->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_17->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Number of Data Chunks from EP2 to EP1: ", nullptr));
        checksumLabel->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_16->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Number of Data Chunks from EP1 to EP2: ", nullptr));
        setFilterButton->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Filter Association", nullptr));
        chunkStatisticsButton->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Chunk Statistics", nullptr));
        hintLabel->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "<small><i>For complete analysis check SCTP preference Enable Association indexing</i></small>", nullptr));
        SCTPAssocAnalyseTab->setTabText(SCTPAssocAnalyseTab->indexOf(Statistics), QCoreApplication::translate("SCTPAssocAnalyseDialog", "Statistics", nullptr));
        labelEP1->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Complete List of IP addresses from INIT Chunk:", nullptr));
        label_226->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_224->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_222->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_216->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Minimum Number of Outbound Streams:", nullptr));
        label_215->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Provided Number of Outbound Streams:", nullptr));
        label_214->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Minimum Number of Inbound Streams:", nullptr));
        label_212->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Sent Verification Tag:", nullptr));
        label_225->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_211->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Port:", nullptr));
        label_223->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_221->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_213->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Requested Number of Inbound Streams:", nullptr));
        GraphBytes_1->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Graph Bytes", nullptr));
        GraphTSN_1->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Graph TSN", nullptr));
        GraphArwnd_1->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Graph Arwnd", nullptr));
        hintLabel_2->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "<small><i>For complete analysis check SCTP preference Enable Association indexing</i></small>", nullptr));
        SCTPAssocAnalyseTab->setTabText(SCTPAssocAnalyseTab->indexOf(Endpoint_1), QCoreApplication::translate("SCTPAssocAnalyseDialog", "Endpoint 1", nullptr));
        label_313->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Requested Number of Inbound Streams:", nullptr));
        label_324->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_321->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_312->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Sent Verification Tag:", nullptr));
        label_316->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Minimum Number of Outbound Streams:", nullptr));
        label_311->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Port:", nullptr));
        label_314->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Minimum Number of Inbound Streams:", nullptr));
        label_322->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_323->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_326->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        label_315->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Provided Number of Outbound Streams:", nullptr));
        label_325->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "-", nullptr));
        labelEP2->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Complete List of IP addresses from INIT_ACK Chunk:", nullptr));
        GraphBytes_2->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Graph Bytes", nullptr));
        GraphTSN_2->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Graph TSN", nullptr));
        GraphArwnd_2->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "Graph Arwnd", nullptr));
        hintLabel_3->setText(QCoreApplication::translate("SCTPAssocAnalyseDialog", "<small><i>For complete analysis check SCTP preference Enable Association indexing</i></small>", nullptr));
        SCTPAssocAnalyseTab->setTabText(SCTPAssocAnalyseTab->indexOf(Endpoint_2), QCoreApplication::translate("SCTPAssocAnalyseDialog", "Endpoint 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCTPAssocAnalyseDialog: public Ui_SCTPAssocAnalyseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCTP_ASSOC_ANALYSE_DIALOG_H
