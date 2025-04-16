#include "konwerterliczb.h"
#include "ui_konwerterliczb.h"
#include <QMessageBox>
#include <QTextEdit>

KonwerterLiczb::KonwerterLiczb(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::KonwerterLiczb)
{
    ui->setupUi(this);

    ui->chooseInput->addItems({"DEC","BIN","OCT","HEX"});
    ui->chooseOutput->addItems({"DEC","BIN","OCT","HEX"});

    ui->Output->setAlignment(Qt::AlignCenter);
    ui->Input->setAlignment(Qt::AlignCenter);
}

KonwerterLiczb::~KonwerterLiczb()
{
    delete ui;
}


QString KonwerterLiczb::konwerter(const QString& number, int inputType, int outputType)
{
    bool git;
    int num = number.toInt(&git, inputType);

    if(!git)
        return QString();

    return QString::number(num, outputType).toUpper();
}

int Input(const QString& input)
{
    if(input == "BIN") return 2;
    if(input == "OCT") return 8;
    if(input == "DEC") return 10;
    if(input == "HEX") return 16;
    return 10;
}
void KonwerterLiczb::on_convert_clicked()
{
    QString input = ui->Input->toPlainText();
    int inputType = Input(ui->chooseInput->currentText());
    int outputType = Input(ui->chooseOutput->currentText());

    QString wynik = konwerter(input, inputType, outputType);

    if(wynik.isEmpty()){
        QMessageBox::warning(this, "Błąd", "Puste pole lub niedozwolone znaki!");
        return;
    }

    ui->Output->setPlainText(wynik);
}


