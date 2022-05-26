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

int arr[9][9] = {};


void soduko::on_inp1_1_textChanged()
{
	QString inp1_1 = this->ui->inp1_1->toPlainText();
	if (inp1_1 <= 57 && inp1_1 >= 49)
		arr[0][0] = inp1_1.toInt();
	else
	{

		// redbox
	}
}
