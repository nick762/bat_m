/********************************************************************************
** Form generated from reading UI file 'mainwindow_min.ui'
**
** Created: Thu Mar 16 06:47:57 2017
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_MIN_H
#define UI_MAINWINDOW_MIN_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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
    QLCDNumber *LCD_CAPACITY;
    QLabel *Capacity;
    QLabel *Voltage;
    QLabel *Cell1;
    QLabel *Current;
    QLabel *Cell2;
    QLabel *Temperature;
    QLCDNumber *LCD_VOLTAGE;
    QLCDNumber *LCD_CURRENT;
    QLCDNumber *LCD_TEMPERATURE;
    QLCDNumber *LCD_CELL_1;
    QLCDNumber *LCD_CELL_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(670, 100);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(670, 100));
        MainWindow->setMaximumSize(QSize(670, 600));
        MainWindow->setFocusPolicy(Qt::TabFocus);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setWindowOpacity(1);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        LCD_CAPACITY = new QLCDNumber(centralWidget);
        LCD_CAPACITY->setObjectName(QString::fromUtf8("LCD_CAPACITY"));
        LCD_CAPACITY->setGeometry(QRect(10, 60, 100, 30));
        LCD_CAPACITY->setMinimumSize(QSize(100, 30));
        LCD_CAPACITY->setMaximumSize(QSize(100, 30));
        LCD_CAPACITY->setStyleSheet(QString::fromUtf8(""));
        LCD_CAPACITY->setFrameShape(QFrame::NoFrame);
        LCD_CAPACITY->setFrameShadow(QFrame::Plain);
        LCD_CAPACITY->setDigitCount(8);
        LCD_CAPACITY->setSegmentStyle(QLCDNumber::Flat);
        Capacity = new QLabel(centralWidget);
        Capacity->setObjectName(QString::fromUtf8("Capacity"));
        Capacity->setEnabled(true);
        Capacity->setGeometry(QRect(10, 10, 100, 40));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Capacity->sizePolicy().hasHeightForWidth());
        Capacity->setSizePolicy(sizePolicy1);
        Capacity->setMinimumSize(QSize(100, 40));
        Capacity->setMaximumSize(QSize(100, 40));
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
        Voltage = new QLabel(centralWidget);
        Voltage->setObjectName(QString::fromUtf8("Voltage"));
        Voltage->setGeometry(QRect(120, 10, 100, 40));
        Voltage->setMinimumSize(QSize(100, 40));
        Voltage->setMaximumSize(QSize(100, 40));
        Voltage->setFont(font);
        Voltage->setStyleSheet(QString::fromUtf8(""));
        Voltage->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Voltage->setFrameShape(QFrame::NoFrame);
        Voltage->setScaledContents(false);
        Voltage->setAlignment(Qt::AlignCenter);
        Voltage->setWordWrap(true);
        Cell1 = new QLabel(centralWidget);
        Cell1->setObjectName(QString::fromUtf8("Cell1"));
        Cell1->setGeometry(QRect(450, 10, 100, 40));
        Cell1->setMinimumSize(QSize(100, 40));
        Cell1->setMaximumSize(QSize(100, 40));
        Cell1->setFont(font);
        Cell1->setStyleSheet(QString::fromUtf8(""));
        Cell1->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Cell1->setFrameShape(QFrame::NoFrame);
        Cell1->setScaledContents(false);
        Cell1->setAlignment(Qt::AlignCenter);
        Cell1->setWordWrap(true);
        Current = new QLabel(centralWidget);
        Current->setObjectName(QString::fromUtf8("Current"));
        Current->setGeometry(QRect(230, 10, 100, 40));
        Current->setMinimumSize(QSize(100, 40));
        Current->setMaximumSize(QSize(100, 40));
        Current->setFont(font);
        Current->setStyleSheet(QString::fromUtf8(""));
        Current->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Current->setFrameShape(QFrame::NoFrame);
        Current->setScaledContents(false);
        Current->setAlignment(Qt::AlignCenter);
        Current->setWordWrap(true);
        Cell2 = new QLabel(centralWidget);
        Cell2->setObjectName(QString::fromUtf8("Cell2"));
        Cell2->setGeometry(QRect(560, 10, 100, 40));
        Cell2->setMinimumSize(QSize(100, 40));
        Cell2->setMaximumSize(QSize(100, 40));
        Cell2->setFont(font);
        Cell2->setStyleSheet(QString::fromUtf8(""));
        Cell2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Cell2->setFrameShape(QFrame::NoFrame);
        Cell2->setScaledContents(false);
        Cell2->setAlignment(Qt::AlignCenter);
        Cell2->setWordWrap(true);
        Temperature = new QLabel(centralWidget);
        Temperature->setObjectName(QString::fromUtf8("Temperature"));
        Temperature->setGeometry(QRect(340, 10, 100, 40));
        Temperature->setMinimumSize(QSize(100, 40));
        Temperature->setMaximumSize(QSize(100, 40));
        Temperature->setFont(font);
        Temperature->setStyleSheet(QString::fromUtf8(""));
        Temperature->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Temperature->setFrameShape(QFrame::NoFrame);
        Temperature->setScaledContents(false);
        Temperature->setAlignment(Qt::AlignCenter);
        Temperature->setWordWrap(true);
        LCD_VOLTAGE = new QLCDNumber(centralWidget);
        LCD_VOLTAGE->setObjectName(QString::fromUtf8("LCD_VOLTAGE"));
        LCD_VOLTAGE->setGeometry(QRect(120, 60, 100, 30));
        LCD_VOLTAGE->setMinimumSize(QSize(100, 30));
        LCD_VOLTAGE->setMaximumSize(QSize(100, 30));
        LCD_VOLTAGE->setStyleSheet(QString::fromUtf8(""));
        LCD_VOLTAGE->setFrameShape(QFrame::NoFrame);
        LCD_VOLTAGE->setFrameShadow(QFrame::Plain);
        LCD_VOLTAGE->setDigitCount(8);
        LCD_VOLTAGE->setSegmentStyle(QLCDNumber::Flat);
        LCD_CURRENT = new QLCDNumber(centralWidget);
        LCD_CURRENT->setObjectName(QString::fromUtf8("LCD_CURRENT"));
        LCD_CURRENT->setGeometry(QRect(230, 60, 100, 30));
        LCD_CURRENT->setMinimumSize(QSize(100, 30));
        LCD_CURRENT->setMaximumSize(QSize(100, 30));
        LCD_CURRENT->setStyleSheet(QString::fromUtf8(""));
        LCD_CURRENT->setFrameShape(QFrame::NoFrame);
        LCD_CURRENT->setFrameShadow(QFrame::Plain);
        LCD_CURRENT->setDigitCount(8);
        LCD_CURRENT->setSegmentStyle(QLCDNumber::Flat);
        LCD_TEMPERATURE = new QLCDNumber(centralWidget);
        LCD_TEMPERATURE->setObjectName(QString::fromUtf8("LCD_TEMPERATURE"));
        LCD_TEMPERATURE->setGeometry(QRect(340, 60, 100, 30));
        LCD_TEMPERATURE->setMinimumSize(QSize(100, 30));
        LCD_TEMPERATURE->setMaximumSize(QSize(100, 30));
        LCD_TEMPERATURE->setStyleSheet(QString::fromUtf8(""));
        LCD_TEMPERATURE->setFrameShape(QFrame::NoFrame);
        LCD_TEMPERATURE->setFrameShadow(QFrame::Plain);
        LCD_TEMPERATURE->setDigitCount(8);
        LCD_TEMPERATURE->setSegmentStyle(QLCDNumber::Flat);
        LCD_CELL_1 = new QLCDNumber(centralWidget);
        LCD_CELL_1->setObjectName(QString::fromUtf8("LCD_CELL_1"));
        LCD_CELL_1->setGeometry(QRect(450, 60, 100, 30));
        LCD_CELL_1->setMinimumSize(QSize(100, 30));
        LCD_CELL_1->setMaximumSize(QSize(100, 30));
        LCD_CELL_1->setStyleSheet(QString::fromUtf8(""));
        LCD_CELL_1->setFrameShape(QFrame::NoFrame);
        LCD_CELL_1->setFrameShadow(QFrame::Plain);
        LCD_CELL_1->setDigitCount(8);
        LCD_CELL_1->setSegmentStyle(QLCDNumber::Flat);
        LCD_CELL_2 = new QLCDNumber(centralWidget);
        LCD_CELL_2->setObjectName(QString::fromUtf8("LCD_CELL_2"));
        LCD_CELL_2->setGeometry(QRect(560, 60, 100, 30));
        LCD_CELL_2->setMinimumSize(QSize(100, 30));
        LCD_CELL_2->setMaximumSize(QSize(100, 30));
        LCD_CELL_2->setStyleSheet(QString::fromUtf8(""));
        LCD_CELL_2->setFrameShape(QFrame::NoFrame);
        LCD_CELL_2->setFrameShadow(QFrame::Plain);
        LCD_CELL_2->setDigitCount(8);
        LCD_CELL_2->setSegmentStyle(QLCDNumber::Flat);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214 \320\261\320\260\321\202\320\260\321\200\320\265\320\271", 0, QApplication::UnicodeUTF8));
        Capacity->setText(QApplication::translate("MainWindow", "\320\225\320\274\320\272\320\276\321\201\321\202\321\214 (%)", 0, QApplication::UnicodeUTF8));
        Voltage->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\202\321\200\320\265\320\261\320\273\320\265\320\275\320\270\320\265 (mA)", 0, QApplication::UnicodeUTF8));
        Cell1->setText(QApplication::translate("MainWindow", "\320\257\321\207\320\265\320\271\320\272\320\260 1", 0, QApplication::UnicodeUTF8));
        Current->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 (mV)", 0, QApplication::UnicodeUTF8));
        Cell2->setText(QApplication::translate("MainWindow", "\320\257\321\207\320\265\320\271\320\272\320\260 2", 0, QApplication::UnicodeUTF8));
        Temperature->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_MIN_H
