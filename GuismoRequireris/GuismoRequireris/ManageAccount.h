#ifndef MANAGEACCOUNT_H
#define MANAGEACCOUNT_H

#include <QDialog>
#include "ui_ManageAccount.h"

class ManageAccount : public QDialog
{
	Q_OBJECT

public:
	ManageAccount(QWidget *parent = 0);
	~ManageAccount();

private:
	Ui::ManageAccount ui;
};

#endif // MANAGEACCOUNT_H
