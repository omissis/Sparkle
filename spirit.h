#ifndef SPIRIT_H
#define SPIRIT_H

#include <QMainWindow>
#include <QFile>

namespace Ui {
    class Spirit;
}

class Spirit : public QMainWindow
{
    Q_OBJECT

public:
    explicit Spirit(QFile *file, QWidget *parent = 0);
    ~Spirit();

private slots:
    void on_cancelButton_clicked();
    void on_okButton_clicked();

private:
    Ui::Spirit *ui;
};

#endif // SPIRIT_H
