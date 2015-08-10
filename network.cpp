#include "network.h"
#include "init.h"
#include <QtDebug>

Network::Network(QObject *parent) :
    QObject(parent),
    m_socket(m_io_service)
{
   // m_addr.from_string("127.0.0.1");
    //boost::asio::ip::tcp::endpoint endpoint;
    //m_socket.connect();
}

void Network::sendMessage(std::wstring msg)
{
    std::wcout<<"Send Message: "<<msg<<std::endl;
}


void Network::connectToServer()
{
    std::wcout<<"Connect to Server: "<<std::endl;
}
