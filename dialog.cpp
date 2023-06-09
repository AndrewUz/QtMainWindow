#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::updatePosition(QVector<double> coords)
{
    ui->xLabel->setText(QString("X coord: %1").arg(coords[0]));
    ui->yLabel->setText(QString("Y coord: %1").arg(coords[1]));
    ui->zLabel->setText(QString("Z coord: %1").arg(coords[2]));
}
