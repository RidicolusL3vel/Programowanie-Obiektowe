#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qpushbutton.h>
#include <QActionGroup>

QT_BEGIN_NAMESPACE
namespace Ui {
class Kalkulator;
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

    void on_actionAutor_triggered();

    void on_motywCiemny_triggered(bool checked);

    void on_readMemory_clicked();

    void on_memorySet_clicked();

    void on_clearMemory_clicked();

    void on_PI_clicked();

    void on_motywJasny_triggered(bool checked);

    void on_actionKonwerter_triggered();

private:
    Ui::Kalkulator *ui;
    QString lastOperator;
    //void resetButtonStyle();
    void doOperation();
    void clearDisplay();
    //void defaultOperatorButtonStyle();
    QVector<QPushButton*> operatorButtons;
    QVector<QPushButton*> numButtons;
    QActionGroup* theme;
    void motywJasny();
    void motywCiemny();
};
#endif // MAINWINDOW_H
