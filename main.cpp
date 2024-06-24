#include "functions.h"
#include "mainwindow.h"

#include <QApplication>

using namespace std;
using namespace func;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
