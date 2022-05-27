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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_leaderBoard
{
public:
    QPlainTextEdit *lb_names;
    QLabel *label_names;
    QLabel *label_wins;
    QPlainTextEdit *lb_wins;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_show;
    QPushButton *btn_firstpage;
    QPushButton *btn_exit;
    QPushButton *btn_edit;

    void setupUi(QWidget *leaderBoard)
    {
        if (leaderBoard->objectName().isEmpty())
            leaderBoard->setObjectName(QString::fromUtf8("leaderBoard"));
        leaderBoard->resize(792, 634);
        leaderBoard->setStyleSheet(QString::fromUtf8("leaderBoard \n"
"{\n"
"background-color: rgb(50, 50, 50)\n"
"}\n"
"QPushButton\n"
"{\n"
"border-radius:12px;\n"
"}\n"
"QPlainTextEdit\n"
"{\n"
"border-radius:8px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"}"));
        lb_names = new QPlainTextEdit(leaderBoard);
        lb_names->setObjectName(QString::fromUtf8("lb_names"));
        lb_names->setGeometry(QRect(20, 80, 441, 531));
        QFont font;
        font.setPointSize(16);
        lb_names->setFont(font);
        lb_names->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0.179, y2:0.659045, stop:0 rgba(239, 41, 41, 255), stop:1 rgba(238, 238, 236, 255))"));
        label_names = new QLabel(leaderBoard);
        label_names->setObjectName(QString::fromUtf8("label_names"));
        label_names->setGeometry(QRect(20, 20, 161, 51));
        QFont font1;
        font1.setPointSize(20);
        label_names->setFont(font1);
        label_names->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));
        label_wins = new QLabel(leaderBoard);
        label_wins->setObjectName(QString::fromUtf8("label_wins"));
        label_wins->setGeometry(QRect(490, 20, 71, 51));
        label_wins->setFont(font1);
        label_wins->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));
        lb_wins = new QPlainTextEdit(leaderBoard);
        lb_wins->setObjectName(QString::fromUtf8("lb_wins"));
        lb_wins->setGeometry(QRect(490, 80, 104, 531));
        lb_wins->setFont(font);
        lb_wins->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0.179, y2:0.659045, stop:0 rgba(239, 41, 41, 255), stop:1 rgba(238, 238, 236, 255))"));
        widget = new QWidget(leaderBoard);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(620, 50, 151, 481));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_show = new QPushButton(widget);
        btn_show->setObjectName(QString::fromUtf8("btn_show"));
        btn_show->setMaximumSize(QSize(150, 80));
        QFont font2;
        font2.setPointSize(18);
        btn_show->setFont(font2);
        btn_show->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.736, y1:0.585, x2:1, y2:0.04, stop:0 rgba(75, 206, 246, 255), stop:1 rgba(238, 238, 236, 255));\n"
""));

        verticalLayout->addWidget(btn_show);

        btn_firstpage = new QPushButton(widget);
        btn_firstpage->setObjectName(QString::fromUtf8("btn_firstpage"));
        btn_firstpage->setMaximumSize(QSize(150, 80));
        btn_firstpage->setFont(font2);
        btn_firstpage->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.736, y1:0.585, x2:1, y2:0.04, stop:0 rgba(45, 161, 246, 255), stop:1 rgba(238, 238, 236, 255))"));

        verticalLayout->addWidget(btn_firstpage);

        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setMaximumSize(QSize(150, 80));
        btn_exit->setFont(font2);
        btn_exit->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.736, y1:0.585, x2:1, y2:0.04, stop:0 rgba(38, 112, 246, 255), stop:1 rgba(238, 238, 236, 255));"));

        verticalLayout->addWidget(btn_exit);

        btn_edit = new QPushButton(widget);
        btn_edit->setObjectName(QString::fromUtf8("btn_edit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(160);
        sizePolicy.setVerticalStretch(70);
        sizePolicy.setHeightForWidth(btn_edit->sizePolicy().hasHeightForWidth());
        btn_edit->setSizePolicy(sizePolicy);
        btn_edit->setMaximumSize(QSize(150, 80));
        btn_edit->setFont(font2);
        btn_edit->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.736, y1:0.585, x2:1, y2:0.04, stop:0 rgba(32, 68, 246, 255), stop:1 rgba(238, 238, 236, 255));"));

        verticalLayout->addWidget(btn_edit);


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
        btn_exit->setText(QApplication::translate("leaderBoard", "Exit", nullptr));
        btn_edit->setText(QApplication::translate("leaderBoard", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class leaderBoard: public Ui_leaderBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARD_H
