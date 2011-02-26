#include <QtGui/QApplication>
#include "loader.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow *w;

    // Load xml config file
    Loader *loader = new Loader(w);

    // Check the app mode and show the correct one
    loader->show();

    return a.exec();
}
