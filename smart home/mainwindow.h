#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <imageswitch.h>

#include <QMainWindow>

#include "qcustomplot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void paintBulb();



private slots:
    void on_btn_regiter_clicked();

    void on_btn_login_clicked();

    void on_btn_show1_return_clicked();

    void on_btn_show1Toshow2_clicked();

    void on_btn_show2_return_clicked();

    void on_btn_show1_database_select_clicked();

    void on_btn_show2Toshow3_clicked();

    void on_btn_show3_return_clicked();

    void on_timer_timeout();



private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QMap<QString,ImageSwitch *> images;
    QMap<QString,QLabel *> labels;

};

#endif // MAINWINDOW_H
