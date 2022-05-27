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

private slots:
	void on_btn_show_clicked();

	void on_btn_firstpage_clicked();

	void on_pushButton_3_clicked();

private:
	Ui::leaderBoard *ui;
};

#endif // LEADERBOARD_H
