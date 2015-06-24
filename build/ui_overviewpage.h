/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created: Tue Jun 23 18:34:27 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QLabel *labelAlerts;
    QGridLayout *gridLayout;
    QWidget *transactionsWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QListView *listTransactions;
    QVBoxLayout *layoutWallet;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QLabel *label_10;
    QLabel *labelStake;
    QLabel *label_3;
    QLabel *labelUnconfirmed;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QFrame *line;
    QLabel *labelTotalText;
    QLabel *labelTotal;
    QFrame *frameDarksend;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *layoutDarksend;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLabel *darksendEnabled;
    QLabel *label_7;
    QLabel *labelAnonymizedText;
    QLabel *labelAnonymized;
    QLabel *label_8;
    QLabel *labelAmountRounds;
    QLabel *label_9;
    QLabel *labelSubmittedDenom;
    QProgressBar *darksendProgress;
    QLabel *darksendStatus;
    QHBoxLayout *layoutDarksendButtons;
    QPushButton *toggleDarksend;
    QPushButton *darksendAuto;
    QPushButton *darksendReset;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(622, 445);
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QString::fromUtf8("labelAlerts"));
        labelAlerts->setGeometry(QRect(0, 0, 16, 21));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488);  color:#000000\n"
""));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);
        gridLayout = new QGridLayout(OverviewPage);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        transactionsWidget = new QWidget(OverviewPage);
        transactionsWidget->setObjectName(QString::fromUtf8("transactionsWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(transactionsWidget->sizePolicy().hasHeightForWidth());
        transactionsWidget->setSizePolicy(sizePolicy);
        transactionsWidget->setMinimumSize(QSize(310, 0));
        verticalLayout = new QVBoxLayout(transactionsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(transactionsWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(transactionsWidget);
        labelTransactionsStatus->setObjectName(QString::fromUtf8("labelTransactionsStatus"));
        labelTransactionsStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QString::fromUtf8("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_4);

        listTransactions = new QListView(transactionsWidget);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        listTransactions->setStyleSheet(QString::fromUtf8("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        gridLayout->addWidget(transactionsWidget, 0, 1, 1, 1);

        layoutWallet = new QVBoxLayout();
        layoutWallet->setSpacing(0);
        layoutWallet->setObjectName(QString::fromUtf8("layoutWallet"));
        widget = new QWidget(OverviewPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(310, 0));
        widget->setMaximumSize(QSize(310, 16777215));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(widget);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        labelWalletStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelWalletStatus->setText(QString::fromUtf8("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(12);
        formLayout_2->setVerticalSpacing(12);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        labelBalance = new QLabel(widget);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelBalance->setFont(font1);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0 HXX"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelBalance);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        labelStake = new QLabel(widget);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        labelStake->setFont(font1);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setText(QString::fromUtf8("0 HXX"));
        labelStake->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelStake);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        labelUnconfirmed = new QLabel(widget);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0 HXX"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelUnconfirmed);

        labelImmatureText = new QLabel(widget);
        labelImmatureText->setObjectName(QString::fromUtf8("labelImmatureText"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelImmatureText);

        labelImmature = new QLabel(widget);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        labelImmature->setFont(font1);
        labelImmature->setText(QString::fromUtf8("0 HXX"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, labelImmature);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, line);

        labelTotalText = new QLabel(widget);
        labelTotalText->setObjectName(QString::fromUtf8("labelTotalText"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, labelTotalText);

        labelTotal = new QLabel(widget);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));
        labelTotal->setFont(font1);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0 HXX"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, labelTotal);


        verticalLayout_4->addLayout(formLayout_2);


        layoutWallet->addWidget(widget);

        frameDarksend = new QFrame(OverviewPage);
        frameDarksend->setObjectName(QString::fromUtf8("frameDarksend"));
        sizePolicy1.setHeightForWidth(frameDarksend->sizePolicy().hasHeightForWidth());
        frameDarksend->setSizePolicy(sizePolicy1);
        frameDarksend->setMinimumSize(QSize(310, 0));
        frameDarksend->setMaximumSize(QSize(310, 16777215));
        frameDarksend->setFrameShape(QFrame::NoFrame);
        frameDarksend->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(frameDarksend);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        layoutDarksend = new QVBoxLayout();
        layoutDarksend->setObjectName(QString::fromUtf8("layoutDarksend"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(frameDarksend);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        layoutDarksend->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(5);
        label_6 = new QLabel(frameDarksend);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        darksendEnabled = new QLabel(frameDarksend);
        darksendEnabled->setObjectName(QString::fromUtf8("darksendEnabled"));
        darksendEnabled->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, darksendEnabled);

        label_7 = new QLabel(frameDarksend);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        labelAnonymizedText = new QLabel(frameDarksend);
        labelAnonymizedText->setObjectName(QString::fromUtf8("labelAnonymizedText"));
        labelAnonymizedText->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelAnonymizedText);

        labelAnonymized = new QLabel(frameDarksend);
        labelAnonymized->setObjectName(QString::fromUtf8("labelAnonymized"));
        labelAnonymized->setFont(font1);
        labelAnonymized->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, labelAnonymized);

        label_8 = new QLabel(frameDarksend);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        labelAmountRounds = new QLabel(frameDarksend);
        labelAmountRounds->setObjectName(QString::fromUtf8("labelAmountRounds"));
        labelAmountRounds->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelAmountRounds);

        label_9 = new QLabel(frameDarksend);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        labelSubmittedDenom = new QLabel(frameDarksend);
        labelSubmittedDenom->setObjectName(QString::fromUtf8("labelSubmittedDenom"));
        labelSubmittedDenom->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, labelSubmittedDenom);

        darksendProgress = new QProgressBar(frameDarksend);
        darksendProgress->setObjectName(QString::fromUtf8("darksendProgress"));
        darksendProgress->setMaximumSize(QSize(200, 16777215));
        darksendProgress->setStyleSheet(QString::fromUtf8("background:transparent;"));
        darksendProgress->setValue(0);

        formLayout->setWidget(1, QFormLayout::FieldRole, darksendProgress);


        layoutDarksend->addLayout(formLayout);

        darksendStatus = new QLabel(frameDarksend);
        darksendStatus->setObjectName(QString::fromUtf8("darksendStatus"));
        darksendStatus->setMinimumSize(QSize(288, 43));
        darksendStatus->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        darksendStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        darksendStatus->setWordWrap(true);

        layoutDarksend->addWidget(darksendStatus);

        layoutDarksendButtons = new QHBoxLayout();
        layoutDarksendButtons->setObjectName(QString::fromUtf8("layoutDarksendButtons"));
        toggleDarksend = new QPushButton(frameDarksend);
        toggleDarksend->setObjectName(QString::fromUtf8("toggleDarksend"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toggleDarksend->sizePolicy().hasHeightForWidth());
        toggleDarksend->setSizePolicy(sizePolicy2);
        toggleDarksend->setStyleSheet(QString::fromUtf8(""));

        layoutDarksendButtons->addWidget(toggleDarksend);

        darksendAuto = new QPushButton(frameDarksend);
        darksendAuto->setObjectName(QString::fromUtf8("darksendAuto"));
        sizePolicy2.setHeightForWidth(darksendAuto->sizePolicy().hasHeightForWidth());
        darksendAuto->setSizePolicy(sizePolicy2);
        darksendAuto->setStyleSheet(QString::fromUtf8(""));

        layoutDarksendButtons->addWidget(darksendAuto);

        darksendReset = new QPushButton(frameDarksend);
        darksendReset->setObjectName(QString::fromUtf8("darksendReset"));
        sizePolicy2.setHeightForWidth(darksendReset->sizePolicy().hasHeightForWidth());
        darksendReset->setSizePolicy(sizePolicy2);
        darksendReset->setAutoFillBackground(false);
        darksendReset->setStyleSheet(QString::fromUtf8(""));

        layoutDarksendButtons->addWidget(darksendReset);


        layoutDarksend->addLayout(layoutDarksendButtons);


        verticalLayout_3->addLayout(layoutDarksend);


        layoutWallet->addWidget(frameDarksend);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutWallet->addItem(verticalSpacer);


        gridLayout->addLayout(layoutWallet, 0, 0, 1, 1);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OverviewPage", "<b>Recent transactions</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Hexx network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("OverviewPage", "Wallet", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Hexx network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OverviewPage", "Spendable:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("OverviewPage", "Stake:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OverviewPage", "Unconfirmed:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("OverviewPage", "Darksend", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("OverviewPage", "Status:", 0, QApplication::UnicodeUTF8));
        darksendEnabled->setText(QApplication::translate("OverviewPage", "n/a", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("OverviewPage", "Completion:", 0, QApplication::UnicodeUTF8));
        labelAnonymizedText->setText(QApplication::translate("OverviewPage", "Darksend Balance:", 0, QApplication::UnicodeUTF8));
        labelAnonymized->setText(QApplication::translate("OverviewPage", "0 HXX", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("OverviewPage", "Amount and Rounds:", 0, QApplication::UnicodeUTF8));
        labelAmountRounds->setText(QApplication::translate("OverviewPage", "0 HXX / 0 Rounds", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("OverviewPage", "Submitted Denom:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        labelSubmittedDenom->setStatusTip(QApplication::translate("OverviewPage", "The denominations you submitted to the Panacea Node. To mix, other users must submit the exact same denominations.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        labelSubmittedDenom->setText(QApplication::translate("OverviewPage", "n/a", 0, QApplication::UnicodeUTF8));
        darksendStatus->setText(QApplication::translate("OverviewPage", "(Last Message)", 0, QApplication::UnicodeUTF8));
        toggleDarksend->setText(QApplication::translate("OverviewPage", "Start/Stop", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        darksendAuto->setToolTip(QApplication::translate("OverviewPage", "Try to manually submit a Darksend request.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        darksendAuto->setText(QApplication::translate("OverviewPage", "Try Mix", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        darksendReset->setToolTip(QApplication::translate("OverviewPage", "Reset the current status of Darksend (can interrupt Darksend if it's in the process of Mixing, which can cost you money!)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        darksendReset->setText(QApplication::translate("OverviewPage", "Reset", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
