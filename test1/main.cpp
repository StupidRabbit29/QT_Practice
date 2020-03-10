#include "hello_world.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	hello_world w;
	w.show();
	return a.exec();
}
