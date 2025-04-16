/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kalkulator
{
public:
    QAction *actionAutor;
    QAction *actionKonwerter;
    QAction *motywJasny;
    QAction *motywCiemny;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Calcbutton_6;
    QPushButton *Calcbutton_coma;
    QPushButton *Calcbutton_0;
    QPushButton *readMemory;
    QPushButton *Calcbutton_3;
    QPushButton *Calcbutton_minus;
    QPushButton *Calcbutton_modulo;
    QPushButton *Calcbutton_2;
    QPushButton *Calcbutton_8;
    QPushButton *PI;
    QPushButton *Calcbutton_equals;
    QPushButton *Calcbutton_7;
    QPushButton *Calcbutton_clear;
    QPushButton *Calcbutton_9;
    QPushButton *memorySet;
    QPushButton *Calcbutton_multiply;
    QPushButton *Calcbutton_1;
    QPushButton *Calcbutton_5;
    QPushButton *Calcbutton_plus;
    QPushButton *Calcbutton_divide;
    QPushButton *Calcbutton_4;
    QPushButton *Calcbutton_sign;
    QLineEdit *lcdDisplay;
    QPushButton *sqrt;
    QPushButton *clearMemory;
    QMenuBar *menubar;
    QMenu *menuOpcje;
    QMenu *menuMotyw;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Kalkulator)
    {
        if (Kalkulator->objectName().isEmpty())
            Kalkulator->setObjectName("Kalkulator");
        Kalkulator->resize(366, 491);
        Kalkulator->setMinimumSize(QSize(366, 491));
        Kalkulator->setMaximumSize(QSize(366, 491));
        actionAutor = new QAction(Kalkulator);
        actionAutor->setObjectName("actionAutor");
        actionKonwerter = new QAction(Kalkulator);
        actionKonwerter->setObjectName("actionKonwerter");
        motywJasny = new QAction(Kalkulator);
        motywJasny->setObjectName("motywJasny");
        motywJasny->setCheckable(true);
        motywCiemny = new QAction(Kalkulator);
        motywCiemny->setObjectName("motywCiemny");
        motywCiemny->setCheckable(true);
        centralwidget = new QWidget(Kalkulator);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(3, 3));
        centralwidget->setMaximumSize(QSize(369, 450));
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"	background-color: #E0FFFF;\n"
"	color: #000000;\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Calcbutton_6 = new QPushButton(centralwidget);
        Calcbutton_6->setObjectName("Calcbutton_6");
        sizePolicy.setHeightForWidth(Calcbutton_6->sizePolicy().hasHeightForWidth());
        Calcbutton_6->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        Calcbutton_6->setFont(font);
        Calcbutton_6->setAutoFillBackground(false);
        Calcbutton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #C0C0C0;\n"
"	color: #000000;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #696969;\n"
"	color: #000000;\n"
"	font: 700 15pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Calcbutton_6, 4, 2, 1, 1);

        Calcbutton_coma = new QPushButton(centralwidget);
        Calcbutton_coma->setObjectName("Calcbutton_coma");
        sizePolicy.setHeightForWidth(Calcbutton_coma->sizePolicy().hasHeightForWidth());
        Calcbutton_coma->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        Calcbutton_coma->setFont(font1);
        Calcbutton_coma->setAutoFillBackground(false);
        Calcbutton_coma->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(Calcbutton_coma, 6, 0, 1, 1);

        Calcbutton_0 = new QPushButton(centralwidget);
        Calcbutton_0->setObjectName("Calcbutton_0");
        sizePolicy.setHeightForWidth(Calcbutton_0->sizePolicy().hasHeightForWidth());
        Calcbutton_0->setSizePolicy(sizePolicy);
        Calcbutton_0->setFont(font);
        Calcbutton_0->setAutoFillBackground(false);
        Calcbutton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #C0C0C0;\n"
