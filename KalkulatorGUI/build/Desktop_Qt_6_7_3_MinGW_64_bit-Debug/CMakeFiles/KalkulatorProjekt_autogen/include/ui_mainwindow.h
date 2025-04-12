/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Calcbutton_7;
    QPushButton *Calcbutton_9;
    QPushButton *Calcbutton_0;
    QPushButton *Calcbutton_modulo;
    QPushButton *Calcbutton_4;
    QPushButton *Calcbutton_equals;
    QPushButton *Calcbutton_5;
    QPushButton *Calcbutton_2;
    QPushButton *Calcbutton_sign;
    QPushButton *Calcbutton_6;
    QPushButton *Calcbutton_clear;
    QPushButton *Calcbutton_8;
    QPushButton *sqrt;
    QPushButton *Calcbutton_plus;
    QPushButton *Calcbutton_multiply;
    QPushButton *Calcbutton_minus;
    QPushButton *Calcbutton_divide;
    QPushButton *Calcbutton_coma;
    QPushButton *Calcbutton_1;
    QPushButton *Calcbutton_3;
    QLineEdit *lcdDisplay;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(356, 472);
        MainWindow->setMinimumSize(QSize(356, 472));
        MainWindow->setMaximumSize(QSize(356, 472));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Calcbutton_7 = new QPushButton(centralwidget);
        Calcbutton_7->setObjectName("Calcbutton_7");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calcbutton_7->sizePolicy().hasHeightForWidth());
        Calcbutton_7->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        Calcbutton_7->setFont(font);
        Calcbutton_7->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_7, 3, 0, 1, 1);

        Calcbutton_9 = new QPushButton(centralwidget);
        Calcbutton_9->setObjectName("Calcbutton_9");
        sizePolicy.setHeightForWidth(Calcbutton_9->sizePolicy().hasHeightForWidth());
        Calcbutton_9->setSizePolicy(sizePolicy);
        Calcbutton_9->setFont(font);
        Calcbutton_9->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_9, 3, 2, 1, 1);

        Calcbutton_0 = new QPushButton(centralwidget);
        Calcbutton_0->setObjectName("Calcbutton_0");
        sizePolicy.setHeightForWidth(Calcbutton_0->sizePolicy().hasHeightForWidth());
        Calcbutton_0->setSizePolicy(sizePolicy);
        Calcbutton_0->setFont(font);
        Calcbutton_0->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_0, 4, 1, 1, 1);

        Calcbutton_modulo = new QPushButton(centralwidget);
        Calcbutton_modulo->setObjectName("Calcbutton_modulo");
        sizePolicy.setHeightForWidth(Calcbutton_modulo->sizePolicy().hasHeightForWidth());
        Calcbutton_modulo->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setItalic(false);
        Calcbutton_modulo->setFont(font1);
        Calcbutton_modulo->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_modulo, 5, 3, 1, 1);

        Calcbutton_4 = new QPushButton(centralwidget);
        Calcbutton_4->setObjectName("Calcbutton_4");
        sizePolicy.setHeightForWidth(Calcbutton_4->sizePolicy().hasHeightForWidth());
        Calcbutton_4->setSizePolicy(sizePolicy);
        Calcbutton_4->setFont(font);
        Calcbutton_4->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_4, 2, 0, 1, 1);

        Calcbutton_equals = new QPushButton(centralwidget);
        Calcbutton_equals->setObjectName("Calcbutton_equals");
        sizePolicy.setHeightForWidth(Calcbutton_equals->sizePolicy().hasHeightForWidth());
        Calcbutton_equals->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        Calcbutton_equals->setFont(font2);
        Calcbutton_equals->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_equals, 4, 2, 1, 1);

        Calcbutton_5 = new QPushButton(centralwidget);
        Calcbutton_5->setObjectName("Calcbutton_5");
        sizePolicy.setHeightForWidth(Calcbutton_5->sizePolicy().hasHeightForWidth());
        Calcbutton_5->setSizePolicy(sizePolicy);
        Calcbutton_5->setFont(font);
        Calcbutton_5->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_5, 2, 1, 1, 1);

        Calcbutton_2 = new QPushButton(centralwidget);
        Calcbutton_2->setObjectName("Calcbutton_2");
        sizePolicy.setHeightForWidth(Calcbutton_2->sizePolicy().hasHeightForWidth());
        Calcbutton_2->setSizePolicy(sizePolicy);
        Calcbutton_2->setFont(font);
        Calcbutton_2->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_2, 1, 1, 1, 1);

        Calcbutton_sign = new QPushButton(centralwidget);
        Calcbutton_sign->setObjectName("Calcbutton_sign");
        sizePolicy.setHeightForWidth(Calcbutton_sign->sizePolicy().hasHeightForWidth());
        Calcbutton_sign->setSizePolicy(sizePolicy);
        Calcbutton_sign->setFont(font1);

        gridLayout->addWidget(Calcbutton_sign, 5, 2, 1, 1);

        Calcbutton_6 = new QPushButton(centralwidget);
        Calcbutton_6->setObjectName("Calcbutton_6");
        sizePolicy.setHeightForWidth(Calcbutton_6->sizePolicy().hasHeightForWidth());
        Calcbutton_6->setSizePolicy(sizePolicy);
        Calcbutton_6->setFont(font);
        Calcbutton_6->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_6, 2, 2, 1, 1);

        Calcbutton_clear = new QPushButton(centralwidget);
        Calcbutton_clear->setObjectName("Calcbutton_clear");
        sizePolicy.setHeightForWidth(Calcbutton_clear->sizePolicy().hasHeightForWidth());
        Calcbutton_clear->setSizePolicy(sizePolicy);
        Calcbutton_clear->setFont(font1);
        Calcbutton_clear->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_clear, 5, 1, 1, 1);

        Calcbutton_8 = new QPushButton(centralwidget);
        Calcbutton_8->setObjectName("Calcbutton_8");
        sizePolicy.setHeightForWidth(Calcbutton_8->sizePolicy().hasHeightForWidth());
        Calcbutton_8->setSizePolicy(sizePolicy);
        Calcbutton_8->setFont(font);
        Calcbutton_8->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_8, 3, 1, 1, 1);

        sqrt = new QPushButton(centralwidget);
        sqrt->setObjectName("sqrt");
        sizePolicy.setHeightForWidth(sqrt->sizePolicy().hasHeightForWidth());
        sqrt->setSizePolicy(sizePolicy);
        sqrt->setFont(font2);

        gridLayout->addWidget(sqrt, 5, 0, 1, 1);

        Calcbutton_plus = new QPushButton(centralwidget);
        Calcbutton_plus->setObjectName("Calcbutton_plus");
        sizePolicy.setHeightForWidth(Calcbutton_plus->sizePolicy().hasHeightForWidth());
        Calcbutton_plus->setSizePolicy(sizePolicy);
        Calcbutton_plus->setFont(font2);
        Calcbutton_plus->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_plus, 1, 3, 1, 1);

        Calcbutton_multiply = new QPushButton(centralwidget);
        Calcbutton_multiply->setObjectName("Calcbutton_multiply");
        sizePolicy.setHeightForWidth(Calcbutton_multiply->sizePolicy().hasHeightForWidth());
        Calcbutton_multiply->setSizePolicy(sizePolicy);
        Calcbutton_multiply->setFont(font2);
        Calcbutton_multiply->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_multiply, 3, 3, 1, 1);

        Calcbutton_minus = new QPushButton(centralwidget);
        Calcbutton_minus->setObjectName("Calcbutton_minus");
        sizePolicy.setHeightForWidth(Calcbutton_minus->sizePolicy().hasHeightForWidth());
        Calcbutton_minus->setSizePolicy(sizePolicy);
        Calcbutton_minus->setFont(font2);
        Calcbutton_minus->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_minus, 2, 3, 1, 1);

        Calcbutton_divide = new QPushButton(centralwidget);
        Calcbutton_divide->setObjectName("Calcbutton_divide");
        sizePolicy.setHeightForWidth(Calcbutton_divide->sizePolicy().hasHeightForWidth());
        Calcbutton_divide->setSizePolicy(sizePolicy);
        Calcbutton_divide->setFont(font2);
        Calcbutton_divide->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_divide, 4, 3, 1, 1);

        Calcbutton_coma = new QPushButton(centralwidget);
        Calcbutton_coma->setObjectName("Calcbutton_coma");
        sizePolicy.setHeightForWidth(Calcbutton_coma->sizePolicy().hasHeightForWidth());
        Calcbutton_coma->setSizePolicy(sizePolicy);
        Calcbutton_coma->setFont(font2);
        Calcbutton_coma->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_coma, 4, 0, 1, 1);

        Calcbutton_1 = new QPushButton(centralwidget);
        Calcbutton_1->setObjectName("Calcbutton_1");
        sizePolicy.setHeightForWidth(Calcbutton_1->sizePolicy().hasHeightForWidth());
        Calcbutton_1->setSizePolicy(sizePolicy);
        Calcbutton_1->setFont(font);
        Calcbutton_1->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_1, 1, 0, 1, 1);

        Calcbutton_3 = new QPushButton(centralwidget);
        Calcbutton_3->setObjectName("Calcbutton_3");
        sizePolicy.setHeightForWidth(Calcbutton_3->sizePolicy().hasHeightForWidth());
        Calcbutton_3->setSizePolicy(sizePolicy);
        Calcbutton_3->setFont(font);
        Calcbutton_3->setAutoFillBackground(true);

        gridLayout->addWidget(Calcbutton_3, 1, 2, 1, 1);

        lcdDisplay = new QLineEdit(centralwidget);
        lcdDisplay->setObjectName("lcdDisplay");
        sizePolicy.setHeightForWidth(lcdDisplay->sizePolicy().hasHeightForWidth());
        lcdDisplay->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Agency FB")});
        font3.setPointSize(36);
        font3.setBold(true);
        lcdDisplay->setFont(font3);
        lcdDisplay->setMouseTracking(false);
        lcdDisplay->setMaxLength(32900);
        lcdDisplay->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lcdDisplay->setReadOnly(true);

        gridLayout->addWidget(lcdDisplay, 0, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 356, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Calcbutton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Calcbutton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Calcbutton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Calcbutton_modulo->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        Calcbutton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Calcbutton_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Calcbutton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Calcbutton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Calcbutton_sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Calcbutton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Calcbutton_clear->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        Calcbutton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        Calcbutton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Calcbutton_multiply->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        Calcbutton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Calcbutton_divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        Calcbutton_coma->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        Calcbutton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Calcbutton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        lcdDisplay->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
