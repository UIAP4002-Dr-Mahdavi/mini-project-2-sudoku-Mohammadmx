#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "soduko.h"
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


void MainWindow::on_btn_login_clicked()
{
	QString name = this->ui->enter_name->text();
	if (name.isEmpty())
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
		soduko * sdk = new soduko();
		sdk->show();
		this->close();
	}
}