"	color: #000000;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #696969;\n"
"	color: #000000;\n"
"	font: 700 15pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Calcbutton_0, 6, 1, 1, 1);

        readMemory = new QPushButton(centralwidget);
        readMemory->setObjectName("readMemory");
        sizePolicy.setHeightForWidth(readMemory->sizePolicy().hasHeightForWidth());
        readMemory->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        readMemory->setFont(font2);
        readMemory->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(readMemory, 2, 3, 1, 1);

        Calcbutton_3 = new QPushButton(centralwidget);
        Calcbutton_3->setObjectName("Calcbutton_3");
        sizePolicy.setHeightForWidth(Calcbutton_3->sizePolicy().hasHeightForWidth());
        Calcbutton_3->setSizePolicy(sizePolicy);
        Calcbutton_3->setFont(font);
        Calcbutton_3->setAutoFillBackground(false);
        Calcbutton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #C0C0C0;\n"
"	color: #000000;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #696969;\n"
"	color: #000000;\n"
"	font: 700 15pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Calcbutton_3, 3, 2, 1, 1);

        Calcbutton_minus = new QPushButton(centralwidget);
        Calcbutton_minus->setObjectName("Calcbutton_minus");
        sizePolicy.setHeightForWidth(Calcbutton_minus->sizePolicy().hasHeightForWidth());
        Calcbutton_minus->setSizePolicy(sizePolicy);
        Calcbutton_minus->setFont(font1);
        Calcbutton_minus->setAutoFillBackground(false);
        Calcbutton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(Calcbutton_minus, 4, 3, 1, 1);

        Calcbutton_modulo = new QPushButton(centralwidget);
        Calcbutton_modulo->setObjectName("Calcbutton_modulo");
        sizePolicy.setHeightForWidth(Calcbutton_modulo->sizePolicy().hasHeightForWidth());
        Calcbutton_modulo->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setItalic(false);
        Calcbutton_modulo->setFont(font3);
        Calcbutton_modulo->setAutoFillBackground(false);
        Calcbutton_modulo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(Calcbutton_modulo, 7, 3, 1, 1);

        Calcbutton_2 = new QPushButton(centralwidget);
        Calcbutton_2->setObjectName("Calcbutton_2");
        sizePolicy.setHeightForWidth(Calcbutton_2->sizePolicy().hasHeightForWidth());
        Calcbutton_2->setSizePolicy(sizePolicy);
        Calcbutton_2->setFont(font);
        Calcbutton_2->setAutoFillBackground(false);
        Calcbutton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #C0C0C0;\n"
"	color: #000000;\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #696969;\n"
"	color: #000000;\n"
"	font: 700 15pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Calcbutton_2, 3, 1, 1, 1);

        Calcbutton_8 = new QPushButton(centralwidget);
        Calcbutton_8->setObjectName("Calcbutton_8");
        sizePolicy.setHeightForWidth(Calcbutton_8->sizePolicy().hasHeightForWidth());
        Calcbutton_8->setSizePolicy(sizePolicy);
        Calcbutton_8->setFont(font);
        Calcbutton_8->setAutoFillBackground(false);
        Calcbutton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #C0C0C0;\n"
"	color: #000000;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #696969;\n"
"	color: #000000;\n"
"	font: 700 15pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Calcbutton_8, 5, 1, 1, 1);

        PI = new QPushButton(centralwidget);
        PI->setObjectName("PI");
        sizePolicy.setHeightForWidth(PI->sizePolicy().hasHeightForWidth());
        PI->setSizePolicy(sizePolicy);
        PI->setFont(font2);
        PI->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #C0C0C0;\n"
"	color: #000000;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #696969;\n"
"	color: #000000;\n"
"	font: 700 15pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(PI, 7, 1, 1, 1);

        Calcbutton_equals = new QPushButton(centralwidget);
        Calcbutton_equals->setObjectName("Calcbutton_equals");
        sizePolicy.setHeightForWidth(Calcbutton_equals->sizePolicy().hasHeightForWidth());
        Calcbutton_equals->setSizePolicy(sizePolicy);
        Calcbutton_equals->setFont(font1);
        Calcbutton_equals->setAutoFillBackground(false);
        Calcbutton_equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(Calcbutton_equals, 6, 2, 1, 1);

        Calcbutton_7 = new QPushButton(centralwidget);
        Calcbutton_7->setObjectName("Calcbutton_7");
        sizePolicy.setHeightForWidth(Calcbutton_7->sizePolicy().hasHeightForWidth());
        Calcbutton_7->setSizePolicy(sizePolicy);
        Calcbutton_7->setFont(font);
        Calcbutton_7->setAutoFillBackground(false);
        Calcbutton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #C0C0C0;\n"
