#
# VLC-Qt Simple Player
# Copyright (C) 2015 Tadej Novak <tadej@tano.si>
#

TARGET      = simple-player
TEMPLATE    = app
CONFIG 	   += c++11

VLC_INSTALL_PATH = $$PWD/../qt_vlc

CONFIG(debug, debug|release) {
    LIBS += -L$$VLC_INSTALL_PATH/lib -lVLCQtCored -lVLCQtWidgetsd
} else {
    LIBS += -L$$VLC_INSTALL_PATH/lib -lVLCQtCore -lVLCQtWidgets
}

INCLUDEPATH += $$VLC_INSTALL_PATH/include

QT         += widgets

SOURCES    += main.cpp \
    SimplePlayer.cpp

HEADERS    += SimplePlayer.h

FORMS      += SimplePlayer.ui

LIBS       += -lVLCQtCore -lVLCQtWidgets

LIBS       += -L/Users/tadej/workspace/tanoprojects/install/vlc-qt/lib -lVLCQtCore -lVLCQtWidgets
INCLUDEPATH += /Users/tadej/workspace/tanoprojects/install/vlc-qt/include

RESOURCES += \
    images/main.qrc \
    images/file.qrc \
    images/net.qrc \
    images/logo.qrc





