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

private:
	Ui::soduko *ui;
};

#endif // SODUKO_H
