#include "chat.h"
#include <QObject>
#include "init.h"

Chat::Chat():
    gui(new GUI),
    net(new Network)
{
    std::cout<<"Chat created\n" << std::flush;
    QObject::connect(gui, SIGNAL(sendToNet(std::wstring)), net, SLOT(sendMessage(std::wstring)));
    QObject::connect(gui, SIGNAL(connectToServer()), net, SLOT(connectToServer()));
    gui->show();
}

