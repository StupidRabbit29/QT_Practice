#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_hello_world.h"

namespace Ui {
class hello_worldClass;
}

class hello_world : public QMainWindow
{
	Q_OBJECT

public:
	hello_world(QWidget *parent = Q_NULLPTR);
	~hello_world();

private:
	Ui::hello_worldClass*ui;
};
