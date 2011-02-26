#ifndef LOADER_H
#define LOADER_H

#include <QMessageBox>
#include "xmlhandler.h"
#include "spirit.h"
#include "vision.h"

class Loader
{
private:
    struct {
        int code;
        QString message;
    } status;
    QString mode;
    QXmlSimpleReader *reader;
    XmlHandler *handler;
    QMainWindow *mw;

public:
    Loader(QMainWindow *w);
    void show();
};

#endif // LOADER_H
