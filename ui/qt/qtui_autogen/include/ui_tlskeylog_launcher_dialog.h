/********************************************************************************
** Form generated from reading UI file 'tlskeylog_launcher_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TLSKEYLOG_LAUNCHER_DIALOG_H
#define UI_TLSKEYLOG_LAUNCHER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TLSKeylogDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *keylogLineEdit;
    QPushButton *keylogPushButton;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *commandLineEdit;
    QPushButton *programPushbutton;
    QFrame *line;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QFrame *line_2;

    void setupUi(QDialog *TLSKeylogDialog)
    {
        if (TLSKeylogDialog->objectName().isEmpty())
            TLSKeylogDialog->setObjectName("TLSKeylogDialog");
        TLSKeylogDialog->resize(640, 380);
        gridLayout = new QGridLayout(TLSKeylogDialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        keylogLineEdit = new QLineEdit(TLSKeylogDialog);
        keylogLineEdit->setObjectName("keylogLineEdit");

        horizontalLayout->addWidget(keylogLineEdit);

        keylogPushButton = new QPushButton(TLSKeylogDialog);
        keylogPushButton->setObjectName("keylogPushButton");

        horizontalLayout->addWidget(keylogPushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_2, 5, 0, 1, 1);

        label_4 = new QLabel(TLSKeylogDialog);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 13, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        commandLineEdit = new QLineEdit(TLSKeylogDialog);
        commandLineEdit->setObjectName("commandLineEdit");

        horizontalLayout_2->addWidget(commandLineEdit);

        programPushbutton = new QPushButton(TLSKeylogDialog);
        programPushbutton->setObjectName("programPushbutton");

        horizontalLayout_2->addWidget(programPushbutton);


        gridLayout->addLayout(horizontalLayout_2, 14, 0, 1, 1);

        line = new QFrame(TLSKeylogDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(TLSKeylogDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        gridLayout->addWidget(buttonBox, 18, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 17, 0, 1, 1);

        label_5 = new QLabel(TLSKeylogDialog);
        label_5->setObjectName("label_5");
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer_3, 11, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(TLSKeylogDialog);
        label_3->setObjectName("label_3");
        label_3->setWordWrap(true);

        horizontalLayout_4->addWidget(label_3);


        gridLayout->addLayout(horizontalLayout_4, 15, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer_4, 3, 0, 1, 1);

        label = new QLabel(TLSKeylogDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(TLSKeylogDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout_3, 7, 0, 1, 1);

        line_2 = new QFrame(TLSKeylogDialog);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 12, 0, 1, 1);


        retranslateUi(TLSKeylogDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TLSKeylogDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TLSKeylogDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TLSKeylogDialog);
    } // setupUi

    void retranslateUi(QDialog *TLSKeylogDialog)
    {
        TLSKeylogDialog->setWindowTitle(QCoreApplication::translate("TLSKeylogDialog", "Dialog", nullptr));
        keylogPushButton->setText(QCoreApplication::translate("TLSKeylogDialog", "Browse\342\200\246", nullptr));
        label_4->setText(QCoreApplication::translate("TLSKeylogDialog", "Command line", nullptr));
        programPushbutton->setText(QCoreApplication::translate("TLSKeylogDialog", "Browse\342\200\246", nullptr));
        label_5->setText(QCoreApplication::translate("TLSKeylogDialog", "Run an application with the SSLKEYLOGFILE environment variable set to the file specified by the TLS key log filename preference. This enables TLS decryption in Wireshark. Set the key log file and start the capture before launching the application to ensure that the initial TLS handshakes are captured.", nullptr));
        label_3->setText(QCoreApplication::translate("TLSKeylogDialog", "<span style=\" font-size:small;\">Firefox and Chrome are known to work. If your desired browser is currently running, close it first before launching it below. Command line options are supported.</span>", nullptr));
        label->setText(QCoreApplication::translate("TLSKeylogDialog", "TLS (Pre)-Master-Secret log file path (tls.keylog_file)", nullptr));
        label_2->setText(QCoreApplication::translate("TLSKeylogDialog", "<span style=\" font-size:small;\">TLS session secrets will be logged to this file. If you change this field, hit the Save button to update the TLS protocol preferences.</span>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TLSKeylogDialog: public Ui_TLSKeylogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TLSKEYLOG_LAUNCHER_DIALOG_H
