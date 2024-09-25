//mainwindow.h

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controller.h"
#include "datamodel.h"

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
