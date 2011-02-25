#ifndef VISION_H
#define VISION_H

#include <QMainWindow>

namespace Ui {
    class Vision;
}

class Vision : public QMainWindow
{
    Q_OBJECT

public:
    explicit Vision(QWidget *parent = 0);
    ~Vision();

private:
    Ui::Vision *ui;
};

#endif // VISION_H
