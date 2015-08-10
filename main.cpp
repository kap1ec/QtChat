#include <QApplication>

#include "chat.h"
#include <iostream>
#include <clocale>
#include <memory>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Russian");
    QApplication app(argc, argv);
    Chat chat;
    return app.exec();
}

