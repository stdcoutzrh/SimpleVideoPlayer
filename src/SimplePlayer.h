#ifndef SIMPLEPLAYER_H_
#define SIMPLEPLAYER_H_

#include <QMainWindow>
#include <QDebug>

namespace Ui {
    class SimplePlayer;
}

class VlcInstance;
class VlcMedia;
class VlcMediaPlayer;

class EqualizerDialog;

class SimplePlayer : public QMainWindow
{
    Q_OBJECT
public:
    explicit SimplePlayer(QWidget *parent = 0);
    ~SimplePlayer();

private slots:
    void openLocal();
    void openUrl();

    void on_actionContact_triggered();
    void on_actionUsage_triggered();

    void on_actionOpenUrl_triggered();

private:
    Ui::SimplePlayer *ui;

    //VLC qt库的基本实例管理器,提供主实例控件。
    VlcInstance *_instance;

    //可播放媒体的抽象表示,由一个媒体位置和各种可选的元数据组成。
    VlcMedia *_media;

    //VLC qt库的基本媒体播放器管理器,提供主播放控件。
    VlcMediaPlayer *_player;
};

#endif // SIMPLEPLAYER_H_
