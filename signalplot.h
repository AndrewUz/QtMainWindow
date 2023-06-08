#ifndef SIGNALPLOT_H
#define SIGNALPLOT_H
#include "qcustomplot.h"

#include <QWidget>

class signalPlot : public QWidget
{
    Q_OBJECT
public:
    explicit signalPlot(QWidget *parent = nullptr);
private:
    double param1;
    double param2;
    double param3;
    QCustomPlot* plot;


signals:

};

#endif // SIGNALPLOT_H
