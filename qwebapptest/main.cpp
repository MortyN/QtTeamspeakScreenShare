#include "qwebapptest.h"
#include "stdafx.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qwebapptest w;
    w.show();
    return a.exec();
}
