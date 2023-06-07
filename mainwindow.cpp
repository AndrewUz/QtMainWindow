#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->centralwidget->setLayout(ui->MainLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_connectButton_clicked()
{
    ui->IPlabel->hide();
}

