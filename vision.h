#ifndef VISION_H
#define VISION_H

#include <QMainWindow>
#include <QFile>
#include <QDebug>
#include <QXmlQuery>

namespace Ui {
    class Vision;
}

class Vision : public QMainWindow
{
    Q_OBJECT

public:
    explicit Vision(QFile *file, QWidget *parent = 0);
    ~Vision();

private:
    Ui::Vision *ui;
    struct WebappConf {
        QString url;
        QString name;
        bool navbar;
        bool status;
        bool navkeys;
    } conf;
};

#endif // VISION_H
