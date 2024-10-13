//mainwindow.h

// using both is redundant but safer
#pragma once

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// order of include
// 1st Header Files that belong to this C/C++ File
// 2nd Header Files of other compnents like Classes
// 3rd System Header Files

#include "controller.h"
#include "datamodel.h"
//#include "utility.h"
#include "errorhandler.h"

#include <QString>
#include <QMainWindow>


using namespace std;
using namespace Qt;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{

    Q_OBJECT

public:
    // constructor
    MainWindow(QWidget *parent = nullptr);
    // destructor
    ~MainWindow();


// method for input processing
 //   void setValue(QLineEdit *lineEdit, void (Controller::*setMethod)(double), double(Controller::*getMethod)() const, const QString &message);


private slots:
    void on_setButton_1_clicked();
    void on_setButton_2_clicked();
    void on_setButton_3_clicked();
    void on_setButton_4_clicked();
    void on_setButton_5_clicked();
    void on_setButton_6_clicked();
    void on_setButton_7_clicked();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    // create an instacne of the model
    DataModel model;
    // create a pointer to the controller
    Controller * controller;

    // create a pointer to the errorhandler
    ErrorHandler * errorhandler;
};
#endif // MAINWINDOW_H
