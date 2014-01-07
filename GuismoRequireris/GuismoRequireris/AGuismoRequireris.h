#ifndef AGUISMOREQUIRERIS_H
#define AGUISMOREQUIRERIS_H

#include <QtWidgets/QMainWindow>
#include "ui_AGuismoRequireris.h"

class AGuismoRequireris : public QMainWindow
{
	Q_OBJECT

public:
	AGuismoRequireris(QWidget *parent = 0);
	~AGuismoRequireris();

private:
	Ui::AGuismoRequirerisClass ui;
};

#endif // AGUISMOREQUIRERIS_H
