TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle

QT += widgets

SOURCES += main.cpp \
    gui.cpp \
    chat.cpp \
    network.cpp

#include(deployment.pri)
#qtcAddDeployment()

HEADERS += \
    gui.h \
    chat.h \
    network.h \
    init.h

INCLUDEPATH += "K:\PROGRAMMING\LIBs\CPP\boost_1_58_0"
LIBS += "-LK:/PROGRAMMING/LIBs/CPP/boost_1_58_0/stage/lib/"
