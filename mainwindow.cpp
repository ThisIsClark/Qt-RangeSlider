#include <QDesktopWidget>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    widget = new QWidget(this);
    rsH = new RangeSlider(Qt::Horizontal, RangeSlider::Option::DoubleHandles, nullptr);
    rsV = new RangeSlider(Qt::Vertical, RangeSlider::Option::DoubleHandles, nullptr);
    rsHsingleLeft = new RangeSlider(Qt::Horizontal, RangeSlider::Option::LeftHandle, nullptr);
    rsVsingleLeft = new RangeSlider(Qt::Vertical, RangeSlider::Option::LeftHandle, nullptr);
    rsHsingleRight = new RangeSlider(Qt::Horizontal, RangeSlider::Option::RightHandle, nullptr);
    rsVsingleRight = new RangeSlider(Qt::Vertical, RangeSlider::Option::RightHandle, nullptr);

    layout = new QHBoxLayout();
    layout->addWidget(rsH);
    layout->addWidget(rsV);
    layout->addWidget(rsHsingleLeft);
    layout->addWidget(rsVsingleLeft);
    layout->addWidget(rsHsingleRight);
    layout->addWidget(rsVsingleRight);

    widget->setLayout(layout);
    setCentralWidget(widget);
    resize(QDesktopWidget().availableGeometry(this).size() * 0.7);
}

MainWindow::~MainWindow()
{
}
