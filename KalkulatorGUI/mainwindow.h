#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Calcbutton_1_clicked();

    void on_Calcbutton_2_clicked();

    void on_Calcbutton_3_clicked();

    void on_Calcbutton_4_clicked();

    void on_Calcbutton_5_clicked();

    void on_Calcbutton_6_clicked();

    void on_Calcbutton_7_clicked();

    void on_Calcbutton_8_clicked();

    void on_Calcbutton_9_clicked();

    void on_Calcbutton_0_clicked();

    void on_Calcbutton_clear_clicked();

    void on_Calcbutton_coma_clicked();

    void on_Calcbutton_sign_clicked();

    void on_sqrt_clicked();

    void on_Calcbutton_plus_clicked();

    void on_Calcbutton_equals_clicked();

    void on_Calcbutton_minus_clicked();

    void on_Calcbutton_multiply_clicked();

    void on_Calcbutton_divide_clicked();

    void on_Calcbutton_modulo_clicked();

private:
    Ui::MainWindow *ui;
    QString lastOperator;
    void resetButtonStyle();
    void doOperation();
    void clearDisplay();
};
#endif // MAINWINDOW_H
