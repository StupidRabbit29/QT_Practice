#include "mainwindow.h"
#include"loginlg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	mainwindow w;
	loginlg lg;
	if (lg.exec() == QDialog::Accepted)
	{
		w.show();
		return a.exec();
	}
	else
		return 0;
}
