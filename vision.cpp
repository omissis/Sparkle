#include "vision.h"
#include "ui_vision.h"

Vision::Vision(QFile *file, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Vision)
{
    ui->setupUi(this);

    QXmlQuery query;
    QStringList list;

    query.setFocus(file);
    query.setQuery("sparkle/webapp/*/string()");

    if (!query.isValid()) return;
    if (!query.evaluateTo(&list)) return;

    conf.url     = list.at(0).toAscii();
    conf.name    = list.at(1).toAscii();
    conf.navbar  = list.at(2).toInt();
    conf.status  = list.at(3).toInt();
    conf.navkeys = list.at(4).toInt();

    if (conf.url.isEmpty()) return;
    if (conf.name.isEmpty()) conf.name = conf.url;

    // configure the ui consequently

    // load the configured url
     ui->webView->load(QUrl(conf.url));

     // set the windows title
     this->setWindowTitle(conf.name);

     // set the navigation bar visible/invisible
     // TODO

     // set the status bar visible/invisible
     if (conf.status) ui->statusbar->show();
     else ui->statusbar->hide();

     // set the navigation keys visible/invisible
     // TODO

}

Vision::~Vision()
{
    delete ui;
}
