/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab_wireshark;
    QVBoxLayout *verticalLayout;
    QLabel *label_logo;
    QLabel *label_title;
    QTextBrowser *pte_wireshark;
    QHBoxLayout *horizontalLayout;
    QPushButton *copyToClipboard;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_authors;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *searchAuthors;
    QTreeView *tblAuthors;
    QWidget *tab_folders;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *searchFolders;
    QTreeView *tblFolders;
    QWidget *tab_plugins;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_no_plugins;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *searchPlugins;
    QLabel *label;
    QComboBox *cmbType;
    QTreeView *tblPlugins;
    QWidget *tab_shortcuts;
    QVBoxLayout *verticalLayout_shortcuts;
    QLineEdit *searchShortcuts;
    QTreeView *tblShortcuts;
    QWidget *tab_acknowledgements;
    QVBoxLayout *ackVerticalLayout;
    QWidget *tab_license;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowserLicense;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(740, 650);
        verticalLayout_6 = new QVBoxLayout(AboutDialog);
        verticalLayout_6->setObjectName("verticalLayout_6");
        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setMinimumSize(QSize(371, 231));
        tabWidget->setDocumentMode(false);
        tab_wireshark = new QWidget();
        tab_wireshark->setObjectName("tab_wireshark");
        tab_wireshark->setEnabled(true);
        verticalLayout = new QVBoxLayout(tab_wireshark);
        verticalLayout->setObjectName("verticalLayout");
        label_logo = new QLabel(tab_wireshark);
        label_logo->setObjectName("label_logo");
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/about/wssplash.png")));
        label_logo->setScaledContents(false);
        label_logo->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label_logo);

        label_title = new QLabel(tab_wireshark);
        label_title->setObjectName("label_title");
        label_title->setMaximumSize(QSize(16777215, 20));
        label_title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_title);

        pte_wireshark = new QTextBrowser(tab_wireshark);
        pte_wireshark->setObjectName("pte_wireshark");
        pte_wireshark->setReadOnly(true);
        pte_wireshark->setTextInteractionFlags(Qt::TextBrowserInteraction);
        pte_wireshark->setOpenExternalLinks(true);

        verticalLayout->addWidget(pte_wireshark);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        copyToClipboard = new QPushButton(tab_wireshark);
        copyToClipboard->setObjectName("copyToClipboard");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(copyToClipboard->sizePolicy().hasHeightForWidth());
        copyToClipboard->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(copyToClipboard);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget->addTab(tab_wireshark, QString());
        tab_authors = new QWidget();
        tab_authors->setObjectName("tab_authors");
        verticalLayout_2 = new QVBoxLayout(tab_authors);
        verticalLayout_2->setObjectName("verticalLayout_2");
        searchAuthors = new QLineEdit(tab_authors);
        searchAuthors->setObjectName("searchAuthors");

        verticalLayout_2->addWidget(searchAuthors);

        tblAuthors = new QTreeView(tab_authors);
        tblAuthors->setObjectName("tblAuthors");
        tblAuthors->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblAuthors->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tblAuthors->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblAuthors->header()->setMinimumSectionSize(100);
        tblAuthors->header()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tblAuthors);

        tabWidget->addTab(tab_authors, QString());
        tab_folders = new QWidget();
        tab_folders->setObjectName("tab_folders");
        verticalLayout_3 = new QVBoxLayout(tab_folders);
        verticalLayout_3->setObjectName("verticalLayout_3");
        searchFolders = new QLineEdit(tab_folders);
        searchFolders->setObjectName("searchFolders");

        verticalLayout_3->addWidget(searchFolders);

        tblFolders = new QTreeView(tab_folders);
        tblFolders->setObjectName("tblFolders");
        tblFolders->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblFolders->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tblFolders->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(tblFolders);

        tabWidget->addTab(tab_folders, QString());
        tab_plugins = new QWidget();
        tab_plugins->setObjectName("tab_plugins");
        verticalLayout_4 = new QVBoxLayout(tab_plugins);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_no_plugins = new QLabel(tab_plugins);
        label_no_plugins->setObjectName("label_no_plugins");

        verticalLayout_4->addWidget(label_no_plugins);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        searchPlugins = new QLineEdit(tab_plugins);
        searchPlugins->setObjectName("searchPlugins");

        horizontalLayout_3->addWidget(searchPlugins);

        label = new QLabel(tab_plugins);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        cmbType = new QComboBox(tab_plugins);
        cmbType->setObjectName("cmbType");

        horizontalLayout_3->addWidget(cmbType);


        verticalLayout_4->addLayout(horizontalLayout_3);

        tblPlugins = new QTreeView(tab_plugins);
        tblPlugins->setObjectName("tblPlugins");
        tblPlugins->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblPlugins->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tblPlugins->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_4->addWidget(tblPlugins);

        tabWidget->addTab(tab_plugins, QString());
        tab_shortcuts = new QWidget();
        tab_shortcuts->setObjectName("tab_shortcuts");
        verticalLayout_shortcuts = new QVBoxLayout(tab_shortcuts);
        verticalLayout_shortcuts->setObjectName("verticalLayout_shortcuts");
        searchShortcuts = new QLineEdit(tab_shortcuts);
        searchShortcuts->setObjectName("searchShortcuts");

        verticalLayout_shortcuts->addWidget(searchShortcuts);

        tblShortcuts = new QTreeView(tab_shortcuts);
        tblShortcuts->setObjectName("tblShortcuts");
        tblShortcuts->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblShortcuts->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tblShortcuts->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblShortcuts->setTextElideMode(Qt::ElideRight);
        tblShortcuts->setWordWrap(true);

        verticalLayout_shortcuts->addWidget(tblShortcuts);

        tabWidget->addTab(tab_shortcuts, QString());
        tab_acknowledgements = new QWidget();
        tab_acknowledgements->setObjectName("tab_acknowledgements");
        ackVerticalLayout = new QVBoxLayout(tab_acknowledgements);
        ackVerticalLayout->setObjectName("ackVerticalLayout");
        tabWidget->addTab(tab_acknowledgements, QString());
        tab_license = new QWidget();
        tab_license->setObjectName("tab_license");
        verticalLayout_5 = new QVBoxLayout(tab_license);
        verticalLayout_5->setObjectName("verticalLayout_5");
        textBrowserLicense = new QTextBrowser(tab_license);
        textBrowserLicense->setObjectName("textBrowserLicense");
        textBrowserLicense->setReadOnly(true);
        textBrowserLicense->setOpenExternalLinks(true);

        verticalLayout_5->addWidget(textBrowserLicense);

        tabWidget->addTab(tab_license, QString());

        verticalLayout_6->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_6->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About Wireshark", nullptr));
        label_logo->setText(QString());
        label_title->setText(QCoreApplication::translate("AboutDialog", "<span size=\\\"x-large\\\" weight=\\\"bold\\\">Network Protocol Analyzer</span>", nullptr));
