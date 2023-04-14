#include "SecureChatClient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SecureChatClient w;
    w.show();
    return a.exec();
}
