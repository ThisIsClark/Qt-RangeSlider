#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLayout"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
return;
    rsH = new RangeSlider(Qt::Horizontal, false, nullptr);
    rsV = new RangeSlider(Qt::Vertical, false, nullptr);
    rsHsingle = new RangeSlider(Qt::Horizontal, true, nullptr);
    rsVsingle = new RangeSlider(Qt::Vertical, true, nullptr);
//    QLayout *layout = this->layout();
//    layout->addWidget(rsH);
//    layout->addWidget(rsV);
    setCentralWidget(rsHsingle);

}

MainWindow::~MainWindow()
{
    delete ui;
}
