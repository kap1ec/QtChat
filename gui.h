#ifndef CHAT_H
#define CHAT_H

#include <QtWidgets/QWidget>
#include <QPushButton>
#include <QTextEdit>

class GUI : public QWidget
{
    Q_OBJECT
public:
    explicit GUI(QWidget *parent = 0);

signals:
    void sendToNet(std::wstring msg);
    void connectToServer();
public slots:
    void send();
    void connect();
private:
    QPushButton *bttnSend, *bttnConnect;
    QTextEdit *editShow, *editSend;
};

#endif // CHAT_H
