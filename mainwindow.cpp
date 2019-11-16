#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLayout"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
return;
    rsH = new RangeSlider(Qt::Horizontal, nullptr);
    rsV = new RangeSlider(Qt::Vertical, nullptr);
//    QLayout *layout = this->layout();
//    layout->addWidget(rsH);
//    layout->addWidget(rsV);
    setCentralWidget(rsH);

}

MainWindow::~MainWindow()
{
    delete ui;
}
