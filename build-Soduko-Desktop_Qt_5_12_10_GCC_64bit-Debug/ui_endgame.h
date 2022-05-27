/********************************************************************************
** Form generated from reading UI file 'endgame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDGAME_H
#define UI_ENDGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_endgame
{
public:
    QPushButton *btn_firstpage;
    QPushButton *btn_exit;
    QPushButton *btn_leaderboard;
    QLabel *textedit;

    void setupUi(QWidget *endgame)
    {
        if (endgame->objectName().isEmpty())
            endgame->setObjectName(QString::fromUtf8("endgame"));
        endgame->resize(814, 590);
        QFont font;
        font.setPointSize(16);
        endgame->setFont(font);
        endgame->setStyleSheet(QString::fromUtf8("endgame\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0.179, y2:0.659045, 			stop:0 rgba(75, 206, 246, 255), stop:1 rgba(238, 238, 236, 255));\n"
"}\n"
"QPushButton\n"
"{\n"
"border-radius:12px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"}"));
        btn_firstpage = new QPushButton(endgame);
        btn_firstpage->setObjectName(QString::fromUtf8("btn_firstpage"));
        btn_firstpage->setGeometry(QRect(530, 40, 241, 91));
        QFont font1;
        font1.setPointSize(18);
        btn_firstpage->setFont(font1);
        btn_firstpage->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:1, y1:1, x2:0.179, y2:0.659045, stop:0 rgba(246, 53, 230, 255), stop:1 rgba(238, 238, 236, 255))"));
        btn_exit = new QPushButton(endgame);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setGeometry(QRect(530, 330, 241, 91));
        btn_exit->setFont(font1);
        btn_exit->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0.179, y2:0.659045, stop:0 rgba(246, 53, 230, 255), stop:1 rgba(238, 238, 236, 255));"));
        btn_leaderboard = new QPushButton(endgame);
        btn_leaderboard->setObjectName(QString::fromUtf8("btn_leaderboard"));
        btn_leaderboard->setGeometry(QRect(530, 190, 241, 91));
        btn_leaderboard->setFont(font1);
        btn_leaderboard->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0.179, y2:0.659045, stop:0 rgba(246, 53, 230, 255), stop:1 rgba(238, 238, 236, 255));"));
        textedit = new QLabel(endgame);
        textedit->setObjectName(QString::fromUtf8("textedit"));
        textedit->setGeometry(QRect(30, 40, 431, 141));
        QFont font2;
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        textedit->setFont(font2);
        textedit->setStyleSheet(QString::fromUtf8("color: rgb(164, 0, 0);"));

        retranslateUi(endgame);

        QMetaObject::connectSlotsByName(endgame);
    } // setupUi

    void retranslateUi(QWidget *endgame)
    {
        endgame->setWindowTitle(QApplication::translate("endgame", "Form", nullptr));
        btn_firstpage->setText(QApplication::translate("endgame", "First Page", nullptr));
        btn_exit->setText(QApplication::translate("endgame", "Exit", nullptr));
        btn_leaderboard->setText(QApplication::translate("endgame", "Leader Board", nullptr));
        textedit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class endgame: public Ui_endgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDGAME_H
