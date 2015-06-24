/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created: Tue Jun 23 18:34:27 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QLabel *label_4;
    QLabel *copyrightLabel;
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *versionLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(690, 314);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(690, 314));
        AboutDialog->setMaximumSize(QSize(690, 314));
        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 750, 314));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/about")));
        copyrightLabel = new QLabel(AboutDialog);
        copyrightLabel->setObjectName(QString::fromUtf8("copyrightLabel"));
        copyrightLabel->setGeometry(QRect(10, 0, 479, 91));
        QFont font;
        font.setPointSize(8);
        copyrightLabel->setFont(font);
        copyrightLabel->setCursor(QCursor(Qt::IBeamCursor));
        copyrightLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(550, 270, 111, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        layoutWidget = new QWidget(AboutDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(8, 225, 531, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label);

        versionLabel = new QLabel(layoutWidget);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setCursor(QCursor(Qt::IBeamCursor));
        versionLabel->setText(QString::fromUtf8(""));
        versionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(versionLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(7);
        label_2->setFont(font1);
        label_2->setCursor(QCursor(Qt::IBeamCursor));
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_2);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About Hexx", 0, QApplication::UnicodeUTF8));
        copyrightLabel->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>Copyright \302\251 2009-2014 The Bitcoin developers<br/>Copyright \302\251 2012-2014 The NovaCoin developers<br/>Copyright \302\251 2014-2015 The Darkcoin developers<br/>Copyright \302\251 2015 The Hexx developers</p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Hexx wallet</span>. Version</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-size:7pt;\">This is experimental software. Distributed under the MIT/X11 software license, see the accompanying file COPYING or </span><a href=\"http://www.opensource.org/licenses/mit-license.php\"><span style=\" font-size:7pt; text-decoration: underline; color:#0000ff;\">http://www.opensource.org/licenses/mit-license.php</span></a><span style=\" font-size:7pt;\">. This product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit (</span><a href=\"https://www.openssl.org/\"><span style=\" font-size:7pt; text-decoration: underline; color:#0000ff;\">https://www.openssl.org/</span></a><span style=\" font-size:7pt;\">) and cryptographic software written by Eric Young (</span><a href=\"mailto:eay@cryptsoft.com\"><span style=\" font-size:7pt; text-decoration: underline; color:#0000ff;\">eay@cryptsoft.com</span></a><span style=\" font-size:7pt;\">) and UPnP software written by Thomas Bernard.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
