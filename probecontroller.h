#ifndef PROBECONTROLLER_H
#define PROBECONTROLLER_H

#include <QWidget>

namespace Ui {
class probeController;
}

class probeController : public QWidget
{
    Q_OBJECT

public:
    explicit probeController(QWidget *parent = nullptr);
    ~probeController();

private slots:
    void on_probeXDSBox_valueChanged(double arg1);

    void on_probeYDSBox_valueChanged(double arg1);

    void on_probeZDSBox_valueChanged(double arg1);

    void on_probeYUpButton_clicked();

    void on_probeYDownButton_clicked();

    void on_probeXDownButton_clicked();

    void on_probeXUpButton_clicked();

    void on_probeZUpButton_clicked();

    void on_probeZDownButton_clicked();

signals:
    void positionChanged(QVector<double>);
private:

    Ui::probeController *ui;
};

#endif // PROBECONTROLLER_H
