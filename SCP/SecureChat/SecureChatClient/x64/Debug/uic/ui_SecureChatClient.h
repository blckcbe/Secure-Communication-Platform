/********************************************************************************
** Form generated from reading UI file 'SecureChatClient.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECURECHATCLIENT_H
#define UI_SECURECHATCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecureChatClientClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SecureChatClientClass)
    {
        if (SecureChatClientClass->objectName().isEmpty())
            SecureChatClientClass->setObjectName("SecureChatClientClass");
        SecureChatClientClass->resize(600, 400);
        menuBar = new QMenuBar(SecureChatClientClass);
        menuBar->setObjectName("menuBar");
        SecureChatClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SecureChatClientClass);
        mainToolBar->setObjectName("mainToolBar");
        SecureChatClientClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SecureChatClientClass);
        centralWidget->setObjectName("centralWidget");
        SecureChatClientClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SecureChatClientClass);
        statusBar->setObjectName("statusBar");
        SecureChatClientClass->setStatusBar(statusBar);

        retranslateUi(SecureChatClientClass);

        QMetaObject::connectSlotsByName(SecureChatClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *SecureChatClientClass)
    {
        SecureChatClientClass->setWindowTitle(QCoreApplication::translate("SecureChatClientClass", "SecureChatClient", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecureChatClientClass: public Ui_SecureChatClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECURECHATCLIENT_H
