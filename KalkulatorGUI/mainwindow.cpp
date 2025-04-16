#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Kalkulator.h"
#include "konwerterliczb.h"
#include <QMessageBox>

double display = 0.0;
//bool Calc.comaClicked() = false;
//int Calc.getDecimal() = 1;
const int n = 12;
Kalkulator Calc;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Kalkulator)
{
    ui->setupUi(this);

    lastOperator = "";

    operatorButtons = {
        ui->Calcbutton_plus, ui->Calcbutton_minus, ui->Calcbutton_multiply, ui->Calcbutton_divide,
        ui->Calcbutton_modulo, ui->Calcbutton_equals, ui->Calcbutton_coma, ui->Calcbutton_clear,
        ui->sqrt, ui->Calcbutton_sign, ui->clearMemory, ui->readMemory, ui->memorySet
    };

    numButtons = {
        ui->Calcbutton_0, ui->Calcbutton_1, ui->Calcbutton_2, ui->Calcbutton_3,
        ui->Calcbutton_4, ui->Calcbutton_5, ui->Calcbutton_6, ui->Calcbutton_7,
        ui->Calcbutton_8, ui->Calcbutton_9, ui->PI,
    };

    theme = new QActionGroup(this);
    theme->addAction(ui->motywJasny);
    theme->addAction(ui->motywCiemny);
    theme->setExclusive(true);
    ui->motywJasny->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::motywJasny()
{
    for(QPushButton* btn : std::as_const(operatorButtons)){
        btn->setStyleSheet("QPushButton { border-radius: 15px; background-color: #FF8C00;color: #000000}"
                           "QPushButton:pressed { border-radius: 15px;background-color: #00FF00; color: #000000} "
                           );
    }
    for(QPushButton* btn : std::as_const(numButtons)){
        btn->setStyleSheet("QPushButton{ border-radius: 15px; background-color: #C0C0C0; color: #000000;}"
                           "QPushButton:pressed{ border-radius: 15px; background-color: #696969; color: #000000; font: 700 15pt \"Segoe UI\";}"
                           );
    }
    ui->centralwidget->setStyleSheet("QWidget#centralwidget{background-color: #E0FFFF; color: #000000}");
    this->setStyleSheet("QMainWindow#Kalkulator{background-color: #E0FFFF; color: #000000}");
    ui->menubar->setStyleSheet("QMenuBar#menubar{background-color: #E0FFFF; color: #000000}");
    ui->lcdDisplay->setStyleSheet("QLineEdit#lcdDisplay{border: 5px solid black ;background-color; C0C0C0; color: #000000}");
}

void MainWindow::motywCiemny()
{
    for(QPushButton* btn : std::as_const(operatorButtons)){//styl przycisków operatora dla motywu ciemnego
        btn->setStyleSheet(
            "QPushButton {border-radius: 15px;background-color: solid;background-color: #00008B;color: #FFFFFF;}"
            "QPushButton:pressed {border-radius: 15px;background-color: solid; background-color: #708090;color: #FFFFFF; }"
            );
    }
    for(QPushButton* btn : std::as_const(numButtons)){
        btn->setStyleSheet("QPushButton{ border-radius: 15px; background-color: solid; background-color: #696969; color: #FFFFFF;}"
                           "QPushButton:pressed{ border-radius: 15px; background-color: solid; background-color: #D2B48C; color: #FFFFFF; font: 700 15pt \"Segoe UI\";}"
                           );
    }
    ui->centralwidget->setStyleSheet("QWidget#centralwidget{background-color: #000000; color: #FFFFFF;}");
    this->setStyleSheet("QMainWindow#Kalkulator{background-color: #000000; color: #FFFFFF;}");
    ui->menubar->setStyleSheet("QMenuBar#menubar{background-color: #000000; color: #FFFFFF}");
    ui->lcdDisplay->setStyleSheet("QLineEdit#lcdDisplay{border: 5px solid #2F4F4F ;background-color; C0C0C0; color: #000000}");
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
    ui->lcdDisplay->setText(QString::number(Calc.getMemory(true), 'g', n));
    display = Calc.getMemory(true);
}

void MainWindow::clearDisplay()
{
    display = 0;
    Calc.erase();
    Calc.resetDecimal();

    ui->lcdDisplay->setText(QString::number(display , 'g', n));
}

void MainWindow::on_Calcbutton_1_clicked()
{
    if (!Calc.comaClicked()) {
        display = display * 10 + 1;
    } else {
        display = display + 1.0 / pow(10, Calc.getDecimal());
        Calc.addDecimal();
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));;
}

