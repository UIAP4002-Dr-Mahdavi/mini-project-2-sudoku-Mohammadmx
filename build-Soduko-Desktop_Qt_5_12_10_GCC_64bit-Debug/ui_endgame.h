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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_endgame
{
public:
    QPushButton *btn_playagain;
    QPushButton *btn_leavegame;
    QPushButton *btn_leaderboard;

    void setupUi(QWidget *endgame)
    {
        if (endgame->objectName().isEmpty())
            endgame->setObjectName(QString::fromUtf8("endgame"));
        endgame->resize(814, 590);
        QFont font;
        font.setPointSize(16);
        endgame->setFont(font);
        btn_playagain = new QPushButton(endgame);
        btn_playagain->setObjectName(QString::fromUtf8("btn_playagain"));
        btn_playagain->setGeometry(QRect(530, 40, 241, 91));
        btn_playagain->setFont(font);
        btn_leavegame = new QPushButton(endgame);
        btn_leavegame->setObjectName(QString::fromUtf8("btn_leavegame"));
        btn_leavegame->setGeometry(QRect(530, 190, 241, 91));
        btn_leaderboard = new QPushButton(endgame);
        btn_leaderboard->setObjectName(QString::fromUtf8("btn_leaderboard"));
        btn_leaderboard->setGeometry(QRect(530, 340, 241, 91));

        retranslateUi(endgame);

        QMetaObject::connectSlotsByName(endgame);
    } // setupUi

    void retranslateUi(QWidget *endgame)
    {
        endgame->setWindowTitle(QApplication::translate("endgame", "Form", nullptr));
        btn_playagain->setText(QApplication::translate("endgame", "Play Again", nullptr));
        btn_leavegame->setText(QApplication::translate("endgame", "Leave Game", nullptr));
        btn_leaderboard->setText(QApplication::translate("endgame", "Leader Board", nullptr));
    } // retranslateUi

};

namespace Ui {
    class endgame: public Ui_endgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDGAME_H
