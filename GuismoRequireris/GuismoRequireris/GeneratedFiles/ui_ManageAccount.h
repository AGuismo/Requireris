/********************************************************************************
** Form generated from reading UI file 'ManageAccount.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEACCOUNT_H
#define UI_MANAGEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ManageAccount
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QLabel *label_2;
    QLineEdit *keyLineEdit;
    QGridLayout *gridLayout;
    QPushButton *closePushButton;
    QPushButton *addPushButton;

    void setupUi(QDialog *ManageAccount)
    {
        if (ManageAccount->objectName().isEmpty())
            ManageAccount->setObjectName(QStringLiteral("ManageAccount"));
        ManageAccount->resize(233, 101);
        ManageAccount->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	border-image: url(./Img/background.jpg);\n"
"}\n"
""));
        gridLayout_3 = new QGridLayout(ManageAccount);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(ManageAccount);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("	color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        nameLineEdit = new QLineEdit(ManageAccount);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setStyleSheet(QLatin1String("background-color: rgba(220, 220, 255, 180);\n"
"border-width: 2px;\n"
"border-radius: 8px;\n"
"border-color: rgb(0, 0, 0);\n"
"min-width: 10em;\n"
"padding: 2px;"));
        nameLineEdit->setMaxLength(42);

        gridLayout_2->addWidget(nameLineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(ManageAccount);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("	color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        keyLineEdit = new QLineEdit(ManageAccount);
        keyLineEdit->setObjectName(QStringLiteral("keyLineEdit"));
        keyLineEdit->setStyleSheet(QLatin1String("background-color: rgba(220, 220, 255, 180);\n"
"border-width: 2px;\n"
"border-radius: 8px;\n"
"border-color: rgb(0, 0, 0);\n"
"min-width: 10em;\n"
"padding: 2px;"));
        keyLineEdit->setMaxLength(50);

        gridLayout_2->addWidget(keyLineEdit, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        closePushButton = new QPushButton(ManageAccount);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));
        closePushButton->setStyleSheet(QLatin1String("QPushButton#closePushButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(0, 24, 185, 255), stop:1 rgba(163, 175, 255, 255));\n"
"	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-radius: 10px;\n"
"min-width: 4em;\n"
"	padding: 6px;\n"
"}\n"
"\n"
"QPushButton#closePushButton:hover\n"
"{\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 148, 255, 255), stop:1 rgba(0, 8, 84, 255));\n"
"	border-style: inset;\n"
"}\n"
"\n"
"QPushButton#closePushButton:pressed \n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 56, 183, 255), stop:1 rgba(135, 172, 255, 255));\n"
"     border-style: inset;\n"
"}"));

        gridLayout->addWidget(closePushButton, 0, 0, 1, 1);

        addPushButton = new QPushButton(ManageAccount);
        addPushButton->setObjectName(QStringLiteral("addPushButton"));
        addPushButton->setStyleSheet(QLatin1String("QPushButton#addPushButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(0, 24, 185, 255), stop:1 rgba(163, 175, 255, 255));\n"
"	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-radius: 10px;\n"
"	border-color: rgb(255, 255, 255);\n"
"	min-width: 4em;\n"
"	padding: 6px;\n"
"}\n"
"\n"
"QPushButton#addPushButton:hover\n"
"{\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 148, 255, 255), stop:1 rgba(0, 8, 84, 255));\n"
"	border-style: inset;\n"
"}\n"
"\n"
"QPushButton#addPushButton:pressed \n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 56, 183, 255), stop:1 rgba(135, 172, 255, 255));\n"
"     border-style: inset;\n"
"}"));

        gridLayout->addWidget(addPushButton, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(ManageAccount);

        QMetaObject::connectSlotsByName(ManageAccount);
    } // setupUi

    void retranslateUi(QDialog *ManageAccount)
    {
        ManageAccount->setWindowTitle(QApplication::translate("ManageAccount", "ManageAccount", 0));
        label->setText(QApplication::translate("ManageAccount", "Account Name:", 0));
        label_2->setText(QApplication::translate("ManageAccount", "Account Key:", 0));
        closePushButton->setText(QApplication::translate("ManageAccount", "Close", 0));
        addPushButton->setText(QApplication::translate("ManageAccount", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class ManageAccount: public Ui_ManageAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEACCOUNT_H