"	color: #000000;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #696969;\n"
"	color: #000000;\n"
"	font: 700 15pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Calcbutton_7, 5, 0, 1, 1);

        Calcbutton_clear = new QPushButton(centralwidget);
        Calcbutton_clear->setObjectName("Calcbutton_clear");
        sizePolicy.setHeightForWidth(Calcbutton_clear->sizePolicy().hasHeightForWidth());
        Calcbutton_clear->setSizePolicy(sizePolicy);
        Calcbutton_clear->setFont(font3);
        Calcbutton_clear->setAutoFillBackground(false);
        Calcbutton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(Calcbutton_clear, 2, 0, 1, 1);

        Calcbutton_9 = new QPushButton(centralwidget);
        Calcbutton_9->setObjectName("Calcbutton_9");
        sizePolicy.setHeightForWidth(Calcbutton_9->sizePolicy().hasHeightForWidth());
        Calcbutton_9->setSizePolicy(sizePolicy);
        Calcbutton_9->setFont(font);
        Calcbutton_9->setAutoFillBackground(false);
        Calcbutton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #C0C0C0;\n"
"	color: #000000;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #696969;\n"
"	color: #000000;\n"
"	font: 700 15pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Calcbutton_9, 5, 2, 1, 1);

        memorySet = new QPushButton(centralwidget);
        memorySet->setObjectName("memorySet");
        sizePolicy.setHeightForWidth(memorySet->sizePolicy().hasHeightForWidth());
        memorySet->setSizePolicy(sizePolicy);
        memorySet->setFont(font2);
        memorySet->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(memorySet, 2, 2, 1, 1);

        Calcbutton_multiply = new QPushButton(centralwidget);
        Calcbutton_multiply->setObjectName("Calcbutton_multiply");
        sizePolicy.setHeightForWidth(Calcbutton_multiply->sizePolicy().hasHeightForWidth());
        Calcbutton_multiply->setSizePolicy(sizePolicy);
        Calcbutton_multiply->setFont(font1);
        Calcbutton_multiply->setAutoFillBackground(false);
        Calcbutton_multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(Calcbutton_multiply, 5, 3, 1, 1);

        Calcbutton_1 = new QPushButton(centralwidget);
        Calcbutton_1->setObjectName("Calcbutton_1");
        sizePolicy.setHeightForWidth(Calcbutton_1->sizePolicy().hasHeightForWidth());
        Calcbutton_1->setSizePolicy(sizePolicy);
        Calcbutton_1->setFont(font);
        Calcbutton_1->setAutoFillBackground(false);
        Calcbutton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #C0C0C0;\n"
"	color: #000000;\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #696969;\n"
"	color: #000000;\n"
"	font: 700 15pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Calcbutton_1, 3, 0, 1, 1);

        Calcbutton_5 = new QPushButton(centralwidget);
        Calcbutton_5->setObjectName("Calcbutton_5");
        sizePolicy.setHeightForWidth(Calcbutton_5->sizePolicy().hasHeightForWidth());
        Calcbutton_5->setSizePolicy(sizePolicy);
        Calcbutton_5->setFont(font);
        Calcbutton_5->setAutoFillBackground(false);
        Calcbutton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #C0C0C0;\n"
