/********************************************************************************
** Form generated from reading UI file 'konwerter.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KONWERTER_H
#define UI_KONWERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_konwerter
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *konwerter)
    {
        if (konwerter->objectName().isEmpty())
            konwerter->setObjectName("konwerter");
        konwerter->resize(800, 600);
        centralwidget = new QWidget(konwerter);
        centralwidget->setObjectName("centralwidget");
        konwerter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(konwerter);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        konwerter->setMenuBar(menubar);
        statusbar = new QStatusBar(konwerter);
        statusbar->setObjectName("statusbar");
        konwerter->setStatusBar(statusbar);

        retranslateUi(konwerter);

        QMetaObject::connectSlotsByName(konwerter);
    } // setupUi

    void retranslateUi(QMainWindow *konwerter)
    {
        konwerter->setWindowTitle(QCoreApplication::translate("konwerter", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class konwerter: public Ui_konwerter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KONWERTER_H
