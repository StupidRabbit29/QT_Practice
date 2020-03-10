#pragma once

#include <QDialog>
namespace Ui { class loginlg; };

class loginlg : public QDialog
{
	Q_OBJECT

public:
	loginlg(QWidget *parent = Q_NULLPTR);
	~loginlg();

private:
	Ui::loginlg *ui;
};
