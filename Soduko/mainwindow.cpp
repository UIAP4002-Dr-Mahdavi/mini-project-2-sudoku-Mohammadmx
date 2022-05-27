#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "soduko.h"
#include "leaderboard.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}

MainWindow::~MainWindow()
{
	delete ui;
}

QString name;
void MainWindow::on_btn_login_clicked()
{
	name = this->ui->enter_name->text();
	if ((name).isEmpty())
	{
		QMessageBox mbox;
		mbox.setText("Field Enter Name Is Empty");
		mbox.setWindowTitle("Warning!");
		mbox.setIcon(QMessageBox::Warning);
		mbox.setStandardButtons(QMessageBox::Ok);
		mbox.resize(100,60);
		mbox.exec();
	}
	else
	{
		soduko * sdk = new soduko(name);
		sdk->show();
		this->hide();
	}
}

void MainWindow::on_btn_leaderboard_clicked()
{
	leaderBoard * lb = new leaderBoard();
	lb->show();
	this->close();
}
