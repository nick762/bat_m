#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore/QTime>
#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QtCore/QDebug>
#include <QtCore/QTimer>
#include <QtCore/QList>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <linux/i2c-dev.h>
#include <unistd.h>
#include <QMessageBox>
#include <QDir>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QTimer *tmr;
    Ui::MainWindow *ui;
    QList<QString> myList, s_values_l;
    QList<int> values_l, values_r;
    QList<QString> list;

    void readTemp();
    void leftCell_read();
    void rightCell_read();
    void log(QString mark, QString info);
    void removeLog();
    void myError(QString path);
    void cell_read(QList<QString>);
    QList<QString> battery_find();

private slots:
    void updateInfo();

};

#endif // MAINWINDOW_H
