#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginlg.h"


mainwindow::mainwindow(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::mainwindowClass)
{
	ui->setupUi(this);
	ui->pushButton->setText(QString::fromLocal8Bit("ÐÂ´°¿Ú"));
}

mainwindow::~mainwindow()
{
	delete ui;
}

void mainwindow::on_pushButton_clicked()
{
	QDialog* lg = new QDialog(this);
	lg->show();
}
