#include		"AGuismoRequireris.h"
#include		<QDateTime>
#include		<QTimer>
#include		<QFile>
#include		<QDebug>

AGuismoRequireris::AGuismoRequireris(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(refreshKeys()));
	timer->start(5000);
	setWindowIcon(QIcon("./Img/Logo.png"));
	QTimer *timer2 = new QTimer(this);
	connect(timer2, SIGNAL(timeout()), this, SLOT(showTime()));
	timer2->start(1000);
	_timeLabel = new QLabel(".");
	ui.statusBar->addPermanentWidget(_timeLabel);

	// Connect Manage Window
	connect(ui.addPushButton, SIGNAL(released()), this, SLOT(on_add_window_triggered()));
	connect(ui.modifyPushButton, SIGNAL(released()), this, SLOT(on_modify_window_triggered()));
	//Delete account
	connect(ui.deletePushButton, SIGNAL(released()), this, SLOT(on_delete_account_triggered()));
	// Add friend try triggered
	connect(&_manageAccountWindow, SIGNAL(addAccount(const QString &, const QString &)), this, SLOT(on_add_account(const QString &, const QString &)));

	loadDb();
}


void				AGuismoRequireris::on_add_window_triggered()
{
	_manageAccountWindow.show();
}

void				AGuismoRequireris::on_modify_window_triggered()
{
	if (ui.keyListWidget->currentItem() != NULL)
	{
		_manageAccountWindow.setName(ui.keyListWidget->currentItem()->text().left(ui.keyListWidget->currentItem()->text().indexOf("\n")));
		_manageAccountWindow.show();
	}
}

void				AGuismoRequireris::on_add_account(const QString &name, const QString &key)
{
	accounts_type::iterator	it = _accounts.find(name);

	if (it != _accounts.end())
	{
		it.value() = key;
		addToDb(name, key);
		return;
	}
	_accounts.insert(name, key);
	addToDb(name, key);
}

void				AGuismoRequireris::on_add_account_from_db(const QString &name, const QString &key)
{
	_accounts.insert(name, key);
}

void				AGuismoRequireris::on_delete_account_triggered()
{
	if (ui.keyListWidget->currentItem() != NULL)
	{
		QString		name(ui.keyListWidget->currentItem()->text().left(ui.keyListWidget->currentItem()->text().indexOf("\n")));
		accounts_type::iterator	it = _accounts.find(name);
		
		if (it != _accounts.end())
			_accounts.erase(it);
	}
}

void				AGuismoRequireris::refreshKeys()
{
	QDateTime		local(QDateTime::currentDateTime());
	unsigned long	timeStamp = local.toTime_t() / 30;
	QString			display;

	ui.keyListWidget->clear();

	 for (accounts_type::iterator	it = _accounts.begin(); it != _accounts.end(); ++it)
	 {
		display.clear();
		display += it.key();
		display += "\n";
		display += 	QString::number(generateCode(it.value().toStdString(), timeStamp));
		ui.keyListWidget->addItem(new QListWidgetItem(display));
	 }
}

bool				AGuismoRequireris::loadDb()
{
	QFile file("./Database/accounts.txt");

	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		qDebug() << "Error no database found !";
        return false;
	}

    QTextStream in(&file);
	QString line;
	while (!in.atEnd())
	{
		line = in.readLine();
		if (line.size() >= 5 && line.size() <= 100 && line.lastIndexOf("*") != -1)
		{
			if (line.left(line.lastIndexOf("*")).size() >= 2 && line.right(line.size() - line.lastIndexOf("*") - 1).size() > 2)
			{
				on_add_account_from_db(line.left(line.lastIndexOf("*")), line.right(line.size() - line.lastIndexOf("*") - 1));
			}
		}
	}
	file.close();
	return true;
}

void				AGuismoRequireris::showTime()
{
	_timeLabel->setText(_time.currentTime().toString());
}

bool				AGuismoRequireris::addToDb(const QString &name, const QString &key)
{
	QFile			file("./Database/accounts.txt");
	QString			entry;

	if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
	{
		qDebug() << "Error no database found !";
        return false;
	}
	entry += "\n";
	entry += name;
	entry += "*";
	entry += key;
	entry += "\n";
	file.write(entry.toStdString().c_str());
	file.close();
	return true;
}