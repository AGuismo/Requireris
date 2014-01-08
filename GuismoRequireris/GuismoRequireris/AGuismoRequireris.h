#ifndef AGUISMOREQUIRERIS_H
#define AGUISMOREQUIRERIS_H

#include	<QtWidgets/QMainWindow>
#include	<map>
#include	<QMap>
#include	<QTime>
#include	"ui_AGuismoRequireris.h"
#include	"ManageAccount.h"

int generateCode(const std::string &key, unsigned long tm);

class AGuismoRequireris : public QMainWindow
{
	Q_OBJECT

private:
	Ui::AGuismoRequirerisClass			 ui;
	QTime								_time;
	QLabel								*_timeLabel;

private:
	ManageAccount						_manageAccountWindow;

public:
	typedef QMap<QString, QString>		accounts_type;

private:
	accounts_type						_accounts;

public slots:
	void								refreshKeys();

public slots:
	void				on_modify_window_triggered();
	void				on_add_window_triggered();
	void				on_delete_account_triggered();
	void				on_add_account(const QString &name, const QString &key);
	void				on_add_account_from_db(const QString &name, const QString &key);
	void				showTime();

public:
	bool				loadDb();
	bool				addToDb(const QString &name, const QString &key);

public:
	AGuismoRequireris(QWidget *parent = 0);
	~AGuismoRequireris() {}
};

#endif // AGUISMOREQUIRERIS_H
