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
    QLabel *label;

    void setupUi(QWidget *endgame)
    {
        if (endgame->objectName().isEmpty())
            endgame->setObjectName(QString::fromUtf8("endgame"));
        endgame->resize(814, 590);
        QFont font;
        font.setPointSize(16);
        endgame->setFont(font);
        btn_firstpage = new QPushButton(endgame);
        btn_firstpage->setObjectName(QString::fromUtf8("btn_firstpage"));
        btn_firstpage->setGeometry(QRect(530, 40, 241, 91));
        QFont font1;
        font1.setPointSize(18);
        btn_firstpage->setFont(font1);
        btn_exit = new QPushButton(endgame);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setGeometry(QRect(530, 330, 241, 91));
        btn_exit->setFont(font1);
        btn_leaderboard = new QPushButton(endgame);
        btn_leaderboard->setObjectName(QString::fromUtf8("btn_leaderboard"));
        btn_leaderboard->setGeometry(QRect(530, 190, 241, 91));
        btn_leaderboard->setFont(font1);
        label = new QLabel(endgame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 461, 231));
        QFont font2;
        font2.setPointSize(20);
        label->setFont(font2);

        retranslateUi(endgame);

        QMetaObject::connectSlotsByName(endgame);
    } // setupUi

    void retranslateUi(QWidget *endgame)
    {
        endgame->setWindowTitle(QApplication::translate("endgame", "Form", nullptr));
        btn_firstpage->setText(QApplication::translate("endgame", "First Page", nullptr));
        btn_exit->setText(QApplication::translate("endgame", "Exit", nullptr));
        btn_leaderboard->setText(QApplication::translate("endgame", "Leader Board", nullptr));
        label->setText(QApplication::translate("endgame", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class endgame: public Ui_endgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDGAME_H
