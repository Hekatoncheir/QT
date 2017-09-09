#-------------------------------------------------
#
# Project created by QtCreator 2014-10-17T21:19:00
#
#-------------------------------------------------

QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PublicServer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    publicclient.cpp \
    publicserver.cpp \
    publicthread.cpp \
    publicserver_server.cpp \
    publicserver_client.cpp

HEADERS  += mainwindow.h \
    publicclient.h \
    publicserver.h \
    publicthread.h \
    publicserver_server.h \
    publicserver_client.h

FORMS    += mainwindow.ui

RESOURCES += \
    resource/image.qrc

OTHER_FILES += \
    exe.rc
RC_FILE = exe.rc
