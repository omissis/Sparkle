#include "loader.h"

Loader::Loader(QMainWindow *w)
{
    mw = w;
    // Setup the reader and the handler
    handler = new XmlHandler();
    reader = new QXmlSimpleReader();

    reader->setContentHandler(handler);
    reader->setErrorHandler(handler);

    // Open config file
    QString fileName = ":/conf/conf.xml";
    QFile *file = new QFile(fileName);

    if (!file->open(QFile::ReadOnly | QFile::Text)) {
       status.message = QObject::tr("Cannot read config file.");
    }

    QXmlInputSource *xmlInputSource = new QXmlInputSource(file);

    // Parse config file
    if (reader->parse(xmlInputSource)) {
        status.message = QObject::tr("File loaded.");
    }

    free(xmlInputSource);
}

void Loader::show()
{
    qWarning() << status.message;
    mw = new Spirit();
    // if (mode == "spirit") {
        mw->show();
    // else {
//        Vision w;
//        w.show();
    //}
    return;
}
