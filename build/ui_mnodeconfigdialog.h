/********************************************************************************
** Form generated from reading UI file 'mnodeconfigdialog.ui'
**
** Created: Tue Jun 23 18:34:27 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNODECONFIGDIALOG_H
#define UI_MNODECONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MNodeConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *detailText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MNodeConfigDialog)
    {
        if (MNodeConfigDialog->objectName().isEmpty())
            MNodeConfigDialog->setObjectName(QString::fromUtf8("MNodeConfigDialog"));
        MNodeConfigDialog->resize(620, 250);
        verticalLayout = new QVBoxLayout(MNodeConfigDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        detailText = new QTextEdit(MNodeConfigDialog);
        detailText->setObjectName(QString::fromUtf8("detailText"));
        detailText->setReadOnly(true);

        verticalLayout->addWidget(detailText);

        buttonBox = new QDialogButtonBox(MNodeConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(MNodeConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MNodeConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MNodeConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MNodeConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *MNodeConfigDialog)
    {
        MNodeConfigDialog->setWindowTitle(QApplication::translate("MNodeConfigDialog", "Panacea Node Configuration Template", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        detailText->setToolTip(QApplication::translate("MNodeConfigDialog", "<html><head/><body><p>This pane shows an example hexxcoin.conf template with the necessary masternode settings.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MNodeConfigDialog: public Ui_MNodeConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNODECONFIGDIALOG_H
