#include	"AGuismoRequireris.h"
#include	<QtWidgets/QApplication>
#include	<QDateTime>

#include	"base32.h"
#include	<QDebug>


int generateCode(const char *key, unsigned long tm) ;
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	AGuismoRequireris w;
	w.show();

	QDateTime local(QDateTime::currentDateTime());


	qDebug() << "Time stamp: " << local.toTime_t() / 30;

	//ipbv 3ntg 75sv yzey 6fpk 32gl akx3 thbe ghostman4284 azer4242

	qDebug() << "Token :" << generateCode("ipbv3ntg75svyzey6fpk32glakx3thbe", local.toTime_t() / 30);

	unsigned char coded[100];
	unsigned char decoded[100];

	base32_encode((const unsigned char *)"ipbv3ntg75svyzey6fpk32glakx3thbe", strlen("ipbv3ntg75svyzey6fpk32glakx3thbe"), coded,
                  100);
	qDebug() << *coded;

	base32_decode((const unsigned char *)coded, decoded, 100);
	qDebug() << *decoded;
	return a.exec();
}
