#ifndef MANAGEACCOUNT_H
#define MANAGEACCOUNT_H

#include <QDialog>
#include "ui_ManageAccount.h"

class ManageAccount : public QDialog
{
	Q_OBJECT

private:
	Ui::ManageAccount ui;


public slots:
   void							on_close_button_clicked();
   void							on_add_button_clicked();

public:
	void						setName(const QString &);

signals:
    void						addAccount(const QString &name, const QString &key);

public:
	ManageAccount(QWidget *parent = 0);
	~ManageAccount() {}
};

#endif // MANAGEACCOUNT_H
