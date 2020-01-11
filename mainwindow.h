#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
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
    QWidget *widget;
    RangeSlider *rsH, *rsV, *rsHsingleLeft, *rsVsingleLeft, *rsHsingleRight, *rsVsingleRight;
    QHBoxLayout *layout;
};

#endif // MAINWINDOW_H
