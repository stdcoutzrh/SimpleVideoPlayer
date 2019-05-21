#include <QtCore/QCoreApplication>
#include <QtWidgets/QApplication>
#include <QIcon>

#include <VLCQtCore/Common.h>
#include "SimplePlayer.h"

int main(int argc, char **argv)
{
    QCoreApplication::setApplicationName("Simple Player");
    QCoreApplication::setAttribute(Qt::AA_X11InitThreads);

    QApplication app(argc, argv);
    VlcCommon::setPluginPath(app.applicationDirPath() + "/plugins");

    SimplePlayer mainWindow;
    mainWindow.setWindowTitle("SIMPLE VIDEO PLAYER @stdcoutzrh");
    mainWindow.setWindowIcon(QIcon(":/images/logo.png"));
    mainWindow.show();

    return app.exec();
}
