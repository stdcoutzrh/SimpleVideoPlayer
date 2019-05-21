/********************************************************************************
** Form generated from reading UI file 'SimplePlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEPLAYER_H
#define UI_SIMPLEPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <VLCQtWidgets/WidgetSeek.h>
#include <VLCQtWidgets/WidgetVideo.h>
#include <VLCQtWidgets/WidgetVolumeSlider.h>

QT_BEGIN_NAMESPACE

class Ui_SimplePlayer
{
public:
    QAction *actionQuit;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionOpenLocal;
    QAction *actionOpenUrl;
    QAction *actionContact;
    QAction *actionUsage;
    QWidget *centralwidget;
    VlcWidgetVideo *video;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    VlcWidgetSeek *seek;
    VlcWidgetVolumeSlider *volume;
    QPushButton *pause;
    QPushButton *stop;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SimplePlayer)
    {
        if (SimplePlayer->objectName().isEmpty())
            SimplePlayer->setObjectName(QStringLiteral("SimplePlayer"));
        SimplePlayer->resize(1080, 805);
        actionQuit = new QAction(SimplePlayer);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionPause = new QAction(SimplePlayer);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionPause->setCheckable(true);
        actionStop = new QAction(SimplePlayer);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionOpenLocal = new QAction(SimplePlayer);
        actionOpenLocal->setObjectName(QStringLiteral("actionOpenLocal"));
        actionOpenUrl = new QAction(SimplePlayer);
        actionOpenUrl->setObjectName(QStringLiteral("actionOpenUrl"));
        actionContact = new QAction(SimplePlayer);
        actionContact->setObjectName(QStringLiteral("actionContact"));
        actionUsage = new QAction(SimplePlayer);
        actionUsage->setObjectName(QStringLiteral("actionUsage"));
        centralwidget = new QWidget(SimplePlayer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        video = new VlcWidgetVideo(centralwidget);
        video->setObjectName(QStringLiteral("video"));
        video->setGeometry(QRect(0, 0, 1080, 701));
        video->setStyleSheet(QStringLiteral(""));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 850, 2, 29));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        seek = new VlcWidgetSeek(layoutWidget);
        seek->setObjectName(QStringLiteral("seek"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(seek->sizePolicy().hasHeightForWidth());
        seek->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(seek);

        volume = new VlcWidgetVolumeSlider(layoutWidget);
        volume->setObjectName(QStringLiteral("volume"));
        sizePolicy.setHeightForWidth(volume->sizePolicy().hasHeightForWidth());
        volume->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(volume);

        pause = new QPushButton(centralwidget);
        pause->setObjectName(QStringLiteral("pause"));
        pause->setGeometry(QRect(20, 720, 200, 30));
        pause->setCheckable(true);
        stop = new QPushButton(centralwidget);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setGeometry(QRect(220, 720, 200, 30));
        SimplePlayer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SimplePlayer);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1080, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        SimplePlayer->setMenuBar(menubar);
        statusbar = new QStatusBar(SimplePlayer);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SimplePlayer->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpenLocal);
        menuFile->addAction(actionOpenUrl);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionUsage);
        menuHelp->addAction(actionContact);

        retranslateUi(SimplePlayer);
        QObject::connect(actionQuit, SIGNAL(triggered()), SimplePlayer, SLOT(close()));

        QMetaObject::connectSlotsByName(SimplePlayer);
    } // setupUi

    void retranslateUi(QMainWindow *SimplePlayer)
    {
        SimplePlayer->setWindowTitle(QApplication::translate("SimplePlayer", "Demo Player", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("SimplePlayer", "Quit", Q_NULLPTR));
        actionPause->setText(QApplication::translate("SimplePlayer", "Pause", Q_NULLPTR));
        actionStop->setText(QApplication::translate("SimplePlayer", "Stop", Q_NULLPTR));
        actionOpenLocal->setText(QApplication::translate("SimplePlayer", "Open local file", Q_NULLPTR));
        actionOpenUrl->setText(QApplication::translate("SimplePlayer", "Open URL", Q_NULLPTR));
        actionContact->setText(QApplication::translate("SimplePlayer", "About", Q_NULLPTR));
        actionUsage->setText(QApplication::translate("SimplePlayer", "Usage", Q_NULLPTR));
        pause->setText(QApplication::translate("SimplePlayer", "\346\232\202\345\201\234", Q_NULLPTR));
        stop->setText(QApplication::translate("SimplePlayer", "\345\201\234\346\255\242", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("SimplePlayer", "Media", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("SimplePlayer", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SimplePlayer: public Ui_SimplePlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEPLAYER_H
