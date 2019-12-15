#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void slog_RangeSlider_lower_changed(int value);
    void slog_RangeSlider_upper_changed(int value);
    void slog_RangeSlider_changevalue(int v1,int v2);
    void slog_RangeSlider_slidingfinish();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
