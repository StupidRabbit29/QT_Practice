#pragma once

#include <QtWidgets/QMainWindow>
namespace Ui { class mainwindowClass; };
//�������mainwindowClass����"ui_mainwindow.h"�ж���ģ��Ǹ��ļ���mainwindow.ui�Զ����ɵ�

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
