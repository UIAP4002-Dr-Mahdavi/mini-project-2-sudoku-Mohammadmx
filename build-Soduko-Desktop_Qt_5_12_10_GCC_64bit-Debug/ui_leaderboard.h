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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_leaderBoard
{
public:

    void setupUi(QWidget *leaderBoard)
    {
        if (leaderBoard->objectName().isEmpty())
            leaderBoard->setObjectName(QString::fromUtf8("leaderBoard"));
        leaderBoard->resize(792, 571);

        retranslateUi(leaderBoard);

        QMetaObject::connectSlotsByName(leaderBoard);
    } // setupUi

    void retranslateUi(QWidget *leaderBoard)
    {
        leaderBoard->setWindowTitle(QApplication::translate("leaderBoard", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class leaderBoard: public Ui_leaderBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARD_H
