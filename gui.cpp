#include "gui.h"
#include <QLayout>

#include <iostream>
#include <string>


GUI::GUI(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *main = new QVBoxLayout;
    QHBoxLayout *buttons = new QHBoxLayout;


    bttnSend = new QPushButton("send", this);
    bttnConnect = new QPushButton("connect", this);
    editShow = new QTextEdit(this);
    editSend = new QTextEdit(this);

    main->addWidget(editShow);
    main->addWidget(editSend);
    buttons->addWidget(bttnSend);
    buttons->addWidget(bttnConnect);
    main->addLayout(buttons);

    editSend->setMaximumHeight(25);
    this->setLayout(main);

    QObject::connect(bttnSend, SIGNAL(pressed()), this, SLOT(send()));
    QObject::connect(bttnConnect, SIGNAL(pressed()), this, SLOT(connect()));
}

void GUI::send()
{
    std::wstring msg = editSend->toPlainText().toStdWString();
	std::wstring log = editShow->toPlainText().toStdWString();
    log.append(L">> " + msg + L'\n');
    editShow->setText(QString::fromWCharArray(log.c_str()));
    emit sendToNet(msg);
}

void GUI::connect()
{
    emit connectToServer();
}
