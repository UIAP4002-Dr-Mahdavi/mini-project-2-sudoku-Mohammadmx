#include "soduko.h"
#include "ui_soduko.h"

soduko::soduko(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::soduko)
{
	ui->setupUi(this);
}

soduko::~soduko()
{
	delete ui;
}
