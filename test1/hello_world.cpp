#include "hello_world.h"
#include "ui_hello_world.h"

#include <iostream>
#include <string>
#include <sstream>

// using namespace std;
hello_world::hello_world(QWidget *parent)
	: QMainWindow(parent), 
	ui(new Ui::hello_worldClass)
{
	ui->setupUi(this);

	std::stringstream ss;
	ss << "hello " << '\t' << "world" << '\n' << "hello" << "     world";
	ss << "\ntest again";
	ss << "\ntest";

	ui->label->setText(QString::fromLocal8Bit(ss.str().c_str()));
}

hello_world::~hello_world()
{
	delete ui;
}