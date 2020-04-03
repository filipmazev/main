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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void keyPressEvent(QKeyEvent * event);

private slots:
    void number_push();

    void on_pointButton_released();
    void unary_operation_pressed();
    void on_clearButton_released();
    void on_equalButton_released();
    void binary_operation_pressed();
    void on_daysButton_released();
    void on_hoursButton_released();
    void on_minutesButton_released();
    void on_secondsButton_released();
    void on_millisecondsButton_released();
    void on_convertButton_released();
    void on_infoButton_released();
    void on_closeButton_released();
    void on_offButton_released();
    void on_history_released();
    void on_saveButton_released();
};

#endif // MAINWINDOW_H