#if QT_CONFIG(tooltip)
        copyToClipboard->setToolTip(QCoreApplication::translate("AboutDialog", "Copy the version information to the clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        copyToClipboard->setText(QCoreApplication::translate("AboutDialog", "Copy to Clipboard", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_wireshark), QCoreApplication::translate("AboutDialog", "Wireshark", nullptr));
        searchAuthors->setPlaceholderText(QCoreApplication::translate("AboutDialog", "Search Authors", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_authors), QCoreApplication::translate("AboutDialog", "Authors", nullptr));
        searchFolders->setPlaceholderText(QCoreApplication::translate("AboutDialog", "Search Folders", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_folders), QCoreApplication::translate("AboutDialog", "Folders", nullptr));
        label_no_plugins->setText(QCoreApplication::translate("AboutDialog", "No plugins found.", nullptr));
        searchPlugins->setPlaceholderText(QCoreApplication::translate("AboutDialog", "Search Plugins", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "Filter by type:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_plugins), QCoreApplication::translate("AboutDialog", "Plugins", nullptr));
        searchShortcuts->setPlaceholderText(QCoreApplication::translate("AboutDialog", "Search Shortcuts", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_shortcuts), QCoreApplication::translate("AboutDialog", "Keyboard Shortcuts", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_acknowledgements), QCoreApplication::translate("AboutDialog", "Acknowledgments", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_license), QCoreApplication::translate("AboutDialog", "License", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
