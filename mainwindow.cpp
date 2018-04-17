#include "mainwindow.h"
//#include "ui_mainwindow.h"
//#include "ui_mainwindow_new.h"
#include "ui_mainwindow_min.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFile styleF(":/css/css/grey.css");

    if(!styleF.open(QFile::ReadOnly)){
        qDebug()<<"can't open style";
    }else{
        QString qssStr = styleF.readAll();
        qApp->setStyleSheet(qssStr);
    }
    list = battery_find();
    qDebug()<<list.length();
    if(list.length()==0){
        QMessageBox qError;
        qError.critical(0,"Error","Battery not found");
        qError.setFixedSize(200,500);
        //exit(-1);
    }
    tmr = new QTimer(this);
    connect(tmr,SIGNAL(timeout()),this,SLOT(updateInfo()));
    cell_read(list);
    removeLog();
    tmr->setInterval(10000);
    tmr->start(10000);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete tmr;
}

void MainWindow::updateInfo()
{
    cell_read(list);
}

QList<QString> MainWindow::battery_find()
{
    int chan;
    QList<QString> names;
    QDir dir("/dev/");
    dir.setFilter(QDir::Files|QDir::System);
    QFileInfoList dirContent = dir.entryInfoList();
    for(int i=0;i<dirContent.size();i++){
        if(dirContent.at(i).fileName().contains("i2c")){
            QByteArray ba = dirContent.at(i).absoluteFilePath().toLatin1();
            const char *chr = ba.data();
            chan = open(chr,O_RDWR);
            if(chan<0){
                qDebug() << QString("Can't open channel on read ") << chr << QTime::currentTime();
                //myError(chr);
                //exit(-1);
            }
            if(ioctl(chan ,I2C_SLAVE, 0x0b)<0){
                qDebug() << QString("Can't call channel on read ") << chr << QTime::currentTime();
                //myError(chr);
                //exit(-1);
            }else{
                if(i2c_smbus_read_word_data(chan, 0x3f)>0){
                    qDebug() << chr;
                    names.append(dirContent.at(i).absoluteFilePath());
                }
            }
            ::close(chan);
        }
    }
    qDebug()<<names;
    return names;

}

void MainWindow::cell_read(QList<QString> fName)
{
    int chan;
    for(int i=0; i<fName.length();i++){
        QByteArray ba = fName[i].toLatin1();
        const char *chr = ba.data();
        chan = open(chr,O_RDWR);
        if (chan<0){
            qDebug() << QString("Can't open channel ") << chr << QTime::currentTime();
            myError(chr);
            //exit(-1);
        } else ioctl(chan ,I2C_SLAVE, 0x0b);

        unsigned short int capacity = i2c_smbus_read_word_data(chan, 0x0e);
        unsigned short int voltage = i2c_smbus_read_word_data(chan, 0x09);
        float temperature = i2c_smbus_read_word_data(chan, 0x08);
        short int current = i2c_smbus_read_word_data(chan, 0x0a);
        unsigned short cell1_l = i2c_smbus_read_word_data(chan, 0x3e);
        unsigned short cell2_l = i2c_smbus_read_word_data(chan, 0x3f);

        float tmp = temperature/10.0f;
        tmp = tmp - 273.15f;

        ui->LCD_CAPACITY->display(capacity);
        ui->LCD_VOLTAGE->display(current);
        ui->LCD_TEMPERATURE->display(tmp);
        ui->LCD_CURRENT->display(voltage);
        ui->LCD_CELL_1->display(cell1_l);
        ui->LCD_CELL_2->display(cell2_l);

        qDebug() << capacity << voltage << tmp << current;

        ::close(chan);
        log("Battery voltage :",QString::number(voltage));
        log("Battery temperature :",QString::number(tmp));
    }
}

void MainWindow::log(QString mark, QString info)
{
    QFile logFile("/home/dl/bat.log");
    logFile.open(QIODevice::Append | QIODevice::Text);
    QTextStream inputStream(&logFile);
    inputStream << mark << info << '\n';
    logFile.close();
}

void MainWindow::removeLog()
{
    if(QFile("/home/dl/bat.log").exists())
        QFile("/home/dl/bat.log").remove();
}

void MainWindow::myError(QString path){
    QMessageBox qError;
    qError.critical(0,"Error","Can't open file "+path);
    qError.setFixedSize(200,500);
}
