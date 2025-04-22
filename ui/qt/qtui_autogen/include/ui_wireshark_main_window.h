/********************************************************************************
** Form generated from reading UI file 'wireshark_main_window.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIRESHARK_MAIN_WINDOW_H
#define UI_WIRESHARK_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "accordion_frame.h"
#include "address_editor_frame.h"
#include "column_editor_frame.h"
#include "filter_expression_frame.h"
#include "main_status_bar.h"
#include "preference_editor_frame.h"
#include "search_frame.h"
#include "welcome_page.h"
#include "widgets/wireless_timeline.h"

QT_BEGIN_NAMESPACE

class Ui_WiresharkMainWindow
{
public:
    QAction *actionFileOpen;
    QAction *actionFileQuit;
    QAction *actionCaptureStart;
    QAction *actionCaptureStop;
    QAction *actionFileClose;
    QAction *actionDummyNoFilesFound;
    QAction *actionHelpContents;
    QAction *actionHelpMPWireshark;
    QAction *actionHelpMPWireshark_Filter;
    QAction *actionHelpMPWireshark_FilterReference;
    QAction *actionHelpMPTShark;
    QAction *actionHelpMPRawshark;
    QAction *actionHelpMPDumpcap;
    QAction *actionHelpMPMergecap;
    QAction *actionHelpMPEditcap;
    QAction *actionHelpMPText2pcap;
    QAction *actionHelpWebsite;
    QAction *actionHelpFAQ;
    QAction *actionHelpDownloads;
    QAction *actionHelpWiki;
    QAction *actionHelpSampleCaptures;
    QAction *actionHelpAbout;
    QAction *actionHelpAsk;
    QAction *actionGoNextPacket;
    QAction *actionGoPreviousPacket;
    QAction *actionGoNextConversationPacket;
    QAction *actionGoPreviousConversationPacket;
    QAction *actionGoNextHistoryPacket;
    QAction *actionGoPreviousHistoryPacket;
    QAction *actionGoFirstPacket;
    QAction *actionGoLastPacket;
    QAction *actionGoFirstConversationPacket;
    QAction *actionGoLastConversationPacket;
    QAction *actionViewExpandSubtrees;
    QAction *actionViewCollapseSubtrees;
    QAction *actionViewExpandAll;
    QAction *actionViewCollapseAll;
    QAction *actionGoGoToPacket;
    QAction *actionFileMerge;
    QAction *actionFileImportFromHexDump;
    QAction *actionFileSave;
    QAction *actionFileSaveAs;
    QAction *actionFileExportPackets;
    QAction *actionFileExportPacketBytes;
    QAction *actionFileExportTLSSessionKeys;
    QAction *actionFilePrint;
    QAction *actionFileSetListFiles;
    QAction *actionFileSetNextFile;
    QAction *actionFileSetPreviousFile;
    QAction *actionViewReload;
    QAction *actionViewReload_as_File_Format_or_Capture;
    QAction *actionCaptureOptions;
    QAction *actionCaptureCaptureFilters;
    QAction *actionCaptureRefreshInterfaces;
    QAction *actionCaptureRestart;
    QAction *actionFileExportAsPlainText;
    QAction *actionFileExportAsCSV;
    QAction *actionFileExportAsCArrays;
    QAction *actionFileExportAsPSML;
    QAction *actionFileExportAsPDML;
    QAction *actionFileExportAsJSON;
    QAction *actionEditCopyDescription;
    QAction *actionCopyListAsText;
    QAction *actionCopyListAsCSV;
    QAction *actionCopyListAsYAML;
    QAction *actionCopyListAsHTML;
    QAction *actionCopyAllVisibleItems;
    QAction *actionCopyAllVisibleSelectedTreeItems;
    QAction *actionEditCopyFieldName;
    QAction *actionEditCopyValue;
    QAction *actionEditCopyAsFilter;
    QAction *actionAnalyzeDisplayFilters;
    QAction *actionAnalyzeDisplayFilterMacros;
    QAction *actionAnalyzeApplyAsColumn;
    QAction *actionEditFindPacket;
    QAction *actionEditFindNext;
    QAction *actionEditFindPrevious;
    QAction *actionEditMarkSelected;
    QAction *actionEditMarkAllDisplayed;
    QAction *actionEditUnmarkAllDisplayed;
    QAction *actionEditNextMark;
    QAction *actionEditPreviousMark;
    QAction *actionEditIgnoreSelected;
    QAction *actionEditIgnoreAllDisplayed;
    QAction *actionEditUnignoreAllDisplayed;
    QAction *actionEditSetTimeReference;
    QAction *actionEditUnsetAllTimeReferences;
    QAction *actionEditNextTimeReference;
    QAction *actionEditPreviousTimeReference;
    QAction *actionEditTimeShift;
    QAction *actionDeleteAllPacketComments;
    QAction *actionEditInjectSecrets;
    QAction *actionEditDiscardAllSecrets;
    QAction *actionEditConfigurationProfiles;
    QAction *actionEditPreferences;
    QAction *actionStatisticsCaptureFileProperties;
    QAction *actionStatisticsProtocolHierarchy;
    QAction *actionHelpMPCapinfos;
    QAction *actionHelpMPReordercap;
    QAction *actionStatisticsTcpStreamStevens;
    QAction *actionStatisticsTcpStreamThroughput;
    QAction *actionStatisticsTcpStreamRoundTripTime;
    QAction *actionStatisticsTcpStreamWindowScaling;
    QAction *actionStatisticsTcpStreamTcptrace;
    QAction *actionSCTPAnalyseThisAssociation;
    QAction *actionSCTPShowAllAssociations;
    QAction *actionSCTPFilterThisAssociation;
    QAction *actionStatisticsFlowGraph;
    QAction *actionStatisticsANCP;
    QAction *actionStatisticsBACappInstanceId;
    QAction *actionStatisticsBACappIP;
    QAction *actionStatisticsBACappObjectId;
    QAction *actionStatisticsBACappService;
    QAction *actionStatisticsCollectd;
    QAction *actionStatisticsDNS;
    QAction *actionStatisticsDNS_QR;
    QAction *actionStatisticsHART_IP;
    QAction *actionStatisticsHpfeeds;
    QAction *actionStatisticsHTTP2;
    QAction *actionStatisticsHTTPPacketCounter;
    QAction *actionStatisticsHTTPRequests;
    QAction *actionStatisticsHTTPLoadDistribution;
    QAction *actionStatisticsHTTPRequestSequences;
    QAction *actionStatisticsPacketLengths;
    QAction *actionStatisticsSametime;
    QAction *actionStatisticsSOMEIPmessages;
    QAction *actionStatisticsSOMEIPSDentries;
    QAction *actionStatisticsLTP;
    QAction *actionTelephonyISUPMessages;
    QAction *actionTelephonyOsmuxPacketCounter;
    QAction *actionTelephonyRTSPPacketCounter;
    QAction *actionTelephonySMPPOperations;
    QAction *actionTelephonyUCPMessages;
    QAction *actionTelephonyF1APMessages;
    QAction *actionTelephonyNGAPMessages;
    QAction *actionTelephonyE2APMessages;
    QAction *actionAnalyzeDecodeAs;
    QAction *actionAnalyzeReloadLuaPlugins;
    QAction *action29West;
    QAction *actionStatistics29WestTopics_Advertisements_by_Topic;
    QAction *actionStatistics29WestTopics_Advertisements_by_Source;
    QAction *actionStatistics29WestTopics_Advertisements_by_Transport;
    QAction *actionStatistics29WestTopics_Queries_by_Topic;
    QAction *actionStatistics29WestTopics_Queries_by_Receiver;
    QAction *actionStatistics29WestTopics_Wildcard_Queries_by_Pattern;
    QAction *actionStatistics29WestTopics_Wildcard_Queries_by_Receiver;
    QAction *actionStatistics29WestQueues_Advertisements_by_Queue;
    QAction *actionStatistics29WestQueues_Advertisements_by_Source;
    QAction *actionStatistics29WestQueues_Queries_by_Queue;
    QAction *actionStatistics29WestQueues_Queries_by_Receiver;
    QAction *actionStatistics29WestUIM_Streams;
    QAction *actionStatistics29WestLBTRM;
    QAction *actionStatistics29WestLBTRU;
    QAction *actionFileExportPDU;
    QAction *actionFileStripHeaders;
    QAction *actionStatisticsIOGraph;
    QAction *actionViewMainToolbar;
    QAction *actionViewFilterToolbar;
    QAction *actionStatisticsConversations;
    QAction *actionStatisticsEndpoints;
    QAction *actionViewColorizePacketList;
    QAction *actionViewZoomIn;
    QAction *actionViewZoomOut;
    QAction *actionViewNormalSize;
    QAction *actionViewResetLayout;
    QAction *actionViewResizeColumns;
    QAction *actionViewTimeDisplayFormatDateYMDandTimeOfDay;
    QAction *actionViewTimeDisplayFormatDateYDOYandTimeOfDay;
    QAction *actionViewTimeDisplayFormatTimeOfDay;
    QAction *actionViewTimeDisplayFormatSecondsSinceEpoch;
    QAction *actionViewTimeDisplayFormatSecondsSinceFirstCapturedPacket;
    QAction *actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket;
    QAction *actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket;
    QAction *actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay;
    QAction *actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay;
    QAction *actionViewTimeDisplayFormatUTCTimeOfDay;
    QAction *actionViewTimeDisplayFormatPrecisionAutomatic;
    QAction *actionViewTimeDisplayFormatPrecisionSeconds;
    QAction *actionViewTimeDisplayFormatPrecision100Milliseconds;
    QAction *actionViewTimeDisplayFormatPrecision10Milliseconds;
    QAction *actionViewTimeDisplayFormatPrecisionMilliseconds;
    QAction *actionViewTimeDisplayFormatPrecision100Microseconds;
    QAction *actionViewTimeDisplayFormatPrecision10Microseconds;
    QAction *actionViewTimeDisplayFormatPrecisionMicroseconds;
    QAction *actionViewTimeDisplayFormatPrecision100Nanoseconds;
    QAction *actionViewTimeDisplayFormatPrecision10Nanoseconds;
    QAction *actionViewTimeDisplayFormatPrecisionNanoseconds;
    QAction *actionViewTimeDisplaySecondsWithHoursAndMinutes;
    QAction *actionViewNameResolutionPhysical;
    QAction *actionViewNameResolutionNetwork;
    QAction *actionViewNameResolutionTransport;
    QAction *actionViewWirelessToolbar;
    QAction *actionViewStatusBar;
    QAction *actionViewPacketList;
    QAction *actionViewPacketDetails;
    QAction *actionViewPacketBytes;
    QAction *actionViewPacketDiagram;
    QAction *actionViewInternalsConversationHashTables;
    QAction *actionViewInternalsDissectorTables;
    QAction *actionViewInternalsSupportedProtocols;
    QAction *actionTelephonyGsmMapSummary;
    QAction *actionTelephonyLteMacStatistics;
    QAction *actionTelephonyLteRlcStatistics;
    QAction *actionTelephonyLteRlcGraph;
    QAction *actionTelephonyMtp3Summary;
    QAction *actionTelephonyVoipCalls;
    QAction *actionTelephonySipFlows;
    QAction *actionTelephonyRtpStreams;
    QAction *actionViewColoringRules;
    QAction *actionBluetoothATT_Server_Attributes;
    QAction *actionBluetoothDevices;
    QAction *actionBluetoothHCI_Summary;
    QAction *actionViewShowPacketInNewWindow;
    QAction *actionContextShowLinkedPacketInNewWindow;
    QAction *actionGoAutoScroll;
    QAction *actionAnalyzeExpertInfo;
    QAction *actionDisplayFilterExpression;
    QAction *actionStatistics_REGISTER_STAT_GROUP_UNSORTED;
    QAction *actionStatistics_REGISTER_STAT_GROUP_RSERPOOL;
    QAction *actionTelephonyANSIPlaceholder;
    QAction *actionTelephonyGSMPlaceholder;
    QAction *actionTelephonyLTEPlaceholder;
    QAction *actionTelephonyMTP3Placeholder;
    QAction *actionStatisticsResolvedAddresses;
    QAction *actionViewColorizeConversation1;
    QAction *actionViewColorizeConversation2;
    QAction *actionViewColorizeConversation3;
    QAction *actionViewColorizeConversation4;
    QAction *actionViewColorizeConversation5;
    QAction *actionViewColorizeConversation6;
    QAction *actionViewColorizeConversation7;
    QAction *actionViewColorizeConversation8;
    QAction *actionViewColorizeConversation9;
    QAction *actionViewColorizeConversation10;
    QAction *actionViewColorizeNewColoringRule;
    QAction *actionViewColorizeResetColorization;
    QAction *actionTelephonyRtpStreamAnalysis;
    QAction *actionTelephonyRtpPlayer;
    QAction *actionTelephonyIax2StreamAnalysis;
    QAction *actionViewEditResolvedName;
    QAction *actionAnalyzeEnabledProtocols;
    QAction *actionAnalyzeShowPacketBytes;
    QAction *actionContextWikiProtocolPage;
    QAction *actionContextFilterFieldReference;
    QAction *actionGoGoToLinkedPacket;
    QAction *actionStatisticsUdpMulticastStreams;
    QAction *actionWirelessWlanStatistics;
    QAction *actionNewDisplayFilterExpression;
    QAction *actionToolsFirewallAclRules;
    QAction *actionViewFullScreen;
    QAction *actionToolsCredentials;
    QAction *actionToolsMacLookup;
    QAction *actionToolsTLSKeylog;
    QAction *actionHelpReleaseNotes;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    AccordionFrame *goToFrame;
    QHBoxLayout *goToHB;
    QSpacerItem *horizontalSpacer;
    QLabel *goToPacketLabel;
    QLineEdit *goToLineEdit;
    QPushButton *goToGo;
    QPushButton *goToCancel;
    SearchFrame *searchFrame;
    AddressEditorFrame *addressEditorFrame;
    ColumnEditorFrame *columnEditorFrame;
    PreferenceEditorFrame *preferenceEditorFrame;
    FilterExpressionFrame *filterExpressionFrame;
    WirelessTimeline *wirelessTimelineWidget;
    QStackedWidget *mainStack;
    WelcomePage *welcomePage;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOpenRecentCaptureFile;
    QMenu *menuFileSet;
    QMenu *menuFileExportPacketDissections;
    QMenu *menuFileExportObjects;
    QMenu *menuCapture;
    QMenu *menuHelp;
    QMenu *menuHelpManualPages;
    QMenu *menuGo;
    QMenu *menuView;
    QMenu *menuInterfaceToolbars;
    QMenu *menuZoom;
    QMenu *menuTime_Display_Format;
    QMenu *menuName_Resolution;
    QMenu *menuColorizeConversation;
    QMenu *menuInternals;
    QMenu *menuAdditionalToolbars;
    QMenu *menuAnalyze;
    QMenu *menuApplyAsFilter;
    QMenu *menuPrepareAFilter;
    QMenu *menuSCTP;
    QMenu *menuFollow;
    QMenu *menuConversationFilter;
    QMenu *menuStatistics;
    QMenu *menuTcpStreamGraphs;
    QMenu *menuBACnet;
    QMenu *menuDNS;
    QMenu *menuHTTP;
    QMenu *menu29West;
    QMenu *menu29WestTopics;
    QMenu *menu29WestQueues;
    QMenu *menu29WestUIM;
    QMenu *menuServiceResponseTime;
    QMenu *menuRSerPool;
    QMenu *menuSOMEIP;
    QMenu *menuDTN;
    QMenu *menuTelephony;
    QMenu *menuRTSP;
    QMenu *menuRTP;
    QMenu *menuTelephonySCTP;
    QMenu *menuANSI;
    QMenu *menuGSM;
    QMenu *menuLTE;
    QMenu *menuMTP3;
    QMenu *menuOsmux;
    QMenu *menuEdit;
    QMenu *menuEditCopy;
    QMenu *menuPacketComment;
    QMenu *menuWireless;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    MainStatusBar *statusBar;
    QToolBar *displayFilterToolBar;
    QToolBar *wirelessToolBar;

    void setupUi(QMainWindow *WiresharkMainWindow)
    {
        if (WiresharkMainWindow->objectName().isEmpty())
            WiresharkMainWindow->setObjectName("WiresharkMainWindow");
        WiresharkMainWindow->resize(960, 768);
        WiresharkMainWindow->setAcceptDrops(true);
        WiresharkMainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionFileOpen = new QAction(WiresharkMainWindow);
        actionFileOpen->setObjectName("actionFileOpen");
#if QT_CONFIG(shortcut)
        actionFileOpen->setShortcut(QString::fromUtf8("Ctrl+O"));
#endif // QT_CONFIG(shortcut)
        actionFileOpen->setIconVisibleInMenu(false);
        actionFileQuit = new QAction(WiresharkMainWindow);
        actionFileQuit->setObjectName("actionFileQuit");
#if QT_CONFIG(shortcut)
        actionFileQuit->setShortcut(QString::fromUtf8("Ctrl+Q"));
#endif // QT_CONFIG(shortcut)
        actionFileQuit->setMenuRole(QAction::QuitRole);
        actionCaptureStart = new QAction(WiresharkMainWindow);
        actionCaptureStart->setObjectName("actionCaptureStart");
        actionCaptureStart->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionCaptureStart->setShortcut(QString::fromUtf8("Ctrl+E"));
#endif // QT_CONFIG(shortcut)
        actionCaptureStop = new QAction(WiresharkMainWindow);
        actionCaptureStop->setObjectName("actionCaptureStop");
#if QT_CONFIG(shortcut)
        actionCaptureStop->setShortcut(QString::fromUtf8("Ctrl+E"));
#endif // QT_CONFIG(shortcut)
        actionFileClose = new QAction(WiresharkMainWindow);
        actionFileClose->setObjectName("actionFileClose");
#if QT_CONFIG(shortcut)
        actionFileClose->setShortcut(QString::fromUtf8("Ctrl+W"));
#endif // QT_CONFIG(shortcut)
        actionFileClose->setIconVisibleInMenu(false);
        actionDummyNoFilesFound = new QAction(WiresharkMainWindow);
        actionDummyNoFilesFound->setObjectName("actionDummyNoFilesFound");
        actionDummyNoFilesFound->setEnabled(false);
        actionHelpContents = new QAction(WiresharkMainWindow);
        actionHelpContents->setObjectName("actionHelpContents");
#if QT_CONFIG(shortcut)
        actionHelpContents->setShortcut(QString::fromUtf8("F1"));
#endif // QT_CONFIG(shortcut)
        actionHelpMPWireshark = new QAction(WiresharkMainWindow);
        actionHelpMPWireshark->setObjectName("actionHelpMPWireshark");
        actionHelpMPWireshark_Filter = new QAction(WiresharkMainWindow);
        actionHelpMPWireshark_Filter->setObjectName("actionHelpMPWireshark_Filter");
        actionHelpMPWireshark_FilterReference = new QAction(WiresharkMainWindow);
        actionHelpMPWireshark_FilterReference->setObjectName("actionHelpMPWireshark_FilterReference");
        actionHelpMPTShark = new QAction(WiresharkMainWindow);
        actionHelpMPTShark->setObjectName("actionHelpMPTShark");
        actionHelpMPRawshark = new QAction(WiresharkMainWindow);
        actionHelpMPRawshark->setObjectName("actionHelpMPRawshark");
        actionHelpMPDumpcap = new QAction(WiresharkMainWindow);
        actionHelpMPDumpcap->setObjectName("actionHelpMPDumpcap");
        actionHelpMPMergecap = new QAction(WiresharkMainWindow);
        actionHelpMPMergecap->setObjectName("actionHelpMPMergecap");
        actionHelpMPEditcap = new QAction(WiresharkMainWindow);
        actionHelpMPEditcap->setObjectName("actionHelpMPEditcap");
        actionHelpMPText2pcap = new QAction(WiresharkMainWindow);
        actionHelpMPText2pcap->setObjectName("actionHelpMPText2pcap");
        actionHelpWebsite = new QAction(WiresharkMainWindow);
        actionHelpWebsite->setObjectName("actionHelpWebsite");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/menu/help/wsicon16.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelpWebsite->setIcon(icon);
        actionHelpFAQ = new QAction(WiresharkMainWindow);
        actionHelpFAQ->setObjectName("actionHelpFAQ");
        actionHelpDownloads = new QAction(WiresharkMainWindow);
        actionHelpDownloads->setObjectName("actionHelpDownloads");
        actionHelpWiki = new QAction(WiresharkMainWindow);
        actionHelpWiki->setObjectName("actionHelpWiki");
        actionHelpWiki->setIcon(icon);
        actionHelpWiki->setIconVisibleInMenu(true);
        actionHelpSampleCaptures = new QAction(WiresharkMainWindow);
        actionHelpSampleCaptures->setObjectName("actionHelpSampleCaptures");
        actionHelpAbout = new QAction(WiresharkMainWindow);
        actionHelpAbout->setObjectName("actionHelpAbout");
        actionHelpAbout->setMenuRole(QAction::AboutRole);
        actionHelpAsk = new QAction(WiresharkMainWindow);
        actionHelpAsk->setObjectName("actionHelpAsk");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/menu/help/wsicon-ask.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelpAsk->setIcon(icon1);
        actionHelpAsk->setIconVisibleInMenu(true);
        actionGoNextPacket = new QAction(WiresharkMainWindow);
        actionGoNextPacket->setObjectName("actionGoNextPacket");
#if QT_CONFIG(shortcut)
        actionGoNextPacket->setShortcut(QString::fromUtf8("Ctrl+Down"));
#endif // QT_CONFIG(shortcut)
        actionGoPreviousPacket = new QAction(WiresharkMainWindow);
        actionGoPreviousPacket->setObjectName("actionGoPreviousPacket");
#if QT_CONFIG(shortcut)
        actionGoPreviousPacket->setShortcut(QString::fromUtf8("Ctrl+Up"));
#endif // QT_CONFIG(shortcut)
        actionGoNextConversationPacket = new QAction(WiresharkMainWindow);
        actionGoNextConversationPacket->setObjectName("actionGoNextConversationPacket");
#if QT_CONFIG(shortcut)
        actionGoNextConversationPacket->setShortcut(QString::fromUtf8("Ctrl+."));
#endif // QT_CONFIG(shortcut)
        actionGoPreviousConversationPacket = new QAction(WiresharkMainWindow);
        actionGoPreviousConversationPacket->setObjectName("actionGoPreviousConversationPacket");
#if QT_CONFIG(shortcut)
        actionGoPreviousConversationPacket->setShortcut(QString::fromUtf8("Ctrl+,"));
#endif // QT_CONFIG(shortcut)
        actionGoNextHistoryPacket = new QAction(WiresharkMainWindow);
        actionGoNextHistoryPacket->setObjectName("actionGoNextHistoryPacket");
#if QT_CONFIG(shortcut)
        actionGoNextHistoryPacket->setShortcut(QString::fromUtf8("Alt+Right"));
#endif // QT_CONFIG(shortcut)
        actionGoPreviousHistoryPacket = new QAction(WiresharkMainWindow);
        actionGoPreviousHistoryPacket->setObjectName("actionGoPreviousHistoryPacket");
#if QT_CONFIG(shortcut)
        actionGoPreviousHistoryPacket->setShortcut(QString::fromUtf8("Alt+Left"));
#endif // QT_CONFIG(shortcut)
        actionGoFirstPacket = new QAction(WiresharkMainWindow);
        actionGoFirstPacket->setObjectName("actionGoFirstPacket");
#if QT_CONFIG(shortcut)
        actionGoFirstPacket->setShortcut(QString::fromUtf8("Ctrl+Home"));
#endif // QT_CONFIG(shortcut)
        actionGoLastPacket = new QAction(WiresharkMainWindow);
        actionGoLastPacket->setObjectName("actionGoLastPacket");
#if QT_CONFIG(shortcut)
        actionGoLastPacket->setShortcut(QString::fromUtf8("Ctrl+End"));
#endif // QT_CONFIG(shortcut)
        actionGoFirstConversationPacket = new QAction(WiresharkMainWindow);
        actionGoFirstConversationPacket->setObjectName("actionGoFirstConversationPacket");
        actionGoLastConversationPacket = new QAction(WiresharkMainWindow);
        actionGoLastConversationPacket->setObjectName("actionGoLastConversationPacket");
        actionViewExpandSubtrees = new QAction(WiresharkMainWindow);
        actionViewExpandSubtrees->setObjectName("actionViewExpandSubtrees");
        actionViewExpandSubtrees->setEnabled(false);
#if QT_CONFIG(shortcut)
        actionViewExpandSubtrees->setShortcut(QString::fromUtf8("Shift+Right"));
#endif // QT_CONFIG(shortcut)
        actionViewCollapseSubtrees = new QAction(WiresharkMainWindow);
        actionViewCollapseSubtrees->setObjectName("actionViewCollapseSubtrees");
        actionViewCollapseSubtrees->setEnabled(false);
#if QT_CONFIG(shortcut)
        actionViewCollapseSubtrees->setShortcut(QString::fromUtf8("Shift+Left"));
#endif // QT_CONFIG(shortcut)
        actionViewExpandAll = new QAction(WiresharkMainWindow);
        actionViewExpandAll->setObjectName("actionViewExpandAll");
#if QT_CONFIG(shortcut)
        actionViewExpandAll->setShortcut(QString::fromUtf8("Ctrl+Right"));
#endif // QT_CONFIG(shortcut)
        actionViewCollapseAll = new QAction(WiresharkMainWindow);
        actionViewCollapseAll->setObjectName("actionViewCollapseAll");
#if QT_CONFIG(shortcut)
        actionViewCollapseAll->setShortcut(QString::fromUtf8("Ctrl+Left"));
#endif // QT_CONFIG(shortcut)
        actionGoGoToPacket = new QAction(WiresharkMainWindow);
        actionGoGoToPacket->setObjectName("actionGoGoToPacket");
        actionGoGoToPacket->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionGoGoToPacket->setShortcut(QString::fromUtf8("Ctrl+G"));
#endif // QT_CONFIG(shortcut)
        actionFileMerge = new QAction(WiresharkMainWindow);
        actionFileMerge->setObjectName("actionFileMerge");
        actionFileImportFromHexDump = new QAction(WiresharkMainWindow);
        actionFileImportFromHexDump->setObjectName("actionFileImportFromHexDump");
        actionFileSave = new QAction(WiresharkMainWindow);
        actionFileSave->setObjectName("actionFileSave");
#if QT_CONFIG(shortcut)
        actionFileSave->setShortcut(QString::fromUtf8("Ctrl+S"));
#endif // QT_CONFIG(shortcut)
        actionFileSave->setIconVisibleInMenu(false);
        actionFileSaveAs = new QAction(WiresharkMainWindow);
        actionFileSaveAs->setObjectName("actionFileSaveAs");
#if QT_CONFIG(shortcut)
        actionFileSaveAs->setShortcut(QString::fromUtf8("Ctrl+Shift+S"));
#endif // QT_CONFIG(shortcut)
        actionFileExportPackets = new QAction(WiresharkMainWindow);
        actionFileExportPackets->setObjectName("actionFileExportPackets");
        actionFileExportPacketBytes = new QAction(WiresharkMainWindow);
        actionFileExportPacketBytes->setObjectName("actionFileExportPacketBytes");
#if QT_CONFIG(shortcut)
        actionFileExportPacketBytes->setShortcut(QString::fromUtf8("Ctrl+Shift+X"));
#endif // QT_CONFIG(shortcut)
        actionFileExportTLSSessionKeys = new QAction(WiresharkMainWindow);
        actionFileExportTLSSessionKeys->setObjectName("actionFileExportTLSSessionKeys");
        actionFilePrint = new QAction(WiresharkMainWindow);
        actionFilePrint->setObjectName("actionFilePrint");
#if QT_CONFIG(shortcut)
        actionFilePrint->setShortcut(QString::fromUtf8("Ctrl+P"));
#endif // QT_CONFIG(shortcut)
        actionFileSetListFiles = new QAction(WiresharkMainWindow);
        actionFileSetListFiles->setObjectName("actionFileSetListFiles");
        actionFileSetNextFile = new QAction(WiresharkMainWindow);
        actionFileSetNextFile->setObjectName("actionFileSetNextFile");
        actionFileSetPreviousFile = new QAction(WiresharkMainWindow);
        actionFileSetPreviousFile->setObjectName("actionFileSetPreviousFile");
        actionViewReload = new QAction(WiresharkMainWindow);
        actionViewReload->setObjectName("actionViewReload");
#if QT_CONFIG(shortcut)
        actionViewReload->setShortcut(QString::fromUtf8("Ctrl+R"));
#endif // QT_CONFIG(shortcut)
        actionViewReload->setIconVisibleInMenu(true);
        actionViewReload_as_File_Format_or_Capture = new QAction(WiresharkMainWindow);
        actionViewReload_as_File_Format_or_Capture->setObjectName("actionViewReload_as_File_Format_or_Capture");
#if QT_CONFIG(shortcut)
        actionViewReload_as_File_Format_or_Capture->setShortcut(QString::fromUtf8("Ctrl+Shift+F"));
#endif // QT_CONFIG(shortcut)
        actionCaptureOptions = new QAction(WiresharkMainWindow);
        actionCaptureOptions->setObjectName("actionCaptureOptions");
#if QT_CONFIG(shortcut)
        actionCaptureOptions->setShortcut(QString::fromUtf8("Ctrl+K"));
#endif // QT_CONFIG(shortcut)
        actionCaptureOptions->setMenuRole(QAction::NoRole);
        actionCaptureCaptureFilters = new QAction(WiresharkMainWindow);
        actionCaptureCaptureFilters->setObjectName("actionCaptureCaptureFilters");
        actionCaptureRefreshInterfaces = new QAction(WiresharkMainWindow);
        actionCaptureRefreshInterfaces->setObjectName("actionCaptureRefreshInterfaces");
#if QT_CONFIG(shortcut)
        actionCaptureRefreshInterfaces->setShortcut(QString::fromUtf8("F5"));
#endif // QT_CONFIG(shortcut)
        actionCaptureRestart = new QAction(WiresharkMainWindow);
        actionCaptureRestart->setObjectName("actionCaptureRestart");
#if QT_CONFIG(shortcut)
        actionCaptureRestart->setShortcut(QString::fromUtf8("Ctrl+R"));
#endif // QT_CONFIG(shortcut)
        actionFileExportAsPlainText = new QAction(WiresharkMainWindow);
        actionFileExportAsPlainText->setObjectName("actionFileExportAsPlainText");
        actionFileExportAsCSV = new QAction(WiresharkMainWindow);
        actionFileExportAsCSV->setObjectName("actionFileExportAsCSV");
        actionFileExportAsCArrays = new QAction(WiresharkMainWindow);
        actionFileExportAsCArrays->setObjectName("actionFileExportAsCArrays");
        actionFileExportAsPSML = new QAction(WiresharkMainWindow);
        actionFileExportAsPSML->setObjectName("actionFileExportAsPSML");
        actionFileExportAsPDML = new QAction(WiresharkMainWindow);
        actionFileExportAsPDML->setObjectName("actionFileExportAsPDML");
        actionFileExportAsJSON = new QAction(WiresharkMainWindow);
        actionFileExportAsJSON->setObjectName("actionFileExportAsJSON");
        actionEditCopyDescription = new QAction(WiresharkMainWindow);
        actionEditCopyDescription->setObjectName("actionEditCopyDescription");
#if QT_CONFIG(shortcut)
        actionEditCopyDescription->setShortcut(QString::fromUtf8("Ctrl+Alt+Shift+D"));
#endif // QT_CONFIG(shortcut)
        actionCopyListAsText = new QAction(WiresharkMainWindow);
        actionCopyListAsText->setObjectName("actionCopyListAsText");
        actionCopyListAsCSV = new QAction(WiresharkMainWindow);
        actionCopyListAsCSV->setObjectName("actionCopyListAsCSV");
        actionCopyListAsYAML = new QAction(WiresharkMainWindow);
        actionCopyListAsYAML->setObjectName("actionCopyListAsYAML");
        actionCopyListAsHTML = new QAction(WiresharkMainWindow);
        actionCopyListAsHTML->setObjectName("actionCopyListAsHTML");
        actionCopyAllVisibleItems = new QAction(WiresharkMainWindow);
        actionCopyAllVisibleItems->setObjectName("actionCopyAllVisibleItems");
#if QT_CONFIG(shortcut)
        actionCopyAllVisibleItems->setShortcut(QString::fromUtf8("Ctrl+Alt+Shift+A"));
#endif // QT_CONFIG(shortcut)
        actionCopyAllVisibleSelectedTreeItems = new QAction(WiresharkMainWindow);
        actionCopyAllVisibleSelectedTreeItems->setObjectName("actionCopyAllVisibleSelectedTreeItems");
        actionEditCopyFieldName = new QAction(WiresharkMainWindow);
        actionEditCopyFieldName->setObjectName("actionEditCopyFieldName");
#if QT_CONFIG(shortcut)
        actionEditCopyFieldName->setShortcut(QString::fromUtf8("Ctrl+Alt+Shift+F"));
#endif // QT_CONFIG(shortcut)
        actionEditCopyValue = new QAction(WiresharkMainWindow);
        actionEditCopyValue->setObjectName("actionEditCopyValue");
#if QT_CONFIG(shortcut)
        actionEditCopyValue->setShortcut(QString::fromUtf8("Ctrl+Alt+Shift+V"));
#endif // QT_CONFIG(shortcut)
        actionEditCopyAsFilter = new QAction(WiresharkMainWindow);
        actionEditCopyAsFilter->setObjectName("actionEditCopyAsFilter");
#if QT_CONFIG(shortcut)
        actionEditCopyAsFilter->setShortcut(QString::fromUtf8("Ctrl+Shift+C"));
#endif // QT_CONFIG(shortcut)
        actionAnalyzeDisplayFilters = new QAction(WiresharkMainWindow);
        actionAnalyzeDisplayFilters->setObjectName("actionAnalyzeDisplayFilters");
        actionAnalyzeDisplayFilterMacros = new QAction(WiresharkMainWindow);
        actionAnalyzeDisplayFilterMacros->setObjectName("actionAnalyzeDisplayFilterMacros");
        actionAnalyzeApplyAsColumn = new QAction(WiresharkMainWindow);
        actionAnalyzeApplyAsColumn->setObjectName("actionAnalyzeApplyAsColumn");
#if QT_CONFIG(shortcut)
        actionAnalyzeApplyAsColumn->setShortcut(QString::fromUtf8("Ctrl+Shift+I"));
#endif // QT_CONFIG(shortcut)
        actionEditFindPacket = new QAction(WiresharkMainWindow);
        actionEditFindPacket->setObjectName("actionEditFindPacket");
#if QT_CONFIG(shortcut)
        actionEditFindPacket->setShortcut(QString::fromUtf8("Ctrl+F"));
#endif // QT_CONFIG(shortcut)
        actionEditFindNext = new QAction(WiresharkMainWindow);
        actionEditFindNext->setObjectName("actionEditFindNext");
#if QT_CONFIG(shortcut)
        actionEditFindNext->setShortcut(QString::fromUtf8("Ctrl+N"));
#endif // QT_CONFIG(shortcut)
        actionEditFindPrevious = new QAction(WiresharkMainWindow);
        actionEditFindPrevious->setObjectName("actionEditFindPrevious");
#if QT_CONFIG(shortcut)
        actionEditFindPrevious->setShortcut(QString::fromUtf8("Ctrl+B"));
#endif // QT_CONFIG(shortcut)
        actionEditMarkSelected = new QAction(WiresharkMainWindow);
        actionEditMarkSelected->setObjectName("actionEditMarkSelected");
#if QT_CONFIG(shortcut)
        actionEditMarkSelected->setShortcut(QString::fromUtf8("Ctrl+M"));
#endif // QT_CONFIG(shortcut)
        actionEditMarkAllDisplayed = new QAction(WiresharkMainWindow);
        actionEditMarkAllDisplayed->setObjectName("actionEditMarkAllDisplayed");
#if QT_CONFIG(shortcut)
        actionEditMarkAllDisplayed->setShortcut(QString::fromUtf8("Ctrl+Shift+M"));
#endif // QT_CONFIG(shortcut)
        actionEditUnmarkAllDisplayed = new QAction(WiresharkMainWindow);
        actionEditUnmarkAllDisplayed->setObjectName("actionEditUnmarkAllDisplayed");
#if QT_CONFIG(shortcut)
        actionEditUnmarkAllDisplayed->setShortcut(QString::fromUtf8("Ctrl+Alt+M"));
#endif // QT_CONFIG(shortcut)
        actionEditNextMark = new QAction(WiresharkMainWindow);
        actionEditNextMark->setObjectName("actionEditNextMark");
#if QT_CONFIG(shortcut)
        actionEditNextMark->setShortcut(QString::fromUtf8("Ctrl+Shift+N"));
#endif // QT_CONFIG(shortcut)
        actionEditPreviousMark = new QAction(WiresharkMainWindow);
        actionEditPreviousMark->setObjectName("actionEditPreviousMark");
#if QT_CONFIG(shortcut)
        actionEditPreviousMark->setShortcut(QString::fromUtf8("Ctrl+Shift+B"));
#endif // QT_CONFIG(shortcut)
        actionEditIgnoreSelected = new QAction(WiresharkMainWindow);
        actionEditIgnoreSelected->setObjectName("actionEditIgnoreSelected");
#if QT_CONFIG(shortcut)
        actionEditIgnoreSelected->setShortcut(QString::fromUtf8("Ctrl+D"));
#endif // QT_CONFIG(shortcut)
        actionEditIgnoreAllDisplayed = new QAction(WiresharkMainWindow);
        actionEditIgnoreAllDisplayed->setObjectName("actionEditIgnoreAllDisplayed");
#if QT_CONFIG(shortcut)
        actionEditIgnoreAllDisplayed->setShortcut(QString::fromUtf8("Ctrl+Shift+D"));
#endif // QT_CONFIG(shortcut)
        actionEditUnignoreAllDisplayed = new QAction(WiresharkMainWindow);
        actionEditUnignoreAllDisplayed->setObjectName("actionEditUnignoreAllDisplayed");
#if QT_CONFIG(shortcut)
        actionEditUnignoreAllDisplayed->setShortcut(QString::fromUtf8("Ctrl+Alt+D"));
#endif // QT_CONFIG(shortcut)
        actionEditSetTimeReference = new QAction(WiresharkMainWindow);
        actionEditSetTimeReference->setObjectName("actionEditSetTimeReference");
#if QT_CONFIG(shortcut)
        actionEditSetTimeReference->setShortcut(QString::fromUtf8("Ctrl+T"));
#endif // QT_CONFIG(shortcut)
        actionEditUnsetAllTimeReferences = new QAction(WiresharkMainWindow);
        actionEditUnsetAllTimeReferences->setObjectName("actionEditUnsetAllTimeReferences");
#if QT_CONFIG(shortcut)
        actionEditUnsetAllTimeReferences->setShortcut(QString::fromUtf8("Ctrl+Alt+T"));
#endif // QT_CONFIG(shortcut)
        actionEditNextTimeReference = new QAction(WiresharkMainWindow);
        actionEditNextTimeReference->setObjectName("actionEditNextTimeReference");
#if QT_CONFIG(shortcut)
        actionEditNextTimeReference->setShortcut(QString::fromUtf8("Ctrl+Alt+N"));
#endif // QT_CONFIG(shortcut)
        actionEditPreviousTimeReference = new QAction(WiresharkMainWindow);
        actionEditPreviousTimeReference->setObjectName("actionEditPreviousTimeReference");
#if QT_CONFIG(shortcut)
        actionEditPreviousTimeReference->setShortcut(QString::fromUtf8("Ctrl+Alt+B"));
#endif // QT_CONFIG(shortcut)
        actionEditTimeShift = new QAction(WiresharkMainWindow);
        actionEditTimeShift->setObjectName("actionEditTimeShift");
#if QT_CONFIG(shortcut)
        actionEditTimeShift->setShortcut(QString::fromUtf8("Ctrl+Shift+T"));
#endif // QT_CONFIG(shortcut)
        actionDeleteAllPacketComments = new QAction(WiresharkMainWindow);
        actionDeleteAllPacketComments->setObjectName("actionDeleteAllPacketComments");
        actionEditInjectSecrets = new QAction(WiresharkMainWindow);
        actionEditInjectSecrets->setObjectName("actionEditInjectSecrets");
        actionEditDiscardAllSecrets = new QAction(WiresharkMainWindow);
        actionEditDiscardAllSecrets->setObjectName("actionEditDiscardAllSecrets");
        actionEditConfigurationProfiles = new QAction(WiresharkMainWindow);
        actionEditConfigurationProfiles->setObjectName("actionEditConfigurationProfiles");
        actionEditConfigurationProfiles->setCheckable(false);
#if QT_CONFIG(shortcut)
        actionEditConfigurationProfiles->setShortcut(QString::fromUtf8("Ctrl+Shift+A"));
#endif // QT_CONFIG(shortcut)
        actionEditConfigurationProfiles->setMenuRole(QAction::NoRole);
        actionEditPreferences = new QAction(WiresharkMainWindow);
        actionEditPreferences->setObjectName("actionEditPreferences");
#if QT_CONFIG(shortcut)
        actionEditPreferences->setShortcut(QString::fromUtf8("Ctrl+Shift+P"));
#endif // QT_CONFIG(shortcut)
        actionEditPreferences->setMenuRole(QAction::PreferencesRole);
        actionStatisticsCaptureFileProperties = new QAction(WiresharkMainWindow);
        actionStatisticsCaptureFileProperties->setObjectName("actionStatisticsCaptureFileProperties");
        actionStatisticsCaptureFileProperties->setEnabled(false);
#if QT_CONFIG(shortcut)
        actionStatisticsCaptureFileProperties->setShortcut(QString::fromUtf8("Ctrl+Alt+Shift+C"));
#endif // QT_CONFIG(shortcut)
        actionStatisticsProtocolHierarchy = new QAction(WiresharkMainWindow);
        actionStatisticsProtocolHierarchy->setObjectName("actionStatisticsProtocolHierarchy");
        actionStatisticsProtocolHierarchy->setEnabled(false);
        actionHelpMPCapinfos = new QAction(WiresharkMainWindow);
        actionHelpMPCapinfos->setObjectName("actionHelpMPCapinfos");
        actionHelpMPReordercap = new QAction(WiresharkMainWindow);
        actionHelpMPReordercap->setObjectName("actionHelpMPReordercap");
        actionStatisticsTcpStreamStevens = new QAction(WiresharkMainWindow);
        actionStatisticsTcpStreamStevens->setObjectName("actionStatisticsTcpStreamStevens");
        actionStatisticsTcpStreamThroughput = new QAction(WiresharkMainWindow);
        actionStatisticsTcpStreamThroughput->setObjectName("actionStatisticsTcpStreamThroughput");
        actionStatisticsTcpStreamRoundTripTime = new QAction(WiresharkMainWindow);
        actionStatisticsTcpStreamRoundTripTime->setObjectName("actionStatisticsTcpStreamRoundTripTime");
        actionStatisticsTcpStreamWindowScaling = new QAction(WiresharkMainWindow);
        actionStatisticsTcpStreamWindowScaling->setObjectName("actionStatisticsTcpStreamWindowScaling");
        actionStatisticsTcpStreamTcptrace = new QAction(WiresharkMainWindow);
        actionStatisticsTcpStreamTcptrace->setObjectName("actionStatisticsTcpStreamTcptrace");
        actionSCTPAnalyseThisAssociation = new QAction(WiresharkMainWindow);
        actionSCTPAnalyseThisAssociation->setObjectName("actionSCTPAnalyseThisAssociation");
        actionSCTPShowAllAssociations = new QAction(WiresharkMainWindow);
        actionSCTPShowAllAssociations->setObjectName("actionSCTPShowAllAssociations");
        actionSCTPFilterThisAssociation = new QAction(WiresharkMainWindow);
        actionSCTPFilterThisAssociation->setObjectName("actionSCTPFilterThisAssociation");
        actionStatisticsFlowGraph = new QAction(WiresharkMainWindow);
        actionStatisticsFlowGraph->setObjectName("actionStatisticsFlowGraph");
        actionStatisticsANCP = new QAction(WiresharkMainWindow);
        actionStatisticsANCP->setObjectName("actionStatisticsANCP");
        actionStatisticsBACappInstanceId = new QAction(WiresharkMainWindow);
        actionStatisticsBACappInstanceId->setObjectName("actionStatisticsBACappInstanceId");
        actionStatisticsBACappIP = new QAction(WiresharkMainWindow);
        actionStatisticsBACappIP->setObjectName("actionStatisticsBACappIP");
        actionStatisticsBACappObjectId = new QAction(WiresharkMainWindow);
        actionStatisticsBACappObjectId->setObjectName("actionStatisticsBACappObjectId");
        actionStatisticsBACappService = new QAction(WiresharkMainWindow);
        actionStatisticsBACappService->setObjectName("actionStatisticsBACappService");
        actionStatisticsCollectd = new QAction(WiresharkMainWindow);
        actionStatisticsCollectd->setObjectName("actionStatisticsCollectd");
        actionStatisticsDNS = new QAction(WiresharkMainWindow);
        actionStatisticsDNS->setObjectName("actionStatisticsDNS");
        actionStatisticsDNS_QR = new QAction(WiresharkMainWindow);
        actionStatisticsDNS_QR->setObjectName("actionStatisticsDNS_QR");
        actionStatisticsHART_IP = new QAction(WiresharkMainWindow);
        actionStatisticsHART_IP->setObjectName("actionStatisticsHART_IP");
        actionStatisticsHpfeeds = new QAction(WiresharkMainWindow);
        actionStatisticsHpfeeds->setObjectName("actionStatisticsHpfeeds");
        actionStatisticsHTTP2 = new QAction(WiresharkMainWindow);
        actionStatisticsHTTP2->setObjectName("actionStatisticsHTTP2");
        actionStatisticsHTTPPacketCounter = new QAction(WiresharkMainWindow);
        actionStatisticsHTTPPacketCounter->setObjectName("actionStatisticsHTTPPacketCounter");
        actionStatisticsHTTPRequests = new QAction(WiresharkMainWindow);
        actionStatisticsHTTPRequests->setObjectName("actionStatisticsHTTPRequests");
        actionStatisticsHTTPLoadDistribution = new QAction(WiresharkMainWindow);
        actionStatisticsHTTPLoadDistribution->setObjectName("actionStatisticsHTTPLoadDistribution");
        actionStatisticsHTTPRequestSequences = new QAction(WiresharkMainWindow);
        actionStatisticsHTTPRequestSequences->setObjectName("actionStatisticsHTTPRequestSequences");
        actionStatisticsPacketLengths = new QAction(WiresharkMainWindow);
        actionStatisticsPacketLengths->setObjectName("actionStatisticsPacketLengths");
        actionStatisticsSametime = new QAction(WiresharkMainWindow);
        actionStatisticsSametime->setObjectName("actionStatisticsSametime");
        actionStatisticsSOMEIPmessages = new QAction(WiresharkMainWindow);
        actionStatisticsSOMEIPmessages->setObjectName("actionStatisticsSOMEIPmessages");
        actionStatisticsSOMEIPSDentries = new QAction(WiresharkMainWindow);
        actionStatisticsSOMEIPSDentries->setObjectName("actionStatisticsSOMEIPSDentries");
        actionStatisticsLTP = new QAction(WiresharkMainWindow);
        actionStatisticsLTP->setObjectName("actionStatisticsLTP");
        actionTelephonyISUPMessages = new QAction(WiresharkMainWindow);
        actionTelephonyISUPMessages->setObjectName("actionTelephonyISUPMessages");
        actionTelephonyOsmuxPacketCounter = new QAction(WiresharkMainWindow);
        actionTelephonyOsmuxPacketCounter->setObjectName("actionTelephonyOsmuxPacketCounter");
        actionTelephonyRTSPPacketCounter = new QAction(WiresharkMainWindow);
        actionTelephonyRTSPPacketCounter->setObjectName("actionTelephonyRTSPPacketCounter");
        actionTelephonySMPPOperations = new QAction(WiresharkMainWindow);
        actionTelephonySMPPOperations->setObjectName("actionTelephonySMPPOperations");
        actionTelephonyUCPMessages = new QAction(WiresharkMainWindow);
        actionTelephonyUCPMessages->setObjectName("actionTelephonyUCPMessages");
        actionTelephonyF1APMessages = new QAction(WiresharkMainWindow);
        actionTelephonyF1APMessages->setObjectName("actionTelephonyF1APMessages");
        actionTelephonyNGAPMessages = new QAction(WiresharkMainWindow);
        actionTelephonyNGAPMessages->setObjectName("actionTelephonyNGAPMessages");
        actionTelephonyE2APMessages = new QAction(WiresharkMainWindow);
        actionTelephonyE2APMessages->setObjectName("actionTelephonyE2APMessages");
        actionAnalyzeDecodeAs = new QAction(WiresharkMainWindow);
        actionAnalyzeDecodeAs->setObjectName("actionAnalyzeDecodeAs");
#if QT_CONFIG(shortcut)
        actionAnalyzeDecodeAs->setShortcut(QString::fromUtf8("Ctrl+Shift+U"));
#endif // QT_CONFIG(shortcut)
        actionAnalyzeReloadLuaPlugins = new QAction(WiresharkMainWindow);
        actionAnalyzeReloadLuaPlugins->setObjectName("actionAnalyzeReloadLuaPlugins");
#if QT_CONFIG(shortcut)
        actionAnalyzeReloadLuaPlugins->setShortcut(QString::fromUtf8("Ctrl+Shift+L"));
#endif // QT_CONFIG(shortcut)
        action29West = new QAction(WiresharkMainWindow);
        action29West->setObjectName("action29West");
        actionStatistics29WestTopics_Advertisements_by_Topic = new QAction(WiresharkMainWindow);
        actionStatistics29WestTopics_Advertisements_by_Topic->setObjectName("actionStatistics29WestTopics_Advertisements_by_Topic");
        actionStatistics29WestTopics_Advertisements_by_Source = new QAction(WiresharkMainWindow);
        actionStatistics29WestTopics_Advertisements_by_Source->setObjectName("actionStatistics29WestTopics_Advertisements_by_Source");
        actionStatistics29WestTopics_Advertisements_by_Transport = new QAction(WiresharkMainWindow);
        actionStatistics29WestTopics_Advertisements_by_Transport->setObjectName("actionStatistics29WestTopics_Advertisements_by_Transport");
        actionStatistics29WestTopics_Queries_by_Topic = new QAction(WiresharkMainWindow);
        actionStatistics29WestTopics_Queries_by_Topic->setObjectName("actionStatistics29WestTopics_Queries_by_Topic");
        actionStatistics29WestTopics_Queries_by_Receiver = new QAction(WiresharkMainWindow);
        actionStatistics29WestTopics_Queries_by_Receiver->setObjectName("actionStatistics29WestTopics_Queries_by_Receiver");
        actionStatistics29WestTopics_Wildcard_Queries_by_Pattern = new QAction(WiresharkMainWindow);
        actionStatistics29WestTopics_Wildcard_Queries_by_Pattern->setObjectName("actionStatistics29WestTopics_Wildcard_Queries_by_Pattern");
        actionStatistics29WestTopics_Wildcard_Queries_by_Receiver = new QAction(WiresharkMainWindow);
        actionStatistics29WestTopics_Wildcard_Queries_by_Receiver->setObjectName("actionStatistics29WestTopics_Wildcard_Queries_by_Receiver");
        actionStatistics29WestQueues_Advertisements_by_Queue = new QAction(WiresharkMainWindow);
        actionStatistics29WestQueues_Advertisements_by_Queue->setObjectName("actionStatistics29WestQueues_Advertisements_by_Queue");
        actionStatistics29WestQueues_Advertisements_by_Source = new QAction(WiresharkMainWindow);
        actionStatistics29WestQueues_Advertisements_by_Source->setObjectName("actionStatistics29WestQueues_Advertisements_by_Source");
        actionStatistics29WestQueues_Queries_by_Queue = new QAction(WiresharkMainWindow);
        actionStatistics29WestQueues_Queries_by_Queue->setObjectName("actionStatistics29WestQueues_Queries_by_Queue");
        actionStatistics29WestQueues_Queries_by_Receiver = new QAction(WiresharkMainWindow);
        actionStatistics29WestQueues_Queries_by_Receiver->setObjectName("actionStatistics29WestQueues_Queries_by_Receiver");
        actionStatistics29WestUIM_Streams = new QAction(WiresharkMainWindow);
        actionStatistics29WestUIM_Streams->setObjectName("actionStatistics29WestUIM_Streams");
        actionStatistics29WestLBTRM = new QAction(WiresharkMainWindow);
        actionStatistics29WestLBTRM->setObjectName("actionStatistics29WestLBTRM");
        actionStatistics29WestLBTRU = new QAction(WiresharkMainWindow);
        actionStatistics29WestLBTRU->setObjectName("actionStatistics29WestLBTRU");
        actionFileExportPDU = new QAction(WiresharkMainWindow);
        actionFileExportPDU->setObjectName("actionFileExportPDU");
        actionFileStripHeaders = new QAction(WiresharkMainWindow);
        actionFileStripHeaders->setObjectName("actionFileStripHeaders");
        actionStatisticsIOGraph = new QAction(WiresharkMainWindow);
        actionStatisticsIOGraph->setObjectName("actionStatisticsIOGraph");
        actionViewMainToolbar = new QAction(WiresharkMainWindow);
        actionViewMainToolbar->setObjectName("actionViewMainToolbar");
        actionViewMainToolbar->setCheckable(true);
        actionViewMainToolbar->setChecked(true);
        actionViewFilterToolbar = new QAction(WiresharkMainWindow);
        actionViewFilterToolbar->setObjectName("actionViewFilterToolbar");
        actionViewFilterToolbar->setCheckable(true);
        actionViewFilterToolbar->setChecked(true);
        actionStatisticsConversations = new QAction(WiresharkMainWindow);
        actionStatisticsConversations->setObjectName("actionStatisticsConversations");
        actionStatisticsEndpoints = new QAction(WiresharkMainWindow);
        actionStatisticsEndpoints->setObjectName("actionStatisticsEndpoints");
        actionViewColorizePacketList = new QAction(WiresharkMainWindow);
        actionViewColorizePacketList->setObjectName("actionViewColorizePacketList");
        actionViewColorizePacketList->setCheckable(true);
        actionViewZoomIn = new QAction(WiresharkMainWindow);
        actionViewZoomIn->setObjectName("actionViewZoomIn");
#if QT_CONFIG(shortcut)
        actionViewZoomIn->setShortcut(QString::fromUtf8("Ctrl++"));
#endif // QT_CONFIG(shortcut)
        actionViewZoomOut = new QAction(WiresharkMainWindow);
        actionViewZoomOut->setObjectName("actionViewZoomOut");
#if QT_CONFIG(shortcut)
        actionViewZoomOut->setShortcut(QString::fromUtf8("Ctrl+-"));
#endif // QT_CONFIG(shortcut)
        actionViewNormalSize = new QAction(WiresharkMainWindow);
        actionViewNormalSize->setObjectName("actionViewNormalSize");
#if QT_CONFIG(shortcut)
        actionViewNormalSize->setShortcut(QString::fromUtf8("Ctrl+0"));
#endif // QT_CONFIG(shortcut)
        actionViewResetLayout = new QAction(WiresharkMainWindow);
        actionViewResetLayout->setObjectName("actionViewResetLayout");
#if QT_CONFIG(shortcut)
        actionViewResetLayout->setShortcut(QString::fromUtf8("Ctrl+Shift+W"));
#endif // QT_CONFIG(shortcut)
        actionViewResizeColumns = new QAction(WiresharkMainWindow);
        actionViewResizeColumns->setObjectName("actionViewResizeColumns");
#if QT_CONFIG(shortcut)
        actionViewResizeColumns->setShortcut(QString::fromUtf8("Ctrl+Shift+R"));
#endif // QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatDateYMDandTimeOfDay = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatDateYMDandTimeOfDay->setObjectName("actionViewTimeDisplayFormatDateYMDandTimeOfDay");
        actionViewTimeDisplayFormatDateYMDandTimeOfDay->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatDateYMDandTimeOfDay->setShortcut(QString::fromUtf8("Ctrl+Alt+1"));
#endif // QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatDateYDOYandTimeOfDay = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatDateYDOYandTimeOfDay->setObjectName("actionViewTimeDisplayFormatDateYDOYandTimeOfDay");
        actionViewTimeDisplayFormatDateYDOYandTimeOfDay->setCheckable(true);
        actionViewTimeDisplayFormatTimeOfDay = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatTimeOfDay->setObjectName("actionViewTimeDisplayFormatTimeOfDay");
        actionViewTimeDisplayFormatTimeOfDay->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatTimeOfDay->setShortcut(QString::fromUtf8("Ctrl+Alt+2"));
#endif // QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatSecondsSinceEpoch = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatSecondsSinceEpoch->setObjectName("actionViewTimeDisplayFormatSecondsSinceEpoch");
        actionViewTimeDisplayFormatSecondsSinceEpoch->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatSecondsSinceEpoch->setShortcut(QString::fromUtf8("Ctrl+Alt+3"));
#endif // QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatSecondsSinceFirstCapturedPacket = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatSecondsSinceFirstCapturedPacket->setObjectName("actionViewTimeDisplayFormatSecondsSinceFirstCapturedPacket");
        actionViewTimeDisplayFormatSecondsSinceFirstCapturedPacket->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatSecondsSinceFirstCapturedPacket->setShortcut(QString::fromUtf8("Ctrl+Alt+4"));
#endif // QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket->setObjectName("actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket");
        actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket->setShortcut(QString::fromUtf8("Ctrl+Alt+5"));
#endif // QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket->setObjectName("actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket");
        actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket->setShortcut(QString::fromUtf8("Ctrl+Alt+6"));
#endif // QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay->setObjectName("actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay");
        actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay->setShortcut(QString::fromUtf8("Ctrl+Alt+7"));
#endif // QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay->setObjectName("actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay");
        actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay->setCheckable(true);
        actionViewTimeDisplayFormatUTCTimeOfDay = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatUTCTimeOfDay->setObjectName("actionViewTimeDisplayFormatUTCTimeOfDay");
        actionViewTimeDisplayFormatUTCTimeOfDay->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatUTCTimeOfDay->setShortcut(QString::fromUtf8("Ctrl+Alt+8"));
#endif // QT_CONFIG(shortcut)
        actionViewTimeDisplayFormatPrecisionAutomatic = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatPrecisionAutomatic->setObjectName("actionViewTimeDisplayFormatPrecisionAutomatic");
        actionViewTimeDisplayFormatPrecisionAutomatic->setCheckable(true);
        actionViewTimeDisplayFormatPrecisionSeconds = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatPrecisionSeconds->setObjectName("actionViewTimeDisplayFormatPrecisionSeconds");
        actionViewTimeDisplayFormatPrecisionSeconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecision100Milliseconds = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatPrecision100Milliseconds->setObjectName("actionViewTimeDisplayFormatPrecision100Milliseconds");
        actionViewTimeDisplayFormatPrecision100Milliseconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecision10Milliseconds = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatPrecision10Milliseconds->setObjectName("actionViewTimeDisplayFormatPrecision10Milliseconds");
        actionViewTimeDisplayFormatPrecision10Milliseconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecisionMilliseconds = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatPrecisionMilliseconds->setObjectName("actionViewTimeDisplayFormatPrecisionMilliseconds");
        actionViewTimeDisplayFormatPrecisionMilliseconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecision100Microseconds = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatPrecision100Microseconds->setObjectName("actionViewTimeDisplayFormatPrecision100Microseconds");
        actionViewTimeDisplayFormatPrecision100Microseconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecision10Microseconds = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatPrecision10Microseconds->setObjectName("actionViewTimeDisplayFormatPrecision10Microseconds");
        actionViewTimeDisplayFormatPrecision10Microseconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecisionMicroseconds = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatPrecisionMicroseconds->setObjectName("actionViewTimeDisplayFormatPrecisionMicroseconds");
        actionViewTimeDisplayFormatPrecisionMicroseconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecision100Nanoseconds = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatPrecision100Nanoseconds->setObjectName("actionViewTimeDisplayFormatPrecision100Nanoseconds");
        actionViewTimeDisplayFormatPrecision100Nanoseconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecision10Nanoseconds = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatPrecision10Nanoseconds->setObjectName("actionViewTimeDisplayFormatPrecision10Nanoseconds");
        actionViewTimeDisplayFormatPrecision10Nanoseconds->setCheckable(true);
        actionViewTimeDisplayFormatPrecisionNanoseconds = new QAction(WiresharkMainWindow);
        actionViewTimeDisplayFormatPrecisionNanoseconds->setObjectName("actionViewTimeDisplayFormatPrecisionNanoseconds");
        actionViewTimeDisplayFormatPrecisionNanoseconds->setCheckable(true);
        actionViewTimeDisplaySecondsWithHoursAndMinutes = new QAction(WiresharkMainWindow);
        actionViewTimeDisplaySecondsWithHoursAndMinutes->setObjectName("actionViewTimeDisplaySecondsWithHoursAndMinutes");
        actionViewTimeDisplaySecondsWithHoursAndMinutes->setCheckable(true);
        actionViewNameResolutionPhysical = new QAction(WiresharkMainWindow);
        actionViewNameResolutionPhysical->setObjectName("actionViewNameResolutionPhysical");
        actionViewNameResolutionPhysical->setCheckable(true);
        actionViewNameResolutionNetwork = new QAction(WiresharkMainWindow);
        actionViewNameResolutionNetwork->setObjectName("actionViewNameResolutionNetwork");
        actionViewNameResolutionNetwork->setCheckable(true);
        actionViewNameResolutionTransport = new QAction(WiresharkMainWindow);
        actionViewNameResolutionTransport->setObjectName("actionViewNameResolutionTransport");
        actionViewNameResolutionTransport->setCheckable(true);
        actionViewWirelessToolbar = new QAction(WiresharkMainWindow);
        actionViewWirelessToolbar->setObjectName("actionViewWirelessToolbar");
        actionViewWirelessToolbar->setCheckable(true);
        actionViewStatusBar = new QAction(WiresharkMainWindow);
        actionViewStatusBar->setObjectName("actionViewStatusBar");
        actionViewStatusBar->setCheckable(true);
        actionViewStatusBar->setChecked(true);
        actionViewPacketList = new QAction(WiresharkMainWindow);
        actionViewPacketList->setObjectName("actionViewPacketList");
        actionViewPacketList->setCheckable(true);
        actionViewPacketList->setChecked(true);
        actionViewPacketDetails = new QAction(WiresharkMainWindow);
        actionViewPacketDetails->setObjectName("actionViewPacketDetails");
        actionViewPacketDetails->setCheckable(true);
        actionViewPacketDetails->setChecked(true);
        actionViewPacketBytes = new QAction(WiresharkMainWindow);
        actionViewPacketBytes->setObjectName("actionViewPacketBytes");
        actionViewPacketBytes->setCheckable(true);
        actionViewPacketBytes->setChecked(true);
        actionViewPacketDiagram = new QAction(WiresharkMainWindow);
        actionViewPacketDiagram->setObjectName("actionViewPacketDiagram");
        actionViewPacketDiagram->setCheckable(true);
        actionViewPacketDiagram->setChecked(true);
        actionViewInternalsConversationHashTables = new QAction(WiresharkMainWindow);
        actionViewInternalsConversationHashTables->setObjectName("actionViewInternalsConversationHashTables");
        actionViewInternalsDissectorTables = new QAction(WiresharkMainWindow);
        actionViewInternalsDissectorTables->setObjectName("actionViewInternalsDissectorTables");
        actionViewInternalsSupportedProtocols = new QAction(WiresharkMainWindow);
        actionViewInternalsSupportedProtocols->setObjectName("actionViewInternalsSupportedProtocols");
        actionTelephonyGsmMapSummary = new QAction(WiresharkMainWindow);
        actionTelephonyGsmMapSummary->setObjectName("actionTelephonyGsmMapSummary");
        actionTelephonyLteMacStatistics = new QAction(WiresharkMainWindow);
        actionTelephonyLteMacStatistics->setObjectName("actionTelephonyLteMacStatistics");
        actionTelephonyLteRlcStatistics = new QAction(WiresharkMainWindow);
        actionTelephonyLteRlcStatistics->setObjectName("actionTelephonyLteRlcStatistics");
        actionTelephonyLteRlcGraph = new QAction(WiresharkMainWindow);
        actionTelephonyLteRlcGraph->setObjectName("actionTelephonyLteRlcGraph");
        actionTelephonyMtp3Summary = new QAction(WiresharkMainWindow);
        actionTelephonyMtp3Summary->setObjectName("actionTelephonyMtp3Summary");
        actionTelephonyVoipCalls = new QAction(WiresharkMainWindow);
        actionTelephonyVoipCalls->setObjectName("actionTelephonyVoipCalls");
        actionTelephonySipFlows = new QAction(WiresharkMainWindow);
        actionTelephonySipFlows->setObjectName("actionTelephonySipFlows");
        actionTelephonyRtpStreams = new QAction(WiresharkMainWindow);
        actionTelephonyRtpStreams->setObjectName("actionTelephonyRtpStreams");
        actionViewColoringRules = new QAction(WiresharkMainWindow);
        actionViewColoringRules->setObjectName("actionViewColoringRules");
        actionBluetoothATT_Server_Attributes = new QAction(WiresharkMainWindow);
        actionBluetoothATT_Server_Attributes->setObjectName("actionBluetoothATT_Server_Attributes");
        actionBluetoothDevices = new QAction(WiresharkMainWindow);
        actionBluetoothDevices->setObjectName("actionBluetoothDevices");
        actionBluetoothHCI_Summary = new QAction(WiresharkMainWindow);
        actionBluetoothHCI_Summary->setObjectName("actionBluetoothHCI_Summary");
        actionViewShowPacketInNewWindow = new QAction(WiresharkMainWindow);
        actionViewShowPacketInNewWindow->setObjectName("actionViewShowPacketInNewWindow");
        actionContextShowLinkedPacketInNewWindow = new QAction(WiresharkMainWindow);
        actionContextShowLinkedPacketInNewWindow->setObjectName("actionContextShowLinkedPacketInNewWindow");
        actionGoAutoScroll = new QAction(WiresharkMainWindow);
        actionGoAutoScroll->setObjectName("actionGoAutoScroll");
        actionGoAutoScroll->setCheckable(true);
        actionAnalyzeExpertInfo = new QAction(WiresharkMainWindow);
        actionAnalyzeExpertInfo->setObjectName("actionAnalyzeExpertInfo");
        actionDisplayFilterExpression = new QAction(WiresharkMainWindow);
        actionDisplayFilterExpression->setObjectName("actionDisplayFilterExpression");
        actionStatistics_REGISTER_STAT_GROUP_UNSORTED = new QAction(WiresharkMainWindow);
        actionStatistics_REGISTER_STAT_GROUP_UNSORTED->setObjectName("actionStatistics_REGISTER_STAT_GROUP_UNSORTED");
        actionStatistics_REGISTER_STAT_GROUP_UNSORTED->setVisible(false);
        actionStatistics_REGISTER_STAT_GROUP_UNSORTED->setMenuRole(QAction::NoRole);
        actionStatistics_REGISTER_STAT_GROUP_RSERPOOL = new QAction(WiresharkMainWindow);
        actionStatistics_REGISTER_STAT_GROUP_RSERPOOL->setObjectName("actionStatistics_REGISTER_STAT_GROUP_RSERPOOL");
        actionStatistics_REGISTER_STAT_GROUP_RSERPOOL->setVisible(false);
        actionStatistics_REGISTER_STAT_GROUP_RSERPOOL->setMenuRole(QAction::NoRole);
        actionTelephonyANSIPlaceholder = new QAction(WiresharkMainWindow);
        actionTelephonyANSIPlaceholder->setObjectName("actionTelephonyANSIPlaceholder");
        actionTelephonyANSIPlaceholder->setEnabled(false);
        actionTelephonyGSMPlaceholder = new QAction(WiresharkMainWindow);
        actionTelephonyGSMPlaceholder->setObjectName("actionTelephonyGSMPlaceholder");
        actionTelephonyGSMPlaceholder->setEnabled(false);
        actionTelephonyLTEPlaceholder = new QAction(WiresharkMainWindow);
        actionTelephonyLTEPlaceholder->setObjectName("actionTelephonyLTEPlaceholder");
        actionTelephonyLTEPlaceholder->setEnabled(false);
        actionTelephonyMTP3Placeholder = new QAction(WiresharkMainWindow);
        actionTelephonyMTP3Placeholder->setObjectName("actionTelephonyMTP3Placeholder");
        actionTelephonyMTP3Placeholder->setEnabled(false);
        actionStatisticsResolvedAddresses = new QAction(WiresharkMainWindow);
        actionStatisticsResolvedAddresses->setObjectName("actionStatisticsResolvedAddresses");
        actionViewColorizeConversation1 = new QAction(WiresharkMainWindow);
        actionViewColorizeConversation1->setObjectName("actionViewColorizeConversation1");
#if QT_CONFIG(shortcut)
        actionViewColorizeConversation1->setShortcut(QString::fromUtf8("Ctrl+1"));
#endif // QT_CONFIG(shortcut)
        actionViewColorizeConversation2 = new QAction(WiresharkMainWindow);
        actionViewColorizeConversation2->setObjectName("actionViewColorizeConversation2");
#if QT_CONFIG(shortcut)
        actionViewColorizeConversation2->setShortcut(QString::fromUtf8("Ctrl+2"));
#endif // QT_CONFIG(shortcut)
        actionViewColorizeConversation3 = new QAction(WiresharkMainWindow);
        actionViewColorizeConversation3->setObjectName("actionViewColorizeConversation3");
#if QT_CONFIG(shortcut)
        actionViewColorizeConversation3->setShortcut(QString::fromUtf8("Ctrl+3"));
#endif // QT_CONFIG(shortcut)
        actionViewColorizeConversation4 = new QAction(WiresharkMainWindow);
        actionViewColorizeConversation4->setObjectName("actionViewColorizeConversation4");
#if QT_CONFIG(shortcut)
        actionViewColorizeConversation4->setShortcut(QString::fromUtf8("Ctrl+4"));
#endif // QT_CONFIG(shortcut)
        actionViewColorizeConversation5 = new QAction(WiresharkMainWindow);
        actionViewColorizeConversation5->setObjectName("actionViewColorizeConversation5");
#if QT_CONFIG(shortcut)
        actionViewColorizeConversation5->setShortcut(QString::fromUtf8("Ctrl+5"));
#endif // QT_CONFIG(shortcut)
        actionViewColorizeConversation6 = new QAction(WiresharkMainWindow);
        actionViewColorizeConversation6->setObjectName("actionViewColorizeConversation6");
#if QT_CONFIG(shortcut)
        actionViewColorizeConversation6->setShortcut(QString::fromUtf8("Ctrl+6"));
#endif // QT_CONFIG(shortcut)
        actionViewColorizeConversation7 = new QAction(WiresharkMainWindow);
        actionViewColorizeConversation7->setObjectName("actionViewColorizeConversation7");
#if QT_CONFIG(shortcut)
        actionViewColorizeConversation7->setShortcut(QString::fromUtf8("Ctrl+7"));
#endif // QT_CONFIG(shortcut)
        actionViewColorizeConversation8 = new QAction(WiresharkMainWindow);
        actionViewColorizeConversation8->setObjectName("actionViewColorizeConversation8");
#if QT_CONFIG(shortcut)
        actionViewColorizeConversation8->setShortcut(QString::fromUtf8("Ctrl+8"));
#endif // QT_CONFIG(shortcut)
        actionViewColorizeConversation9 = new QAction(WiresharkMainWindow);
        actionViewColorizeConversation9->setObjectName("actionViewColorizeConversation9");
#if QT_CONFIG(shortcut)
        actionViewColorizeConversation9->setShortcut(QString::fromUtf8("Ctrl+9"));
#endif // QT_CONFIG(shortcut)
        actionViewColorizeConversation10 = new QAction(WiresharkMainWindow);
        actionViewColorizeConversation10->setObjectName("actionViewColorizeConversation10");
        actionViewColorizeNewColoringRule = new QAction(WiresharkMainWindow);
        actionViewColorizeNewColoringRule->setObjectName("actionViewColorizeNewColoringRule");
        actionViewColorizeResetColorization = new QAction(WiresharkMainWindow);
        actionViewColorizeResetColorization->setObjectName("actionViewColorizeResetColorization");
#if QT_CONFIG(shortcut)
        actionViewColorizeResetColorization->setShortcut(QString::fromUtf8("Ctrl+Space"));
#endif // QT_CONFIG(shortcut)
        actionTelephonyRtpStreamAnalysis = new QAction(WiresharkMainWindow);
        actionTelephonyRtpStreamAnalysis->setObjectName("actionTelephonyRtpStreamAnalysis");
        actionTelephonyRtpPlayer = new QAction(WiresharkMainWindow);
        actionTelephonyRtpPlayer->setObjectName("actionTelephonyRtpPlayer");
        actionTelephonyIax2StreamAnalysis = new QAction(WiresharkMainWindow);
        actionTelephonyIax2StreamAnalysis->setObjectName("actionTelephonyIax2StreamAnalysis");
        actionViewEditResolvedName = new QAction(WiresharkMainWindow);
        actionViewEditResolvedName->setObjectName("actionViewEditResolvedName");
        actionAnalyzeEnabledProtocols = new QAction(WiresharkMainWindow);
        actionAnalyzeEnabledProtocols->setObjectName("actionAnalyzeEnabledProtocols");
#if QT_CONFIG(shortcut)
        actionAnalyzeEnabledProtocols->setShortcut(QString::fromUtf8("Ctrl+Shift+E"));
#endif // QT_CONFIG(shortcut)
        actionAnalyzeShowPacketBytes = new QAction(WiresharkMainWindow);
        actionAnalyzeShowPacketBytes->setObjectName("actionAnalyzeShowPacketBytes");
#if QT_CONFIG(shortcut)
        actionAnalyzeShowPacketBytes->setShortcut(QString::fromUtf8("Ctrl+Shift+O"));
#endif // QT_CONFIG(shortcut)
        actionContextWikiProtocolPage = new QAction(WiresharkMainWindow);
        actionContextWikiProtocolPage->setObjectName("actionContextWikiProtocolPage");
        actionContextFilterFieldReference = new QAction(WiresharkMainWindow);
        actionContextFilterFieldReference->setObjectName("actionContextFilterFieldReference");
        actionGoGoToLinkedPacket = new QAction(WiresharkMainWindow);
        actionGoGoToLinkedPacket->setObjectName("actionGoGoToLinkedPacket");
        actionStatisticsUdpMulticastStreams = new QAction(WiresharkMainWindow);
        actionStatisticsUdpMulticastStreams->setObjectName("actionStatisticsUdpMulticastStreams");
        actionWirelessWlanStatistics = new QAction(WiresharkMainWindow);
        actionWirelessWlanStatistics->setObjectName("actionWirelessWlanStatistics");
        actionNewDisplayFilterExpression = new QAction(WiresharkMainWindow);
        actionNewDisplayFilterExpression->setObjectName("actionNewDisplayFilterExpression");
        actionToolsFirewallAclRules = new QAction(WiresharkMainWindow);
        actionToolsFirewallAclRules->setObjectName("actionToolsFirewallAclRules");
        actionViewFullScreen = new QAction(WiresharkMainWindow);
        actionViewFullScreen->setObjectName("actionViewFullScreen");
        actionViewFullScreen->setCheckable(true);
        actionToolsCredentials = new QAction(WiresharkMainWindow);
        actionToolsCredentials->setObjectName("actionToolsCredentials");
        actionToolsMacLookup = new QAction(WiresharkMainWindow);
        actionToolsMacLookup->setObjectName("actionToolsMacLookup");
        actionToolsTLSKeylog = new QAction(WiresharkMainWindow);
        actionToolsTLSKeylog->setObjectName("actionToolsTLSKeylog");
        actionHelpReleaseNotes = new QAction(WiresharkMainWindow);
        actionHelpReleaseNotes->setObjectName("actionHelpReleaseNotes");
        centralWidget = new QWidget(WiresharkMainWindow);
        centralWidget->setObjectName("centralWidget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        goToFrame = new AccordionFrame(centralWidget);
        goToFrame->setObjectName("goToFrame");
        goToHB = new QHBoxLayout(goToFrame);
        goToHB->setSpacing(6);
        goToHB->setContentsMargins(11, 11, 11, 11);
        goToHB->setObjectName("goToHB");
        goToHB->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        goToHB->addItem(horizontalSpacer);

        goToPacketLabel = new QLabel(goToFrame);
        goToPacketLabel->setObjectName("goToPacketLabel");

        goToHB->addWidget(goToPacketLabel);

        goToLineEdit = new QLineEdit(goToFrame);
        goToLineEdit->setObjectName("goToLineEdit");

        goToHB->addWidget(goToLineEdit);

        goToGo = new QPushButton(goToFrame);
        goToGo->setObjectName("goToGo");
        goToGo->setMaximumSize(QSize(16777215, 27));

        goToHB->addWidget(goToGo);

        goToCancel = new QPushButton(goToFrame);
        goToCancel->setObjectName("goToCancel");
        goToCancel->setMaximumSize(QSize(16777215, 27));

        goToHB->addWidget(goToCancel);


        verticalLayout->addWidget(goToFrame);

        searchFrame = new SearchFrame(centralWidget);
        searchFrame->setObjectName("searchFrame");

        verticalLayout->addWidget(searchFrame);

        addressEditorFrame = new AddressEditorFrame(centralWidget);
        addressEditorFrame->setObjectName("addressEditorFrame");

        verticalLayout->addWidget(addressEditorFrame);

        columnEditorFrame = new ColumnEditorFrame(centralWidget);
        columnEditorFrame->setObjectName("columnEditorFrame");

        verticalLayout->addWidget(columnEditorFrame);

        preferenceEditorFrame = new PreferenceEditorFrame(centralWidget);
        preferenceEditorFrame->setObjectName("preferenceEditorFrame");

        verticalLayout->addWidget(preferenceEditorFrame);

        filterExpressionFrame = new FilterExpressionFrame(centralWidget);
        filterExpressionFrame->setObjectName("filterExpressionFrame");

        verticalLayout->addWidget(filterExpressionFrame);

        wirelessTimelineWidget = new WirelessTimeline(centralWidget);
        wirelessTimelineWidget->setObjectName("wirelessTimelineWidget");

        verticalLayout->addWidget(wirelessTimelineWidget);

        mainStack = new QStackedWidget(centralWidget);
        mainStack->setObjectName("mainStack");
        mainStack->setEnabled(true);
        welcomePage = new WelcomePage();
        welcomePage->setObjectName("welcomePage");
        mainStack->addWidget(welcomePage);

        verticalLayout->addWidget(mainStack);

        WiresharkMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WiresharkMainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 960, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuOpenRecentCaptureFile = new QMenu(menuFile);
        menuOpenRecentCaptureFile->setObjectName("menuOpenRecentCaptureFile");
        menuFileSet = new QMenu(menuFile);
        menuFileSet->setObjectName("menuFileSet");
        menuFileExportPacketDissections = new QMenu(menuFile);
        menuFileExportPacketDissections->setObjectName("menuFileExportPacketDissections");
        menuFileExportObjects = new QMenu(menuFile);
        menuFileExportObjects->setObjectName("menuFileExportObjects");
        menuCapture = new QMenu(menuBar);
        menuCapture->setObjectName("menuCapture");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        menuHelp->setToolTipsVisible(true);
        menuHelpManualPages = new QMenu(menuHelp);
        menuHelpManualPages->setObjectName("menuHelpManualPages");
        menuHelpManualPages->setToolTipsVisible(true);
        menuGo = new QMenu(menuBar);
        menuGo->setObjectName("menuGo");
        menuView = new QMenu(menuBar);
        menuView->setObjectName("menuView");
        menuInterfaceToolbars = new QMenu(menuView);
        menuInterfaceToolbars->setObjectName("menuInterfaceToolbars");
        menuZoom = new QMenu(menuView);
        menuZoom->setObjectName("menuZoom");
        menuTime_Display_Format = new QMenu(menuView);
        menuTime_Display_Format->setObjectName("menuTime_Display_Format");
        menuName_Resolution = new QMenu(menuView);
        menuName_Resolution->setObjectName("menuName_Resolution");
        menuColorizeConversation = new QMenu(menuView);
        menuColorizeConversation->setObjectName("menuColorizeConversation");
        menuInternals = new QMenu(menuView);
        menuInternals->setObjectName("menuInternals");
        menuAdditionalToolbars = new QMenu(menuView);
        menuAdditionalToolbars->setObjectName("menuAdditionalToolbars");
        menuAnalyze = new QMenu(menuBar);
        menuAnalyze->setObjectName("menuAnalyze");
        menuApplyAsFilter = new QMenu(menuAnalyze);
        menuApplyAsFilter->setObjectName("menuApplyAsFilter");
        menuPrepareAFilter = new QMenu(menuAnalyze);
        menuPrepareAFilter->setObjectName("menuPrepareAFilter");
        menuSCTP = new QMenu(menuAnalyze);
        menuSCTP->setObjectName("menuSCTP");
        menuFollow = new QMenu(menuAnalyze);
        menuFollow->setObjectName("menuFollow");
        menuConversationFilter = new QMenu(menuAnalyze);
        menuConversationFilter->setObjectName("menuConversationFilter");
        menuStatistics = new QMenu(menuBar);
        menuStatistics->setObjectName("menuStatistics");
        menuStatistics->setEnabled(true);
        menuTcpStreamGraphs = new QMenu(menuStatistics);
        menuTcpStreamGraphs->setObjectName("menuTcpStreamGraphs");
        menuBACnet = new QMenu(menuStatistics);
        menuBACnet->setObjectName("menuBACnet");
        menuDNS = new QMenu(menuStatistics);
        menuDNS->setObjectName("menuDNS");
        menuHTTP = new QMenu(menuStatistics);
        menuHTTP->setObjectName("menuHTTP");
        menu29West = new QMenu(menuStatistics);
        menu29West->setObjectName("menu29West");
        menu29WestTopics = new QMenu(menu29West);
        menu29WestTopics->setObjectName("menu29WestTopics");
        menu29WestQueues = new QMenu(menu29West);
        menu29WestQueues->setObjectName("menu29WestQueues");
        menu29WestUIM = new QMenu(menu29West);
        menu29WestUIM->setObjectName("menu29WestUIM");
        menuServiceResponseTime = new QMenu(menuStatistics);
        menuServiceResponseTime->setObjectName("menuServiceResponseTime");
        menuRSerPool = new QMenu(menuStatistics);
        menuRSerPool->setObjectName("menuRSerPool");
        menuSOMEIP = new QMenu(menuStatistics);
        menuSOMEIP->setObjectName("menuSOMEIP");
        menuDTN = new QMenu(menuStatistics);
        menuDTN->setObjectName("menuDTN");
        menuTelephony = new QMenu(menuBar);
        menuTelephony->setObjectName("menuTelephony");
        menuRTSP = new QMenu(menuTelephony);
        menuRTSP->setObjectName("menuRTSP");
        menuRTP = new QMenu(menuTelephony);
        menuRTP->setObjectName("menuRTP");
        menuTelephonySCTP = new QMenu(menuTelephony);
        menuTelephonySCTP->setObjectName("menuTelephonySCTP");
        menuANSI = new QMenu(menuTelephony);
        menuANSI->setObjectName("menuANSI");
        menuGSM = new QMenu(menuTelephony);
        menuGSM->setObjectName("menuGSM");
        menuLTE = new QMenu(menuTelephony);
        menuLTE->setObjectName("menuLTE");
        menuMTP3 = new QMenu(menuTelephony);
        menuMTP3->setObjectName("menuMTP3");
        menuOsmux = new QMenu(menuTelephony);
        menuOsmux->setObjectName("menuOsmux");
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName("menuEdit");
        menuEditCopy = new QMenu(menuEdit);
        menuEditCopy->setObjectName("menuEditCopy");
        menuPacketComment = new QMenu(menuEdit);
        menuPacketComment->setObjectName("menuPacketComment");
        menuWireless = new QMenu(menuBar);
        menuWireless->setObjectName("menuWireless");
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName("menuTools");
        WiresharkMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WiresharkMainWindow);
        mainToolBar->setObjectName("mainToolBar");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(32, 32));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        WiresharkMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new MainStatusBar(WiresharkMainWindow);
        statusBar->setObjectName("statusBar");
        WiresharkMainWindow->setStatusBar(statusBar);
        displayFilterToolBar = new QToolBar(WiresharkMainWindow);
        displayFilterToolBar->setObjectName("displayFilterToolBar");
        displayFilterToolBar->setMovable(false);
        displayFilterToolBar->setIconSize(QSize(14, 14));
        WiresharkMainWindow->addToolBar(Qt::TopToolBarArea, displayFilterToolBar);
        WiresharkMainWindow->insertToolBarBreak(displayFilterToolBar);
        wirelessToolBar = new QToolBar(WiresharkMainWindow);
        wirelessToolBar->setObjectName("wirelessToolBar");
        wirelessToolBar->setMovable(false);
        WiresharkMainWindow->addToolBar(Qt::TopToolBarArea, wirelessToolBar);
        WiresharkMainWindow->insertToolBarBreak(wirelessToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuGo->menuAction());
        menuBar->addAction(menuCapture->menuAction());
        menuBar->addAction(menuAnalyze->menuAction());
        menuBar->addAction(menuStatistics->menuAction());
        menuBar->addAction(menuTelephony->menuAction());
        menuBar->addAction(menuWireless->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionFileOpen);
        menuFile->addAction(menuOpenRecentCaptureFile->menuAction());
        menuFile->addAction(actionFileMerge);
        menuFile->addAction(actionFileImportFromHexDump);
        menuFile->addAction(actionFileClose);
        menuFile->addSeparator();
        menuFile->addAction(actionFileSave);
        menuFile->addAction(actionFileSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(menuFileSet->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionFileExportPackets);
        menuFile->addAction(menuFileExportPacketDissections->menuAction());
        menuFile->addAction(actionFileExportPacketBytes);
        menuFile->addAction(actionFileExportPDU);
        menuFile->addAction(actionFileStripHeaders);
        menuFile->addAction(actionFileExportTLSSessionKeys);
        menuFile->addAction(menuFileExportObjects->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionFilePrint);
        menuFile->addSeparator();
        menuFile->addAction(actionFileQuit);
        menuOpenRecentCaptureFile->addAction(actionDummyNoFilesFound);
        menuFileSet->addAction(actionFileSetListFiles);
        menuFileSet->addAction(actionFileSetNextFile);
        menuFileSet->addAction(actionFileSetPreviousFile);
        menuFileExportPacketDissections->addAction(actionFileExportAsPlainText);
        menuFileExportPacketDissections->addAction(actionFileExportAsCSV);
        menuFileExportPacketDissections->addAction(actionFileExportAsCArrays);
        menuFileExportPacketDissections->addSeparator();
        menuFileExportPacketDissections->addAction(actionFileExportAsPSML);
        menuFileExportPacketDissections->addAction(actionFileExportAsPDML);
        menuFileExportPacketDissections->addAction(actionFileExportAsJSON);
        menuCapture->addAction(actionCaptureOptions);
        menuCapture->addAction(actionCaptureStart);
        menuCapture->addAction(actionCaptureStop);
        menuCapture->addAction(actionCaptureRestart);
        menuCapture->addAction(actionCaptureCaptureFilters);
        menuCapture->addAction(actionCaptureRefreshInterfaces);
        menuCapture->addSeparator();
        menuHelp->addAction(actionHelpContents);
        menuHelp->addAction(menuHelpManualPages->menuAction());
        menuHelp->addSeparator();
        menuHelp->addAction(actionHelpWebsite);
        menuHelp->addAction(actionHelpFAQ);
        menuHelp->addAction(actionHelpAsk);
        menuHelp->addAction(actionHelpDownloads);
        menuHelp->addAction(actionHelpWiki);
        menuHelp->addAction(actionHelpSampleCaptures);
        menuHelp->addAction(actionHelpReleaseNotes);
        menuHelp->addSeparator();
        menuHelp->addAction(actionHelpAbout);
        menuHelpManualPages->addAction(actionHelpMPWireshark);
        menuHelpManualPages->addAction(actionHelpMPWireshark_Filter);
        menuHelpManualPages->addAction(actionHelpMPWireshark_FilterReference);
        menuHelpManualPages->addSeparator();
        menuHelpManualPages->addAction(actionHelpMPCapinfos);
        menuHelpManualPages->addAction(actionHelpMPDumpcap);
        menuHelpManualPages->addAction(actionHelpMPEditcap);
        menuHelpManualPages->addAction(actionHelpMPMergecap);
        menuHelpManualPages->addAction(actionHelpMPRawshark);
        menuHelpManualPages->addAction(actionHelpMPReordercap);
        menuHelpManualPages->addAction(actionHelpMPText2pcap);
        menuHelpManualPages->addAction(actionHelpMPTShark);
        menuGo->addAction(actionGoGoToPacket);
        menuGo->addAction(actionGoGoToLinkedPacket);
        menuGo->addSeparator();
        menuGo->addAction(actionGoNextPacket);
        menuGo->addAction(actionGoPreviousPacket);
        menuGo->addAction(actionGoFirstPacket);
        menuGo->addAction(actionGoLastPacket);
        menuGo->addAction(actionGoNextConversationPacket);
        menuGo->addAction(actionGoPreviousConversationPacket);
        menuGo->addAction(actionGoFirstConversationPacket);
        menuGo->addAction(actionGoLastConversationPacket);
        menuGo->addAction(actionGoNextHistoryPacket);
        menuGo->addAction(actionGoPreviousHistoryPacket);
        menuGo->addSeparator();
        menuGo->addAction(actionGoAutoScroll);
        menuView->addAction(actionViewMainToolbar);
        menuView->addAction(actionViewFilterToolbar);
        menuView->addAction(actionViewWirelessToolbar);
        menuView->addAction(menuInterfaceToolbars->menuAction());
        menuView->addAction(menuAdditionalToolbars->menuAction());
        menuView->addAction(actionViewStatusBar);
        menuView->addSeparator();
        menuView->addAction(actionViewFullScreen);
        menuView->addSeparator();
        menuView->addAction(actionViewPacketList);
        menuView->addAction(actionViewPacketDetails);
        menuView->addAction(actionViewPacketBytes);
        menuView->addAction(actionViewPacketDiagram);
        menuView->addSeparator();
        menuView->addAction(menuTime_Display_Format->menuAction());
        menuView->addAction(menuName_Resolution->menuAction());
        menuView->addSeparator();
        menuView->addAction(menuZoom->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionViewExpandSubtrees);
        menuView->addAction(actionViewCollapseSubtrees);
        menuView->addAction(actionViewExpandAll);
        menuView->addAction(actionViewCollapseAll);
        menuView->addSeparator();
        menuView->addAction(actionViewColorizePacketList);
        menuView->addAction(actionViewColoringRules);
        menuView->addAction(menuColorizeConversation->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionViewResetLayout);
        menuView->addAction(actionViewResizeColumns);
        menuView->addSeparator();
        menuView->addAction(menuInternals->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionViewShowPacketInNewWindow);
        menuView->addAction(actionViewReload_as_File_Format_or_Capture);
        menuView->addAction(actionViewReload);
        menuZoom->addAction(actionViewZoomIn);
        menuZoom->addAction(actionViewZoomOut);
        menuZoom->addAction(actionViewNormalSize);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatDateYMDandTimeOfDay);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatDateYDOYandTimeOfDay);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatTimeOfDay);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatSecondsSinceEpoch);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatSecondsSinceFirstCapturedPacket);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatUTCTimeOfDay);
        menuTime_Display_Format->addSeparator();
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecisionAutomatic);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecisionSeconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecision100Milliseconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecision10Milliseconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecisionMilliseconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecision100Microseconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecision10Microseconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecisionMicroseconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecision100Nanoseconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecision10Nanoseconds);
        menuTime_Display_Format->addAction(actionViewTimeDisplayFormatPrecisionNanoseconds);
        menuTime_Display_Format->addSeparator();
        menuTime_Display_Format->addAction(actionViewTimeDisplaySecondsWithHoursAndMinutes);
        menuName_Resolution->addAction(actionViewEditResolvedName);
        menuName_Resolution->addSeparator();
        menuName_Resolution->addAction(actionViewNameResolutionPhysical);
        menuName_Resolution->addAction(actionViewNameResolutionNetwork);
        menuName_Resolution->addAction(actionViewNameResolutionTransport);
        menuColorizeConversation->addAction(actionViewColorizeConversation1);
        menuColorizeConversation->addAction(actionViewColorizeConversation2);
        menuColorizeConversation->addAction(actionViewColorizeConversation3);
        menuColorizeConversation->addAction(actionViewColorizeConversation4);
        menuColorizeConversation->addAction(actionViewColorizeConversation5);
        menuColorizeConversation->addAction(actionViewColorizeConversation6);
        menuColorizeConversation->addAction(actionViewColorizeConversation7);
        menuColorizeConversation->addAction(actionViewColorizeConversation8);
        menuColorizeConversation->addAction(actionViewColorizeConversation9);
        menuColorizeConversation->addAction(actionViewColorizeConversation10);
        menuColorizeConversation->addSeparator();
        menuColorizeConversation->addAction(actionViewColorizeResetColorization);
        menuColorizeConversation->addAction(actionViewColorizeNewColoringRule);
        menuInternals->addAction(actionViewInternalsConversationHashTables);
        menuInternals->addAction(actionViewInternalsDissectorTables);
        menuInternals->addAction(actionViewInternalsSupportedProtocols);
        menuAnalyze->addAction(actionAnalyzeDisplayFilters);
        menuAnalyze->addAction(actionAnalyzeDisplayFilterMacros);
        menuAnalyze->addAction(actionDisplayFilterExpression);
        menuAnalyze->addSeparator();
        menuAnalyze->addAction(actionAnalyzeApplyAsColumn);
        menuAnalyze->addAction(menuApplyAsFilter->menuAction());
        menuAnalyze->addAction(menuPrepareAFilter->menuAction());
        menuAnalyze->addAction(menuConversationFilter->menuAction());
        menuAnalyze->addSeparator();
        menuAnalyze->addAction(actionAnalyzeEnabledProtocols);
        menuAnalyze->addAction(actionAnalyzeDecodeAs);
        menuAnalyze->addAction(actionAnalyzeReloadLuaPlugins);
        menuAnalyze->addSeparator();
        menuAnalyze->addAction(menuSCTP->menuAction());
        menuAnalyze->addAction(menuFollow->menuAction());
        menuAnalyze->addSeparator();
        menuAnalyze->addAction(actionAnalyzeShowPacketBytes);
        menuAnalyze->addAction(actionAnalyzeExpertInfo);
        menuSCTP->addAction(actionSCTPAnalyseThisAssociation);
        menuSCTP->addAction(actionSCTPShowAllAssociations);
        menuSCTP->addAction(actionSCTPFilterThisAssociation);
        menuStatistics->addAction(actionStatisticsCaptureFileProperties);
        menuStatistics->addAction(actionStatisticsResolvedAddresses);
        menuStatistics->addAction(actionStatisticsProtocolHierarchy);
        menuStatistics->addAction(actionStatisticsConversations);
        menuStatistics->addAction(actionStatisticsEndpoints);
        menuStatistics->addAction(actionStatisticsPacketLengths);
        menuStatistics->addAction(actionStatisticsIOGraph);
        menuStatistics->addAction(menuServiceResponseTime->menuAction());
        menuStatistics->addSeparator();
        menuStatistics->addAction(actionStatistics_REGISTER_STAT_GROUP_UNSORTED);
        menuStatistics->addAction(menu29West->menuAction());
        menuStatistics->addAction(actionStatisticsANCP);
        menuStatistics->addAction(menuBACnet->menuAction());
        menuStatistics->addAction(actionStatisticsCollectd);
        menuStatistics->addAction(menuDNS->menuAction());
        menuStatistics->addAction(actionStatisticsFlowGraph);
        menuStatistics->addAction(actionStatisticsHART_IP);
        menuStatistics->addAction(actionStatisticsHpfeeds);
        menuStatistics->addAction(menuHTTP->menuAction());
        menuStatistics->addAction(actionStatisticsHTTP2);
        menuStatistics->addAction(actionStatisticsSametime);
        menuStatistics->addAction(menuTcpStreamGraphs->menuAction());
        menuStatistics->addAction(actionStatisticsUdpMulticastStreams);
        menuStatistics->addAction(menuRSerPool->menuAction());
        menuStatistics->addAction(actionStatistics_REGISTER_STAT_GROUP_RSERPOOL);
        menuStatistics->addAction(menuSOMEIP->menuAction());
        menuStatistics->addAction(menuDTN->menuAction());
        menuTcpStreamGraphs->addAction(actionStatisticsTcpStreamStevens);
        menuTcpStreamGraphs->addAction(actionStatisticsTcpStreamTcptrace);
        menuTcpStreamGraphs->addAction(actionStatisticsTcpStreamThroughput);
        menuTcpStreamGraphs->addAction(actionStatisticsTcpStreamRoundTripTime);
        menuTcpStreamGraphs->addAction(actionStatisticsTcpStreamWindowScaling);
        menuBACnet->addAction(actionStatisticsBACappInstanceId);
        menuBACnet->addAction(actionStatisticsBACappIP);
        menuBACnet->addAction(actionStatisticsBACappObjectId);
        menuBACnet->addAction(actionStatisticsBACappService);
        menuDNS->addAction(actionStatisticsDNS);
        menuDNS->addAction(actionStatisticsDNS_QR);
        menuHTTP->addAction(actionStatisticsHTTPPacketCounter);
        menuHTTP->addAction(actionStatisticsHTTPRequests);
        menuHTTP->addAction(actionStatisticsHTTPLoadDistribution);
        menuHTTP->addAction(actionStatisticsHTTPRequestSequences);
        menu29West->addAction(menu29WestTopics->menuAction());
        menu29West->addAction(menu29WestQueues->menuAction());
        menu29West->addAction(menu29WestUIM->menuAction());
        menu29West->addAction(actionStatistics29WestLBTRM);
        menu29West->addAction(actionStatistics29WestLBTRU);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Advertisements_by_Topic);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Advertisements_by_Source);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Advertisements_by_Transport);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Queries_by_Topic);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Queries_by_Receiver);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Wildcard_Queries_by_Pattern);
        menu29WestTopics->addAction(actionStatistics29WestTopics_Wildcard_Queries_by_Receiver);
        menu29WestQueues->addAction(actionStatistics29WestQueues_Advertisements_by_Queue);
        menu29WestQueues->addAction(actionStatistics29WestQueues_Advertisements_by_Source);
        menu29WestQueues->addAction(actionStatistics29WestQueues_Queries_by_Queue);
        menu29WestQueues->addAction(actionStatistics29WestQueues_Queries_by_Receiver);
        menu29WestUIM->addAction(actionStatistics29WestUIM_Streams);
        menuSOMEIP->addAction(actionStatisticsSOMEIPmessages);
        menuSOMEIP->addAction(actionStatisticsSOMEIPSDentries);
        menuDTN->addAction(actionStatisticsLTP);
        menuTelephony->addAction(actionTelephonyVoipCalls);
        menuTelephony->addAction(menuANSI->menuAction());
        menuTelephony->addAction(menuGSM->menuAction());
        menuTelephony->addAction(actionTelephonyIax2StreamAnalysis);
        menuTelephony->addAction(actionTelephonyISUPMessages);
        menuTelephony->addAction(menuLTE->menuAction());
        menuTelephony->addAction(menuMTP3->menuAction());
        menuTelephony->addAction(menuOsmux->menuAction());
        menuTelephony->addAction(menuRTP->menuAction());
        menuTelephony->addAction(menuRTSP->menuAction());
        menuTelephony->addAction(menuTelephonySCTP->menuAction());
        menuTelephony->addAction(actionTelephonySMPPOperations);
        menuTelephony->addAction(actionTelephonyUCPMessages);
        menuTelephony->addAction(actionTelephonyF1APMessages);
        menuTelephony->addAction(actionTelephonyNGAPMessages);
        menuTelephony->addAction(actionTelephonyE2APMessages);
        menuRTSP->addAction(actionTelephonyRTSPPacketCounter);
        menuRTP->addAction(actionTelephonyRtpStreams);
        menuRTP->addAction(actionTelephonyRtpStreamAnalysis);
        menuRTP->addAction(actionTelephonyRtpPlayer);
        menuTelephonySCTP->addAction(actionSCTPAnalyseThisAssociation);
        menuTelephonySCTP->addAction(actionSCTPShowAllAssociations);
        menuTelephonySCTP->addAction(actionSCTPFilterThisAssociation);
        menuANSI->addAction(actionTelephonyANSIPlaceholder);
        menuGSM->addAction(actionTelephonyGSMPlaceholder);
        menuLTE->addAction(actionTelephonyLTEPlaceholder);
        menuMTP3->addAction(actionTelephonyMTP3Placeholder);
        menuOsmux->addAction(actionTelephonyOsmuxPacketCounter);
        menuEdit->addAction(menuEditCopy->menuAction());
        menuEdit->addAction(actionEditFindPacket);
        menuEdit->addAction(actionEditFindNext);
        menuEdit->addAction(actionEditFindPrevious);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditMarkSelected);
        menuEdit->addAction(actionEditMarkAllDisplayed);
        menuEdit->addAction(actionEditUnmarkAllDisplayed);
        menuEdit->addAction(actionEditNextMark);
        menuEdit->addAction(actionEditPreviousMark);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditIgnoreSelected);
        menuEdit->addAction(actionEditIgnoreAllDisplayed);
        menuEdit->addAction(actionEditUnignoreAllDisplayed);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditSetTimeReference);
        menuEdit->addAction(actionEditUnsetAllTimeReferences);
        menuEdit->addAction(actionEditNextTimeReference);
        menuEdit->addAction(actionEditPreviousTimeReference);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditTimeShift);
        menuEdit->addSeparator();
        menuEdit->addAction(menuPacketComment->menuAction());
        menuEdit->addAction(actionDeleteAllPacketComments);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditInjectSecrets);
        menuEdit->addAction(actionEditDiscardAllSecrets);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditConfigurationProfiles);
        menuEdit->addAction(actionEditPreferences);
        menuEditCopy->addAction(actionCopyListAsText);
        menuEditCopy->addAction(actionCopyListAsCSV);
        menuEditCopy->addAction(actionCopyListAsYAML);
        menuEditCopy->addAction(actionCopyListAsHTML);
        menuEditCopy->addSeparator();
        menuEditCopy->addAction(actionCopyAllVisibleItems);
        menuEditCopy->addAction(actionCopyAllVisibleSelectedTreeItems);
        menuEditCopy->addAction(actionEditCopyDescription);
        menuEditCopy->addAction(actionEditCopyFieldName);
        menuEditCopy->addAction(actionEditCopyValue);
        menuEditCopy->addSeparator();
        menuEditCopy->addAction(actionEditCopyAsFilter);
        menuWireless->addAction(actionBluetoothATT_Server_Attributes);
        menuWireless->addAction(actionBluetoothDevices);
        menuWireless->addAction(actionBluetoothHCI_Summary);
        menuWireless->addSeparator();
        menuWireless->addAction(actionWirelessWlanStatistics);
        menuTools->addAction(actionToolsFirewallAclRules);
        menuTools->addAction(actionToolsCredentials);
        menuTools->addAction(actionToolsMacLookup);
        menuTools->addAction(actionToolsTLSKeylog);
        mainToolBar->addAction(actionCaptureStart);
        mainToolBar->addAction(actionCaptureStop);
        mainToolBar->addAction(actionCaptureRestart);
        mainToolBar->addAction(actionCaptureOptions);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFileOpen);
        mainToolBar->addAction(actionFileSave);
        mainToolBar->addAction(actionFileClose);
        mainToolBar->addAction(actionViewReload);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionEditFindPacket);
        mainToolBar->addAction(actionGoPreviousPacket);
        mainToolBar->addAction(actionGoNextPacket);
        mainToolBar->addAction(actionGoGoToPacket);
        mainToolBar->addAction(actionGoFirstPacket);
        mainToolBar->addAction(actionGoLastPacket);
        mainToolBar->addAction(actionGoAutoScroll);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionViewColorizePacketList);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionViewZoomIn);
        mainToolBar->addAction(actionViewZoomOut);
        mainToolBar->addAction(actionViewNormalSize);
        mainToolBar->addAction(actionViewResizeColumns);
        mainToolBar->addAction(actionViewResetLayout);
        displayFilterToolBar->addAction(actionNewDisplayFilterExpression);

        retranslateUi(WiresharkMainWindow);
        QObject::connect(actionFileQuit, &QAction::triggered, WiresharkMainWindow, qOverload<>(&QMainWindow::close));

        goToGo->setDefault(true);


        QMetaObject::connectSlotsByName(WiresharkMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WiresharkMainWindow)
    {
        WiresharkMainWindow->setWindowTitle(QCoreApplication::translate("WiresharkMainWindow", "Wireshark", nullptr));
        actionFileOpen->setText(QCoreApplication::translate("WiresharkMainWindow", "&Open", nullptr));
#if QT_CONFIG(tooltip)
        actionFileOpen->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Open a capture file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFileQuit->setText(QCoreApplication::translate("WiresharkMainWindow", "&Quit", nullptr));
#if QT_CONFIG(tooltip)
        actionFileQuit->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Quit Wireshark", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCaptureStart->setText(QCoreApplication::translate("WiresharkMainWindow", "&Start", nullptr));
#if QT_CONFIG(tooltip)
        actionCaptureStart->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Start capturing packets", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCaptureStop->setText(QCoreApplication::translate("WiresharkMainWindow", "S&top", nullptr));
#if QT_CONFIG(tooltip)
        actionCaptureStop->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Stop capturing packets", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFileClose->setText(QCoreApplication::translate("WiresharkMainWindow", "&Close", nullptr));
#if QT_CONFIG(tooltip)
        actionFileClose->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Close this capture file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDummyNoFilesFound->setText(QCoreApplication::translate("WiresharkMainWindow", "No files found", nullptr));
        actionHelpContents->setText(QCoreApplication::translate("WiresharkMainWindow", "&User's Guide", nullptr));
#if QT_CONFIG(tooltip)
        actionHelpContents->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Wireshark User's Guide", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHelpMPWireshark->setText(QCoreApplication::translate("WiresharkMainWindow", "Wireshark", nullptr));
        actionHelpMPWireshark_Filter->setText(QCoreApplication::translate("WiresharkMainWindow", "Display Filters", nullptr));
        actionHelpMPWireshark_FilterReference->setText(QCoreApplication::translate("WiresharkMainWindow", "Display Filter Reference", nullptr));
        actionHelpMPTShark->setText(QCoreApplication::translate("WiresharkMainWindow", "TShark", nullptr));
        actionHelpMPRawshark->setText(QCoreApplication::translate("WiresharkMainWindow", "Rawshark", nullptr));
        actionHelpMPDumpcap->setText(QCoreApplication::translate("WiresharkMainWindow", "Dumpcap", nullptr));
        actionHelpMPMergecap->setText(QCoreApplication::translate("WiresharkMainWindow", "Mergecap", nullptr));
        actionHelpMPEditcap->setText(QCoreApplication::translate("WiresharkMainWindow", "Editcap", nullptr));
        actionHelpMPText2pcap->setText(QCoreApplication::translate("WiresharkMainWindow", "Text2pcap", nullptr));
        actionHelpWebsite->setText(QCoreApplication::translate("WiresharkMainWindow", "Website", nullptr));
        actionHelpFAQ->setText(QCoreApplication::translate("WiresharkMainWindow", "FAQs", nullptr));
        actionHelpDownloads->setText(QCoreApplication::translate("WiresharkMainWindow", "Downloads", nullptr));
        actionHelpWiki->setText(QCoreApplication::translate("WiresharkMainWindow", "Wiki", nullptr));
        actionHelpSampleCaptures->setText(QCoreApplication::translate("WiresharkMainWindow", "Sample Captures", nullptr));
        actionHelpAbout->setText(QCoreApplication::translate("WiresharkMainWindow", "&About Wireshark", nullptr));
        actionHelpAsk->setText(QCoreApplication::translate("WiresharkMainWindow", "Ask (Q&&A)", nullptr));
        actionGoNextPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Next Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionGoNextPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the next packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoPreviousPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Previous Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionGoPreviousPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the previous packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoNextConversationPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Next Packet in Conversation", nullptr));
#if QT_CONFIG(tooltip)
        actionGoNextConversationPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the next packet in this conversation", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoPreviousConversationPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Previous Packet in Conversation", nullptr));
#if QT_CONFIG(tooltip)
        actionGoPreviousConversationPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the previous packet in this conversation", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoNextHistoryPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Next Packet In History", nullptr));
#if QT_CONFIG(tooltip)
        actionGoNextHistoryPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the next packet in your selection history", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoPreviousHistoryPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Previous Packet In History", nullptr));
#if QT_CONFIG(tooltip)
        actionGoPreviousHistoryPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the previous packet in your selection history", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoFirstPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "First Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionGoFirstPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the first packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoLastPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Last Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionGoLastPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the last packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoFirstConversationPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "First Packet in Conversation", nullptr));
#if QT_CONFIG(tooltip)
        actionGoFirstConversationPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the first packet in this conversation", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoLastConversationPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Last Packet in Conversation", nullptr));
#if QT_CONFIG(tooltip)
        actionGoLastConversationPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the last packet in this conversation", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewExpandSubtrees->setText(QCoreApplication::translate("WiresharkMainWindow", "E&xpand Subtrees", nullptr));
#if QT_CONFIG(tooltip)
        actionViewExpandSubtrees->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Expand the current packet detail", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewCollapseSubtrees->setText(QCoreApplication::translate("WiresharkMainWindow", "Collapse Subtrees", nullptr));
#if QT_CONFIG(tooltip)
        actionViewCollapseSubtrees->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Collapse the current packet detail", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewExpandAll->setText(QCoreApplication::translate("WiresharkMainWindow", "&Expand All", nullptr));
#if QT_CONFIG(tooltip)
        actionViewExpandAll->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Expand packet details", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewCollapseAll->setText(QCoreApplication::translate("WiresharkMainWindow", "Collapse &All", nullptr));
#if QT_CONFIG(tooltip)
        actionViewCollapseAll->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Collapse all packet details", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoGoToPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Go to Packet\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionGoGoToPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to specified packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFileMerge->setText(QCoreApplication::translate("WiresharkMainWindow", "&Merge\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionFileMerge->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Merge one or more files", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFileImportFromHexDump->setText(QCoreApplication::translate("WiresharkMainWindow", "&Import from Hex Dump\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionFileImportFromHexDump->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Import a file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFileSave->setText(QCoreApplication::translate("WiresharkMainWindow", "&Save", nullptr));
#if QT_CONFIG(tooltip)
        actionFileSave->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Save this capture file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFileSaveAs->setText(QCoreApplication::translate("WiresharkMainWindow", "Save &As\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionFileSaveAs->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Save as a different file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFileExportPackets->setText(QCoreApplication::translate("WiresharkMainWindow", "Export Specified Packets\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionFileExportPackets->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Export specified packets", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFileExportPacketBytes->setText(QCoreApplication::translate("WiresharkMainWindow", "Export Packet &Bytes\342\200\246", nullptr));
        actionFileExportTLSSessionKeys->setText(QCoreApplication::translate("WiresharkMainWindow", "Export TLS Session Keys\342\200\246", nullptr));
        actionFilePrint->setText(QCoreApplication::translate("WiresharkMainWindow", "&Print\342\200\246", nullptr));
        actionFileSetListFiles->setText(QCoreApplication::translate("WiresharkMainWindow", "List Files", nullptr));
        actionFileSetNextFile->setText(QCoreApplication::translate("WiresharkMainWindow", "Next File", nullptr));
        actionFileSetPreviousFile->setText(QCoreApplication::translate("WiresharkMainWindow", "Previous File", nullptr));
        actionViewReload->setText(QCoreApplication::translate("WiresharkMainWindow", "&Reload", nullptr));
#if QT_CONFIG(tooltip)
        actionViewReload->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Reload this file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewReload_as_File_Format_or_Capture->setText(QCoreApplication::translate("WiresharkMainWindow", "Reload as File Format/Capture", nullptr));
        actionCaptureOptions->setText(QCoreApplication::translate("WiresharkMainWindow", "&Options\342\200\246", nullptr));
        actionCaptureOptions->setIconText(QCoreApplication::translate("WiresharkMainWindow", "Options", nullptr));
#if QT_CONFIG(tooltip)
        actionCaptureOptions->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Capture options", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCaptureCaptureFilters->setText(QCoreApplication::translate("WiresharkMainWindow", "Capture &Filters\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionCaptureCaptureFilters->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Capture filters", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCaptureRefreshInterfaces->setText(QCoreApplication::translate("WiresharkMainWindow", "Refresh Interfaces", nullptr));
#if QT_CONFIG(tooltip)
        actionCaptureRefreshInterfaces->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Refresh interfaces", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCaptureRestart->setText(QCoreApplication::translate("WiresharkMainWindow", "&Restart", nullptr));
#if QT_CONFIG(tooltip)
        actionCaptureRestart->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Restart current capture", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFileExportAsPlainText->setText(QCoreApplication::translate("WiresharkMainWindow", "As Plain &Text\342\200\246", nullptr));
        actionFileExportAsCSV->setText(QCoreApplication::translate("WiresharkMainWindow", "As &CSV\342\200\246", nullptr));
        actionFileExportAsCArrays->setText(QCoreApplication::translate("WiresharkMainWindow", "As \"C\" &Arrays\342\200\246", nullptr));
        actionFileExportAsPSML->setText(QCoreApplication::translate("WiresharkMainWindow", "As P&SML XML\342\200\246", nullptr));
        actionFileExportAsPDML->setText(QCoreApplication::translate("WiresharkMainWindow", "As P&DML XML\342\200\246", nullptr));
        actionFileExportAsJSON->setText(QCoreApplication::translate("WiresharkMainWindow", "As &JSON\342\200\246", nullptr));
        actionEditCopyDescription->setText(QCoreApplication::translate("WiresharkMainWindow", "Description", nullptr));
#if QT_CONFIG(tooltip)
        actionEditCopyDescription->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Copy this item's description", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyListAsText->setText(QCoreApplication::translate("WiresharkMainWindow", "As Plain &Text", nullptr));
        actionCopyListAsCSV->setText(QCoreApplication::translate("WiresharkMainWindow", "As &CSV", nullptr));
        actionCopyListAsYAML->setText(QCoreApplication::translate("WiresharkMainWindow", "As &YAML", nullptr));
        actionCopyListAsHTML->setText(QCoreApplication::translate("WiresharkMainWindow", "As &HTML", nullptr));
        actionCopyAllVisibleItems->setText(QCoreApplication::translate("WiresharkMainWindow", "All Visible Items", nullptr));
        actionCopyAllVisibleSelectedTreeItems->setText(QCoreApplication::translate("WiresharkMainWindow", "All Visible Selected Tree Items", nullptr));
        actionEditCopyFieldName->setText(QCoreApplication::translate("WiresharkMainWindow", "Field Name", nullptr));
#if QT_CONFIG(tooltip)
        actionEditCopyFieldName->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Copy this item's field name", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditCopyValue->setText(QCoreApplication::translate("WiresharkMainWindow", "Value", nullptr));
#if QT_CONFIG(tooltip)
        actionEditCopyValue->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Copy this item's value", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditCopyAsFilter->setText(QCoreApplication::translate("WiresharkMainWindow", "As Filter", nullptr));
#if QT_CONFIG(tooltip)
        actionEditCopyAsFilter->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Copy this item as a display filter", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAnalyzeDisplayFilters->setText(QCoreApplication::translate("WiresharkMainWindow", "Display &Filters\342\200\246", nullptr));
        actionAnalyzeDisplayFilterMacros->setText(QCoreApplication::translate("WiresharkMainWindow", "Display Filter &Macros\342\200\246", nullptr));
        actionAnalyzeApplyAsColumn->setText(QCoreApplication::translate("WiresharkMainWindow", "Apply as Column", nullptr));
#if QT_CONFIG(tooltip)
        actionAnalyzeApplyAsColumn->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Create a packet list column from the selected field.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditFindPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "&Find Packet\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionEditFindPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Find a packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditFindNext->setText(QCoreApplication::translate("WiresharkMainWindow", "Find Ne&xt", nullptr));
#if QT_CONFIG(tooltip)
        actionEditFindNext->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Find the next packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditFindPrevious->setText(QCoreApplication::translate("WiresharkMainWindow", "Find Pre&vious", nullptr));
#if QT_CONFIG(tooltip)
        actionEditFindPrevious->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Find the previous packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditMarkSelected->setText(QCoreApplication::translate("WiresharkMainWindow", "&Mark/Unmark Selected", nullptr));
#if QT_CONFIG(tooltip)
        actionEditMarkSelected->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Mark or unmark each selected packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditMarkAllDisplayed->setText(QCoreApplication::translate("WiresharkMainWindow", "Mark All Displayed", nullptr));
#if QT_CONFIG(tooltip)
        actionEditMarkAllDisplayed->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Mark all displayed packets", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditUnmarkAllDisplayed->setText(QCoreApplication::translate("WiresharkMainWindow", "&Unmark All Displayed", nullptr));
#if QT_CONFIG(tooltip)
        actionEditUnmarkAllDisplayed->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Unmark all displayed packets", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditNextMark->setText(QCoreApplication::translate("WiresharkMainWindow", "Next Mark", nullptr));
#if QT_CONFIG(tooltip)
        actionEditNextMark->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the next marked packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditPreviousMark->setText(QCoreApplication::translate("WiresharkMainWindow", "Previous Mark", nullptr));
#if QT_CONFIG(tooltip)
        actionEditPreviousMark->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the previous marked packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditIgnoreSelected->setText(QCoreApplication::translate("WiresharkMainWindow", "&Ignore/Unignore Selected", nullptr));
#if QT_CONFIG(tooltip)
        actionEditIgnoreSelected->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Ignore or unignore each selected packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditIgnoreAllDisplayed->setText(QCoreApplication::translate("WiresharkMainWindow", "Ignore All Displayed", nullptr));
#if QT_CONFIG(tooltip)
        actionEditIgnoreAllDisplayed->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Ignore all displayed packets", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditUnignoreAllDisplayed->setText(QCoreApplication::translate("WiresharkMainWindow", "U&nignore All Displayed", nullptr));
#if QT_CONFIG(tooltip)
        actionEditUnignoreAllDisplayed->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Unignore all displayed packets", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditSetTimeReference->setText(QCoreApplication::translate("WiresharkMainWindow", "Set/Unset Time Reference", nullptr));
#if QT_CONFIG(tooltip)
        actionEditSetTimeReference->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Set or unset a time reference for this packet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditUnsetAllTimeReferences->setText(QCoreApplication::translate("WiresharkMainWindow", "Unset All Time References", nullptr));
#if QT_CONFIG(tooltip)
        actionEditUnsetAllTimeReferences->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Remove all time references", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditNextTimeReference->setText(QCoreApplication::translate("WiresharkMainWindow", "Next Time Reference", nullptr));
#if QT_CONFIG(tooltip)
        actionEditNextTimeReference->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the next time reference", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditPreviousTimeReference->setText(QCoreApplication::translate("WiresharkMainWindow", "Previous Time Reference", nullptr));
#if QT_CONFIG(tooltip)
        actionEditPreviousTimeReference->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the previous time reference", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditTimeShift->setText(QCoreApplication::translate("WiresharkMainWindow", "Time Shift\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionEditTimeShift->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Shift or change packet timestamps", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDeleteAllPacketComments->setText(QCoreApplication::translate("WiresharkMainWindow", "Delete All Packet Comments", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteAllPacketComments->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Remove all packet comments in the capture file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditInjectSecrets->setText(QCoreApplication::translate("WiresharkMainWindow", "Inject TLS Secrets", nullptr));
#if QT_CONFIG(tooltip)
        actionEditInjectSecrets->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Embed used TLS secrets in the capture file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditDiscardAllSecrets->setText(QCoreApplication::translate("WiresharkMainWindow", "Discard All Secrets", nullptr));
#if QT_CONFIG(tooltip)
        actionEditDiscardAllSecrets->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Discard all decryption secrets in the capture file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditConfigurationProfiles->setText(QCoreApplication::translate("WiresharkMainWindow", "&Configuration Profiles\342\200\246", nullptr));
        actionEditConfigurationProfiles->setIconText(QCoreApplication::translate("WiresharkMainWindow", "Configuration profiles", nullptr));
#if QT_CONFIG(tooltip)
        actionEditConfigurationProfiles->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Manage your configuration profiles", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditPreferences->setText(QCoreApplication::translate("WiresharkMainWindow", "&Preferences\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionEditPreferences->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Manage Wireshark's preferences", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsCaptureFileProperties->setText(QCoreApplication::translate("WiresharkMainWindow", "Capture File Properties", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsCaptureFileProperties->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Capture file properties", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsProtocolHierarchy->setText(QCoreApplication::translate("WiresharkMainWindow", "&Protocol Hierarchy", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsProtocolHierarchy->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show a summary of protocols present in the capture file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHelpMPCapinfos->setText(QCoreApplication::translate("WiresharkMainWindow", "Capinfos", nullptr));
        actionHelpMPReordercap->setText(QCoreApplication::translate("WiresharkMainWindow", "Reordercap", nullptr));
        actionStatisticsTcpStreamStevens->setText(QCoreApplication::translate("WiresharkMainWindow", "Time Sequence (Stevens)", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsTcpStreamStevens->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "TCP time sequence graph (Stevens)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsTcpStreamThroughput->setText(QCoreApplication::translate("WiresharkMainWindow", "Throughput", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsTcpStreamThroughput->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "TCP throughput", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsTcpStreamRoundTripTime->setText(QCoreApplication::translate("WiresharkMainWindow", "Round Trip Time", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsTcpStreamRoundTripTime->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "TCP round trip time", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsTcpStreamWindowScaling->setText(QCoreApplication::translate("WiresharkMainWindow", "Window Scaling", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsTcpStreamWindowScaling->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "TCP window scaling", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsTcpStreamTcptrace->setText(QCoreApplication::translate("WiresharkMainWindow", "Time Sequence (tcptrace)", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsTcpStreamTcptrace->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "TCP time sequence graph (tcptrace)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSCTPAnalyseThisAssociation->setText(QCoreApplication::translate("WiresharkMainWindow", "Analyse this Association", nullptr));
        actionSCTPShowAllAssociations->setText(QCoreApplication::translate("WiresharkMainWindow", "Show All Associations", nullptr));
        actionSCTPFilterThisAssociation->setText(QCoreApplication::translate("WiresharkMainWindow", "Filter this Association", nullptr));
        actionStatisticsFlowGraph->setText(QCoreApplication::translate("WiresharkMainWindow", "Flow Graph", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsFlowGraph->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Flow sequence diagram", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsANCP->setText(QCoreApplication::translate("WiresharkMainWindow", "ANCP", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsANCP->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "ANCP statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsBACappInstanceId->setText(QCoreApplication::translate("WiresharkMainWindow", "Packets sorted by Instance ID", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsBACappInstanceId->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "BACapp statistics sorted by instance ID", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsBACappIP->setText(QCoreApplication::translate("WiresharkMainWindow", "Packets sorted by IP", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsBACappIP->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "BACapp statistics sorted by IP", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsBACappObjectId->setText(QCoreApplication::translate("WiresharkMainWindow", "Packets sorted by object type", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsBACappObjectId->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "BACapp statistics sorted by object type", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsBACappService->setText(QCoreApplication::translate("WiresharkMainWindow", "Packets sorted by service", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsBACappService->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "BACapp statistics sorted by service", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsCollectd->setText(QCoreApplication::translate("WiresharkMainWindow", "Collectd", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsCollectd->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Collectd statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsDNS->setText(QCoreApplication::translate("WiresharkMainWindow", "General", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsDNS->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "DNS statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsDNS_QR->setText(QCoreApplication::translate("WiresharkMainWindow", "Query-Response", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsDNS_QR->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "DNS Query-Response Statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsHART_IP->setText(QCoreApplication::translate("WiresharkMainWindow", "HART-IP", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsHART_IP->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "HART-IP statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsHpfeeds->setText(QCoreApplication::translate("WiresharkMainWindow", "HPFEEDS", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsHpfeeds->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "hpfeeds statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsHTTP2->setText(QCoreApplication::translate("WiresharkMainWindow", "HTTP2", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsHTTP2->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "HTTP2 statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsHTTPPacketCounter->setText(QCoreApplication::translate("WiresharkMainWindow", "Packet Counter", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsHTTPPacketCounter->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "HTTP packet counter", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsHTTPRequests->setText(QCoreApplication::translate("WiresharkMainWindow", "Requests", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsHTTPRequests->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "HTTP requests", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsHTTPLoadDistribution->setText(QCoreApplication::translate("WiresharkMainWindow", "Load Distribution", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsHTTPLoadDistribution->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "HTTP load distribution", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsHTTPRequestSequences->setText(QCoreApplication::translate("WiresharkMainWindow", "Request Sequences", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsHTTPRequestSequences->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "HTTP Request Sequences", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsPacketLengths->setText(QCoreApplication::translate("WiresharkMainWindow", "Packet Lengths", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsPacketLengths->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Packet length statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsSametime->setText(QCoreApplication::translate("WiresharkMainWindow", "Sametime", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsSametime->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Sametime statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsSOMEIPmessages->setText(QCoreApplication::translate("WiresharkMainWindow", "SOME/IP Messages", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsSOMEIPmessages->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "SOME/IP Message statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsSOMEIPSDentries->setText(QCoreApplication::translate("WiresharkMainWindow", "SOME/IP-SD Entries", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsSOMEIPSDentries->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "SOME/IP-SD Entries statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsLTP->setText(QCoreApplication::translate("WiresharkMainWindow", "&LTP", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsLTP->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "LTP segment and block statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyISUPMessages->setText(QCoreApplication::translate("WiresharkMainWindow", "&ISUP Messages", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyISUPMessages->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "ISUP message statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyOsmuxPacketCounter->setText(QCoreApplication::translate("WiresharkMainWindow", "Packet Counter", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyOsmuxPacketCounter->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Osmux packet counts", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyRTSPPacketCounter->setText(QCoreApplication::translate("WiresharkMainWindow", "Packet Counter", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyRTSPPacketCounter->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "RTSP packet counts", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonySMPPOperations->setText(QCoreApplication::translate("WiresharkMainWindow", "SM&PP Operations", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonySMPPOperations->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "SMPP operation statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyUCPMessages->setText(QCoreApplication::translate("WiresharkMainWindow", "&UCP Messages", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyUCPMessages->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "UCP message statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyF1APMessages->setText(QCoreApplication::translate("WiresharkMainWindow", "F1AP", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyF1APMessages->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "F1AP Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyNGAPMessages->setText(QCoreApplication::translate("WiresharkMainWindow", "NGAP", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyNGAPMessages->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "NGAP Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyE2APMessages->setText(QCoreApplication::translate("WiresharkMainWindow", "E2AP", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyE2APMessages->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "E2AP Messages", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAnalyzeDecodeAs->setText(QCoreApplication::translate("WiresharkMainWindow", "Decode &As\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionAnalyzeDecodeAs->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Change the way packets are dissected", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAnalyzeReloadLuaPlugins->setText(QCoreApplication::translate("WiresharkMainWindow", "Reload Lua Plugins", nullptr));
#if QT_CONFIG(tooltip)
        actionAnalyzeReloadLuaPlugins->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Reload Lua plugins", nullptr));
#endif // QT_CONFIG(tooltip)
        action29West->setText(QCoreApplication::translate("WiresharkMainWindow", "29West", nullptr));
        actionStatistics29WestTopics_Advertisements_by_Topic->setText(QCoreApplication::translate("WiresharkMainWindow", "Advertisements by Topic", nullptr));
        actionStatistics29WestTopics_Advertisements_by_Source->setText(QCoreApplication::translate("WiresharkMainWindow", "Advertisements by Source", nullptr));
        actionStatistics29WestTopics_Advertisements_by_Transport->setText(QCoreApplication::translate("WiresharkMainWindow", "Advertisements by Transport", nullptr));
        actionStatistics29WestTopics_Queries_by_Topic->setText(QCoreApplication::translate("WiresharkMainWindow", "Queries by Topic", nullptr));
        actionStatistics29WestTopics_Queries_by_Receiver->setText(QCoreApplication::translate("WiresharkMainWindow", "Queries by Receiver", nullptr));
        actionStatistics29WestTopics_Wildcard_Queries_by_Pattern->setText(QCoreApplication::translate("WiresharkMainWindow", "Wildcard Queries by Pattern", nullptr));
        actionStatistics29WestTopics_Wildcard_Queries_by_Receiver->setText(QCoreApplication::translate("WiresharkMainWindow", "Wildcard Queries by Receiver", nullptr));
        actionStatistics29WestQueues_Advertisements_by_Queue->setText(QCoreApplication::translate("WiresharkMainWindow", "Advertisements by Queue", nullptr));
        actionStatistics29WestQueues_Advertisements_by_Source->setText(QCoreApplication::translate("WiresharkMainWindow", "Advertisements by Source", nullptr));
        actionStatistics29WestQueues_Queries_by_Queue->setText(QCoreApplication::translate("WiresharkMainWindow", "Queries by Queue", nullptr));
        actionStatistics29WestQueues_Queries_by_Receiver->setText(QCoreApplication::translate("WiresharkMainWindow", "Queries by Receiver", nullptr));
        actionStatistics29WestUIM_Streams->setText(QCoreApplication::translate("WiresharkMainWindow", "Streams", nullptr));
        actionStatistics29WestLBTRM->setText(QCoreApplication::translate("WiresharkMainWindow", "LBT-RM", nullptr));
        actionStatistics29WestLBTRU->setText(QCoreApplication::translate("WiresharkMainWindow", "LBT-RU", nullptr));
        actionFileExportPDU->setText(QCoreApplication::translate("WiresharkMainWindow", "Export PDUs to File\342\200\246", nullptr));
        actionFileStripHeaders->setText(QCoreApplication::translate("WiresharkMainWindow", "Strip Headers\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionFileStripHeaders->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Strip headers and export higher level encapsulations to file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsIOGraph->setText(QCoreApplication::translate("WiresharkMainWindow", "&I/O Graphs", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsIOGraph->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Create graphs based on display filter fields", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewMainToolbar->setText(QCoreApplication::translate("WiresharkMainWindow", "&Main Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        actionViewMainToolbar->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show or hide the main toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewFilterToolbar->setText(QCoreApplication::translate("WiresharkMainWindow", "&Filter Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        actionViewFilterToolbar->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show or hide the display filter toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsConversations->setText(QCoreApplication::translate("WiresharkMainWindow", "&Conversations", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsConversations->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Conversations at different protocol levels", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsEndpoints->setText(QCoreApplication::translate("WiresharkMainWindow", "&Endpoints", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsEndpoints->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Endpoints at different protocol levels", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizePacketList->setText(QCoreApplication::translate("WiresharkMainWindow", "Colorize Packet List", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizePacketList->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Draw packets using your coloring rules", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewZoomIn->setText(QCoreApplication::translate("WiresharkMainWindow", "&Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        actionViewZoomIn->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Enlarge the main window text", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewZoomOut->setText(QCoreApplication::translate("WiresharkMainWindow", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        actionViewZoomOut->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Shrink the main window text", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewNormalSize->setText(QCoreApplication::translate("WiresharkMainWindow", "Normal Size", nullptr));
#if QT_CONFIG(tooltip)
        actionViewNormalSize->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Return the main window text to its normal size", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewResetLayout->setText(QCoreApplication::translate("WiresharkMainWindow", "Reset Layout", nullptr));
#if QT_CONFIG(tooltip)
        actionViewResetLayout->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Reset layout to default size", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewResizeColumns->setText(QCoreApplication::translate("WiresharkMainWindow", "Resize Columns", nullptr));
#if QT_CONFIG(tooltip)
        actionViewResizeColumns->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Resize packet list columns to fit contents", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatDateYMDandTimeOfDay->setText(QCoreApplication::translate("WiresharkMainWindow", "Date and Time of Day (1970-01-01 01:02:03.123456)", nullptr));
#if QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatDateYMDandTimeOfDay->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show packet times as the date and time of day.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatDateYDOYandTimeOfDay->setText(QCoreApplication::translate("WiresharkMainWindow", "Year, Day of Year, and Time of Day (1970/001 01:02:03.123456)", nullptr));
#if QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatDateYDOYandTimeOfDay->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show packet times as the year, day of the year and time of day.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatTimeOfDay->setText(QCoreApplication::translate("WiresharkMainWindow", "Time of Day (01:02:03.123456)", nullptr));
#if QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatTimeOfDay->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show packet times as the date and time of day.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatSecondsSinceEpoch->setText(QCoreApplication::translate("WiresharkMainWindow", "Seconds Since 1970-01-01", nullptr));
#if QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatSecondsSinceEpoch->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show packet times as the seconds since the UNIX / POSIX epoch (1970-01-01).", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatSecondsSinceFirstCapturedPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Seconds Since First Captured Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatSecondsSinceFirstCapturedPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show packet times as the seconds since the first captured packet.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Seconds Since Previous Captured Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatSecondsSincePreviousCapturedPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show packet times as the seconds since the previous captured packet.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Seconds Since Previous Displayed Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatSecondsSincePreviousDisplayedPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show packet times as the seconds since the previous displayed packet.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay->setText(QCoreApplication::translate("WiresharkMainWindow", "UTC Date and Time of Day (1970-01-01 01:02:03.123456Z)", nullptr));
#if QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatUTCDateYMDandTimeOfDay->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show packet times as the UTC date and time of day.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay->setText(QCoreApplication::translate("WiresharkMainWindow", "UTC Year, Day of Year, and Time of Day (1970/001 01:02:03.123456Z)", nullptr));
#if QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatUTCDateYDOYandTimeOfDay->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show packet times as the UTC year, day of the year and time of day.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatUTCTimeOfDay->setText(QCoreApplication::translate("WiresharkMainWindow", "UTC Time of Day (01:02:03.123456Z)", nullptr));
#if QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatUTCTimeOfDay->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show packet times as the UTC time of day.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatPrecisionAutomatic->setText(QCoreApplication::translate("WiresharkMainWindow", "Automatic (from capture file)", nullptr));
#if QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatPrecisionAutomatic->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Use the time precision indicated in the capture file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewTimeDisplayFormatPrecisionSeconds->setText(QCoreApplication::translate("WiresharkMainWindow", "Seconds", nullptr));
        actionViewTimeDisplayFormatPrecision100Milliseconds->setText(QCoreApplication::translate("WiresharkMainWindow", "Tenths of a second", nullptr));
        actionViewTimeDisplayFormatPrecision10Milliseconds->setText(QCoreApplication::translate("WiresharkMainWindow", "Hundredths of a second", nullptr));
        actionViewTimeDisplayFormatPrecisionMilliseconds->setText(QCoreApplication::translate("WiresharkMainWindow", "Milliseconds", nullptr));
        actionViewTimeDisplayFormatPrecision100Microseconds->setText(QCoreApplication::translate("WiresharkMainWindow", "Tenths of a millisecond", nullptr));
        actionViewTimeDisplayFormatPrecision10Microseconds->setText(QCoreApplication::translate("WiresharkMainWindow", "Hundredths of a millisecond", nullptr));
        actionViewTimeDisplayFormatPrecisionMicroseconds->setText(QCoreApplication::translate("WiresharkMainWindow", "Microseconds", nullptr));
        actionViewTimeDisplayFormatPrecision100Nanoseconds->setText(QCoreApplication::translate("WiresharkMainWindow", "Tenths of a microsecond", nullptr));
        actionViewTimeDisplayFormatPrecision10Nanoseconds->setText(QCoreApplication::translate("WiresharkMainWindow", "Hundredths of a microsecond", nullptr));
        actionViewTimeDisplayFormatPrecisionNanoseconds->setText(QCoreApplication::translate("WiresharkMainWindow", "Nanoseconds", nullptr));
        actionViewTimeDisplaySecondsWithHoursAndMinutes->setText(QCoreApplication::translate("WiresharkMainWindow", "Display Seconds With Hours and Minutes", nullptr));
#if QT_CONFIG(tooltip)
        actionViewTimeDisplaySecondsWithHoursAndMinutes->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Display seconds with hours and minutes", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewNameResolutionPhysical->setText(QCoreApplication::translate("WiresharkMainWindow", "Resolve &Physical Addresses", nullptr));
#if QT_CONFIG(tooltip)
        actionViewNameResolutionPhysical->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show names for known MAC addresses. Lookups use a local database.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewNameResolutionNetwork->setText(QCoreApplication::translate("WiresharkMainWindow", "Resolve &Network Addresses", nullptr));
#if QT_CONFIG(tooltip)
        actionViewNameResolutionNetwork->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show names for known IPv4, IPv6, and IPX addresses. Lookups can generate network traffic.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewNameResolutionTransport->setText(QCoreApplication::translate("WiresharkMainWindow", "Resolve &Transport Addresses", nullptr));
#if QT_CONFIG(tooltip)
        actionViewNameResolutionTransport->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show names for known TCP, UDP, and SCTP services. Lookups can generate traffic on some systems.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewWirelessToolbar->setText(QCoreApplication::translate("WiresharkMainWindow", "Wire&less Toolbar", nullptr));
#if QT_CONFIG(tooltip)
        actionViewWirelessToolbar->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show or hide the wireless toolbar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewStatusBar->setText(QCoreApplication::translate("WiresharkMainWindow", "&Status Bar", nullptr));
#if QT_CONFIG(tooltip)
        actionViewStatusBar->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show or hide the status bar", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewPacketList->setText(QCoreApplication::translate("WiresharkMainWindow", "Packet &List", nullptr));
#if QT_CONFIG(tooltip)
        actionViewPacketList->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show or hide the packet list", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewPacketDetails->setText(QCoreApplication::translate("WiresharkMainWindow", "Packet &Details", nullptr));
#if QT_CONFIG(tooltip)
        actionViewPacketDetails->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show or hide the packet details", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewPacketBytes->setText(QCoreApplication::translate("WiresharkMainWindow", "Packet &Bytes", nullptr));
#if QT_CONFIG(tooltip)
        actionViewPacketBytes->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show or hide the packet bytes", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewPacketDiagram->setText(QCoreApplication::translate("WiresharkMainWindow", "Packet &Diagram", nullptr));
#if QT_CONFIG(tooltip)
        actionViewPacketDiagram->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show or hide the packet diagram", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewInternalsConversationHashTables->setText(QCoreApplication::translate("WiresharkMainWindow", "&Conversation Hash Tables", nullptr));
#if QT_CONFIG(tooltip)
        actionViewInternalsConversationHashTables->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show each conversation hash table", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewInternalsDissectorTables->setText(QCoreApplication::translate("WiresharkMainWindow", "&Dissector Tables", nullptr));
#if QT_CONFIG(tooltip)
        actionViewInternalsDissectorTables->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show each dissector table and its entries", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewInternalsSupportedProtocols->setText(QCoreApplication::translate("WiresharkMainWindow", "&Supported Protocols", nullptr));
#if QT_CONFIG(tooltip)
        actionViewInternalsSupportedProtocols->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show the currently supported protocols and display filter fields", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyGsmMapSummary->setText(QCoreApplication::translate("WiresharkMainWindow", "MAP Summary", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyGsmMapSummary->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "GSM MAP summary statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyLteMacStatistics->setText(QCoreApplication::translate("WiresharkMainWindow", "MAC Statistics", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyLteMacStatistics->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "LTE MAC statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyLteRlcStatistics->setText(QCoreApplication::translate("WiresharkMainWindow", "RLC Statistics", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyLteRlcStatistics->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "LTE RLC statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyLteRlcGraph->setText(QCoreApplication::translate("WiresharkMainWindow", "RLC &Graph", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyLteRlcGraph->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "LTE RLC graph", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyMtp3Summary->setText(QCoreApplication::translate("WiresharkMainWindow", "MTP3 Summary", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyMtp3Summary->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "MTP3 summary statistics", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyVoipCalls->setText(QCoreApplication::translate("WiresharkMainWindow", "&VoIP Calls", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyVoipCalls->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "All VoIP Calls", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonySipFlows->setText(QCoreApplication::translate("WiresharkMainWindow", "SIP &Flows", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonySipFlows->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "SIP Flows", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyRtpStreams->setText(QCoreApplication::translate("WiresharkMainWindow", "RTP Streams", nullptr));
        actionViewColoringRules->setText(QCoreApplication::translate("WiresharkMainWindow", "&Coloring Rules\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColoringRules->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Edit the packet list coloring rules.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBluetoothATT_Server_Attributes->setText(QCoreApplication::translate("WiresharkMainWindow", "Bluetooth ATT Server Attributes", nullptr));
        actionBluetoothDevices->setText(QCoreApplication::translate("WiresharkMainWindow", "Bluetooth Devices", nullptr));
        actionBluetoothHCI_Summary->setText(QCoreApplication::translate("WiresharkMainWindow", "Bluetooth HCI Summary", nullptr));
        actionViewShowPacketInNewWindow->setText(QCoreApplication::translate("WiresharkMainWindow", "Show Packet in New &Window", nullptr));
#if QT_CONFIG(tooltip)
        actionViewShowPacketInNewWindow->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show this packet in a separate window.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionContextShowLinkedPacketInNewWindow->setText(QCoreApplication::translate("WiresharkMainWindow", "Show Linked Packet in New Window", nullptr));
#if QT_CONFIG(tooltip)
        actionContextShowLinkedPacketInNewWindow->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show the linked packet in a separate window.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoAutoScroll->setText(QCoreApplication::translate("WiresharkMainWindow", "Auto Scroll in Li&ve Capture", nullptr));
#if QT_CONFIG(tooltip)
        actionGoAutoScroll->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Automatically scroll to the last packet during a live capture.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAnalyzeExpertInfo->setText(QCoreApplication::translate("WiresharkMainWindow", "Expert Information", nullptr));
#if QT_CONFIG(tooltip)
        actionAnalyzeExpertInfo->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show expert notifications", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDisplayFilterExpression->setText(QCoreApplication::translate("WiresharkMainWindow", "Display Filter &Expression\342\200\246", nullptr));
        actionDisplayFilterExpression->setIconText(QCoreApplication::translate("WiresharkMainWindow", "Display Filter Expression\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionDisplayFilterExpression->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Add an expression to the display filter.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatistics_REGISTER_STAT_GROUP_UNSORTED->setText(QCoreApplication::translate("WiresharkMainWindow", "REGISTER_STAT_GROUP_UNSORTED", nullptr));
#if QT_CONFIG(tooltip)
        actionStatistics_REGISTER_STAT_GROUP_UNSORTED->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Start of \"REGISTER_STAT_GROUP_UNSORTED\"", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatistics_REGISTER_STAT_GROUP_RSERPOOL->setText(QCoreApplication::translate("WiresharkMainWindow", "REGISTER_STAT_GROUP_RSERPOOL", nullptr));
#if QT_CONFIG(tooltip)
        actionStatistics_REGISTER_STAT_GROUP_RSERPOOL->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Start of \"REGISTER_STAT_GROUP_RSERPOOL\"", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyANSIPlaceholder->setText(QCoreApplication::translate("WiresharkMainWindow", "No ANSI statistics registered", nullptr));
        actionTelephonyGSMPlaceholder->setText(QCoreApplication::translate("WiresharkMainWindow", "No GSM statistics registered", nullptr));
        actionTelephonyLTEPlaceholder->setText(QCoreApplication::translate("WiresharkMainWindow", "No LTE statistics registered", nullptr));
        actionTelephonyMTP3Placeholder->setText(QCoreApplication::translate("WiresharkMainWindow", "No MTP3 statistics registered", nullptr));
        actionStatisticsResolvedAddresses->setText(QCoreApplication::translate("WiresharkMainWindow", "Resolved Addresses", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsResolvedAddresses->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show each table of resolved addresses as copyable text.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizeConversation1->setText(QCoreApplication::translate("WiresharkMainWindow", "Color &1", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizeConversation1->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Mark the current conversation with its own color.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizeConversation2->setText(QCoreApplication::translate("WiresharkMainWindow", "Color &2", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizeConversation2->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Mark the current conversation with its own color.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizeConversation3->setText(QCoreApplication::translate("WiresharkMainWindow", "Color &3", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizeConversation3->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Mark the current conversation with its own color.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizeConversation4->setText(QCoreApplication::translate("WiresharkMainWindow", "Color &4", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizeConversation4->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Mark the current conversation with its own color.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizeConversation5->setText(QCoreApplication::translate("WiresharkMainWindow", "Color &5", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizeConversation5->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Mark the current conversation with its own color.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizeConversation6->setText(QCoreApplication::translate("WiresharkMainWindow", "Color &6", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizeConversation6->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Mark the current conversation with its own color.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizeConversation7->setText(QCoreApplication::translate("WiresharkMainWindow", "Color &7", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizeConversation7->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Mark the current conversation with its own color.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizeConversation8->setText(QCoreApplication::translate("WiresharkMainWindow", "Color &8", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizeConversation8->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Mark the current conversation with its own color.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizeConversation9->setText(QCoreApplication::translate("WiresharkMainWindow", "Color &9", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizeConversation9->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Mark the current conversation with its own color.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizeConversation10->setText(QCoreApplication::translate("WiresharkMainWindow", "Color 1&0", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizeConversation10->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Mark the current conversation with its own color.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizeNewColoringRule->setText(QCoreApplication::translate("WiresharkMainWindow", "New Coloring Rule\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizeNewColoringRule->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Create a new coloring rule based on this field.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewColorizeResetColorization->setText(QCoreApplication::translate("WiresharkMainWindow", "Reset Colorization", nullptr));
#if QT_CONFIG(tooltip)
        actionViewColorizeResetColorization->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Reset colorized conversations.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyRtpStreamAnalysis->setText(QCoreApplication::translate("WiresharkMainWindow", "RTP Stream Analysis", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyRtpStreamAnalysis->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "RTP Stream Analysis for selected stream. Press CTRL key for adding reverse stream too.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyRtpPlayer->setText(QCoreApplication::translate("WiresharkMainWindow", "RTP Player", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyRtpPlayer->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Play selected stream. Press CTRL key for playing reverse stream too.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTelephonyIax2StreamAnalysis->setText(QCoreApplication::translate("WiresharkMainWindow", "IA&X2 Stream Analysis", nullptr));
#if QT_CONFIG(tooltip)
        actionTelephonyIax2StreamAnalysis->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "IAX2 Stream Analysis", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewEditResolvedName->setText(QCoreApplication::translate("WiresharkMainWindow", "Edit Resolved Name", nullptr));
#if QT_CONFIG(tooltip)
        actionViewEditResolvedName->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Manually edit a name resolution entry.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAnalyzeEnabledProtocols->setText(QCoreApplication::translate("WiresharkMainWindow", "Enabled Protocols\342\200\246", nullptr));
#if QT_CONFIG(tooltip)
        actionAnalyzeEnabledProtocols->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Enable and disable specific protocols", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAnalyzeShowPacketBytes->setText(QCoreApplication::translate("WiresharkMainWindow", "Show Packet Bytes\342\200\246", nullptr));
        actionContextWikiProtocolPage->setText(QCoreApplication::translate("WiresharkMainWindow", "Wiki Protocol Page", nullptr));
#if QT_CONFIG(tooltip)
        actionContextWikiProtocolPage->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Open the Wireshark wiki page for this protocol.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionContextFilterFieldReference->setText(QCoreApplication::translate("WiresharkMainWindow", "Filter Field Reference", nullptr));
#if QT_CONFIG(tooltip)
        actionContextFilterFieldReference->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Open the display filter reference page for this filter field.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoGoToLinkedPacket->setText(QCoreApplication::translate("WiresharkMainWindow", "Go to &Linked Packet", nullptr));
#if QT_CONFIG(tooltip)
        actionGoGoToLinkedPacket->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Go to the packet referenced by the selected field.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStatisticsUdpMulticastStreams->setText(QCoreApplication::translate("WiresharkMainWindow", "UDP Multicast Streams", nullptr));
#if QT_CONFIG(tooltip)
        actionStatisticsUdpMulticastStreams->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show UTP multicast stream statistics.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWirelessWlanStatistics->setText(QCoreApplication::translate("WiresharkMainWindow", "WLAN Traffic", nullptr));
#if QT_CONFIG(tooltip)
        actionWirelessWlanStatistics->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Show IEEE 802.11 wireless LAN statistics.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        actionNewDisplayFilterExpression->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Add a display filter button.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionToolsFirewallAclRules->setText(QCoreApplication::translate("WiresharkMainWindow", "Firewall ACL Rules", nullptr));
#if QT_CONFIG(tooltip)
        actionToolsFirewallAclRules->setToolTip(QCoreApplication::translate("WiresharkMainWindow", "Create firewall ACL rules", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewFullScreen->setText(QCoreApplication::translate("WiresharkMainWindow", "&Full Screen", nullptr));
        actionToolsCredentials->setText(QCoreApplication::translate("WiresharkMainWindow", "Credentials", nullptr));
        actionToolsMacLookup->setText(QCoreApplication::translate("WiresharkMainWindow", "MAC Address Blocks", nullptr));
        actionToolsTLSKeylog->setText(QCoreApplication::translate("WiresharkMainWindow", "TLS Keylog Launcher", nullptr));
        actionHelpReleaseNotes->setText(QCoreApplication::translate("WiresharkMainWindow", "Release Notes", nullptr));
        goToPacketLabel->setText(QCoreApplication::translate("WiresharkMainWindow", "Packet:", nullptr));
        goToGo->setText(QCoreApplication::translate("WiresharkMainWindow", "Go to packet", nullptr));
        goToCancel->setText(QCoreApplication::translate("WiresharkMainWindow", "Cancel", nullptr));
        menuFile->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&File", nullptr));
        menuOpenRecentCaptureFile->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Open &Recent", nullptr));
        menuFileSet->setTitle(QCoreApplication::translate("WiresharkMainWindow", "File Set", nullptr));
        menuFileExportPacketDissections->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Export Packet Dissections", nullptr));
        menuFileExportObjects->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Export Objects", nullptr));
        menuCapture->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&Capture", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&Help", nullptr));
        menuHelpManualPages->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Manual pages", nullptr));
        menuGo->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&Go", nullptr));
        menuView->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&View", nullptr));
        menuInterfaceToolbars->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Interface Toolbars", nullptr));
        menuZoom->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&Zoom", nullptr));
        menuTime_Display_Format->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&Time Display Format", nullptr));
        menuName_Resolution->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Name Resol&ution", nullptr));
        menuColorizeConversation->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Colorize Conversation", nullptr));
        menuInternals->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Internals", nullptr));
        menuAdditionalToolbars->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Additional Toolbars", nullptr));
        menuAnalyze->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&Analyze", nullptr));
        menuApplyAsFilter->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Apply as Filter", nullptr));
        menuPrepareAFilter->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Prepare as Filter", nullptr));
        menuSCTP->setTitle(QCoreApplication::translate("WiresharkMainWindow", "SCTP", nullptr));
        menuFollow->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Follow", nullptr));
        menuConversationFilter->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Conversation Filter", nullptr));
        menuStatistics->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&Statistics", nullptr));
        menuTcpStreamGraphs->setTitle(QCoreApplication::translate("WiresharkMainWindow", "TCP Stream Graphs", nullptr));
        menuBACnet->setTitle(QCoreApplication::translate("WiresharkMainWindow", "BACnet", nullptr));
        menuDNS->setTitle(QCoreApplication::translate("WiresharkMainWindow", "DNS", nullptr));
        menuHTTP->setTitle(QCoreApplication::translate("WiresharkMainWindow", "HTTP", nullptr));
        menu29West->setTitle(QCoreApplication::translate("WiresharkMainWindow", "29West", nullptr));
        menu29WestTopics->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Topics", nullptr));
        menu29WestQueues->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Queues", nullptr));
        menu29WestUIM->setTitle(QCoreApplication::translate("WiresharkMainWindow", "UIM", nullptr));
        menuServiceResponseTime->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Service &Response Time", nullptr));
        menuRSerPool->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Reliable Server Pooling (RSerPool)", nullptr));
        menuSOMEIP->setTitle(QCoreApplication::translate("WiresharkMainWindow", "SOME/IP", nullptr));
        menuDTN->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&DTN", nullptr));
        menuTelephony->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Telephon&y", nullptr));
        menuRTSP->setTitle(QCoreApplication::translate("WiresharkMainWindow", "RTSP", nullptr));
        menuRTP->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&RTP", nullptr));
        menuTelephonySCTP->setTitle(QCoreApplication::translate("WiresharkMainWindow", "S&CTP", nullptr));
        menuANSI->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&ANSI", nullptr));
        menuGSM->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&GSM", nullptr));
        menuLTE->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&3GPP Uu", nullptr));
        menuMTP3->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&MTP3", nullptr));
        menuOsmux->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Osmux", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&Edit", nullptr));
        menuEditCopy->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Copy", nullptr));
        menuPacketComment->setTitle(QCoreApplication::translate("WiresharkMainWindow", "Packet Comments", nullptr));
        menuWireless->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&Wireless", nullptr));
        menuTools->setTitle(QCoreApplication::translate("WiresharkMainWindow", "&Tools", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("WiresharkMainWindow", "Main Toolbar", nullptr));
        displayFilterToolBar->setWindowTitle(QCoreApplication::translate("WiresharkMainWindow", "Display Filter Toolbar", nullptr));
        wirelessToolBar->setWindowTitle(QCoreApplication::translate("WiresharkMainWindow", "Wireless Toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WiresharkMainWindow: public Ui_WiresharkMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIRESHARK_MAIN_WINDOW_H
