#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->widget->setMinimum(0);
    ui->widget->setMaximum(999);

    ui->label_1->setText(QString::number(0));
    ui->label_2->setText(QString::number(999));
    ui->label_3->setText("Current Value: " + QString::number(0) + "-" + QString::number(999));

    connect(ui->widget,SIGNAL(lowerValueChanged(int)), this, SLOT(slog_RangeSlider_lower_changed(int)));
    connect(ui->widget,SIGNAL(upperValueChanged(int)), this, SLOT(slog_RangeSlider_upper_changed(int)));
    connect(ui->widget, SIGNAL(rangeChanged(int,int)), this, SLOT(slog_RangeSlider_changevalue(int,int)));
    connect(ui->widget, SIGNAL(slidingFinished()), this, SLOT(slog_RangeSlider_slidingfinish()));
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slog_RangeSlider_lower_changed(int value)
{
    ui->label_1->setText(QString::number(value));
}

void MainWindow::slog_RangeSlider_upper_changed(int value)
{
    ui->label_2->setText(QString::number(value));
}

void MainWindow::slog_RangeSlider_changevalue(int v1, int v2)
{
    ui->label_3->setText("Current Value: " + QString::number(v1) + "-" + QString::number(v2));

}

void MainWindow::slog_RangeSlider_slidingfinish()
{
    int v1 = ui->widget->GetLowerValue();
    int v2 = ui->widget->GetUpperValue();

    ui->label_3->setText("Current Value: " + QString::number(v1) + "-" + QString::number(v2));
}
