#include "signalplot.h"

signalPlot::signalPlot(QWidget *parent)
    : QWidget{parent}
{
    param1 = 0;
    param2 = 0;
    param3 = 0;
    plot = new QCustomPlot(this);

    QVBoxLayout *layout = new QVBoxLayout;
    layout -> addWidget(plot);
    this->setLayout(layout);

    plot->xAxis->setRange(-5, 5);
    plot->yAxis->setRange(-5, 5);
    plot->xAxis->grid()->setPen(QPen(Qt::gray));
    plot->yAxis->grid()->setPen(QPen(Qt::gray));
    plot->addGraph();
    plot -> replot();
}
