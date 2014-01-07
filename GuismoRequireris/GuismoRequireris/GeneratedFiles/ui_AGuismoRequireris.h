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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AGuismoRequirerisClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AGuismoRequirerisClass)
    {
        if (AGuismoRequirerisClass->objectName().isEmpty())
            AGuismoRequirerisClass->setObjectName(QStringLiteral("AGuismoRequirerisClass"));
        AGuismoRequirerisClass->resize(600, 400);
        menuBar = new QMenuBar(AGuismoRequirerisClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        AGuismoRequirerisClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AGuismoRequirerisClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AGuismoRequirerisClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(AGuismoRequirerisClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AGuismoRequirerisClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AGuismoRequirerisClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AGuismoRequirerisClass->setStatusBar(statusBar);

        retranslateUi(AGuismoRequirerisClass);

        QMetaObject::connectSlotsByName(AGuismoRequirerisClass);
    } // setupUi

    void retranslateUi(QMainWindow *AGuismoRequirerisClass)
    {
        AGuismoRequirerisClass->setWindowTitle(QApplication::translate("AGuismoRequirerisClass", "AGuismoRequireris", 0));
    } // retranslateUi

};

namespace Ui {
    class AGuismoRequirerisClass: public Ui_AGuismoRequirerisClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGUISMOREQUIRERIS_H
