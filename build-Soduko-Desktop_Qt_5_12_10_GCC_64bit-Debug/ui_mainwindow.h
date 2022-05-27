/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_login;
    QLineEdit *enter_name;
    QLabel *label_name;
    QLabel *label_soduko;
    QPushButton *btn_leaderboard;
    QPushButton *btn_quit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(789, 629);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow\n"
"{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0.973, x2:0.915025, y2:0.097, stop:0.00497512 rgba(0, 0, 0, 255), stop:0.482587 rgba(61, 155, 235, 255), stop:0.895522 rgba(255, 102, 248, 255))\n"
"}\n"
"QPushButton\n"
"{\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:rgb(238, 238, 236);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_login = new QPushButton(centralwidget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setGeometry(QRect(518, 370, 101, 31));
        QFont font;
        font.setPointSize(12);
        btn_login->setFont(font);
        btn_login->setStyleSheet(QString::fromUtf8("background-color:rgb(76, 22, 184);"));
        enter_name = new QLineEdit(centralwidget);
        enter_name->setObjectName(QString::fromUtf8("enter_name"));
        enter_name->setGeometry(QRect(380, 290, 241, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("UnPilgia"));
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        enter_name->setFont(font1);
        enter_name->setStyleSheet(QString::fromUtf8("background-color:rgb(75, 206, 246);\n"
"font: 75 24pt \"UnPilgia\";\n"
"border-radius:8px;"));
        label_name = new QLabel(centralwidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(130, 290, 211, 41));
        QFont font2;
        font2.setPointSize(18);
        label_name->setFont(font2);
        label_soduko = new QLabel(centralwidget);
        label_soduko->setObjectName(QString::fromUtf8("label_soduko"));
        label_soduko->setGeometry(QRect(190, 60, 401, 111));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Serif"));
        font3.setPointSize(60);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setUnderline(false);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        label_soduko->setFont(font3);
        btn_leaderboard = new QPushButton(centralwidget);
        btn_leaderboard->setObjectName(QString::fromUtf8("btn_leaderboard"));
        btn_leaderboard->setGeometry(QRect(120, 460, 501, 51));
        QFont font4;
        font4.setPointSize(20);
        btn_leaderboard->setFont(font4);
        btn_leaderboard->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:1, x2:0.915025, y2:0.097, stop:0 rgba(48, 48, 48, 255), stop:0.517413 rgba(61, 97, 235, 255), stop:0.895522 rgba(63, 195, 255, 255));\n"
"border-color: rgb(216, 79, 213);"));
        btn_quit = new QPushButton(centralwidget);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        btn_quit->setGeometry(QRect(380, 370, 101, 31));
        btn_quit->setFont(font);
        btn_quit->setStyleSheet(QString::fromUtf8("background-color:rgb(76, 22, 184)"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 789, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_login->setText(QApplication::translate("MainWindow", "Start", nullptr));
        enter_name->setText(QString());
        label_name->setText(QApplication::translate("MainWindow", "Enter Your Name  :  ", nullptr));
        label_soduko->setText(QApplication::translate("MainWindow", "SODUKO", nullptr));
        btn_leaderboard->setText(QApplication::translate("MainWindow", "LeaderBoard", nullptr));
        btn_quit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
