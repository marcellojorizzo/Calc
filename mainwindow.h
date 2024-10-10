//mainwindow.h

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "controller.h"
#include "datamodel.h"
#include <QString>
#include <QMainWindow>
#include <QFile>
#include <QDateTime>
//#include <stdexcept>
#include<QInputDialog>

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

// error logging method that writes a logg file
    void logError(const QString & message);

// method for input processing
    void setValue(QLineEdit *lineEdit, void (Controller::*setMethod)(double), double(Controller::*getMethod)() const, const QString &message);


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
};
#endif // MAINWINDOW_H
