#include "spirit.h"
#include "ui_spirit.h"

Spirit::Spirit(QFile *file, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Spirit) {
    ui->setupUi(this);
}

Spirit::~Spirit() {
    delete ui;
}

void Spirit::on_cancelButton_clicked() {
    this->close();
}

void Spirit::on_okButton_clicked() {
    // Copy this application to the Desktop
    //QFileInfo app(QApplication::applicationFilePath());

    #ifdef Q_OS_UNIX
        #ifdef Q_OS_MAC
            // take mac app format into consideration
        #else
            // copy the app file
        #endif
    #endif

    #ifdef Q_OS_WIN
        // copy the app file
    #endif

    // Update xml conf object with current config

    // Save it into the application on the Desktop
}
