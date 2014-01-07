/********************************************************************************
** Form generated from reading UI file 'AGuismoRequireris.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGUISMOREQUIRERIS_H
#define UI_AGUISMOREQUIRERIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AGuismoRequirerisClass
{
public:
    QAction *actionAdd;
    QAction *actionModify;
    QAction *actionQuit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QListWidget *keyListWidget;
    QGridLayout *gridLayout;
    QPushButton *modifyPushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addPushButton;
    QPushButton *deletePushButton;
    QMenuBar *menuBar;
    QMenu *menuRequireris;
    QMenu *menuManage_account;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AGuismoRequirerisClass)
    {
        if (AGuismoRequirerisClass->objectName().isEmpty())
            AGuismoRequirerisClass->setObjectName(QStringLiteral("AGuismoRequirerisClass"));
        AGuismoRequirerisClass->resize(346, 354);
        AGuismoRequirerisClass->setStyleSheet(QLatin1String("QMainWindow \n"
"{\n"
"	border-image: url(./Img/background.jpg);\n"
"}\n"
"\n"
"QStatusBar\n"
"{\n"
"	background-color: rgba(206,206, 246,100);\n"
"	border-width: 2px;\n"
"	border-radius: 8px;\n"
"	border-color: rgb(0, 0, 0);\n"
"	min-width: 10em;\n"
"	padding: 2px;\n"
"}\n"
"\n"
"QMenuBar\n"
"{\n"
"     background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 lightgray, stop:1 darkgray);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"     spacing: 3px; /* spacing between menu bar items */\n"
"     padding: 1px 4px;\n"
"     background: transparent;\n"
"     border-radius: 4px;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{ /* when selected using mouse or keyboard */\n"
"	background: #a8a8a8;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"	background: #888888;\n"
"}"));
        actionAdd = new QAction(AGuismoRequirerisClass);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionModify = new QAction(AGuismoRequirerisClass);
        actionModify->setObjectName(QStringLiteral("actionModify"));
        actionQuit = new QAction(AGuismoRequirerisClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(AGuismoRequirerisClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        keyListWidget = new QListWidget(centralWidget);
        keyListWidget->setObjectName(QStringLiteral("keyListWidget"));
        keyListWidget->setStyleSheet(QLatin1String("background-color: rgba(220, 220, 255, 180);\n"
"border-width: 2px;\n"
"border-radius: 8px;\n"
"border-color: rgb(0, 0, 0);\n"
"min-width: 10em;\n"
"padding: 2px;"));

        gridLayout_3->addWidget(keyListWidget, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        modifyPushButton = new QPushButton(centralWidget);
        modifyPushButton->setObjectName(QStringLiteral("modifyPushButton"));
        modifyPushButton->setStyleSheet(QLatin1String("QPushButton#modifyPushButton\n"
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
"QPushButton#modifyPushButton:hover\n"
"{\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 148, 255, 255), stop:1 rgba(0, 8, 84, 255));\n"
"	border-style: inset;\n"
"}\n"
"\n"
"QPushButton#modifyPushButton:pressed \n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 56, 183, 255), stop:1 rgba(135, 172, 255, 255));\n"
"     border-style: inset;\n"
"}"));

        gridLayout->addWidget(modifyPushButton, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        addPushButton = new QPushButton(centralWidget);
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

        deletePushButton = new QPushButton(centralWidget);
        deletePushButton->setObjectName(QStringLiteral("deletePushButton"));
        deletePushButton->setStyleSheet(QLatin1String("QPushButton#deletePushButton\n"
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
"QPushButton#deletePushButton:hover\n"
"{\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 148, 255, 255), stop:1 rgba(0, 8, 84, 255));\n"
"	border-style: inset;\n"
"}\n"
"\n"
"QPushButton#deletePushButton:pressed \n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 56, 183, 255), stop:1 rgba(135, 172, 255, 255));\n"
"     border-style: inset;\n"
"}"));

        gridLayout->addWidget(deletePushButton, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        AGuismoRequirerisClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AGuismoRequirerisClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 346, 18));
        menuRequireris = new QMenu(menuBar);
        menuRequireris->setObjectName(QStringLiteral("menuRequireris"));
        menuManage_account = new QMenu(menuBar);
        menuManage_account->setObjectName(QStringLiteral("menuManage_account"));
        AGuismoRequirerisClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(AGuismoRequirerisClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AGuismoRequirerisClass->setStatusBar(statusBar);

        menuBar->addAction(menuRequireris->menuAction());
        menuBar->addAction(menuManage_account->menuAction());
        menuRequireris->addAction(actionQuit);
        menuManage_account->addAction(actionModify);

        retranslateUi(AGuismoRequirerisClass);

        QMetaObject::connectSlotsByName(AGuismoRequirerisClass);
    } // setupUi

    void retranslateUi(QMainWindow *AGuismoRequirerisClass)
    {
        AGuismoRequirerisClass->setWindowTitle(QApplication::translate("AGuismoRequirerisClass", "AGuismoRequireris", 0));
        actionAdd->setText(QApplication::translate("AGuismoRequirerisClass", "Add", 0));
        actionModify->setText(QApplication::translate("AGuismoRequirerisClass", "Modify", 0));
        actionQuit->setText(QApplication::translate("AGuismoRequirerisClass", "Quit", 0));
        modifyPushButton->setText(QApplication::translate("AGuismoRequirerisClass", "Modify", 0));
        addPushButton->setText(QApplication::translate("AGuismoRequirerisClass", "Add", 0));
        deletePushButton->setText(QApplication::translate("AGuismoRequirerisClass", "Delete", 0));
        menuRequireris->setTitle(QApplication::translate("AGuismoRequirerisClass", "Requireris", 0));
        menuManage_account->setTitle(QApplication::translate("AGuismoRequirerisClass", "Manage keys", 0));
    } // retranslateUi

};

namespace Ui {
    class AGuismoRequirerisClass: public Ui_AGuismoRequirerisClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGUISMOREQUIRERIS_H
