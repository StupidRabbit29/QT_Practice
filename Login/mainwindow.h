#pragma once

#include <QtWidgets/QMainWindow>
namespace Ui { class mainwindowClass; };
//这里的类mainwindowClass是在"ui_mainwindow.h"中定义的，那个文件由mainwindow.ui自动生成的

class mainwindow : public QMainWindow
{
	Q_OBJECT

public:
	mainwindow(QWidget *parent = Q_NULLPTR);
	~mainwindow();

private slots:
	void on_pushButton_clicked();

private:
	Ui::mainwindowClass*ui;
};
