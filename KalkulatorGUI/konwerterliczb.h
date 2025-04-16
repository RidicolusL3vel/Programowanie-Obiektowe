#ifndef KONWERTERLICZB_H
#define KONWERTERLICZB_H

#include <QDialog>
#include <QAbstractScrollArea>

namespace Ui {
class KonwerterLiczb;
}

class KonwerterLiczb : public QDialog
{
    Q_OBJECT

public:
    explicit KonwerterLiczb(QWidget *parent = nullptr);
    ~KonwerterLiczb();

private slots:
    void on_convert_clicked();

private:
    Ui::KonwerterLiczb *ui;
    QString konwerter(const QString& number, int inputType, int outputType);
};

#endif // KONWERTERLICZB_H
