#ifndef ENDGAME_H
#define ENDGAME_H

#include <QWidget>

namespace Ui {
class endgame;
}

class endgame : public QWidget
{
	Q_OBJECT

public:
	explicit endgame(QWidget *parent = nullptr);
	~endgame();

private slots:
	void on_btn_playagain_clicked();

	void on_btn_leaderboard_clicked();

	void on_btn_leavegame_clicked();

private:
	Ui::endgame *ui;
};

#endif // ENDGAME_H
