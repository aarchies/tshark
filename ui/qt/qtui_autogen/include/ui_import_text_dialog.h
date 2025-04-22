/********************************************************************************
** Form generated from reading UI file 'import_text_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORT_TEXT_DIALOG_H
#define UI_IMPORT_TEXT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/elided_label.h"
#include "widgets/syntax_line_edit.h"

QT_BEGIN_NAMESPACE

class Ui_ImportTextDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *textFileLineEdit;
    QPushButton *textFileBrowseButton;
    QTabWidget *modeTabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QRadioButton *octalOffsetButton;
    QLabel *label_2;
    QRadioButton *hexOffsetButton;
    QRadioButton *decimalOffsetButton;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *noOffsetButton;
    QLabel *noOffsetLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *directionIndicationLabel;
    QCheckBox *directionIndicationCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *asciiLayout;
    QLabel *asciiIdentificationLabel;
    QCheckBox *asciiIdentificationCheckBox;
    QSpacerItem *asciiSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QTextEdit *regexTextEdit;
    ElidedLabel *regexHintLabel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QComboBox *dataEncodingComboBox;
    QLabel *label_3;
    QLabel *encodingRegexExample;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *dirIndicationLabel;
    QLineEdit *dirInIndicationLineEdit;
    QLineEdit *dirOutIndicationLineEdit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *timestampLabel;
    QLineEdit *timestampFormatLineEdit;
    QLabel *timestampExampleLabel;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *encapComboBox;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *headerGridLayout;
    QRadioButton *noDummyButton;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *ethernetButton;
    QRadioButton *ipv4Button;
    QRadioButton *udpButton;
    QRadioButton *tcpButton;
    QRadioButton *sctpButton;
    QRadioButton *sctpDataButton;
    QRadioButton *exportPduButton;
    QLabel *ethertypeLabel;
    QLabel *protocolLabel;
    QLabel *sourceAddressLabel;
    QLabel *destinationAddressLabel;
    QLabel *sourcePortLabel;
    QLabel *destinationPortLabel;
    QLabel *tagLabel;
    QLabel *ppiLabel;
    QLabel *payloadLabel;
    SyntaxLineEdit *ethertypeLineEdit;
    SyntaxLineEdit *protocolLineEdit;
    SyntaxLineEdit *sourceAddressLineEdit;
    SyntaxLineEdit *destinationAddressLineEdit;
    SyntaxLineEdit *sourcePortLineEdit;
    SyntaxLineEdit *destinationPortLineEdit;
    SyntaxLineEdit *tagLineEdit;
    SyntaxLineEdit *ppiLineEdit;
    QComboBox *dissectorComboBox;
    QLabel *ipVersionLabel;
    QComboBox *ipVersionComboBox;
    QHBoxLayout *interfaceLayout;
    QLabel *interfaceLabel;
    QLineEdit *interfaceLineEdit;
    QHBoxLayout *maxLengthLayout;
    QLabel *maxLengthLabel;
    SyntaxLineEdit *maxLengthLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImportTextDialog)
    {
        if (ImportTextDialog->objectName().isEmpty())
            ImportTextDialog->setObjectName("ImportTextDialog");
        ImportTextDialog->resize(562, 832);
        ImportTextDialog->setMaximumSize(QSize(16777215, 1000));
        ImportTextDialog->setSizeGripEnabled(true);
        ImportTextDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(ImportTextDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(ImportTextDialog);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        textFileLineEdit = new QLineEdit(ImportTextDialog);
        textFileLineEdit->setObjectName("textFileLineEdit");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textFileLineEdit->sizePolicy().hasHeightForWidth());
        textFileLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(textFileLineEdit);

        textFileBrowseButton = new QPushButton(ImportTextDialog);
        textFileBrowseButton->setObjectName("textFileBrowseButton");

        horizontalLayout_2->addWidget(textFileBrowseButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        modeTabWidget = new QTabWidget(ImportTextDialog);
        modeTabWidget->setObjectName("modeTabWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(modeTabWidget->sizePolicy().hasHeightForWidth());
        modeTabWidget->setSizePolicy(sizePolicy1);
        tab = new QWidget();
        tab->setObjectName("tab");
        horizontalLayout_7 = new QHBoxLayout(tab);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(1);
        octalOffsetButton = new QRadioButton(tab);
        octalOffsetButton->setObjectName("octalOffsetButton");

        gridLayout_2->addWidget(octalOffsetButton, 2, 1, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        hexOffsetButton = new QRadioButton(tab);
        hexOffsetButton->setObjectName("hexOffsetButton");
        hexOffsetButton->setChecked(true);

        gridLayout_2->addWidget(hexOffsetButton, 0, 1, 1, 1);

        decimalOffsetButton = new QRadioButton(tab);
        decimalOffsetButton->setObjectName("decimalOffsetButton");

        gridLayout_2->addWidget(decimalOffsetButton, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 4, 1);

        noOffsetButton = new QRadioButton(tab);
        noOffsetButton->setObjectName("noOffsetButton");

        gridLayout_2->addWidget(noOffsetButton, 3, 1, 1, 1);

        noOffsetLabel = new QLabel(tab);
        noOffsetLabel->setObjectName("noOffsetLabel");
        QFont font;
        font.setItalic(false);
        noOffsetLabel->setFont(font);

        gridLayout_2->addWidget(noOffsetLabel, 3, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        directionIndicationLabel = new QLabel(tab);
        directionIndicationLabel->setObjectName("directionIndicationLabel");

        horizontalLayout_5->addWidget(directionIndicationLabel);

        directionIndicationCheckBox = new QCheckBox(tab);
        directionIndicationCheckBox->setObjectName("directionIndicationCheckBox");

        horizontalLayout_5->addWidget(directionIndicationCheckBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_5);

        asciiLayout = new QHBoxLayout();
        asciiLayout->setObjectName("asciiLayout");
        asciiIdentificationLabel = new QLabel(tab);
        asciiIdentificationLabel->setObjectName("asciiIdentificationLabel");

        asciiLayout->addWidget(asciiIdentificationLabel);

        asciiIdentificationCheckBox = new QCheckBox(tab);
        asciiIdentificationCheckBox->setObjectName("asciiIdentificationCheckBox");

        asciiLayout->addWidget(asciiIdentificationCheckBox);

        asciiSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        asciiLayout->addItem(asciiSpacer);


        verticalLayout_3->addLayout(asciiLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_7->addLayout(verticalLayout_3);

        modeTabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        horizontalLayout_10 = new QHBoxLayout(tab_2);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        regexTextEdit = new QTextEdit(tab_2);
        regexTextEdit->setObjectName("regexTextEdit");
        sizePolicy1.setHeightForWidth(regexTextEdit->sizePolicy().hasHeightForWidth());
        regexTextEdit->setSizePolicy(sizePolicy1);
        regexTextEdit->setMaximumSize(QSize(16777215, 16777215));
        regexTextEdit->setSizeIncrement(QSize(1, 1));
        regexTextEdit->setBaseSize(QSize(100, 100));
        regexTextEdit->setLineWidth(24);
        regexTextEdit->setAcceptRichText(false);
        regexTextEdit->setPlaceholderText(QString::fromUtf8("^(?<dir>(<|>))\\s*(?<time>(\\d\\d\\:){2}\\d\\d)\\s+(?<seqno>\\d{5})\\s+(?<data>[0-9a-fA-F]*)$\\s+"));

        verticalLayout->addWidget(regexTextEdit);

        regexHintLabel = new ElidedLabel(tab_2);
        regexHintLabel->setObjectName("regexHintLabel");
        regexHintLabel->setEnabled(true);
        regexHintLabel->setWordWrap(true);

        verticalLayout->addWidget(regexHintLabel);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        dataEncodingComboBox = new QComboBox(tab_2);
        dataEncodingComboBox->setObjectName("dataEncodingComboBox");

        horizontalLayout_8->addWidget(dataEncodingComboBox);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName("label_3");

        horizontalLayout_8->addWidget(label_3);

        encodingRegexExample = new QLabel(tab_2);
        encodingRegexExample->setObjectName("encodingRegexExample");
        encodingRegexExample->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_8->addWidget(encodingRegexExample);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        dirIndicationLabel = new QLabel(tab_2);
        dirIndicationLabel->setObjectName("dirIndicationLabel");

        horizontalLayout_6->addWidget(dirIndicationLabel);

        dirInIndicationLineEdit = new QLineEdit(tab_2);
        dirInIndicationLineEdit->setObjectName("dirInIndicationLineEdit");
        dirInIndicationLineEdit->setBaseSize(QSize(0, 0));
        dirInIndicationLineEdit->setMaxLength(6);

        horizontalLayout_6->addWidget(dirInIndicationLineEdit);

        dirOutIndicationLineEdit = new QLineEdit(tab_2);
        dirOutIndicationLineEdit->setObjectName("dirOutIndicationLineEdit");
        dirOutIndicationLineEdit->setEnabled(true);

        horizontalLayout_6->addWidget(dirOutIndicationLineEdit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_10->addLayout(verticalLayout);

        modeTabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(modeTabWidget);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        timestampLabel = new QLabel(ImportTextDialog);
        timestampLabel->setObjectName("timestampLabel");

        horizontalLayout_9->addWidget(timestampLabel);

        timestampFormatLineEdit = new QLineEdit(ImportTextDialog);
        timestampFormatLineEdit->setObjectName("timestampFormatLineEdit");

        horizontalLayout_9->addWidget(timestampFormatLineEdit);

        timestampExampleLabel = new QLabel(ImportTextDialog);
        timestampExampleLabel->setObjectName("timestampExampleLabel");

        horizontalLayout_9->addWidget(timestampExampleLabel);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_9);

        groupBox_2 = new QGroupBox(ImportTextDialog);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFlat(true);
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        encapComboBox = new QComboBox(groupBox_2);
        encapComboBox->setObjectName("encapComboBox");

        horizontalLayout->addWidget(encapComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout);

        headerGridLayout = new QGridLayout();
        headerGridLayout->setObjectName("headerGridLayout");
        headerGridLayout->setVerticalSpacing(1);
        noDummyButton = new QRadioButton(groupBox_2);
        noDummyButton->setObjectName("noDummyButton");
        noDummyButton->setChecked(true);

        headerGridLayout->addWidget(noDummyButton, 0, 0, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        headerGridLayout->addItem(horizontalSpacer_4, 0, 3, 8, 1);

        ethernetButton = new QRadioButton(groupBox_2);
        ethernetButton->setObjectName("ethernetButton");

        headerGridLayout->addWidget(ethernetButton, 1, 0, 1, 1);

        ipv4Button = new QRadioButton(groupBox_2);
        ipv4Button->setObjectName("ipv4Button");

        headerGridLayout->addWidget(ipv4Button, 2, 0, 1, 1);

        udpButton = new QRadioButton(groupBox_2);
        udpButton->setObjectName("udpButton");

        headerGridLayout->addWidget(udpButton, 5, 0, 1, 1);

        tcpButton = new QRadioButton(groupBox_2);
        tcpButton->setObjectName("tcpButton");

        headerGridLayout->addWidget(tcpButton, 6, 0, 1, 1);

        sctpButton = new QRadioButton(groupBox_2);
        sctpButton->setObjectName("sctpButton");

        headerGridLayout->addWidget(sctpButton, 7, 0, 1, 1);

        sctpDataButton = new QRadioButton(groupBox_2);
        sctpDataButton->setObjectName("sctpDataButton");

        headerGridLayout->addWidget(sctpDataButton, 8, 0, 1, 1);

        exportPduButton = new QRadioButton(groupBox_2);
        exportPduButton->setObjectName("exportPduButton");

        headerGridLayout->addWidget(exportPduButton, 9, 0, 1, 1);

        ethertypeLabel = new QLabel(groupBox_2);
        ethertypeLabel->setObjectName("ethertypeLabel");

        headerGridLayout->addWidget(ethertypeLabel, 1, 1, 1, 1);

        protocolLabel = new QLabel(groupBox_2);
        protocolLabel->setObjectName("protocolLabel");

        headerGridLayout->addWidget(protocolLabel, 2, 1, 1, 1);

        sourceAddressLabel = new QLabel(groupBox_2);
        sourceAddressLabel->setObjectName("sourceAddressLabel");

        headerGridLayout->addWidget(sourceAddressLabel, 3, 1, 1, 1);

        destinationAddressLabel = new QLabel(groupBox_2);
        destinationAddressLabel->setObjectName("destinationAddressLabel");

        headerGridLayout->addWidget(destinationAddressLabel, 4, 1, 1, 1);

        sourcePortLabel = new QLabel(groupBox_2);
        sourcePortLabel->setObjectName("sourcePortLabel");

        headerGridLayout->addWidget(sourcePortLabel, 5, 1, 1, 1);

        destinationPortLabel = new QLabel(groupBox_2);
        destinationPortLabel->setObjectName("destinationPortLabel");

        headerGridLayout->addWidget(destinationPortLabel, 6, 1, 1, 1);

        tagLabel = new QLabel(groupBox_2);
        tagLabel->setObjectName("tagLabel");

        headerGridLayout->addWidget(tagLabel, 7, 1, 1, 1);

        ppiLabel = new QLabel(groupBox_2);
        ppiLabel->setObjectName("ppiLabel");

        headerGridLayout->addWidget(ppiLabel, 8, 1, 1, 1);

        payloadLabel = new QLabel(groupBox_2);
        payloadLabel->setObjectName("payloadLabel");

        headerGridLayout->addWidget(payloadLabel, 9, 1, 1, 1);

        ethertypeLineEdit = new SyntaxLineEdit(groupBox_2);
        ethertypeLineEdit->setObjectName("ethertypeLineEdit");
        ethertypeLineEdit->setCursorPosition(0);

        headerGridLayout->addWidget(ethertypeLineEdit, 1, 2, 1, 1);

        protocolLineEdit = new SyntaxLineEdit(groupBox_2);
        protocolLineEdit->setObjectName("protocolLineEdit");

        headerGridLayout->addWidget(protocolLineEdit, 2, 2, 1, 1);

        sourceAddressLineEdit = new SyntaxLineEdit(groupBox_2);
        sourceAddressLineEdit->setObjectName("sourceAddressLineEdit");

        headerGridLayout->addWidget(sourceAddressLineEdit, 3, 2, 1, 3);

        destinationAddressLineEdit = new SyntaxLineEdit(groupBox_2);
        destinationAddressLineEdit->setObjectName("destinationAddressLineEdit");

        headerGridLayout->addWidget(destinationAddressLineEdit, 4, 2, 1, 3);

        sourcePortLineEdit = new SyntaxLineEdit(groupBox_2);
        sourcePortLineEdit->setObjectName("sourcePortLineEdit");

        headerGridLayout->addWidget(sourcePortLineEdit, 5, 2, 1, 1);

        destinationPortLineEdit = new SyntaxLineEdit(groupBox_2);
        destinationPortLineEdit->setObjectName("destinationPortLineEdit");

        headerGridLayout->addWidget(destinationPortLineEdit, 6, 2, 1, 1);

        tagLineEdit = new SyntaxLineEdit(groupBox_2);
        tagLineEdit->setObjectName("tagLineEdit");

        headerGridLayout->addWidget(tagLineEdit, 7, 2, 1, 1);

        ppiLineEdit = new SyntaxLineEdit(groupBox_2);
        ppiLineEdit->setObjectName("ppiLineEdit");

        headerGridLayout->addWidget(ppiLineEdit, 8, 2, 1, 1);

        dissectorComboBox = new QComboBox(groupBox_2);
        dissectorComboBox->setObjectName("dissectorComboBox");

        headerGridLayout->addWidget(dissectorComboBox, 9, 2, 1, 3);

        ipVersionLabel = new QLabel(groupBox_2);
        ipVersionLabel->setObjectName("ipVersionLabel");

        headerGridLayout->addWidget(ipVersionLabel, 2, 3, 1, 1);

        ipVersionComboBox = new QComboBox(groupBox_2);
        ipVersionComboBox->setObjectName("ipVersionComboBox");

        headerGridLayout->addWidget(ipVersionComboBox, 2, 4, 1, 1);


        formLayout->setLayout(1, QFormLayout::SpanningRole, headerGridLayout);


        verticalLayout_2->addWidget(groupBox_2);

        interfaceLayout = new QHBoxLayout();
        interfaceLayout->setObjectName("interfaceLayout");
        interfaceLabel = new QLabel(ImportTextDialog);
        interfaceLabel->setObjectName("interfaceLabel");

        interfaceLayout->addWidget(interfaceLabel);

        interfaceLineEdit = new QLineEdit(ImportTextDialog);
        interfaceLineEdit->setObjectName("interfaceLineEdit");

        interfaceLayout->addWidget(interfaceLineEdit);


        verticalLayout_2->addLayout(interfaceLayout);

        maxLengthLayout = new QHBoxLayout();
        maxLengthLayout->setObjectName("maxLengthLayout");
        maxLengthLabel = new QLabel(ImportTextDialog);
        maxLengthLabel->setObjectName("maxLengthLabel");

        maxLengthLayout->addWidget(maxLengthLabel);

        maxLengthLineEdit = new SyntaxLineEdit(ImportTextDialog);
        maxLengthLineEdit->setObjectName("maxLengthLineEdit");
        maxLengthLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        maxLengthLayout->addWidget(maxLengthLineEdit);


        verticalLayout_2->addLayout(maxLengthLayout);

        buttonBox = new QDialogButtonBox(ImportTextDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Open);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(ImportTextDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ImportTextDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ImportTextDialog, qOverload<>(&QDialog::reject));

        modeTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ImportTextDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportTextDialog)
    {
        label->setText(QCoreApplication::translate("ImportTextDialog", "File:", nullptr));
#if QT_CONFIG(tooltip)
        textFileLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "Set name of text file to import", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        textFileBrowseButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Browse for text file to import", nullptr));
#endif // QT_CONFIG(tooltip)
        textFileBrowseButton->setText(QCoreApplication::translate("ImportTextDialog", "Browse\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        octalOffsetButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Offsets in the text file are in octal notation", nullptr));
#endif // QT_CONFIG(tooltip)
        octalOffsetButton->setText(QCoreApplication::translate("ImportTextDialog", "Octal", nullptr));
        label_2->setText(QCoreApplication::translate("ImportTextDialog", "Offsets:", nullptr));
#if QT_CONFIG(tooltip)
        hexOffsetButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Offsets in the text file are in hexadecimal notation", nullptr));
#endif // QT_CONFIG(tooltip)
        hexOffsetButton->setText(QCoreApplication::translate("ImportTextDialog", "Hexadecimal", nullptr));
#if QT_CONFIG(tooltip)
        decimalOffsetButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Offsets in the text file are in decimal notation", nullptr));
#endif // QT_CONFIG(tooltip)
        decimalOffsetButton->setText(QCoreApplication::translate("ImportTextDialog", "Decimal", nullptr));
#if QT_CONFIG(tooltip)
        noOffsetButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "The text file has no offset", nullptr));
#endif // QT_CONFIG(tooltip)
        noOffsetButton->setText(QCoreApplication::translate("ImportTextDialog", "None", nullptr));
        noOffsetLabel->setText(QString());
#if QT_CONFIG(tooltip)
        directionIndicationLabel->setToolTip(QCoreApplication::translate("ImportTextDialog", "Whether or not the file contains information indicating the direction (inbound or outbound) of the packet.", nullptr));
#endif // QT_CONFIG(tooltip)
        directionIndicationLabel->setText(QCoreApplication::translate("ImportTextDialog", "Direction indication:", nullptr));
#if QT_CONFIG(tooltip)
        directionIndicationCheckBox->setToolTip(QCoreApplication::translate("ImportTextDialog", "Whether or not the file contains information indicating the direction (inbound or outbound) of the packet.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        asciiIdentificationLabel->setToolTip(QCoreApplication::translate("ImportTextDialog", "<html><head/><body><p>Whether to do extra processing detecting the start of the ASCII representation at the end of a hex+ASCII line even if it looks like hex bytes.</p><p>Do not enable if the hex dump does not contain ASCII.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        asciiIdentificationLabel->setText(QCoreApplication::translate("ImportTextDialog", "ASCII identification:", nullptr));
#if QT_CONFIG(tooltip)
        asciiIdentificationCheckBox->setToolTip(QCoreApplication::translate("ImportTextDialog", "<html><head/><body><p>Whether to do extra processing detecting the start of the ASCII representation at the end of a hex+ASCII line even if it looks like hex bytes.</p><p>Do not enable if the hex dump does not contain ASCII.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        modeTabWidget->setTabText(modeTabWidget->indexOf(tab), QCoreApplication::translate("ImportTextDialog", "Hex Dump", nullptr));
#if QT_CONFIG(tooltip)
        modeTabWidget->setTabToolTip(modeTabWidget->indexOf(tab), QCoreApplication::translate("ImportTextDialog", "Import a standard hex dump as exported by Wireshark", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("ImportTextDialog", "Packet format regular expression", nullptr));
#if QT_CONFIG(tooltip)
        regexTextEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "<html><head/><body><p>Perl compatible regular expression capturing a single packet in the file with named groups identifying data to import. Anchors ^ and $ also match before/after newlines </p><p>The only required group is data, but time, dir and seqno are also supported.</p><p>Regex flags: DUPNAMES, MULTILINE and NOEMPTY</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        regexHintLabel->setText(QCoreApplication::translate("ImportTextDialog", "This is regexHintLabel, it will be set to default_regex_hint", nullptr));
        label_7->setText(QCoreApplication::translate("ImportTextDialog", "Data encoding:", nullptr));
#if QT_CONFIG(tooltip)
        dataEncodingComboBox->setToolTip(QCoreApplication::translate("ImportTextDialog", "How data is encoded", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("ImportTextDialog", "<small><i>recommended regex:</small></i>", nullptr));
        encodingRegexExample->setText(QCoreApplication::translate("ImportTextDialog", "encodingRegexExample", nullptr));
#if QT_CONFIG(tooltip)
        dirIndicationLabel->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        dirIndicationLabel->setText(QCoreApplication::translate("ImportTextDialog", "Direction indication:", nullptr));
#if QT_CONFIG(tooltip)
        dirInIndicationLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "List of characters indicating incoming packets", nullptr));
#endif // QT_CONFIG(tooltip)
        dirInIndicationLineEdit->setPlaceholderText(QCoreApplication::translate("ImportTextDialog", "iI<", nullptr));
#if QT_CONFIG(tooltip)
        dirOutIndicationLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "List of characters indicating outgoing packets", nullptr));
#endif // QT_CONFIG(tooltip)
        dirOutIndicationLineEdit->setPlaceholderText(QCoreApplication::translate("ImportTextDialog", "oO>", nullptr));
        modeTabWidget->setTabText(modeTabWidget->indexOf(tab_2), QCoreApplication::translate("ImportTextDialog", "Regular Expression", nullptr));
#if QT_CONFIG(tooltip)
        modeTabWidget->setTabToolTip(modeTabWidget->indexOf(tab_2), QCoreApplication::translate("ImportTextDialog", "Import a file formatted according to a custom regular expression", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        timestampLabel->setToolTip(QCoreApplication::translate("ImportTextDialog", "The format in which to parse timestamps in the text file (e.g. %H:%M:%S.). Format specifiers are based on strptime(3)", nullptr));
#endif // QT_CONFIG(tooltip)
        timestampLabel->setText(QCoreApplication::translate("ImportTextDialog", "Timestamp format:", nullptr));
#if QT_CONFIG(tooltip)
        timestampFormatLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "<html><head/><body><p>The format in which to parse timestamps in the text file (e.g. %H:%M:%S.%f).</p><p>Format specifiers are based on strptime(3) with the addition of %f for second fractions. The precision of %f is determined from its length.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        timestampFormatLineEdit->setPlaceholderText(QCoreApplication::translate("ImportTextDialog", "%H:%M:%S.%f", nullptr));
        timestampExampleLabel->setText(QCoreApplication::translate("ImportTextDialog", "timestampExampleLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ImportTextDialog", "Encapsulation", nullptr));
        label_4->setText(QCoreApplication::translate("ImportTextDialog", "Encapsulation Type:", nullptr));
#if QT_CONFIG(tooltip)
        encapComboBox->setToolTip(QCoreApplication::translate("ImportTextDialog", "Encapsulation type of the frames in the import capture file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        noDummyButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Leave frames unchanged", nullptr));
#endif // QT_CONFIG(tooltip)
        noDummyButton->setText(QCoreApplication::translate("ImportTextDialog", "No dummy header", nullptr));
#if QT_CONFIG(tooltip)
        ethernetButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Prefix each frame with an Ethernet header", nullptr));
#endif // QT_CONFIG(tooltip)
        ethernetButton->setText(QCoreApplication::translate("ImportTextDialog", "Ethernet", nullptr));
#if QT_CONFIG(tooltip)
        ipv4Button->setToolTip(QCoreApplication::translate("ImportTextDialog", "Prefix each frame with an Ethernet and IP header", nullptr));
#endif // QT_CONFIG(tooltip)
        ipv4Button->setText(QCoreApplication::translate("ImportTextDialog", "IP", nullptr));
#if QT_CONFIG(tooltip)
        udpButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Prefix each frame with an Ethernet, IP and UDP header", nullptr));
#endif // QT_CONFIG(tooltip)
        udpButton->setText(QCoreApplication::translate("ImportTextDialog", "UDP", nullptr));
#if QT_CONFIG(tooltip)
        tcpButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Prefix each frame with an Ethernet, IP and TCP header", nullptr));
#endif // QT_CONFIG(tooltip)
        tcpButton->setText(QCoreApplication::translate("ImportTextDialog", "TCP", nullptr));
#if QT_CONFIG(tooltip)
        sctpButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Prefix each frame with an Ethernet, IP and SCTP header", nullptr));
#endif // QT_CONFIG(tooltip)
        sctpButton->setText(QCoreApplication::translate("ImportTextDialog", "SCTP", nullptr));
#if QT_CONFIG(tooltip)
        sctpDataButton->setToolTip(QCoreApplication::translate("ImportTextDialog", "Prefix each frame with an Ethernet, IP and SCTP (DATA) header", nullptr));
#endif // QT_CONFIG(tooltip)
        sctpDataButton->setText(QCoreApplication::translate("ImportTextDialog", "SCTP (Data)", nullptr));
        exportPduButton->setText(QCoreApplication::translate("ImportTextDialog", "ExportPDU", nullptr));
        ethertypeLabel->setText(QCoreApplication::translate("ImportTextDialog", "Ethertype (hex):", nullptr));
        protocolLabel->setText(QCoreApplication::translate("ImportTextDialog", "Protocol (dec):", nullptr));
        sourceAddressLabel->setText(QCoreApplication::translate("ImportTextDialog", "Source address:", nullptr));
        destinationAddressLabel->setText(QCoreApplication::translate("ImportTextDialog", "Destination address:", nullptr));
        sourcePortLabel->setText(QCoreApplication::translate("ImportTextDialog", "Source port:", nullptr));
        destinationPortLabel->setText(QCoreApplication::translate("ImportTextDialog", "Destination port:", nullptr));
        tagLabel->setText(QCoreApplication::translate("ImportTextDialog", "Tag:", nullptr));
        ppiLabel->setText(QCoreApplication::translate("ImportTextDialog", "PPI:", nullptr));
        payloadLabel->setText(QCoreApplication::translate("ImportTextDialog", "Dissector", nullptr));
#if QT_CONFIG(tooltip)
        ethertypeLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The Ethertype value of each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        protocolLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The IP protocol ID for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sourceAddressLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The IP source address for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        destinationAddressLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The IP destination address for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sourcePortLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The UDP, TCP or SCTP source port for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        destinationPortLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The UDP, TCP or SCTP destination port for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tagLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The SCTP verification tag for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ppiLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The SCTP DATA payload protocol identifier for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        dissectorComboBox->setToolTip(QCoreApplication::translate("ImportTextDialog", "The dissector to use for each frame", nullptr));
#endif // QT_CONFIG(tooltip)
        ipVersionLabel->setText(QCoreApplication::translate("ImportTextDialog", "IP version:", nullptr));
#if QT_CONFIG(tooltip)
        ipVersionComboBox->setToolTip(QCoreApplication::translate("ImportTextDialog", "The IP Version to use for the dummy IP header", nullptr));
#endif // QT_CONFIG(tooltip)
        interfaceLabel->setText(QCoreApplication::translate("ImportTextDialog", "Interface name:", nullptr));
#if QT_CONFIG(tooltip)
        interfaceLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The name of the interface to write to the import capture file", nullptr));
#endif // QT_CONFIG(tooltip)
        interfaceLineEdit->setPlaceholderText(QCoreApplication::translate("ImportTextDialog", "Fake IF, Import from Hex Dump", nullptr));
        maxLengthLabel->setText(QCoreApplication::translate("ImportTextDialog", "Maximum frame length:", nullptr));
#if QT_CONFIG(tooltip)
        maxLengthLineEdit->setToolTip(QCoreApplication::translate("ImportTextDialog", "The maximum size of the frames to write to the import capture file (max 256kiB)", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)ImportTextDialog;
    } // retranslateUi

};

namespace Ui {
    class ImportTextDialog: public Ui_ImportTextDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORT_TEXT_DIALOG_H
