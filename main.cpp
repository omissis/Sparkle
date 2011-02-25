#include <QtGui/QApplication>
#include "spirit.h"
#include "vision.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Load xml config file

    // Check the app mode and show the correct one

    // Remember to pass the xml obj to the window (no need to parse it twice)

    // if (mode == "spirit") {
        Spirit w;
        w.show();
    // else {
//        Vision w;
//        w.show();
    //}

    return a.exec();
}
