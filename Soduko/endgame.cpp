#include "endgame.h"
#include "ui_endgame.h"
#include "leaderboard.h"
#include "soduko.h"

endgame::endgame(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::endgame)
{
	ui->setupUi(this);
}

endgame::~endgame()
{
	delete ui;
}

void endgame::on_btn_playagain_clicked()
{
	soduko * sdk = new soduko();
	sdk->show();
	this->close();
}

void endgame::on_btn_leaderboard_clicked()
{
	leaderBoard * lb = new leaderBoard();
	lb->show();
	this->close();
}

void endgame::on_btn_leavegame_clicked()
{
	this->close();
	return;
}