"	color: #000000;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #696969;\n"
"	color: #000000;\n"
"	font: 700 15pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Calcbutton_5, 4, 1, 1, 1);

        Calcbutton_plus = new QPushButton(centralwidget);
        Calcbutton_plus->setObjectName("Calcbutton_plus");
        sizePolicy.setHeightForWidth(Calcbutton_plus->sizePolicy().hasHeightForWidth());
        Calcbutton_plus->setSizePolicy(sizePolicy);
        Calcbutton_plus->setFont(font1);
        Calcbutton_plus->setAutoFillBackground(false);
        Calcbutton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(Calcbutton_plus, 3, 3, 1, 1);

        Calcbutton_divide = new QPushButton(centralwidget);
        Calcbutton_divide->setObjectName("Calcbutton_divide");
        sizePolicy.setHeightForWidth(Calcbutton_divide->sizePolicy().hasHeightForWidth());
        Calcbutton_divide->setSizePolicy(sizePolicy);
        Calcbutton_divide->setFont(font1);
        Calcbutton_divide->setAutoFillBackground(false);
        Calcbutton_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(Calcbutton_divide, 6, 3, 1, 1);

        Calcbutton_4 = new QPushButton(centralwidget);
        Calcbutton_4->setObjectName("Calcbutton_4");
        sizePolicy.setHeightForWidth(Calcbutton_4->sizePolicy().hasHeightForWidth());
        Calcbutton_4->setSizePolicy(sizePolicy);
        Calcbutton_4->setFont(font);
        Calcbutton_4->setAutoFillBackground(false);
        Calcbutton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #C0C0C0;\n"
"	color: #000000;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #696969;\n"
"	color: #000000;\n"
"	font: 700 15pt \"Segoe UI\";\n"
"}"));

        gridLayout->addWidget(Calcbutton_4, 4, 0, 1, 1);

        Calcbutton_sign = new QPushButton(centralwidget);
        Calcbutton_sign->setObjectName("Calcbutton_sign");
        sizePolicy.setHeightForWidth(Calcbutton_sign->sizePolicy().hasHeightForWidth());
        Calcbutton_sign->setSizePolicy(sizePolicy);
        Calcbutton_sign->setFont(font3);
        Calcbutton_sign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(Calcbutton_sign, 7, 0, 1, 1);

        lcdDisplay = new QLineEdit(centralwidget);
        lcdDisplay->setObjectName("lcdDisplay");
        sizePolicy.setHeightForWidth(lcdDisplay->sizePolicy().hasHeightForWidth());
        lcdDisplay->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Agency FB")});
        font4.setPointSize(36);
        font4.setBold(true);
        lcdDisplay->setFont(font4);
        lcdDisplay->setMouseTracking(false);
        lcdDisplay->setStyleSheet(QString::fromUtf8("QLineEdit#lcdDisplay{\n"
"	border: 5px solid black;\n"
"	background-color: #C0C0C0;\n"
"	color: #000000;\n"
"}"));
        lcdDisplay->setMaxLength(32900);
        lcdDisplay->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lcdDisplay->setReadOnly(true);

        gridLayout->addWidget(lcdDisplay, 0, 0, 1, 4);

        sqrt = new QPushButton(centralwidget);
        sqrt->setObjectName("sqrt");
        sizePolicy.setHeightForWidth(sqrt->sizePolicy().hasHeightForWidth());
        sqrt->setSizePolicy(sizePolicy);
        sqrt->setFont(font1);
        sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(sqrt, 7, 2, 1, 1);

        clearMemory = new QPushButton(centralwidget);
        clearMemory->setObjectName("clearMemory");
        sizePolicy.setHeightForWidth(clearMemory->sizePolicy().hasHeightForWidth());
        clearMemory->setSizePolicy(sizePolicy);
        clearMemory->setFont(font2);
        clearMemory->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #FF8C00;\n"
