#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <QWidget>

namespace Ui {
class leaderBoard;
}

class leaderBoard : public QWidget
{
	Q_OBJECT

public:
	explicit leaderBoard(QWidget *parent = nullptr);
	~leaderBoard();

private:
	Ui::leaderBoard *ui;
};

#endif // LEADERBOARD_H
