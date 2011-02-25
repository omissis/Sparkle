#include "vision.h"
#include "ui_vision.h"

Vision::Vision(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Vision)
{
    ui->setupUi(this);

    // Read xml config object

    // configure the ui consequently

    ui->webView->load(QUrl("http://www.google.com/"));
}

Vision::~Vision()
{
    delete ui;
}
