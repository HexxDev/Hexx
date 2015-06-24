/********************************************************************************
** Form generated from reading UI file 'addeditmnode.ui'
**
** Created: Tue Jun 23 18:34:27 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITMNODE_H
#define UI_ADDEDITMNODE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddEditMNode
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *aliasLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *addressLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_Buttons;
    QSpacerItem *horizontalSpacer_1;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddEditMNode)
    {
        if (AddEditMNode->objectName().isEmpty())
            AddEditMNode->setObjectName(QString::fromUtf8("AddEditMNode"));
        AddEditMNode->resize(540, 241);
        AddEditMNode->setModal(true);
        verticalLayout = new QVBoxLayout(AddEditMNode);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        label_3 = new QLabel(AddEditMNode);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setWordWrap(true);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(AddEditMNode);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        aliasLineEdit = new QLineEdit(AddEditMNode);
        aliasLineEdit->setObjectName(QString::fromUtf8("aliasLineEdit"));

        horizontalLayout->addWidget(aliasLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(AddEditMNode);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        addressLineEdit = new QLineEdit(AddEditMNode);
        addressLineEdit->setObjectName(QString::fromUtf8("addressLineEdit"));

        horizontalLayout_2->addWidget(addressLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);

        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QString::fromUtf8("horizontalLayout_Buttons"));
        horizontalSpacer_1 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_1);

        statusLabel = new QLabel(AddEditMNode);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        statusLabel->setFont(font);
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        horizontalLayout_Buttons->addWidget(statusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_2);

        okButton = new QPushButton(AddEditMNode);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(AddEditMNode);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);


        retranslateUi(AddEditMNode);

        QMetaObject::connectSlotsByName(AddEditMNode);
    } // setupUi

    void retranslateUi(QDialog *AddEditMNode)
    {
        AddEditMNode->setWindowTitle(QApplication::translate("AddEditMNode", "Add/Edit Panacea Node", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddEditMNode", "<html><head/><body><p>Enter an Alias (friendly name) for your Panacea Node and its address (either clearnet IP and port or Tor onion address and port). The address should be in the format 123.456.789.123:9999 or akjdsafxjkhasdf.onion:9999. A masternode private key and a collateral address will both be automatically generated for you. You must send exactly 50000 HXX to the collateral address.</p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddEditMNode", "Alias", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddEditMNode", "Address", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QString());
        okButton->setText(QApplication::translate("AddEditMNode", "&OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("AddEditMNode", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddEditMNode: public Ui_AddEditMNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITMNODE_H
