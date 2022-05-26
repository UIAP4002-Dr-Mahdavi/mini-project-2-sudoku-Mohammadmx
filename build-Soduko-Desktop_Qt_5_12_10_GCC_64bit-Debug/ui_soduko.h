/********************************************************************************
** Form generated from reading UI file 'soduko.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SODUKO_H
#define UI_SODUKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_soduko
{
public:
    QWidget *gridLayoutWidget_3;
    QGridLayout *box;
    QGridLayout *box5;
    QTextEdit *inp5_6;
    QTextEdit *inp5_4;
    QTextEdit *inp5_8;
    QTextEdit *inp5_2;
    QTextEdit *inp5_7;
    QTextEdit *inp5_3;
    QTextEdit *inp5_1;
    QTextEdit *inp5_9;
    QTextEdit *inp5_5;
    QGridLayout *box7;
    QTextEdit *inp7_4;
    QTextEdit *inp7_1;
    QTextEdit *inp7_3;
    QTextEdit *inp7_7;
    QTextEdit *inp7_6;
    QTextEdit *inp7_9;
    QTextEdit *inp7_8;
    QTextEdit *inp7_2;
    QTextEdit *inp7_5;
    QGridLayout *box9;
    QTextEdit *inp9_4;
    QTextEdit *inp9_1;
    QTextEdit *inp9_3;
    QTextEdit *inp9_7;
    QTextEdit *inp9_6;
    QTextEdit *inp9_9;
    QTextEdit *inp9_8;
    QTextEdit *inp9_2;
    QTextEdit *inp9_5;
    QGridLayout *box6;
    QTextEdit *inp6_4;
    QTextEdit *inp6_3;
    QTextEdit *inp6_6;
    QTextEdit *inp6_2;
    QTextEdit *inp6_9;
    QTextEdit *inp6_1;
    QTextEdit *inp6_7;
    QTextEdit *inp6_8;
    QTextEdit *inp6_5;
    QGridLayout *box2;
    QTextEdit *inp2_4;
    QTextEdit *inp2_1;
    QTextEdit *inp2_3;
    QTextEdit *inp2_7;
    QTextEdit *inp2_6;
    QTextEdit *inp2_9;
    QTextEdit *inp2_8;
    QTextEdit *inp2_2;
    QTextEdit *inp2_5;
    QGridLayout *box3;
    QTextEdit *inp3_3;
    QTextEdit *inp3_6;
    QTextEdit *inp3_5;
    QTextEdit *inp3_8;
    QTextEdit *inp3_7;
    QTextEdit *inp3_2;
    QTextEdit *inp3_1;
    QTextEdit *inp3_4;
    QTextEdit *inp3_9;
    QGridLayout *box4;
    QTextEdit *inp4_4;
    QTextEdit *inp4_9;
    QTextEdit *inp4_5;
    QTextEdit *inp4_2;
    QTextEdit *inp4_6;
    QTextEdit *inp4_3;
    QTextEdit *inp4_1;
    QTextEdit *inp4_7;
    QTextEdit *inp4_8;
    QGridLayout *box8;
    QTextEdit *inp8_4;
    QTextEdit *inp8_1;
    QTextEdit *inp8_3;
    QTextEdit *inp8_7;
    QTextEdit *inp8_6;
    QTextEdit *inp8_9;
    QTextEdit *inp8_8;
    QTextEdit *inp8_2;
    QTextEdit *inp8_5;
    QGridLayout *box1;
    QTextEdit *inp1_9;
    QTextEdit *inp1_2;
    QTextEdit *inp1_6;
    QTextEdit *inp1_8;
    QTextEdit *inp1_7;
    QTextEdit *inp1_3;
    QTextEdit *inp1_1;
    QTextEdit *inp1_5;
    QTextEdit *inp1_4;
    QPushButton *btn_solve;
    QPushButton *btn_finish;

    void setupUi(QWidget *soduko)
    {
        if (soduko->objectName().isEmpty())
            soduko->setObjectName(QString::fromUtf8("soduko"));
        soduko->setEnabled(true);
        soduko->resize(829, 597);
        soduko->setAcceptDrops(false);
        soduko->setStyleSheet(QString::fromUtf8("soduko\n"
"{\n"
"background: rgb(46, 52, 54)\n"
"}"));
        gridLayoutWidget_3 = new QWidget(soduko);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 20, 540, 560));
        gridLayoutWidget_3->setMaximumSize(QSize(540, 560));
        QFont font;
        font.setPointSize(20);
        gridLayoutWidget_3->setFont(font);
        box = new QGridLayout(gridLayoutWidget_3);
        box->setObjectName(QString::fromUtf8("box"));
        box->setSizeConstraint(QLayout::SetDefaultConstraint);
        box->setContentsMargins(0, 0, 0, 2);
        box5 = new QGridLayout();
        box5->setSpacing(2);
        box5->setObjectName(QString::fromUtf8("box5"));
        box5->setSizeConstraint(QLayout::SetDefaultConstraint);
        box5->setContentsMargins(0, 0, -1, -1);
        inp5_6 = new QTextEdit(gridLayoutWidget_3);
        inp5_6->setObjectName(QString::fromUtf8("inp5_6"));
        inp5_6->setMaximumSize(QSize(540, 560));
        inp5_6->setFont(font);

        box5->addWidget(inp5_6, 2, 2, 1, 1);

        inp5_4 = new QTextEdit(gridLayoutWidget_3);
        inp5_4->setObjectName(QString::fromUtf8("inp5_4"));
        inp5_4->setMaximumSize(QSize(540, 560));
        inp5_4->setFont(font);

        box5->addWidget(inp5_4, 2, 0, 1, 1);

        inp5_8 = new QTextEdit(gridLayoutWidget_3);
        inp5_8->setObjectName(QString::fromUtf8("inp5_8"));
        inp5_8->setMaximumSize(QSize(540, 560));
        inp5_8->setFont(font);

        box5->addWidget(inp5_8, 3, 1, 1, 1);

        inp5_2 = new QTextEdit(gridLayoutWidget_3);
        inp5_2->setObjectName(QString::fromUtf8("inp5_2"));
        inp5_2->setMaximumSize(QSize(540, 560));
        inp5_2->setFont(font);

        box5->addWidget(inp5_2, 0, 1, 1, 1);

        inp5_7 = new QTextEdit(gridLayoutWidget_3);
        inp5_7->setObjectName(QString::fromUtf8("inp5_7"));
        inp5_7->setMaximumSize(QSize(540, 560));
        inp5_7->setFont(font);

        box5->addWidget(inp5_7, 3, 0, 1, 1);

        inp5_3 = new QTextEdit(gridLayoutWidget_3);
        inp5_3->setObjectName(QString::fromUtf8("inp5_3"));
        inp5_3->setMaximumSize(QSize(540, 560));
        inp5_3->setFont(font);

        box5->addWidget(inp5_3, 0, 2, 1, 1);

        inp5_1 = new QTextEdit(gridLayoutWidget_3);
        inp5_1->setObjectName(QString::fromUtf8("inp5_1"));
        inp5_1->setMaximumSize(QSize(540, 560));
        inp5_1->setFont(font);

        box5->addWidget(inp5_1, 0, 0, 1, 1);

        inp5_9 = new QTextEdit(gridLayoutWidget_3);
        inp5_9->setObjectName(QString::fromUtf8("inp5_9"));
        inp5_9->setMaximumSize(QSize(540, 560));
        inp5_9->setFont(font);

        box5->addWidget(inp5_9, 3, 2, 1, 1);

        inp5_5 = new QTextEdit(gridLayoutWidget_3);
        inp5_5->setObjectName(QString::fromUtf8("inp5_5"));
        inp5_5->setMaximumSize(QSize(540, 560));
        inp5_5->setFont(font);

        box5->addWidget(inp5_5, 2, 1, 1, 1);


        box->addLayout(box5, 1, 1, 1, 1);

        box7 = new QGridLayout();
        box7->setSpacing(2);
        box7->setObjectName(QString::fromUtf8("box7"));
        box7->setSizeConstraint(QLayout::SetDefaultConstraint);
        box7->setContentsMargins(0, 0, -1, -1);
        inp7_4 = new QTextEdit(gridLayoutWidget_3);
        inp7_4->setObjectName(QString::fromUtf8("inp7_4"));
        inp7_4->setMaximumSize(QSize(540, 560));
        inp7_4->setFont(font);

        box7->addWidget(inp7_4, 2, 0, 1, 1);

        inp7_1 = new QTextEdit(gridLayoutWidget_3);
        inp7_1->setObjectName(QString::fromUtf8("inp7_1"));
        inp7_1->setMaximumSize(QSize(540, 560));
        inp7_1->setFont(font);

        box7->addWidget(inp7_1, 0, 0, 1, 1);

        inp7_3 = new QTextEdit(gridLayoutWidget_3);
        inp7_3->setObjectName(QString::fromUtf8("inp7_3"));
        inp7_3->setMaximumSize(QSize(540, 560));
        inp7_3->setFont(font);

        box7->addWidget(inp7_3, 0, 2, 1, 1);

        inp7_7 = new QTextEdit(gridLayoutWidget_3);
        inp7_7->setObjectName(QString::fromUtf8("inp7_7"));
        inp7_7->setMaximumSize(QSize(540, 560));
        inp7_7->setFont(font);

        box7->addWidget(inp7_7, 3, 0, 1, 1);

        inp7_6 = new QTextEdit(gridLayoutWidget_3);
        inp7_6->setObjectName(QString::fromUtf8("inp7_6"));
        inp7_6->setMaximumSize(QSize(540, 560));
        inp7_6->setFont(font);

        box7->addWidget(inp7_6, 2, 2, 1, 1);

        inp7_9 = new QTextEdit(gridLayoutWidget_3);
        inp7_9->setObjectName(QString::fromUtf8("inp7_9"));
        inp7_9->setMaximumSize(QSize(540, 560));
        inp7_9->setFont(font);

        box7->addWidget(inp7_9, 3, 2, 1, 1);

        inp7_8 = new QTextEdit(gridLayoutWidget_3);
        inp7_8->setObjectName(QString::fromUtf8("inp7_8"));
        inp7_8->setMaximumSize(QSize(540, 560));
        inp7_8->setFont(font);

        box7->addWidget(inp7_8, 3, 1, 1, 1);

        inp7_2 = new QTextEdit(gridLayoutWidget_3);
        inp7_2->setObjectName(QString::fromUtf8("inp7_2"));
        inp7_2->setMaximumSize(QSize(540, 560));
        inp7_2->setFont(font);

        box7->addWidget(inp7_2, 0, 1, 1, 1);

        inp7_5 = new QTextEdit(gridLayoutWidget_3);
        inp7_5->setObjectName(QString::fromUtf8("inp7_5"));
        inp7_5->setMaximumSize(QSize(540, 560));
        inp7_5->setFont(font);

        box7->addWidget(inp7_5, 2, 1, 1, 1);


        box->addLayout(box7, 2, 0, 1, 1);

        box9 = new QGridLayout();
        box9->setSpacing(2);
        box9->setObjectName(QString::fromUtf8("box9"));
        box9->setSizeConstraint(QLayout::SetDefaultConstraint);
        box9->setContentsMargins(0, 0, -1, -1);
        inp9_4 = new QTextEdit(gridLayoutWidget_3);
        inp9_4->setObjectName(QString::fromUtf8("inp9_4"));
        inp9_4->setMaximumSize(QSize(540, 560));
        inp9_4->setFont(font);

        box9->addWidget(inp9_4, 2, 0, 1, 1);

        inp9_1 = new QTextEdit(gridLayoutWidget_3);
        inp9_1->setObjectName(QString::fromUtf8("inp9_1"));
        inp9_1->setMaximumSize(QSize(540, 560));
        inp9_1->setFont(font);

        box9->addWidget(inp9_1, 0, 0, 1, 1);

        inp9_3 = new QTextEdit(gridLayoutWidget_3);
        inp9_3->setObjectName(QString::fromUtf8("inp9_3"));
        inp9_3->setMaximumSize(QSize(540, 560));
        inp9_3->setFont(font);

        box9->addWidget(inp9_3, 0, 2, 1, 1);

        inp9_7 = new QTextEdit(gridLayoutWidget_3);
        inp9_7->setObjectName(QString::fromUtf8("inp9_7"));
        inp9_7->setMaximumSize(QSize(540, 560));
        inp9_7->setFont(font);

        box9->addWidget(inp9_7, 3, 0, 1, 1);

        inp9_6 = new QTextEdit(gridLayoutWidget_3);
        inp9_6->setObjectName(QString::fromUtf8("inp9_6"));
        inp9_6->setMaximumSize(QSize(540, 560));
        inp9_6->setFont(font);

        box9->addWidget(inp9_6, 2, 2, 1, 1);

        inp9_9 = new QTextEdit(gridLayoutWidget_3);
        inp9_9->setObjectName(QString::fromUtf8("inp9_9"));
        inp9_9->setMaximumSize(QSize(540, 560));
        inp9_9->setFont(font);

        box9->addWidget(inp9_9, 3, 2, 1, 1);

        inp9_8 = new QTextEdit(gridLayoutWidget_3);
        inp9_8->setObjectName(QString::fromUtf8("inp9_8"));
        inp9_8->setMaximumSize(QSize(540, 560));
        inp9_8->setFont(font);

        box9->addWidget(inp9_8, 3, 1, 1, 1);

        inp9_2 = new QTextEdit(gridLayoutWidget_3);
        inp9_2->setObjectName(QString::fromUtf8("inp9_2"));
        inp9_2->setMaximumSize(QSize(540, 560));
        inp9_2->setFont(font);

        box9->addWidget(inp9_2, 0, 1, 1, 1);

        inp9_5 = new QTextEdit(gridLayoutWidget_3);
        inp9_5->setObjectName(QString::fromUtf8("inp9_5"));
        inp9_5->setMaximumSize(QSize(540, 560));
        inp9_5->setFont(font);

        box9->addWidget(inp9_5, 2, 1, 1, 1);


        box->addLayout(box9, 2, 2, 1, 1);

        box6 = new QGridLayout();
        box6->setSpacing(2);
        box6->setObjectName(QString::fromUtf8("box6"));
        box6->setSizeConstraint(QLayout::SetDefaultConstraint);
        box6->setContentsMargins(0, 0, -1, -1);
        inp6_4 = new QTextEdit(gridLayoutWidget_3);
        inp6_4->setObjectName(QString::fromUtf8("inp6_4"));
        inp6_4->setMaximumSize(QSize(540, 560));
        inp6_4->setFont(font);

        box6->addWidget(inp6_4, 2, 0, 1, 1);

        inp6_3 = new QTextEdit(gridLayoutWidget_3);
        inp6_3->setObjectName(QString::fromUtf8("inp6_3"));
        inp6_3->setMaximumSize(QSize(540, 560));
        inp6_3->setFont(font);

        box6->addWidget(inp6_3, 0, 2, 1, 1);

        inp6_6 = new QTextEdit(gridLayoutWidget_3);
        inp6_6->setObjectName(QString::fromUtf8("inp6_6"));
        inp6_6->setMaximumSize(QSize(540, 560));
        inp6_6->setFont(font);

        box6->addWidget(inp6_6, 2, 2, 1, 1);

        inp6_2 = new QTextEdit(gridLayoutWidget_3);
        inp6_2->setObjectName(QString::fromUtf8("inp6_2"));
        inp6_2->setMaximumSize(QSize(540, 560));
        inp6_2->setFont(font);

        box6->addWidget(inp6_2, 0, 1, 1, 1);

        inp6_9 = new QTextEdit(gridLayoutWidget_3);
        inp6_9->setObjectName(QString::fromUtf8("inp6_9"));
        inp6_9->setMaximumSize(QSize(540, 560));
        inp6_9->setFont(font);

        box6->addWidget(inp6_9, 3, 2, 1, 1);

        inp6_1 = new QTextEdit(gridLayoutWidget_3);
        inp6_1->setObjectName(QString::fromUtf8("inp6_1"));
        inp6_1->setMaximumSize(QSize(540, 560));
        inp6_1->setFont(font);

        box6->addWidget(inp6_1, 0, 0, 1, 1);

        inp6_7 = new QTextEdit(gridLayoutWidget_3);
        inp6_7->setObjectName(QString::fromUtf8("inp6_7"));
        inp6_7->setMaximumSize(QSize(540, 560));
        inp6_7->setFont(font);

        box6->addWidget(inp6_7, 3, 0, 1, 1);

        inp6_8 = new QTextEdit(gridLayoutWidget_3);
        inp6_8->setObjectName(QString::fromUtf8("inp6_8"));
        inp6_8->setMaximumSize(QSize(540, 560));
        inp6_8->setFont(font);

        box6->addWidget(inp6_8, 3, 1, 1, 1);

        inp6_5 = new QTextEdit(gridLayoutWidget_3);
        inp6_5->setObjectName(QString::fromUtf8("inp6_5"));
        inp6_5->setMaximumSize(QSize(540, 560));
        inp6_5->setFont(font);

        box6->addWidget(inp6_5, 2, 1, 1, 1);


        box->addLayout(box6, 1, 2, 1, 1);

        box2 = new QGridLayout();
        box2->setSpacing(2);
        box2->setObjectName(QString::fromUtf8("box2"));
        box2->setSizeConstraint(QLayout::SetDefaultConstraint);
        box2->setContentsMargins(0, 0, -1, -1);
        inp2_4 = new QTextEdit(gridLayoutWidget_3);
        inp2_4->setObjectName(QString::fromUtf8("inp2_4"));
        inp2_4->setMaximumSize(QSize(540, 560));
        inp2_4->setFont(font);

        box2->addWidget(inp2_4, 2, 0, 1, 1);

        inp2_1 = new QTextEdit(gridLayoutWidget_3);
        inp2_1->setObjectName(QString::fromUtf8("inp2_1"));
        inp2_1->setMaximumSize(QSize(540, 560));
        inp2_1->setFont(font);

        box2->addWidget(inp2_1, 0, 0, 1, 1);

        inp2_3 = new QTextEdit(gridLayoutWidget_3);
        inp2_3->setObjectName(QString::fromUtf8("inp2_3"));
        inp2_3->setMaximumSize(QSize(540, 560));
        inp2_3->setFont(font);

        box2->addWidget(inp2_3, 0, 2, 1, 1);

        inp2_7 = new QTextEdit(gridLayoutWidget_3);
        inp2_7->setObjectName(QString::fromUtf8("inp2_7"));
        inp2_7->setMaximumSize(QSize(540, 560));
        inp2_7->setFont(font);

        box2->addWidget(inp2_7, 3, 0, 1, 1);

        inp2_6 = new QTextEdit(gridLayoutWidget_3);
        inp2_6->setObjectName(QString::fromUtf8("inp2_6"));
        inp2_6->setMaximumSize(QSize(540, 560));
        inp2_6->setFont(font);

        box2->addWidget(inp2_6, 2, 2, 1, 1);

        inp2_9 = new QTextEdit(gridLayoutWidget_3);
        inp2_9->setObjectName(QString::fromUtf8("inp2_9"));
        inp2_9->setMaximumSize(QSize(540, 560));
        inp2_9->setFont(font);

        box2->addWidget(inp2_9, 3, 2, 1, 1);

        inp2_8 = new QTextEdit(gridLayoutWidget_3);
        inp2_8->setObjectName(QString::fromUtf8("inp2_8"));
        inp2_8->setMaximumSize(QSize(540, 560));
        inp2_8->setFont(font);

        box2->addWidget(inp2_8, 3, 1, 1, 1);

        inp2_2 = new QTextEdit(gridLayoutWidget_3);
        inp2_2->setObjectName(QString::fromUtf8("inp2_2"));
        inp2_2->setMaximumSize(QSize(540, 560));
        inp2_2->setFont(font);

        box2->addWidget(inp2_2, 0, 1, 1, 1);

        inp2_5 = new QTextEdit(gridLayoutWidget_3);
        inp2_5->setObjectName(QString::fromUtf8("inp2_5"));
        inp2_5->setMaximumSize(QSize(540, 560));
        inp2_5->setFont(font);

        box2->addWidget(inp2_5, 2, 1, 1, 1);


        box->addLayout(box2, 0, 1, 1, 1);

        box3 = new QGridLayout();
        box3->setSpacing(2);
        box3->setObjectName(QString::fromUtf8("box3"));
        box3->setSizeConstraint(QLayout::SetDefaultConstraint);
        box3->setContentsMargins(0, 0, -1, -1);
        inp3_3 = new QTextEdit(gridLayoutWidget_3);
        inp3_3->setObjectName(QString::fromUtf8("inp3_3"));
        inp3_3->setMaximumSize(QSize(540, 560));
        inp3_3->setFont(font);

        box3->addWidget(inp3_3, 1, 2, 1, 1);

        inp3_6 = new QTextEdit(gridLayoutWidget_3);
        inp3_6->setObjectName(QString::fromUtf8("inp3_6"));
        inp3_6->setMaximumSize(QSize(540, 560));
        inp3_6->setFont(font);

        box3->addWidget(inp3_6, 2, 2, 1, 1);

        inp3_5 = new QTextEdit(gridLayoutWidget_3);
        inp3_5->setObjectName(QString::fromUtf8("inp3_5"));
        inp3_5->setMaximumSize(QSize(540, 560));
        inp3_5->setFont(font);

        box3->addWidget(inp3_5, 2, 1, 1, 1);

        inp3_8 = new QTextEdit(gridLayoutWidget_3);
        inp3_8->setObjectName(QString::fromUtf8("inp3_8"));
        inp3_8->setMaximumSize(QSize(540, 560));
        inp3_8->setFont(font);

        box3->addWidget(inp3_8, 3, 1, 1, 1);

        inp3_7 = new QTextEdit(gridLayoutWidget_3);
        inp3_7->setObjectName(QString::fromUtf8("inp3_7"));
        inp3_7->setMaximumSize(QSize(540, 560));
        inp3_7->setFont(font);

        box3->addWidget(inp3_7, 3, 0, 1, 1);

        inp3_2 = new QTextEdit(gridLayoutWidget_3);
        inp3_2->setObjectName(QString::fromUtf8("inp3_2"));
        inp3_2->setMaximumSize(QSize(540, 560));
        inp3_2->setFont(font);

        box3->addWidget(inp3_2, 1, 1, 1, 1);

        inp3_1 = new QTextEdit(gridLayoutWidget_3);
        inp3_1->setObjectName(QString::fromUtf8("inp3_1"));
        inp3_1->setMaximumSize(QSize(540, 560));
        inp3_1->setFont(font);

        box3->addWidget(inp3_1, 1, 0, 1, 1);

        inp3_4 = new QTextEdit(gridLayoutWidget_3);
        inp3_4->setObjectName(QString::fromUtf8("inp3_4"));
        inp3_4->setMaximumSize(QSize(540, 560));
        inp3_4->setFont(font);

        box3->addWidget(inp3_4, 2, 0, 1, 1);

        inp3_9 = new QTextEdit(gridLayoutWidget_3);
        inp3_9->setObjectName(QString::fromUtf8("inp3_9"));
        inp3_9->setMaximumSize(QSize(540, 560));
        inp3_9->setFont(font);

        box3->addWidget(inp3_9, 3, 2, 1, 1);


        box->addLayout(box3, 0, 2, 1, 1);

        box4 = new QGridLayout();
        box4->setSpacing(2);
        box4->setObjectName(QString::fromUtf8("box4"));
        box4->setSizeConstraint(QLayout::SetDefaultConstraint);
        box4->setContentsMargins(0, 0, -1, -1);
        inp4_4 = new QTextEdit(gridLayoutWidget_3);
        inp4_4->setObjectName(QString::fromUtf8("inp4_4"));
        inp4_4->setMaximumSize(QSize(540, 560));
        inp4_4->setFont(font);

        box4->addWidget(inp4_4, 2, 0, 1, 1);

        inp4_9 = new QTextEdit(gridLayoutWidget_3);
        inp4_9->setObjectName(QString::fromUtf8("inp4_9"));
        inp4_9->setMaximumSize(QSize(540, 560));
        inp4_9->setFont(font);

        box4->addWidget(inp4_9, 3, 2, 1, 1);

        inp4_5 = new QTextEdit(gridLayoutWidget_3);
        inp4_5->setObjectName(QString::fromUtf8("inp4_5"));
        inp4_5->setMaximumSize(QSize(540, 560));
        inp4_5->setFont(font);

        box4->addWidget(inp4_5, 2, 1, 1, 1);

        inp4_2 = new QTextEdit(gridLayoutWidget_3);
        inp4_2->setObjectName(QString::fromUtf8("inp4_2"));
        inp4_2->setMaximumSize(QSize(540, 560));
        inp4_2->setFont(font);

        box4->addWidget(inp4_2, 0, 1, 1, 1);

        inp4_6 = new QTextEdit(gridLayoutWidget_3);
        inp4_6->setObjectName(QString::fromUtf8("inp4_6"));
        inp4_6->setMaximumSize(QSize(540, 560));
        inp4_6->setFont(font);

        box4->addWidget(inp4_6, 2, 2, 1, 1);

        inp4_3 = new QTextEdit(gridLayoutWidget_3);
        inp4_3->setObjectName(QString::fromUtf8("inp4_3"));
        inp4_3->setMaximumSize(QSize(540, 560));
        inp4_3->setFont(font);

        box4->addWidget(inp4_3, 0, 2, 1, 1);

        inp4_1 = new QTextEdit(gridLayoutWidget_3);
        inp4_1->setObjectName(QString::fromUtf8("inp4_1"));
        inp4_1->setMaximumSize(QSize(540, 560));
        inp4_1->setFont(font);

        box4->addWidget(inp4_1, 0, 0, 1, 1);

        inp4_7 = new QTextEdit(gridLayoutWidget_3);
        inp4_7->setObjectName(QString::fromUtf8("inp4_7"));
        inp4_7->setMaximumSize(QSize(540, 560));
        inp4_7->setFont(font);

        box4->addWidget(inp4_7, 3, 0, 1, 1);

        inp4_8 = new QTextEdit(gridLayoutWidget_3);
        inp4_8->setObjectName(QString::fromUtf8("inp4_8"));
        inp4_8->setMaximumSize(QSize(540, 560));
        inp4_8->setFont(font);

        box4->addWidget(inp4_8, 3, 1, 1, 1);


        box->addLayout(box4, 1, 0, 1, 1);

        box8 = new QGridLayout();
        box8->setSpacing(2);
        box8->setObjectName(QString::fromUtf8("box8"));
        box8->setSizeConstraint(QLayout::SetDefaultConstraint);
        box8->setContentsMargins(0, 0, -1, -1);
        inp8_4 = new QTextEdit(gridLayoutWidget_3);
        inp8_4->setObjectName(QString::fromUtf8("inp8_4"));
        inp8_4->setMaximumSize(QSize(540, 560));
        inp8_4->setFont(font);

        box8->addWidget(inp8_4, 2, 0, 1, 1);

        inp8_1 = new QTextEdit(gridLayoutWidget_3);
        inp8_1->setObjectName(QString::fromUtf8("inp8_1"));
        inp8_1->setMaximumSize(QSize(540, 560));
        inp8_1->setFont(font);

        box8->addWidget(inp8_1, 0, 0, 1, 1);

        inp8_3 = new QTextEdit(gridLayoutWidget_3);
        inp8_3->setObjectName(QString::fromUtf8("inp8_3"));
        inp8_3->setMaximumSize(QSize(540, 560));
        inp8_3->setFont(font);

        box8->addWidget(inp8_3, 0, 2, 1, 1);

        inp8_7 = new QTextEdit(gridLayoutWidget_3);
        inp8_7->setObjectName(QString::fromUtf8("inp8_7"));
        inp8_7->setMaximumSize(QSize(540, 560));
        inp8_7->setFont(font);

        box8->addWidget(inp8_7, 3, 0, 1, 1);

        inp8_6 = new QTextEdit(gridLayoutWidget_3);
        inp8_6->setObjectName(QString::fromUtf8("inp8_6"));
        inp8_6->setMaximumSize(QSize(540, 560));
        inp8_6->setFont(font);

        box8->addWidget(inp8_6, 2, 2, 1, 1);

        inp8_9 = new QTextEdit(gridLayoutWidget_3);
        inp8_9->setObjectName(QString::fromUtf8("inp8_9"));
        inp8_9->setMaximumSize(QSize(540, 560));
        inp8_9->setFont(font);

        box8->addWidget(inp8_9, 3, 2, 1, 1);

        inp8_8 = new QTextEdit(gridLayoutWidget_3);
        inp8_8->setObjectName(QString::fromUtf8("inp8_8"));
        inp8_8->setMaximumSize(QSize(540, 560));
        inp8_8->setFont(font);

        box8->addWidget(inp8_8, 3, 1, 1, 1);

        inp8_2 = new QTextEdit(gridLayoutWidget_3);
        inp8_2->setObjectName(QString::fromUtf8("inp8_2"));
        inp8_2->setMaximumSize(QSize(540, 560));
        inp8_2->setFont(font);

        box8->addWidget(inp8_2, 0, 1, 1, 1);

        inp8_5 = new QTextEdit(gridLayoutWidget_3);
        inp8_5->setObjectName(QString::fromUtf8("inp8_5"));
        inp8_5->setMaximumSize(QSize(540, 560));
        inp8_5->setFont(font);

        box8->addWidget(inp8_5, 2, 1, 1, 1);


        box->addLayout(box8, 2, 1, 1, 1);

        box1 = new QGridLayout();
        box1->setSpacing(2);
        box1->setObjectName(QString::fromUtf8("box1"));
        box1->setSizeConstraint(QLayout::SetDefaultConstraint);
        box1->setContentsMargins(0, 0, -1, -1);
        inp1_9 = new QTextEdit(gridLayoutWidget_3);
        inp1_9->setObjectName(QString::fromUtf8("inp1_9"));
        inp1_9->setMaximumSize(QSize(540, 560));
        inp1_9->setFont(font);

        box1->addWidget(inp1_9, 3, 2, 1, 1);

        inp1_2 = new QTextEdit(gridLayoutWidget_3);
        inp1_2->setObjectName(QString::fromUtf8("inp1_2"));
        inp1_2->setMaximumSize(QSize(540, 560));
        inp1_2->setFont(font);

        box1->addWidget(inp1_2, 0, 1, 1, 1);

        inp1_6 = new QTextEdit(gridLayoutWidget_3);
        inp1_6->setObjectName(QString::fromUtf8("inp1_6"));
        inp1_6->setMaximumSize(QSize(540, 560));
        inp1_6->setFont(font);

        box1->addWidget(inp1_6, 2, 2, 1, 1);

        inp1_8 = new QTextEdit(gridLayoutWidget_3);
        inp1_8->setObjectName(QString::fromUtf8("inp1_8"));
        inp1_8->setMaximumSize(QSize(540, 560));
        inp1_8->setFont(font);

        box1->addWidget(inp1_8, 3, 1, 1, 1);

        inp1_7 = new QTextEdit(gridLayoutWidget_3);
        inp1_7->setObjectName(QString::fromUtf8("inp1_7"));
        inp1_7->setMaximumSize(QSize(540, 560));
        inp1_7->setFont(font);

        box1->addWidget(inp1_7, 3, 0, 1, 1);

        inp1_3 = new QTextEdit(gridLayoutWidget_3);
        inp1_3->setObjectName(QString::fromUtf8("inp1_3"));
        inp1_3->setMaximumSize(QSize(540, 560));
        inp1_3->setFont(font);

        box1->addWidget(inp1_3, 0, 2, 1, 1);

        inp1_1 = new QTextEdit(gridLayoutWidget_3);
        inp1_1->setObjectName(QString::fromUtf8("inp1_1"));
        inp1_1->setMaximumSize(QSize(540, 560));
        inp1_1->setFont(font);
        inp1_1->setLayoutDirection(Qt::LeftToRight);
        inp1_1->setStyleSheet(QString::fromUtf8("Background Color : rgb(173, 127, 168)\n"
"\n"
"\n"
""));

        box1->addWidget(inp1_1, 0, 0, 1, 1);

        inp1_5 = new QTextEdit(gridLayoutWidget_3);
        inp1_5->setObjectName(QString::fromUtf8("inp1_5"));
        inp1_5->setMaximumSize(QSize(540, 560));
        inp1_5->setFont(font);

        box1->addWidget(inp1_5, 2, 1, 1, 1);

        inp1_4 = new QTextEdit(gridLayoutWidget_3);
        inp1_4->setObjectName(QString::fromUtf8("inp1_4"));
        inp1_4->setMaximumSize(QSize(540, 560));
        inp1_4->setFont(font);

        box1->addWidget(inp1_4, 2, 0, 1, 1);


        box->addLayout(box1, 0, 0, 1, 1);

        btn_solve = new QPushButton(soduko);
        btn_solve->setObjectName(QString::fromUtf8("btn_solve"));
        btn_solve->setGeometry(QRect(600, 509, 171, 71));
        btn_solve->setMaximumSize(QSize(500, 500));
        QFont font1;
        font1.setPointSize(18);
        btn_solve->setFont(font1);
        btn_solve->setStyleSheet(QString::fromUtf8("background-color: rgb(75, 206, 246);"));
        btn_finish = new QPushButton(soduko);
        btn_finish->setObjectName(QString::fromUtf8("btn_finish"));
        btn_finish->setGeometry(QRect(600, 399, 171, 71));
        btn_finish->setFont(font1);
        btn_finish->setStyleSheet(QString::fromUtf8("background-color:rgb(239, 41, 41)"));

        retranslateUi(soduko);

        QMetaObject::connectSlotsByName(soduko);
    } // setupUi

    void retranslateUi(QWidget *soduko)
    {
        soduko->setWindowTitle(QApplication::translate("soduko", "Form", nullptr));
        inp1_1->setHtml(QApplication::translate("soduko", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        btn_solve->setText(QApplication::translate("soduko", "solve", nullptr));
        btn_finish->setText(QApplication::translate("soduko", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class soduko: public Ui_soduko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SODUKO_H
