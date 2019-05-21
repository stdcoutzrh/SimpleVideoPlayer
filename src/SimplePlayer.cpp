#include <QFileDialog>
#include <QInputDialog>
#include <QMessageBox>

#include <VLCQtCore/Common.h>
#include <VLCQtCore/Instance.h>
#include <VLCQtCore/Media.h>
#include <VLCQtCore/MediaPlayer.h>

#include "SimplePlayer.h"
#include "ui_SimplePlayer.h"

SimplePlayer::SimplePlayer(QWidget *parent)
    : QMainWindow(parent),ui(new Ui::SimplePlayer), _media(0)
{
    ui->setupUi(this);

    _instance = new VlcInstance(VlcCommon::args(), this);
    _player = new VlcMediaPlayer(_instance);
    _player->setVideoWidget(ui->video);
     ui->video->setStyleSheet("border-image: url(:/images/sc_main .png);");


    ui->video->setMediaPlayer(_player);
    ui->volume->setMediaPlayer(_player);
    ui->volume->setVolume(50);
    ui->seek->setMediaPlayer(_player);

    connect(ui->actionOpenLocal, &QAction::triggered, this, &SimplePlayer::openLocal);
    connect(ui->actionOpenUrl, &QAction::triggered, this, &SimplePlayer::openUrl);
    connect(ui->pause, &QPushButton::toggled, ui->actionPause, &QAction::toggle);
    connect(ui->stop, &QPushButton::clicked, _player, &VlcMediaPlayer::stop);
}

SimplePlayer::~SimplePlayer()
{
    delete _player;
    delete _media;
    delete _instance;
    delete ui;
}

void SimplePlayer::openLocal()
{
    QString file =
            QFileDialog::getOpenFileName(this, tr("Open file"),
                                        QDir::homePath(),
                                         tr("Multimedia files(*)"));

    if (file.isEmpty())
        return;

    _media = new VlcMedia(file, true, _instance);

    _player->open(_media);
}

void SimplePlayer::openUrl()
{
   QString url =
            QInputDialog::getText(this, tr("Open Url"), tr("Enter the URL you want to play"),QLineEdit::Normal,tr("rtsp://192.168.1.10:554/stream_chn0.h264"));


    if (url.isEmpty())
        return;
    _media = new VlcMedia(url, _instance);
    _player->open(_media);
}

void SimplePlayer::on_actionContact_triggered()
{
    QMessageBox::information(NULL, "Contact",
                              "This is a video play based on VLC_QT，you can see use methods in usage.\nIf u have questions,contact me by email,thank you!\nAuthor：stdcoutzrh\nEmail:stdcoutzrh@gmail.com",
                              QMessageBox::Ok, QMessageBox::Ok);
}

void SimplePlayer::on_actionUsage_triggered()
{
    QMessageBox::information(NULL, "Usage",
                                "File-->Open Local File\nFile-->Open URL",
                                 QMessageBox::Ok , QMessageBox::Ok);
}

