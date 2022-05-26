#ifndef SODUKO_H
#define SODUKO_H

#include <QWidget>

namespace Ui {
class soduko;
}

class soduko : public QWidget
{
	Q_OBJECT

public:
	explicit soduko(QWidget *parent = nullptr);
	~soduko();

private slots:

	void on_inp1_1_textChanged();

private:
	Ui::soduko *ui;
};

#endif // SODUKO_H
