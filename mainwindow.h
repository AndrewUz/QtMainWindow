#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_connectButton_clicked();

    void on_actionStandardFont_triggered();
    void on_actionEnlargedFont_triggered();
    void on_actionBigFont_triggered();

    void on_flirtShowParams_clicked();

    void on_imageSizeBox_valueChanged(double arg1);

    void on_rotationBox_valueChanged(double arg1);

    void on_resolutionSpinBox_valueChanged(int arg1);

    void on_probeXDSBox_valueChanged(double arg1);

    void on_probeYDSBox_valueChanged(double arg1);

    void on_probeZDSBox_valueChanged(double arg1);

    void on_capHeightDSBox_valueChanged(double arg1);

    void on_capApprDSBox_valueChanged(double arg1);

    void on_capVoltageDSBox_valueChanged(double arg1);

    void on_capSignalDSBox_valueChanged(double arg1);

    void on_capLiquidApprButton_clicked();

    void on_capApprButton_clicked();

    void on_capScanButton_clicked();

    void on_capStopButton_clicked();

    void on_flirtHeightDSBox_valueChanged(double arg1);

    void on_flirtApprDSBox_valueChanged(double arg1);

    void on_flirtApproachButton_clicked();

    void on_flirtScanButton_clicked();

    void on_flirtStopButton_clicked();

    void on_AFMapprDSBox_valueChanged(double arg1);

    void on_AFMApprButton_clicked();

    void on_AFMScanButton_clicked();

    void on_AFMStopButton_clicked();

    void on_fb1CheckBox_stateChanged(int arg1);

    void on_fb2CheckBox_stateChanged(int arg1);

    void on_fb3CheckBox_stateChanged(int arg1);

    void on_probeYUpButton_clicked();

    void on_probeYDownButton_clicked();

    void on_probeXUpButton_clicked();

    void on_probeXDownButton_clicked();

    void on_probeZUpButton_clicked();

    void on_probeZDownButton_clicked();

private:
    Ui::MainWindow *ui;
    bool flirtAddParamsShown;
};
#endif // MAINWINDOW_H