void MainWindow::on_Calcbutton_2_clicked()
{
    if (!Calc.comaClicked()) {
        display = display * 10 + 2;
    } else {
        display = display + 2.0 / pow(10, Calc.getDecimal());
        Calc.addDecimal();
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}

void MainWindow::on_Calcbutton_3_clicked()
{
    if (!Calc.comaClicked()) {
        display = display * 10 + 3;
    } else {
        display = display + 3.0 / pow(10, Calc.getDecimal());
        Calc.addDecimal();
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}

void MainWindow::on_Calcbutton_4_clicked()
{
    if (!Calc.comaClicked()) {
        display = display * 10 + 4;
    } else {
        display = display + 4.0 / pow(10, Calc.getDecimal());
        Calc.addDecimal();
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_5_clicked()
{
    if (!Calc.comaClicked()) {
        display = display * 10 + 5;
    } else {
        display = display + 5.0 / pow(10, Calc.getDecimal());
        Calc.addDecimal();
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_6_clicked()
{
    if (!Calc.comaClicked()) {
        display = display * 10 + 6;
    } else {
        display = display + 6.0 / pow(10, Calc.getDecimal());
        Calc.addDecimal();
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_7_clicked()
{
    if (!Calc.comaClicked()) {
        display = display * 10 + 7;
    } else {
        display = display + 7.0 / pow(10, Calc.getDecimal());
        Calc.addDecimal();
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_8_clicked()
{
    if (!Calc.comaClicked()) {
        display = display * 10 + 8;
    } else {
        display = display + 8.0 / pow(10, Calc.getDecimal());
        Calc.addDecimal();
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_9_clicked()
{
    if (!Calc.comaClicked()) {
        display = display * 10 + 9;
    } else {
        display = display + 9.0 / pow(10, Calc.getDecimal());
        Calc.addDecimal();
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_0_clicked()
{
    if (!Calc.comaClicked()) {
        display = display * 10 + 0;
    } else {
        display = display + 0.0 / pow(10, Calc.getDecimal());
        Calc.addDecimal();
    }
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_clear_clicked()
{
    clearDisplay();
}

void MainWindow::on_Calcbutton_coma_clicked()
{
    if (!Calc.comaClicked()) {
        Calc.resetDecimal();
        Calc.isDecimalNum();
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
    if(display < 0){
        QMessageBox::critical(this, "ERROR", "Próba spierwiastkowania liczby ujemnej");
        clearDisplay();
        return;
    }

    display = std::sqrt(display);

    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_Calcbutton_plus_clicked()
{

    if(lastOperator.isEmpty())
        Calc.setCache(display);
    else
        doOperation();

    lastOperator = "+";
    display = 0;
    Calc.resetDecimal();
}


void MainWindow::on_Calcbutton_equals_clicked()
{
    if (!lastOperator.isEmpty())
        doOperation();

    lastOperator.clear();
    Calc.resetDecimal();
}


void MainWindow::on_Calcbutton_minus_clicked()
{
    if(lastOperator.isEmpty())
        Calc.setCache(display);
    else
        doOperation();

    lastOperator = "-";
    display = 0;
    Calc.resetDecimal();
}


void MainWindow::on_Calcbutton_multiply_clicked()
{
    if(lastOperator.isEmpty())
        Calc.setCache(display);
    else
        doOperation();

    lastOperator = "*";
    display = 0;
    Calc.resetDecimal();
}


void MainWindow::on_Calcbutton_divide_clicked()
{
    //obsługa dzielenia przez 0 jest w funkcji doOperation()
    if(lastOperator.isEmpty())
        Calc.setCache(display);
    else
        doOperation();

    lastOperator = "/";
    display = 0;
    Calc.resetDecimal();
}


void MainWindow::on_Calcbutton_modulo_clicked()
{
    //obsługa dzielenia przez 0 jest w funkcji doOperation()
    if(lastOperator.isEmpty())
        Calc.setCache(display);
    else
        doOperation();

    lastOperator = "%";
    display = 0;
    Calc.resetDecimal();
}


void MainWindow::on_actionAutor_triggered()
{
    QMessageBox::information(this, "Autor Kalkulatora", "Jan Bieszczad\nIndeks: 287097\nWydział W12N", QMessageBox::Close, QMessageBox::Close);
}



void MainWindow::on_motywCiemny_triggered(bool checked)
{
    if(checked){
        motywCiemny();
    }
}


void MainWindow::on_readMemory_clicked()
{
    display = Calc.getMemory(false);
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
    Calc.resetDecimal();
}


void MainWindow::on_memorySet_clicked()
{
    Calc.setMemory(display);
    clearDisplay();
    Calc.resetDecimal();
}


void MainWindow::on_clearMemory_clicked()
{
    Calc.setMemory(0);
}


void MainWindow::on_PI_clicked()
{
    display = M_PI;
    ui->lcdDisplay->setText(QString::number(display, 'g', n));
}


void MainWindow::on_motywJasny_triggered(bool checked)
{
    if(checked){
        motywJasny();
    }
}


void MainWindow::on_actionKonwerter_triggered()
{
    KonwerterLiczb *konw = new KonwerterLiczb();
    konw->setAttribute(Qt::WA_DeleteOnClose);
    konw->exec();
}

