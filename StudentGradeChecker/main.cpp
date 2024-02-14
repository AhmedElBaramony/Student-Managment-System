#include "mainwindow.h"
#include "classes.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    getFromFile(SGC::sgc,SGC::sl);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
