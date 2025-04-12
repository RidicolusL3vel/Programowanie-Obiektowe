#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Kalkulator.h"
#include <QMessageBox>

double display = 0.0;
bool isDecimal = false;
int decimalPlace = 1;
const int n = 12;
Kalkulator Calc;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    lastOperator = "";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resetButtonStyle()
{
    ui->Calcbutton_plus->setStyleSheet("");
    ui->Calcbutton_minus->setStyleSheet("");
    ui->Calcbutton_multiply->setStyleSheet("");
    ui->Calcbutton_divide->setStyleSheet("");
    ui->Calcbutton_modulo->setStyleSheet("");
    ui->sqrt->setStyleSheet("");
}

void MainWindow::doOperation()
{
    if(lastOperator == '+')
        Calc.add(display);
    else if(lastOperator == '-')
        Calc.subtract(display);
    else if(lastOperator == '*')
        Calc.multiply(display);
    else if(lastOperator == '/'){
        if(display == 0){
            QMessageBox::critical(this, "ERROR", "Nie dzieli się przez 0!");
            clearDisplay();
            return;
        }
        Calc.divide(display);
    }
    else if(lastOperator == '%'){
        if(display == 0){
            QMessageBox::critical(this, "ERROR", "Nie dzieli się przez 0!");
            clearDisplay();
            return;
        }
        Calc.modulo(display);
    }
    ui->lcdDisplay->setText(QString::number(Calc.getMemory(), 'g', n));
    display = Calc.getMemory();
}

void MainWindow::clearDisplay()
{
    display = 0;
    Calc.erase();
    isDecimal = false;
    decimalPlace = 1;

    ui->lcdDisplay->setText(QString::number(display , 'g', n));

    resetButtonStyle();
}

void MainWindow::on_Calcbutton_1_clicked()
{
    if (!isDecimal) {
        display = display * 10 + 1;
    } else {
        display = display + 1.0 / pow(10, decimalPlace);
        decimalPlace++;
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}

void MainWindow::on_Calcbutton_2_clicked()
{
    if (!isDecimal) {
        display = display * 10 + 2;
    } else {
        display = display + 2.0 / pow(10, decimalPlace);
        decimalPlace++;
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}

void MainWindow::on_Calcbutton_3_clicked()
{
    if (!isDecimal) {
        display = display * 10 + 3;
    } else {
        display = display + 3.0 / pow(10, decimalPlace);
        decimalPlace++;
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}

void MainWindow::on_Calcbutton_4_clicked()
{
    if (!isDecimal) {
        display = display * 10 + 4;
    } else {
        display = display + 4.0 / pow(10, decimalPlace);
        decimalPlace++;
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_5_clicked()
{
    if (!isDecimal) {
        display = display * 10 + 5;
    } else {
        display = display + 5.0 / pow(10, decimalPlace);
        decimalPlace++;
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_6_clicked()
{
    if (!isDecimal) {
        display = display * 10 + 6;
    } else {
        display = display + 6.0 / pow(10, decimalPlace);
        decimalPlace++;
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_7_clicked()
{
    if (!isDecimal) {
        display = display * 10 + 7;
    } else {
        display = display + 7.0 / pow(10, decimalPlace);
        decimalPlace++;
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_8_clicked()
{
    if (!isDecimal) {
        display = display * 10 + 8;
    } else {
        display = display + 8.0 / pow(10, decimalPlace);
        decimalPlace++;
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_9_clicked()
{
    if (!isDecimal) {
        display = display * 10 + 9;
    } else {
        display = display + 9.0 / pow(10, decimalPlace);
        decimalPlace++;
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_0_clicked()
{
    if (!isDecimal) {
        display = display * 10 + 0;
    } else {
        display = display + 0.0 / pow(10, decimalPlace);
        decimalPlace++;
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_clear_clicked()
{
    clearDisplay();
}

void MainWindow::on_Calcbutton_coma_clicked()
{
    if (!isDecimal) {
        isDecimal = true;
        decimalPlace = 1;
        ui->lcdDisplay->setText(QString::number(display, 'g', n) + ".");
    }
}


void MainWindow::on_Calcbutton_sign_clicked()
{
    display = -display;
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_sqrt_clicked()
{
    resetButtonStyle();

    if(display < 0){
        QMessageBox::critical(this, "ERROR", "Próba spierwiastkowania liczby ujemnej");
        clearDisplay();
        return;
    }

    display = std::sqrt(display);

    ui->lcdDisplay->setText(QString::number(display, 'g', n));

    ui->sqrt->setStyleSheet("background-color: lightgreen;");
}


void MainWindow::on_Calcbutton_plus_clicked()
{
    resetButtonStyle();

    if(lastOperator.isEmpty())
        Calc.setMemory(display);
    else
        doOperation();

    lastOperator = "+";
    display = 0;
    ui->Calcbutton_plus->setStyleSheet("background-color: lightgreen;");
}


void MainWindow::on_Calcbutton_equals_clicked()
{
    if (!lastOperator.isEmpty())
        doOperation();

    lastOperator.clear();
    resetButtonStyle();
}


void MainWindow::on_Calcbutton_minus_clicked()
{
    resetButtonStyle();

    if(lastOperator.isEmpty())
        Calc.setMemory(display);
    else
        doOperation();

    lastOperator = "-";
    display = 0;
    ui->Calcbutton_minus->setStyleSheet("background-color: lightgreen;");
}


void MainWindow::on_Calcbutton_multiply_clicked()
{
    resetButtonStyle();

    if(lastOperator.isEmpty())
        Calc.setMemory(display);
    else
        doOperation();

    lastOperator = "*";
    display = 0;
    ui->Calcbutton_multiply->setStyleSheet("background-color: lightgreen;");
}


void MainWindow::on_Calcbutton_divide_clicked()
{
    resetButtonStyle();
    //obsługa dzielenia przez 0 jest w funkcji doOperation()
    if(lastOperator.isEmpty())
        Calc.setMemory(display);
    else
        doOperation();

    lastOperator = "/";
    display = 0;
    ui->Calcbutton_divide->setStyleSheet("background-color: lightgreen;");
}


void MainWindow::on_Calcbutton_modulo_clicked()
{
    resetButtonStyle();
    //obsługa dzielenia przez 0 jest w funkcji doOperation()
    if(lastOperator.isEmpty())
        Calc.setMemory(display);
    else
        doOperation();

    lastOperator = "%";
    display = 0;
    ui->Calcbutton_modulo->setStyleSheet("background-color: lightgreen;");
}

