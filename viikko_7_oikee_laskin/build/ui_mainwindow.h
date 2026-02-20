/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
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
    QLineEdit *num1Edit;
    QPushButton *n6Button;
    QLineEdit *resultEdit;
    QPushButton *n9Button;
    QPushButton *divideButton;
    QPushButton *minusButton;
    QPushButton *n7Button;
    QPushButton *enterButton;
    QPushButton *clearButton;
    QPushButton *n2Button;
    QPushButton *n3Button;
    QPushButton *n4hButton;
    QPushButton *n5Button;
    QLineEdit *num2Edit;
    QPushButton *plusButton;
    QPushButton *timesButton;
    QPushButton *n0Button;
    QPushButton *n8Button;
    QPushButton *n1Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        num1Edit = new QLineEdit(centralwidget);
        num1Edit->setObjectName("num1Edit");

        gridLayout->addWidget(num1Edit, 0, 0, 1, 2);

        n6Button = new QPushButton(centralwidget);
        n6Button->setObjectName("n6Button");

        gridLayout->addWidget(n6Button, 2, 3, 1, 1);

        resultEdit = new QLineEdit(centralwidget);
        resultEdit->setObjectName("resultEdit");

        gridLayout->addWidget(resultEdit, 0, 4, 1, 1);

        n9Button = new QPushButton(centralwidget);
        n9Button->setObjectName("n9Button");

        gridLayout->addWidget(n9Button, 3, 3, 1, 1);

        divideButton = new QPushButton(centralwidget);
        divideButton->setObjectName("divideButton");

        gridLayout->addWidget(divideButton, 3, 4, 1, 1);

        minusButton = new QPushButton(centralwidget);
        minusButton->setObjectName("minusButton");

        gridLayout->addWidget(minusButton, 2, 4, 1, 1);

        n7Button = new QPushButton(centralwidget);
        n7Button->setObjectName("n7Button");

        gridLayout->addWidget(n7Button, 3, 0, 1, 1);

        enterButton = new QPushButton(centralwidget);
        enterButton->setObjectName("enterButton");

        gridLayout->addWidget(enterButton, 4, 3, 1, 1);

        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");

        gridLayout->addWidget(clearButton, 4, 0, 1, 1);

        n2Button = new QPushButton(centralwidget);
        n2Button->setObjectName("n2Button");

        gridLayout->addWidget(n2Button, 1, 1, 1, 2);

        n3Button = new QPushButton(centralwidget);
        n3Button->setObjectName("n3Button");

        gridLayout->addWidget(n3Button, 1, 3, 1, 1);

        n4hButton = new QPushButton(centralwidget);
        n4hButton->setObjectName("n4hButton");

        gridLayout->addWidget(n4hButton, 2, 0, 1, 1);

        n5Button = new QPushButton(centralwidget);
        n5Button->setObjectName("n5Button");

        gridLayout->addWidget(n5Button, 2, 1, 1, 2);

        num2Edit = new QLineEdit(centralwidget);
        num2Edit->setObjectName("num2Edit");

        gridLayout->addWidget(num2Edit, 0, 2, 1, 2);

        plusButton = new QPushButton(centralwidget);
        plusButton->setObjectName("plusButton");

        gridLayout->addWidget(plusButton, 1, 4, 1, 1);

        timesButton = new QPushButton(centralwidget);
        timesButton->setObjectName("timesButton");

        gridLayout->addWidget(timesButton, 4, 4, 1, 1);

        n0Button = new QPushButton(centralwidget);
        n0Button->setObjectName("n0Button");

        gridLayout->addWidget(n0Button, 4, 1, 1, 2);

        n8Button = new QPushButton(centralwidget);
        n8Button->setObjectName("n8Button");

        gridLayout->addWidget(n8Button, 3, 1, 1, 2);

        n1Button = new QPushButton(centralwidget);
        n1Button->setObjectName("n1Button");

        gridLayout->addWidget(n1Button, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        n6Button->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        n9Button->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        divideButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        minusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        n7Button->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        enterButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        n2Button->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        n3Button->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        n4hButton->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        n5Button->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        plusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        timesButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        n0Button->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        n8Button->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        n1Button->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
