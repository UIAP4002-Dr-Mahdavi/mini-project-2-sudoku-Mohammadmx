/********************************************************************************
** Form generated from reading UI file 'leaderboard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERBOARD_H
#define UI_LEADERBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_leaderBoard
{
public:
    QPlainTextEdit *lb_names;
    QLabel *label_names;
    QLabel *label_wins;
    QPushButton *btn_show;
    QPushButton *btn_firstpage;
    QPushButton *pushButton_3;
    QPlainTextEdit *lb_wins;
    QPushButton *btn_edit;

    void setupUi(QWidget *leaderBoard)
    {
        if (leaderBoard->objectName().isEmpty())
            leaderBoard->setObjectName(QString::fromUtf8("leaderBoard"));
        leaderBoard->resize(792, 634);
        lb_names = new QPlainTextEdit(leaderBoard);
        lb_names->setObjectName(QString::fromUtf8("lb_names"));
        lb_names->setGeometry(QRect(20, 80, 441, 531));
        QFont font;
        font.setPointSize(16);
        lb_names->setFont(font);
        label_names = new QLabel(leaderBoard);
        label_names->setObjectName(QString::fromUtf8("label_names"));
        label_names->setGeometry(QRect(20, 20, 231, 51));
        QFont font1;
        font1.setPointSize(20);
        label_names->setFont(font1);
        label_wins = new QLabel(leaderBoard);
        label_wins->setObjectName(QString::fromUtf8("label_wins"));
        label_wins->setGeometry(QRect(490, 20, 121, 51));
        label_wins->setFont(font1);
        btn_show = new QPushButton(leaderBoard);
        btn_show->setObjectName(QString::fromUtf8("btn_show"));
        btn_show->setGeometry(QRect(650, 80, 121, 51));
        QFont font2;
        font2.setPointSize(14);
        btn_show->setFont(font2);
        btn_firstpage = new QPushButton(leaderBoard);
        btn_firstpage->setObjectName(QString::fromUtf8("btn_firstpage"));
        btn_firstpage->setGeometry(QRect(650, 180, 121, 51));
        btn_firstpage->setFont(font2);
        pushButton_3 = new QPushButton(leaderBoard);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(650, 280, 121, 51));
        pushButton_3->setFont(font2);
        lb_wins = new QPlainTextEdit(leaderBoard);
        lb_wins->setObjectName(QString::fromUtf8("lb_wins"));
        lb_wins->setGeometry(QRect(490, 80, 104, 531));
        lb_wins->setFont(font);
        btn_edit = new QPushButton(leaderBoard);
        btn_edit->setObjectName(QString::fromUtf8("btn_edit"));
        btn_edit->setGeometry(QRect(650, 380, 121, 61));

        retranslateUi(leaderBoard);

        QMetaObject::connectSlotsByName(leaderBoard);
    } // setupUi

    void retranslateUi(QWidget *leaderBoard)
    {
        leaderBoard->setWindowTitle(QApplication::translate("leaderBoard", "Form", nullptr));
        label_names->setText(QApplication::translate("leaderBoard", "User Names", nullptr));
        label_wins->setText(QApplication::translate("leaderBoard", "Wins", nullptr));
        btn_show->setText(QApplication::translate("leaderBoard", "Show", nullptr));
        btn_firstpage->setText(QApplication::translate("leaderBoard", "First Page", nullptr));
        pushButton_3->setText(QApplication::translate("leaderBoard", "Leave Game", nullptr));
        btn_edit->setText(QApplication::translate("leaderBoard", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class leaderBoard: public Ui_leaderBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARD_H
