/********************************************************************************
** Form generated from reading UI file 'masternodemanager.ui'
**
** Created: Tue Jun 23 18:34:27 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODEMANAGER_H
#define UI_MASTERNODEMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasternodeManager
{
public:
    QVBoxLayout *topLayout;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *countLabel;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *createButton;
    QPushButton *copyAddressButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *editButton;
    QPushButton *getConfigButton;
    QPushButton *removeButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *startButton;
    QPushButton *stopButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *startAllButton;
    QPushButton *stopAllButton;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *MasternodeManager)
    {
        if (MasternodeManager->objectName().isEmpty())
            MasternodeManager->setObjectName(QString::fromUtf8("MasternodeManager"));
        MasternodeManager->resize(723, 457);
        topLayout = new QVBoxLayout(MasternodeManager);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        topLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        tabWidget = new QTabWidget(MasternodeManager);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        countLabel = new QLabel(tab);
        countLabel->setObjectName(QString::fromUtf8("countLabel"));

        horizontalLayout_3->addWidget(countLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        createButton = new QPushButton(tab_2);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        horizontalLayout->addWidget(createButton);

        copyAddressButton = new QPushButton(tab_2);
        copyAddressButton->setObjectName(QString::fromUtf8("copyAddressButton"));

        horizontalLayout->addWidget(copyAddressButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_2->setAlternatingRowColors(true);
        tableWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidget_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        editButton = new QPushButton(tab_2);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        horizontalLayout_2->addWidget(editButton);

        getConfigButton = new QPushButton(tab_2);
        getConfigButton->setObjectName(QString::fromUtf8("getConfigButton"));

        horizontalLayout_2->addWidget(getConfigButton);

        removeButton = new QPushButton(tab_2);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        horizontalLayout_2->addWidget(removeButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        startButton = new QPushButton(tab_2);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        horizontalLayout_4->addWidget(startButton);

        stopButton = new QPushButton(tab_2);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        horizontalLayout_4->addWidget(stopButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        startAllButton = new QPushButton(tab_2);
        startAllButton->setObjectName(QString::fromUtf8("startAllButton"));

        horizontalLayout_5->addWidget(startAllButton);

        stopAllButton = new QPushButton(tab_2);
        stopAllButton->setObjectName(QString::fromUtf8("stopAllButton"));

        horizontalLayout_5->addWidget(stopAllButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        topLayout->addLayout(verticalLayout);


        retranslateUi(MasternodeManager);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MasternodeManager);
    } // setupUi

    void retranslateUi(QWidget *MasternodeManager)
    {
        MasternodeManager->setWindowTitle(QApplication::translate("MasternodeManager", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MasternodeManager", "Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MasternodeManager", "Rank", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MasternodeManager", "Active", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MasternodeManager", "Active (secs)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MasternodeManager", "Last Seen", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MasternodeManager", "Pubkey", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MasternodeManager", "Panacea Nodes Count:", 0, QApplication::UnicodeUTF8));
        countLabel->setText(QApplication::translate("MasternodeManager", "0", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MasternodeManager", "Panacea Network", 0, QApplication::UnicodeUTF8));
        createButton->setText(QApplication::translate("MasternodeManager", "&Create...", 0, QApplication::UnicodeUTF8));
        copyAddressButton->setText(QApplication::translate("MasternodeManager", "Copy &Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MasternodeManager", "Alias", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MasternodeManager", "IP/Onion", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MasternodeManager", "Status", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("MasternodeManager", "Collateral Address", 0, QApplication::UnicodeUTF8));
        editButton->setText(QApplication::translate("MasternodeManager", "&Edit", 0, QApplication::UnicodeUTF8));
        getConfigButton->setText(QApplication::translate("MasternodeManager", "&Get Config", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("MasternodeManager", "&Remove", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("MasternodeManager", "&Start", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("MasternodeManager", "Sto&p", 0, QApplication::UnicodeUTF8));
        startAllButton->setText(QApplication::translate("MasternodeManager", "S&tart All", 0, QApplication::UnicodeUTF8));
        stopAllButton->setText(QApplication::translate("MasternodeManager", "St&op All", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MasternodeManager", "My Panacea Nodes", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MasternodeManager: public Ui_MasternodeManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODEMANAGER_H
