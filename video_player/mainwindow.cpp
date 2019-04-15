#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionopen_file_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(NULL,"打开本地文件","C:\\Users\\Peco\\Desktop","*.mp4 *.h264 *.avi");
    qDebug()<<file_name<<endl;
    QProcess *pro = new QProcess(this);
    QStringList list;
    list<<"-i"<<file_name;
    pro->start("./debug/ffplay.exe",list);
}

void MainWindow::on_actionopen_video_stream_triggered()
{
    bool isOK;
    QString text = QInputDialog::getText(NULL, "打开网络串流","Please input URL here:",
                                                       QLineEdit::Normal,
                                                       "rtsp://192.168.1.10:554/stream_chn0.h264",
                                                       &isOK);
    if(isOK) {
           QMessageBox::information(NULL, "Information",
                                               "Your comment is: <b>" + text + "</b>",
                                               QMessageBox::Yes | QMessageBox::No,
                                               QMessageBox::Yes);
}
}

void MainWindow::on_action_3_triggered()
{
   // QMessageBox message_about(this);
   // message_about.setText("这是一个基于qt和ffmpeg的视频播放器，使用方法见帮助。\n如有问题请联系作者，谢谢！\n作者：stdcoutzrh\nemail:stdcoutzrh@gmail.com");
   // message_about.exec();
   QMessageBox::information(NULL, "关于",
                           "这是一个基于qt和ffmpeg的视频播放器，使用方法见帮助。\n如有问题请联系作者，谢谢！\n作者：stdcoutzrh\nemail:stdcoutzrh@gmail.com",
                           QMessageBox::Ok, QMessageBox::Ok);
}

void MainWindow::on_action_2_triggered()
{
   //QMessageBox message_help(this);
   //message_help.setText("点击菜单-->打开本地文件可以播放本地视频文件\n点击菜单-->打开网络串流输入url可以播放网络视频流");
   //message_help.exec();
    QMessageBox::information(NULL, "帮助",
                            "点击菜单-->打开本地文件可以播放本地视频文件\n点击菜单-->打开网络串流输入url可以播放网络视频流",
                             QMessageBox::Ok , QMessageBox::Ok);
}
