#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "RangeSlider.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    RangeSlider *rsH, *rsV, *rsHsingleLeft, *rsVsingleLeft, *rsHsingleRight, *rsVsingleRight;
};

#endif // MAINWINDOW_H
