#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SecureChatClient.h"

class SecureChatClient : public QMainWindow
{
    Q_OBJECT

public:
    SecureChatClient(QWidget *parent = nullptr);
    ~SecureChatClient();

private:
    Ui::SecureChatClientClass ui;
};
