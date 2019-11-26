#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLayout"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//    ui->setupUi(this);
//return;
    rsH = new RangeSlider(Qt::Horizontal, RangeSlider::Option::DoubleHandles, nullptr);
    rsV = new RangeSlider(Qt::Vertical, RangeSlider::Option::DoubleHandles, nullptr);
    rsHsingleLeft = new RangeSlider(Qt::Horizontal, RangeSlider::Option::LeftHandle, nullptr);
    rsVsingleLeft = new RangeSlider(Qt::Vertical, RangeSlider::Option::LeftHandle, nullptr);
    rsHsingleRight = new RangeSlider(Qt::Horizontal, RangeSlider::Option::RightHandle, nullptr);
    rsVsingleRight = new RangeSlider(Qt::Vertical, RangeSlider::Option::RightHandle, nullptr);
//    QLayout *layout = this->layout();
//    layout->addWidget(rsH);
//    layout->addWidget(rsV);
    setCentralWidget(rsH);

}

MainWindow::~MainWindow()
{
    delete ui;
}
