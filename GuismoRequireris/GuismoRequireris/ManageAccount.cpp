#include "ManageAccount.h"

ManageAccount::ManageAccount(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	setModal(true);
	connect(ui.closePushButton, SIGNAL(clicked()), this, SLOT(on_close_button_clicked()));
	connect(ui.addPushButton, SIGNAL(clicked()), this, SLOT(on_add_button_clicked()));
}

void				ManageAccount::on_close_button_clicked()
{
	close();
}

void				ManageAccount::on_add_button_clicked()
{
	if (ui.nameLineEdit->text().size() >= 2 && ui.keyLineEdit->text().size() > 2)
	{
		emit(addAccount(ui.nameLineEdit->text(), ui.keyLineEdit->text()));
		ui.nameLineEdit->clear();
		ui.keyLineEdit->clear();
		close();
	}
}

void						ManageAccount::setName(const QString &name)
{
	ui.nameLineEdit->setText(name);
}