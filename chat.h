#ifndef CLIENT_H
#define CLIENT_H

#include "gui.h"
#include "network.h"

class Chat
{
    GUI * gui;
    Network * net;
public:
    Chat();
};

#endif // CLIENT_H
