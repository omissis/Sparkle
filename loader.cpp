#include "loader.h"

Loader::Loader() : QObject() {
    QString fileName = ":/conf/conf.xml";

    // Open config file
    cf = new QFile(fileName);
    if (!cf->open(QFile::ReadOnly | QFile::Text)) {
       qWarning() << QObject::tr("Cannot read config file.");
       return;
    }
}

Loader::~Loader() {
}

void Loader::show() {
    QXmlQuery q;
    QString mode;

    q.setFocus(cf);
    q.setQuery("sparkle/mode/text()");
    if (!q.isValid()) return;
    q.evaluateTo(&mode);

    // rewind the file pointer to the beginning
    cf->seek(0);

    if (mode.trimmed() == "spirit") {
        mw = new Spirit(cf);
    } else {
        mw = new Vision(cf);
    }

    mw->show();
    return;
}
