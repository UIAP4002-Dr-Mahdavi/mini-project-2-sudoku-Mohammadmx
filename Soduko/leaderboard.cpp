#include "leaderboard.h"
#include "ui_leaderboard.h"
#include "soduko.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QVector>

#define address "/home/mohmammad/Desktop/Term 2/MiniProject 2/mini-project-2-sudoku-Mohammadmx/Soduko/LeaderBoard.txt"

leaderBoard::leaderBoard(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::leaderBoard)
{
	ui->setupUi(this);
}

leaderBoard::~leaderBoard()
{
	delete ui;
}


void leaderBoard::on_btn_show_clicked()
{
	QFile file(address);

	if (!file.open(QFile::ReadOnly | QFile::Text))
	{
		QMessageBox::warning(this, "title", "File Not Open");
		return;
	}

	QTextStream in(&file);
	QVector<QString> users;
	QVector<int> wins;
	QString line;

	while (!in.atEnd())
	{
		line = in.readLine();
		users.push_back(line.split(" ")[0]);
		wins.push_back((line.split(" ")[1]).toInt());
	}

	for (int i = 0; i < users.size(); i++)
	{
		this->ui->lb_names->appendPlainText(QString::number(i+1));
		if (i < 9)
			this->ui->lb_names->insertPlainText(".    ");
		else
			this->ui->lb_names->insertPlainText(".  ");

		this->ui->lb_names->insertPlainText(users[i]);
		this->ui->lb_wins->appendPlainText(QString::number(wins[i]));
	}

	file.close();
}
