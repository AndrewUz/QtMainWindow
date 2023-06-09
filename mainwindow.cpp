#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signalplot.h"
#include "dialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->centralwidget->setLayout(ui->MainLayout);
    ui->AFMTab->setLayout(ui->AFMlayout);
    ui->flirtModeTab->setLayout(ui->flirtLayout);
    ui-> capModeTab->setLayout(ui->capLayout);

    flirtAddParamsShown = false;
    ui->flirtAddParamBox->hide();

    diag = new Dialog(this);
    connect(ui->probeControllerWidget, &probeController::positionChanged, diag, &Dialog::updatePosition);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_connectButton_clicked()
{
    qDebug("COnnect pressed");
}





void MainWindow::on_flirtShowParams_clicked()
{
    if(flirtAddParamsShown)
    {
        ui->flirtAddParamBox->hide();
        flirtAddParamsShown = false;
    }
    else
    {
        ui->flirtAddParamBox->show();
        flirtAddParamsShown = true;
    }
}

void MainWindow::on_actionStandardFont_triggered()
{

    this->setStyleSheet("QWidget {font-size: 12.5px;}");
    ui->actionBigFont->setChecked(false);
    ui->actionEnlargedFont->setChecked(false);
}

void MainWindow::on_actionEnlargedFont_triggered()
{
    this->setStyleSheet("QWidget {font-size: 14px;}");
    ui->actionStandardFont->setChecked(false);
    ui->actionBigFont->setChecked(false);
}

void MainWindow::on_actionBigFont_triggered()
{
    this->setStyleSheet("QWidget {font-size: 16px;}");
    ui->actionEnlargedFont->setChecked(false);
    ui->actionStandardFont->setChecked(false);
}

void MainWindow::on_imageSizeBox_valueChanged(double arg1)
{
    qDebug() << QString("Image size set to %1").arg(arg1);
}


void MainWindow::on_rotationBox_valueChanged(double arg1)
{
    qDebug() << QString("Rotation angle set to %1").arg(arg1);
}


void MainWindow::on_resolutionSpinBox_valueChanged(int arg1)
{
    qDebug() << QString("Image resolution set to %1").arg(arg1);
}




void MainWindow::on_capHeightDSBox_valueChanged(double arg1)
{
     qDebug() << QString("Probe height set to %1").arg(arg1);
}


void MainWindow::on_capApprDSBox_valueChanged(double arg1)
{
     qDebug() << QString("Approach level set to %1").arg(arg1);
}


void MainWindow::on_capVoltageDSBox_valueChanged(double arg1)
{
     qDebug() << QString("Voltage set to %1").arg(arg1);
}


void MainWindow::on_capSignalDSBox_valueChanged(double arg1)
{
     qDebug() << QString("Signal level set to %1").arg(arg1);
}


void MainWindow::on_capLiquidApprButton_clicked()
{
     qDebug() << QString("Liquid approach started");
}


void MainWindow::on_capApprButton_clicked()
{
    qDebug() << QString("Sample approach started");
}


void MainWindow::on_capScanButton_clicked()
{
    qDebug() << QString("Scan started");
}


void MainWindow::on_capStopButton_clicked()
{
    qDebug() << QString("Stop");
}


void MainWindow::on_flirtHeightDSBox_valueChanged(double arg1)
{
    qDebug() << QString("Height set to %1").arg(arg1);
}


void MainWindow::on_flirtApprDSBox_valueChanged(double arg1)
{
    qDebug() << QString("Treshold set to %1").arg(arg1);
}


void MainWindow::on_flirtApproachButton_clicked()
{
    qDebug() << QString("Sample approach started");
}


void MainWindow::on_flirtScanButton_clicked()
{
    qDebug() << QString("Scan started");
}


void MainWindow::on_flirtStopButton_clicked()
{
    qDebug() << QString("Stop");
}


void MainWindow::on_AFMapprDSBox_valueChanged(double arg1)
{
    qDebug() << QString("Approach treshold set to %1").arg(arg1);
}


void MainWindow::on_AFMApprButton_clicked()
{
    qDebug() << QString("Sample approach started");
}


void MainWindow::on_AFMScanButton_clicked()
{
    qDebug() << QString("Scan started");
}


void MainWindow::on_AFMStopButton_clicked()
{
    qDebug() << QString("Stop");
}


void MainWindow::on_fb1CheckBox_stateChanged(int arg1)
{
    if(ui->fb1CheckBox->isChecked())
        qDebug() << QString("Feedback element 1 is on with parameter %1").arg(ui->fb1DSBox->value());
    else
        qDebug() << QString("Feedback element 1 is off");
}


void MainWindow::on_fb2CheckBox_stateChanged(int arg1)
{
    if(ui->fb2CheckBox->isChecked())
       qDebug() << QString("Feedback element 2 is on with parameter %1").arg(ui->fb2DSBox->value());
    else
        qDebug() << QString("Feedback element 2 is off");
}


void MainWindow::on_fb3CheckBox_stateChanged(int arg1)
{
    if(ui->fb3CheckBox->isChecked())
        qDebug() << QString("Feedback element 3 is on with parameter %1").arg(ui->fb3DSBox->value());
    else
        qDebug() << QString("Feedback element 3 is off");
}




void MainWindow::on_showWindowButton_clicked()
{
    diag->show();
}




