#include "loginlg.h"
#include "ui_loginlg.h"

loginlg::loginlg(QWidget *parent)
	: QDialog(parent)
{
	ui = new Ui::loginlg();
	ui->setupUi(this);
}

loginlg::~loginlg()
{
	delete ui;
}
