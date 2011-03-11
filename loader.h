#ifndef LOADER_H
#define LOADER_H

#include "spirit.h"
#include "vision.h"
#include <QXmlResultItems>
#include <QDebug>
#include <QFile>

class Loader : public QObject {
Q_OBJECT

private:
    QMainWindow *mw;
    QFile *cf;

public:
    Loader();
    ~Loader();
    void show();
};

#endif // LOADER_H
