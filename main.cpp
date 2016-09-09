#include <QApplication>
#include "table.h"

int main(int argv, char **argc)
{
	QApplication app(argv, argc);
	
	Table *list = new Table;
	list->show();
	
	return app.exec();
}

