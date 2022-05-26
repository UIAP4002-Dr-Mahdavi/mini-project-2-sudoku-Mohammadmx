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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_login = new QPushButton(centralwidget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setGeometry(QRect(518, 370, 101, 31));
        QFont font;
        font.setPointSize(12);
        btn_login->setFont(font);
        enter_name = new QLineEdit(centralwidget);
        enter_name->setObjectName(QString::fromUtf8("enter_name"));
        enter_name->setGeometry(QRect(380, 290, 241, 41));
        label_name = new QLabel(centralwidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(130, 290, 211, 41));
        QFont font1;
        font1.setPointSize(16);
        label_name->setFont(font1);
        label_soduko = new QLabel(centralwidget);
        label_soduko->setObjectName(QString::fromUtf8("label_soduko"));
        label_soduko->setGeometry(QRect(200, 60, 381, 111));
        QFont font2;
        font2.setPointSize(80);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        label_soduko->setFont(font2);
        btn_leaderboard = new QPushButton(centralwidget);
        btn_leaderboard->setObjectName(QString::fromUtf8("btn_leaderboard"));
        btn_leaderboard->setGeometry(QRect(120, 460, 501, 51));
        QFont font3;
        font3.setPointSize(18);
        btn_leaderboard->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        label_soduko->setText(QApplication::translate("MainWindow", "Soduko", nullptr));
        btn_leaderboard->setText(QApplication::translate("MainWindow", "LeaderBoard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
