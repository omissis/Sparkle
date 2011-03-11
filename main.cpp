#include <QtGui/QApplication>
#include <QFile>
#include "loader.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Load xml config file
    Loader *loader = new Loader();

    // Check the app mode and show the correct one
    loader->show();

    return a.exec();
}
