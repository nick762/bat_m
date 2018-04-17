/********************************************************************************
** Form generated from reading UI file 'mainwindow_sn.ui'
**
** Created: Mon Feb 6 10:18:00 2017
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_SN_H
#define UI_MAINWINDOW_SN_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *Capacity;
    QLabel *Voltage;
    QLabel *Current;
    QLabel *Temperature;
    QWidget *verticalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Capacity_2;
    QLabel *Voltage_2;
    QLabel *Current_2;
    QLabel *Temperature_2;
    QWidget *verticalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *CELL_L_1;
    QLabel *CELL_L_2;
    QWidget *verticalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *CELL_R_1;
    QLabel *CELL_R_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *LCD_CAPACITY_L;
    QLCDNumber *LCD_VOLTAGE_L;
    QLCDNumber *LCD_CURRENT_L;
    QLCDNumber *LCD_TEMPERATURE_L;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLCDNumber *LCD_CELL_L_1;
    QLCDNumber *LCD_CELL_L_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QLCDNumber *LCD_CAPACITY_R;
    QLCDNumber *LCD_VOLTAGE_R;
    QLCDNumber *LCD_CURRENT_R;
    QLCDNumber *LCD_TEMPERATURE_R;
    QLabel *label;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_8;
    QLCDNumber *LCD_CELL_R_1;
    QLCDNumber *LCD_CELL_R_2;
    QFrame *line;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(474, 416);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(474, 416));
        MainWindow->setMaximumSize(QSize(474, 540));
        MainWindow->setFocusPolicy(Qt::TabFocus);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setWindowOpacity(1);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 451, 42));
        horizontalLayout = new QHBoxLayout(verticalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Capacity = new QLabel(verticalLayoutWidget);
        Capacity->setObjectName(QString::fromUtf8("Capacity"));
        Capacity->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Capacity->sizePolicy().hasHeightForWidth());
        Capacity->setSizePolicy(sizePolicy1);
        Capacity->setMinimumSize(QSize(107, 40));
        Capacity->setMaximumSize(QSize(107, 16637));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        Capacity->setFont(font);
        Capacity->setStyleSheet(QString::fromUtf8(""));
        Capacity->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Capacity->setFrameShape(QFrame::NoFrame);
        Capacity->setFrameShadow(QFrame::Plain);
        Capacity->setScaledContents(false);
        Capacity->setAlignment(Qt::AlignCenter);
        Capacity->setWordWrap(true);

        horizontalLayout->addWidget(Capacity);

        Voltage = new QLabel(verticalLayoutWidget);
        Voltage->setObjectName(QString::fromUtf8("Voltage"));
        Voltage->setMinimumSize(QSize(0, 0));
        Voltage->setMaximumSize(QSize(107, 16637));
        Voltage->setFont(font);
        Voltage->setStyleSheet(QString::fromUtf8(""));
        Voltage->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Voltage->setFrameShape(QFrame::NoFrame);
        Voltage->setScaledContents(false);
        Voltage->setAlignment(Qt::AlignCenter);
        Voltage->setWordWrap(true);

        horizontalLayout->addWidget(Voltage);

        Current = new QLabel(verticalLayoutWidget);
        Current->setObjectName(QString::fromUtf8("Current"));
        Current->setMinimumSize(QSize(0, 0));
        Current->setMaximumSize(QSize(107, 16637));
        Current->setFont(font);
        Current->setStyleSheet(QString::fromUtf8(""));
        Current->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Current->setFrameShape(QFrame::NoFrame);
        Current->setScaledContents(false);
        Current->setAlignment(Qt::AlignCenter);
        Current->setWordWrap(true);

        horizontalLayout->addWidget(Current);

        Temperature = new QLabel(verticalLayoutWidget);
        Temperature->setObjectName(QString::fromUtf8("Temperature"));
        Temperature->setMinimumSize(QSize(0, 0));
        Temperature->setMaximumSize(QSize(107, 16637));
        Temperature->setFont(font);
        Temperature->setStyleSheet(QString::fromUtf8(""));
        Temperature->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Temperature->setFrameShape(QFrame::NoFrame);
        Temperature->setScaledContents(false);
        Temperature->setAlignment(Qt::AlignCenter);
        Temperature->setWordWrap(true);

        horizontalLayout->addWidget(Temperature);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 240, 451, 41));
        horizontalLayout_5 = new QHBoxLayout(verticalLayoutWidget_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        Capacity_2 = new QLabel(verticalLayoutWidget_2);
        Capacity_2->setObjectName(QString::fromUtf8("Capacity_2"));
        Capacity_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(Capacity_2->sizePolicy().hasHeightForWidth());
        Capacity_2->setSizePolicy(sizePolicy1);
        Capacity_2->setMinimumSize(QSize(0, 0));
        Capacity_2->setMaximumSize(QSize(107, 40));
        Capacity_2->setFont(font);
        Capacity_2->setMouseTracking(true);
        Capacity_2->setStyleSheet(QString::fromUtf8(""));
        Capacity_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Capacity_2->setFrameShape(QFrame::NoFrame);
        Capacity_2->setAlignment(Qt::AlignCenter);
        Capacity_2->setWordWrap(true);

        horizontalLayout_5->addWidget(Capacity_2);

        Voltage_2 = new QLabel(verticalLayoutWidget_2);
        Voltage_2->setObjectName(QString::fromUtf8("Voltage_2"));
        sizePolicy.setHeightForWidth(Voltage_2->sizePolicy().hasHeightForWidth());
        Voltage_2->setSizePolicy(sizePolicy);
        Voltage_2->setMinimumSize(QSize(0, 0));
        Voltage_2->setMaximumSize(QSize(107, 40));
        Voltage_2->setFont(font);
        Voltage_2->setStyleSheet(QString::fromUtf8(""));
        Voltage_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Voltage_2->setFrameShape(QFrame::NoFrame);
        Voltage_2->setAlignment(Qt::AlignCenter);
        Voltage_2->setWordWrap(true);

        horizontalLayout_5->addWidget(Voltage_2);

        Current_2 = new QLabel(verticalLayoutWidget_2);
        Current_2->setObjectName(QString::fromUtf8("Current_2"));
        Current_2->setMinimumSize(QSize(0, 0));
        Current_2->setMaximumSize(QSize(107, 40));
        Current_2->setFont(font);
        Current_2->setStyleSheet(QString::fromUtf8(""));
        Current_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Current_2->setFrameShape(QFrame::NoFrame);
        Current_2->setAlignment(Qt::AlignCenter);
        Current_2->setWordWrap(true);

        horizontalLayout_5->addWidget(Current_2);

        Temperature_2 = new QLabel(verticalLayoutWidget_2);
        Temperature_2->setObjectName(QString::fromUtf8("Temperature_2"));
        Temperature_2->setMinimumSize(QSize(0, 0));
        Temperature_2->setMaximumSize(QSize(107, 40));
        Temperature_2->setFont(font);
        Temperature_2->setStyleSheet(QString::fromUtf8(""));
        Temperature_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Temperature_2->setFrameShape(QFrame::NoFrame);
        Temperature_2->setAlignment(Qt::AlignCenter);
        Temperature_2->setWordWrap(true);

        horizontalLayout_5->addWidget(Temperature_2);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(120, 120, 222, 41));
        horizontalLayout_3 = new QHBoxLayout(verticalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        CELL_L_1 = new QLabel(verticalLayoutWidget_3);
        CELL_L_1->setObjectName(QString::fromUtf8("CELL_L_1"));
        CELL_L_1->setEnabled(true);
        sizePolicy1.setHeightForWidth(CELL_L_1->sizePolicy().hasHeightForWidth());
        CELL_L_1->setSizePolicy(sizePolicy1);
        CELL_L_1->setMinimumSize(QSize(0, 0));
        CELL_L_1->setMaximumSize(QSize(107, 40));
        CELL_L_1->setFont(font);
        CELL_L_1->setStyleSheet(QString::fromUtf8(""));
        CELL_L_1->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        CELL_L_1->setFrameShape(QFrame::NoFrame);
        CELL_L_1->setAlignment(Qt::AlignCenter);
        CELL_L_1->setWordWrap(true);

        horizontalLayout_3->addWidget(CELL_L_1);

        CELL_L_2 = new QLabel(verticalLayoutWidget_3);
        CELL_L_2->setObjectName(QString::fromUtf8("CELL_L_2"));
        CELL_L_2->setMinimumSize(QSize(0, 0));
        CELL_L_2->setMaximumSize(QSize(107, 40));
        CELL_L_2->setFont(font);
        CELL_L_2->setStyleSheet(QString::fromUtf8(""));
        CELL_L_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        CELL_L_2->setFrameShape(QFrame::NoFrame);
        CELL_L_2->setAlignment(Qt::AlignCenter);
        CELL_L_2->setWordWrap(true);

        horizontalLayout_3->addWidget(CELL_L_2);

        verticalLayoutWidget_4 = new QWidget(centralWidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(120, 330, 231, 41));
        horizontalLayout_7 = new QHBoxLayout(verticalLayoutWidget_4);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        CELL_R_1 = new QLabel(verticalLayoutWidget_4);
        CELL_R_1->setObjectName(QString::fromUtf8("CELL_R_1"));
        CELL_R_1->setEnabled(true);
        sizePolicy1.setHeightForWidth(CELL_R_1->sizePolicy().hasHeightForWidth());
        CELL_R_1->setSizePolicy(sizePolicy1);
        CELL_R_1->setMinimumSize(QSize(0, 0));
        CELL_R_1->setMaximumSize(QSize(107, 40));
        CELL_R_1->setFont(font);
        CELL_R_1->setStyleSheet(QString::fromUtf8(""));
        CELL_R_1->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        CELL_R_1->setFrameShape(QFrame::NoFrame);
        CELL_R_1->setAlignment(Qt::AlignCenter);
        CELL_R_1->setWordWrap(true);

        horizontalLayout_7->addWidget(CELL_R_1);

        CELL_R_2 = new QLabel(verticalLayoutWidget_4);
        CELL_R_2->setObjectName(QString::fromUtf8("CELL_R_2"));
        CELL_R_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(CELL_R_2->sizePolicy().hasHeightForWidth());
        CELL_R_2->setSizePolicy(sizePolicy1);
        CELL_R_2->setMinimumSize(QSize(0, 0));
        CELL_R_2->setMaximumSize(QSize(107, 40));
        CELL_R_2->setFont(font);
        CELL_R_2->setStyleSheet(QString::fromUtf8(""));
        CELL_R_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        CELL_R_2->setFrameShape(QFrame::NoFrame);
        CELL_R_2->setAlignment(Qt::AlignCenter);
        CELL_R_2->setWordWrap(true);

        horizontalLayout_7->addWidget(CELL_R_2);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 80, 451, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        LCD_CAPACITY_L = new QLCDNumber(horizontalLayoutWidget);
        LCD_CAPACITY_L->setObjectName(QString::fromUtf8("LCD_CAPACITY_L"));
        LCD_CAPACITY_L->setMinimumSize(QSize(0, 0));
        LCD_CAPACITY_L->setMaximumSize(QSize(107, 16637));
        LCD_CAPACITY_L->setStyleSheet(QString::fromUtf8(""));
        LCD_CAPACITY_L->setFrameShape(QFrame::NoFrame);
        LCD_CAPACITY_L->setFrameShadow(QFrame::Plain);
        LCD_CAPACITY_L->setDigitCount(8);
        LCD_CAPACITY_L->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(LCD_CAPACITY_L);

        LCD_VOLTAGE_L = new QLCDNumber(horizontalLayoutWidget);
        LCD_VOLTAGE_L->setObjectName(QString::fromUtf8("LCD_VOLTAGE_L"));
        LCD_VOLTAGE_L->setMinimumSize(QSize(0, 0));
        LCD_VOLTAGE_L->setMaximumSize(QSize(107, 16637));
        LCD_VOLTAGE_L->setStyleSheet(QString::fromUtf8(""));
        LCD_VOLTAGE_L->setFrameShape(QFrame::NoFrame);
        LCD_VOLTAGE_L->setFrameShadow(QFrame::Plain);
        LCD_VOLTAGE_L->setDigitCount(8);
        LCD_VOLTAGE_L->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(LCD_VOLTAGE_L);

        LCD_CURRENT_L = new QLCDNumber(horizontalLayoutWidget);
        LCD_CURRENT_L->setObjectName(QString::fromUtf8("LCD_CURRENT_L"));
        LCD_CURRENT_L->setMinimumSize(QSize(0, 0));
        LCD_CURRENT_L->setMaximumSize(QSize(107, 16637));
        LCD_CURRENT_L->setStyleSheet(QString::fromUtf8(""));
        LCD_CURRENT_L->setFrameShape(QFrame::NoFrame);
        LCD_CURRENT_L->setFrameShadow(QFrame::Plain);
        LCD_CURRENT_L->setDigitCount(8);
        LCD_CURRENT_L->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(LCD_CURRENT_L);

        LCD_TEMPERATURE_L = new QLCDNumber(horizontalLayoutWidget);
        LCD_TEMPERATURE_L->setObjectName(QString::fromUtf8("LCD_TEMPERATURE_L"));
        LCD_TEMPERATURE_L->setMinimumSize(QSize(0, 0));
        LCD_TEMPERATURE_L->setMaximumSize(QSize(107, 16637));
        LCD_TEMPERATURE_L->setStyleSheet(QString::fromUtf8(""));
        LCD_TEMPERATURE_L->setFrameShape(QFrame::NoFrame);
        LCD_TEMPERATURE_L->setFrameShadow(QFrame::Plain);
        LCD_TEMPERATURE_L->setSmallDecimalPoint(false);
        LCD_TEMPERATURE_L->setDigitCount(5);
        LCD_TEMPERATURE_L->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(LCD_TEMPERATURE_L);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(120, 160, 221, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        LCD_CELL_L_1 = new QLCDNumber(horizontalLayoutWidget_2);
        LCD_CELL_L_1->setObjectName(QString::fromUtf8("LCD_CELL_L_1"));
        LCD_CELL_L_1->setMinimumSize(QSize(0, 0));
        LCD_CELL_L_1->setMaximumSize(QSize(107, 16637));
        LCD_CELL_L_1->setStyleSheet(QString::fromUtf8(""));
        LCD_CELL_L_1->setFrameShape(QFrame::NoFrame);
        LCD_CELL_L_1->setFrameShadow(QFrame::Plain);
        LCD_CELL_L_1->setDigitCount(8);
        LCD_CELL_L_1->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(LCD_CELL_L_1);

        LCD_CELL_L_2 = new QLCDNumber(horizontalLayoutWidget_2);
        LCD_CELL_L_2->setObjectName(QString::fromUtf8("LCD_CELL_L_2"));
        LCD_CELL_L_2->setMinimumSize(QSize(0, 0));
        LCD_CELL_L_2->setMaximumSize(QSize(107, 16637));
        LCD_CELL_L_2->setStyleSheet(QString::fromUtf8(""));
        LCD_CELL_L_2->setFrameShape(QFrame::NoFrame);
        LCD_CELL_L_2->setFrameShadow(QFrame::Plain);
        LCD_CELL_L_2->setDigitCount(8);
        LCD_CELL_L_2->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(LCD_CELL_L_2);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 290, 451, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        LCD_CAPACITY_R = new QLCDNumber(horizontalLayoutWidget_3);
        LCD_CAPACITY_R->setObjectName(QString::fromUtf8("LCD_CAPACITY_R"));
        LCD_CAPACITY_R->setMinimumSize(QSize(0, 0));
        LCD_CAPACITY_R->setMaximumSize(QSize(107, 29));
        LCD_CAPACITY_R->setStyleSheet(QString::fromUtf8("QLCDNumber#CAPACITY_R::hover{color:red;}"));
        LCD_CAPACITY_R->setFrameShape(QFrame::NoFrame);
        LCD_CAPACITY_R->setFrameShadow(QFrame::Plain);
        LCD_CAPACITY_R->setDigitCount(8);
        LCD_CAPACITY_R->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(LCD_CAPACITY_R);

        LCD_VOLTAGE_R = new QLCDNumber(horizontalLayoutWidget_3);
        LCD_VOLTAGE_R->setObjectName(QString::fromUtf8("LCD_VOLTAGE_R"));
        LCD_VOLTAGE_R->setMinimumSize(QSize(0, 0));
        LCD_VOLTAGE_R->setMaximumSize(QSize(107, 29));
        LCD_VOLTAGE_R->setStyleSheet(QString::fromUtf8(""));
        LCD_VOLTAGE_R->setFrameShape(QFrame::NoFrame);
        LCD_VOLTAGE_R->setFrameShadow(QFrame::Plain);
        LCD_VOLTAGE_R->setDigitCount(8);
        LCD_VOLTAGE_R->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(LCD_VOLTAGE_R);

        LCD_CURRENT_R = new QLCDNumber(horizontalLayoutWidget_3);
        LCD_CURRENT_R->setObjectName(QString::fromUtf8("LCD_CURRENT_R"));
        LCD_CURRENT_R->setMinimumSize(QSize(0, 0));
        LCD_CURRENT_R->setMaximumSize(QSize(107, 29));
        LCD_CURRENT_R->setStyleSheet(QString::fromUtf8(""));
        LCD_CURRENT_R->setFrameShape(QFrame::NoFrame);
        LCD_CURRENT_R->setFrameShadow(QFrame::Plain);
        LCD_CURRENT_R->setDigitCount(8);
        LCD_CURRENT_R->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(LCD_CURRENT_R);

        LCD_TEMPERATURE_R = new QLCDNumber(horizontalLayoutWidget_3);
        LCD_TEMPERATURE_R->setObjectName(QString::fromUtf8("LCD_TEMPERATURE_R"));
        LCD_TEMPERATURE_R->setMinimumSize(QSize(0, 0));
        LCD_TEMPERATURE_R->setMaximumSize(QSize(107, 29));
        LCD_TEMPERATURE_R->setStyleSheet(QString::fromUtf8(""));
        LCD_TEMPERATURE_R->setFrameShape(QFrame::NoFrame);
        LCD_TEMPERATURE_R->setFrameShadow(QFrame::Plain);
        LCD_TEMPERATURE_R->setSmallDecimalPoint(false);
        LCD_TEMPERATURE_R->setDigitCount(5);
        LCD_TEMPERATURE_R->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_6->addWidget(LCD_TEMPERATURE_R);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 0, 141, 21));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 210, 141, 21));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_4 = new QWidget(centralWidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(120, 380, 231, 31));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        LCD_CELL_R_1 = new QLCDNumber(horizontalLayoutWidget_4);
        LCD_CELL_R_1->setObjectName(QString::fromUtf8("LCD_CELL_R_1"));
        LCD_CELL_R_1->setMinimumSize(QSize(0, 0));
        LCD_CELL_R_1->setMaximumSize(QSize(107, 29));
        LCD_CELL_R_1->setStyleSheet(QString::fromUtf8(""));
        LCD_CELL_R_1->setFrameShape(QFrame::NoFrame);
        LCD_CELL_R_1->setFrameShadow(QFrame::Plain);
        LCD_CELL_R_1->setDigitCount(8);
        LCD_CELL_R_1->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_8->addWidget(LCD_CELL_R_1);

        LCD_CELL_R_2 = new QLCDNumber(horizontalLayoutWidget_4);
        LCD_CELL_R_2->setObjectName(QString::fromUtf8("LCD_CELL_R_2"));
        LCD_CELL_R_2->setMinimumSize(QSize(0, 0));
        LCD_CELL_R_2->setMaximumSize(QSize(107, 29));
        LCD_CELL_R_2->setStyleSheet(QString::fromUtf8(""));
        LCD_CELL_R_2->setFrameShape(QFrame::NoFrame);
        LCD_CELL_R_2->setFrameShadow(QFrame::Plain);
        LCD_CELL_R_2->setDigitCount(8);
        LCD_CELL_R_2->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_8->addWidget(LCD_CELL_R_2);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 190, 481, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214 \320\261\320\260\321\202\320\260\321\200\320\265\320\271", 0, QApplication::UnicodeUTF8));
        Capacity->setText(QApplication::translate("MainWindow", "\320\225\320\274\320\272\320\276\321\201\321\202\321\214 (%)", 0, QApplication::UnicodeUTF8));
        Voltage->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\202\321\200\320\265\320\261\320\273\320\265\320\275\320\270\320\265 (mA)", 0, QApplication::UnicodeUTF8));
        Current->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 (mV)", 0, QApplication::UnicodeUTF8));
        Temperature->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 ", 0, QApplication::UnicodeUTF8));
        Capacity_2->setText(QApplication::translate("MainWindow", "\320\225\320\274\320\272\320\276\321\201\321\202\321\214 (%)", 0, QApplication::UnicodeUTF8));
        Voltage_2->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\202\321\200\320\265\320\261\320\273\320\265\320\275\320\270\320\265 (mA)", 0, QApplication::UnicodeUTF8));
        Current_2->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 (mV)", 0, QApplication::UnicodeUTF8));
        Temperature_2->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 ", 0, QApplication::UnicodeUTF8));
        CELL_L_1->setText(QApplication::translate("MainWindow", "\320\257\321\207\320\265\320\271\320\272\320\260 1 (mV)", 0, QApplication::UnicodeUTF8));
        CELL_L_2->setText(QApplication::translate("MainWindow", "\320\257\321\207\320\265\320\271\320\272\320\260 2 (mV)", 0, QApplication::UnicodeUTF8));
        CELL_R_1->setText(QApplication::translate("MainWindow", "\320\257\321\207\320\265\320\271\320\272\320\260 1 (mV)", 0, QApplication::UnicodeUTF8));
        CELL_R_2->setText(QApplication::translate("MainWindow", "\320\257\321\207\320\265\320\271\320\272\320\260 2 (mV)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\221\320\260\321\202\320\260\321\200\320\265\321\217 1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\221\320\260\321\202\320\260\321\200\320\265\321\217 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_SN_H
