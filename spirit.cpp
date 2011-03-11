#include "spirit.h"
#include "ui_spirit.h"

Spirit::Spirit(QFile *file, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Spirit)
{
    ui->setupUi(this);
}

Spirit::~Spirit()
{
    delete ui;
}

void Spirit::on_cancelButton_clicked()
{
    this->close();
}

void Spirit::on_okButton_clicked()
{
    // Copy this application to the Desktop

    // Update xml conf object with current config

    // Save it into the application on the Desktop
}
