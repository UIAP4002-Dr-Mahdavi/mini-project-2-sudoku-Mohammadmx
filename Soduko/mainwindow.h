#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

private slots:
	void on_btn_login_clicked();

	void on_btn_leaderboard_clicked();

	void on_btn_quit_clicked();

private:
	Ui::MainWindow *ui;

	QString name;
};

#endif // MAINWINDOW_H
