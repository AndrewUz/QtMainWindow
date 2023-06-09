#include "probecontroller.h"
#include "ui_probecontroller.h"

probeController::probeController(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::probeController)
{
    ui->setupUi(this);
    ui->probeXDownButton->setAutoRepeat(true);
    ui->probeXUpButton->setAutoRepeat(true);
    ui->probeYDownButton->setAutoRepeat(true);
    ui->probeYUpButton->setAutoRepeat(true);
    ui->probeZDownButton->setAutoRepeat(true);
    ui->probeZUpButton->setAutoRepeat(true);
    this->setLayout(ui->mainLayout);
}

probeController::~probeController()
{
    delete ui;
}

void probeController::on_probeXDSBox_valueChanged(double arg1)
{
    qDebug() << QString("X coordinate set to %1").arg(arg1);
    QVector<double> res;
    res.push_back(ui->probeXDSBox->value());
    res.push_back(ui->probeYDSBox->value());
    res.push_back(ui->probeZDSBox->value());
    emit positionChanged(res);
}


void probeController::on_probeYDSBox_valueChanged(double arg1)
{
     qDebug() << QString("Y coordinate set to %1").arg(arg1);
     QVector<double> res;
     res.push_back(ui->probeXDSBox->value());
     res.push_back(ui->probeYDSBox->value());
     res.push_back(ui->probeZDSBox->value());
     emit positionChanged(res);
}


void probeController::on_probeZDSBox_valueChanged(double arg1)
{
     qDebug() << QString("Z coordinate set to %1").arg(arg1);
     QVector<double> res;
     res.push_back(ui->probeXDSBox->value());
     res.push_back(ui->probeYDSBox->value());
     res.push_back(ui->probeZDSBox->value());
     emit positionChanged(res);
}


void probeController::on_probeYUpButton_clicked()
{
    double value =  ui -> probeYDSBox -> value() +  ui -> probeYDSBox -> singleStep();
    if(value <= ui-> probeYDSBox->maximum())
        ui -> probeYDSBox -> setValue(value);
}


void probeController::on_probeYDownButton_clicked()
{
    double value =  ui -> probeYDSBox -> value() -  ui -> probeYDSBox -> singleStep();
    if(value >= ui-> probeYDSBox->minimum())
        ui -> probeYDSBox -> setValue(value);
}


void probeController::on_probeXUpButton_clicked()
{
    double value =  ui -> probeXDSBox -> value() +  ui -> probeXDSBox -> singleStep();
    if(value <= ui-> probeXDSBox->maximum())
        ui -> probeXDSBox -> setValue(value);
}


void probeController::on_probeXDownButton_clicked()
{
    double value =  ui -> probeXDSBox -> value() -  ui -> probeXDSBox -> singleStep();
    if(value >= ui-> probeXDSBox->minimum())
        ui -> probeXDSBox -> setValue(value);
}


void probeController::on_probeZUpButton_clicked()
{
    double value =  ui -> probeZDSBox -> value() +  ui -> probeZDSBox -> singleStep();
    if(value <= ui-> probeZDSBox->maximum())
        ui -> probeZDSBox -> setValue(value);
}


void probeController::on_probeZDownButton_clicked()
{
    double value =  ui -> probeZDSBox -> value() -  ui -> probeZDSBox -> singleStep();
    if(value >= ui-> probeZDSBox->minimum())
        ui -> probeZDSBox -> setValue(value);
}