"	color: #000000\n"
"}\n"
"QPushButton:pressed {\n"
"	border-radius: 15px;\n"
"	background-color: solid;\n"
"	background-color: #00FF00;\n"
"	color: #000000\n"
"}"));

        gridLayout->addWidget(clearMemory, 2, 1, 1, 1);

        Kalkulator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Kalkulator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 366, 21));
        menuOpcje = new QMenu(menubar);
        menuOpcje->setObjectName("menuOpcje");
        menuMotyw = new QMenu(menuOpcje);
        menuMotyw->setObjectName("menuMotyw");
        Kalkulator->setMenuBar(menubar);
        statusbar = new QStatusBar(Kalkulator);
        statusbar->setObjectName("statusbar");
        Kalkulator->setStatusBar(statusbar);

        menubar->addAction(menuOpcje->menuAction());
        menuOpcje->addAction(actionAutor);
        menuOpcje->addAction(menuMotyw->menuAction());
        menuOpcje->addAction(actionKonwerter);
        menuMotyw->addAction(motywJasny);
        menuMotyw->addAction(motywCiemny);

        retranslateUi(Kalkulator);

        QMetaObject::connectSlotsByName(Kalkulator);
    } // setupUi

    void retranslateUi(QMainWindow *Kalkulator)
    {
        Kalkulator->setWindowTitle(QCoreApplication::translate("Kalkulator", "Kalkulator", nullptr));
        actionAutor->setText(QCoreApplication::translate("Kalkulator", "Autor", nullptr));
        actionKonwerter->setText(QCoreApplication::translate("Kalkulator", "Konwerter", nullptr));
        motywJasny->setText(QCoreApplication::translate("Kalkulator", "Jasny", nullptr));
#if QT_CONFIG(shortcut)
        motywJasny->setShortcut(QCoreApplication::translate("Kalkulator", "Ctrl+Shift+J", nullptr));
#endif // QT_CONFIG(shortcut)
        motywCiemny->setText(QCoreApplication::translate("Kalkulator", "Ciemny", nullptr));
#if QT_CONFIG(shortcut)
        motywCiemny->setShortcut(QCoreApplication::translate("Kalkulator", "Ctrl+Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
        Calcbutton_6->setText(QCoreApplication::translate("Kalkulator", "6", nullptr));
        Calcbutton_coma->setText(QCoreApplication::translate("Kalkulator", ",", nullptr));
        Calcbutton_0->setText(QCoreApplication::translate("Kalkulator", "0", nullptr));
        readMemory->setText(QCoreApplication::translate("Kalkulator", "MR", nullptr));
        Calcbutton_3->setText(QCoreApplication::translate("Kalkulator", "3", nullptr));
        Calcbutton_minus->setText(QCoreApplication::translate("Kalkulator", "-", nullptr));
        Calcbutton_modulo->setText(QCoreApplication::translate("Kalkulator", "%", nullptr));
        Calcbutton_2->setText(QCoreApplication::translate("Kalkulator", "2", nullptr));
        Calcbutton_8->setText(QCoreApplication::translate("Kalkulator", "8", nullptr));
        PI->setText(QCoreApplication::translate("Kalkulator", "\317\200", nullptr));
        Calcbutton_equals->setText(QCoreApplication::translate("Kalkulator", "=", nullptr));
        Calcbutton_7->setText(QCoreApplication::translate("Kalkulator", "7", nullptr));
        Calcbutton_clear->setText(QCoreApplication::translate("Kalkulator", "CE", nullptr));
        Calcbutton_9->setText(QCoreApplication::translate("Kalkulator", "9", nullptr));
        memorySet->setText(QCoreApplication::translate("Kalkulator", "M", nullptr));
        Calcbutton_multiply->setText(QCoreApplication::translate("Kalkulator", "\303\227", nullptr));
        Calcbutton_1->setText(QCoreApplication::translate("Kalkulator", "1", nullptr));
        Calcbutton_5->setText(QCoreApplication::translate("Kalkulator", "5", nullptr));
        Calcbutton_plus->setText(QCoreApplication::translate("Kalkulator", "+", nullptr));
        Calcbutton_divide->setText(QCoreApplication::translate("Kalkulator", "\303\267", nullptr));
        Calcbutton_4->setText(QCoreApplication::translate("Kalkulator", "4", nullptr));
        Calcbutton_sign->setText(QCoreApplication::translate("Kalkulator", "+/-", nullptr));
        lcdDisplay->setText(QCoreApplication::translate("Kalkulator", "0", nullptr));
        sqrt->setText(QCoreApplication::translate("Kalkulator", "\342\210\232", nullptr));
        clearMemory->setText(QCoreApplication::translate("Kalkulator", "CM", nullptr));
        menuOpcje->setTitle(QCoreApplication::translate("Kalkulator", "Opcje", nullptr));
        menuMotyw->setTitle(QCoreApplication::translate("Kalkulator", "Motyw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kalkulator: public Ui_Kalkulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
