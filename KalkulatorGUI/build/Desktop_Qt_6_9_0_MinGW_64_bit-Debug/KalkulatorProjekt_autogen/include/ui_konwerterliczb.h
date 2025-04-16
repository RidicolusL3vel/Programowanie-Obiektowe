/********************************************************************************
** Form generated from reading UI file 'konwerterliczb.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KONWERTERLICZB_H
#define UI_KONWERTERLICZB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_KonwerterLiczb
{
public:
    QGridLayout *gridLayout;
    QPushButton *convert;
    QComboBox *chooseInput;
    QComboBox *chooseOutput;
    QTextEdit *Input;
    QTextEdit *Output;

    void setupUi(QDialog *KonwerterLiczb)
    {
        if (KonwerterLiczb->objectName().isEmpty())
            KonwerterLiczb->setObjectName("KonwerterLiczb");
        KonwerterLiczb->resize(327, 153);
        KonwerterLiczb->setMinimumSize(QSize(327, 153));
        KonwerterLiczb->setMaximumSize(QSize(327, 153));
        gridLayout = new QGridLayout(KonwerterLiczb);
        gridLayout->setObjectName("gridLayout");
        convert = new QPushButton(KonwerterLiczb);
        convert->setObjectName("convert");
        QFont font;
        font.setPointSize(15);
        convert->setFont(font);

        gridLayout->addWidget(convert, 2, 0, 1, 1);

        chooseInput = new QComboBox(KonwerterLiczb);
        chooseInput->setObjectName("chooseInput");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chooseInput->sizePolicy().hasHeightForWidth());
        chooseInput->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(false);
        chooseInput->setFont(font1);

        gridLayout->addWidget(chooseInput, 0, 1, 1, 1);

        chooseOutput = new QComboBox(KonwerterLiczb);
        chooseOutput->setObjectName("chooseOutput");
        sizePolicy.setHeightForWidth(chooseOutput->sizePolicy().hasHeightForWidth());
        chooseOutput->setSizePolicy(sizePolicy);
        chooseOutput->setFont(font1);

        gridLayout->addWidget(chooseOutput, 4, 1, 1, 1);

        Input = new QTextEdit(KonwerterLiczb);
        Input->setObjectName("Input");
        Input->setFont(font);

        gridLayout->addWidget(Input, 0, 0, 1, 1);

        Output = new QTextEdit(KonwerterLiczb);
        Output->setObjectName("Output");
        Output->setFont(font);
        Output->setReadOnly(true);

        gridLayout->addWidget(Output, 4, 0, 1, 1);


        retranslateUi(KonwerterLiczb);

        QMetaObject::connectSlotsByName(KonwerterLiczb);
    } // setupUi

    void retranslateUi(QDialog *KonwerterLiczb)
    {
        KonwerterLiczb->setWindowTitle(QCoreApplication::translate("KonwerterLiczb", "Konwerter Liczb", nullptr));
        convert->setText(QCoreApplication::translate("KonwerterLiczb", "\342\206\223 Konwertuj", nullptr));
        Input->setPlaceholderText(QCoreApplication::translate("KonwerterLiczb", "Wpisz Liczb\304\231", nullptr));
        Output->setPlaceholderText(QCoreApplication::translate("KonwerterLiczb", "Wynik", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KonwerterLiczb: public Ui_KonwerterLiczb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KONWERTERLICZB_H
