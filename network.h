#ifndef NETWORK_H
#define NETWORK_H

#include <QtCore/QObject>
#include "boost/asio.hpp"
//#include <winsock2.h>
//#include <ws2tcpip.h>
//#include <stdio.h>

//#pragma comment(lib, "Ws2_32.lib")

//typedef boost::asio::ip::tcp::socket socket;

using namespace boost::asio;
class Network : public QObject
{
    Q_OBJECT
public:
    explicit Network(QObject *parent = 0);

signals:

public slots:
    void sendMessage(std::wstring msg);
    void connectToServer();


private:
    io_service m_io_service;
    ip::tcp::socket  m_socket;
    ip::address m_addr;
};

#endif // NETWORK_H
