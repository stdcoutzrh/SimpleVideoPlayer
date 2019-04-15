#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QFileDialog>
#include<QProcess>
#include<QDebug>
#include<QPushButton>
#include<QMessageBox>
#include<qinputdialog.h>
#include<windows.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionopen_file_triggered();

    void on_action_3_triggered();

    void on_action_2_triggered();

    void on_actionopen_video_stream_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
