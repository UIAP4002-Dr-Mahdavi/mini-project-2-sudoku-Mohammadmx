#include "leaderboard.h"
#include "ui_leaderboard.h"

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
