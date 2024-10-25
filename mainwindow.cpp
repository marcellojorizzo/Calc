 //mainwindow.cpp

#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

// constructor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    // initalize ui
    , ui(new Ui::MainWindow)
    // initalize controller
    , controller(new Controller(&model,this ))
    , errorhandler (new ErrorHandler)
{
    ui->setupUi(this);

// set Window flags to make Window aways on top
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);

// set default values
    ui -> linePricePerRoll->setText(Utility::formNum(model.getPreisProRolle()));
    ui -> lineWeightPerRoll-> setText(Utility::formNum(model.getGewichtProRolle()));
    ui -> lineWeightPerPiece -> setText(Utility::formNum(model.getGewichtProWerkstueck()));
    ui -> lineFactor -> setText(Utility::formNum(model.getFaktor()));
    ui -> lineMargin ->setText(Utility::formNum(model.getGewinnzuschlag()));
    ui -> lineTaxRate ->setText(Utility::formNum(model.getMwSt()));
    ui -> lineNumberOfPieces ->setText(Utility::formNum(model.getAnzahlWerkstuecke()));
}

// destructor
MainWindow::~MainWindow()
{
    delete ui;
    delete controller;
    delete errorhandler;
}

//price per roll
void MainWindow::on_setButton_1_clicked()
{
    errorhandler->processInput(ui-> linePricePerRoll,
                                ui->lineDisplay,
                                MainWindow::controller,
                                &Controller::setPreisProRolle,
                                &Controller::getPreisProRolle,
                               //passing msg & unit to function
                                "Preis pro Filament-Rolle: ", " €"
                               );
}

// weight per roll
void MainWindow::on_setButton_2_clicked()
{  
    errorhandler->processInput(ui->lineWeightPerRoll,
                               ui->lineDisplay,
                               MainWindow::controller,
                               &Controller::setGewichtProRolle,
                               &Controller::getGewichtProRolle,
                               //passing msg & unit to function
                               "Gewicht pro Filament-Rolle: " , " €"
                               );
}

// weight per piece
void MainWindow::on_setButton_3_clicked()
{   
    errorhandler->processInput(ui -> lineWeightPerPiece,
                               ui->lineDisplay,
                               MainWindow::controller,
                               &Controller::setGewichtWerkstueck,
                               &Controller::getGewichtProWerkstueck,
                               //passing msg & unit to function
                               "Gewicht pro Werkstück: "," g"
                               );
}

// factor
void MainWindow::on_setButton_4_clicked()
{   
    errorhandler->processInput(ui -> lineFactor,
                               ui->lineDisplay,
                               MainWindow::controller,
                               &Controller::setFaktor,
                               &Controller::getFaktor,
                               //passing msg & unit to function
                               "Der Faktor wurde auf: " , " gesetzt!"
                               );
}

// margin
void MainWindow::on_setButton_5_clicked()
{  
    errorhandler->processInput(ui -> lineMargin,
                               ui->lineDisplay,
                               MainWindow::controller,
                               &Controller::setGewinnzuschlag,
                               &Controller::getGewinnzuschlag,
                               //passing msg & unit to function
                               "Der Gewinnzuschlag beträgt: ", " %"
                               );
}

// tax rate
void MainWindow::on_setButton_6_clicked()
{
    errorhandler->processInput(ui -> lineTaxRate,
                               ui->lineDisplay,
                               MainWindow::controller,
                               &Controller::setMwSt,
                               &Controller::getMwSt,
                               //passing msg & unit to function
                               "Der MwSt-Satz beträgt: ", " %"
                               );
}

// number of pieces
void MainWindow::on_setButton_7_clicked()
{  
    errorhandler->processInput(ui -> lineNumberOfPieces,
                               ui->lineDisplay,
                               MainWindow::controller,
                               &Controller::setAnzahlWerkstuecke,
                               &Controller::getAnzahlWerkstuecke,
                               //passing msg & unit to function
                               "Es werden die Kosten für: " ," Werkstücke berechnet"
                               );
}

//calculate
void MainWindow::on_pushButton_clicked()
{
    // read values from fields
    controller->setPreisProRolle(ui->linePricePerRoll->text().toDouble());
    controller -> setGewichtProRolle(ui->lineWeightPerRoll->text().toDouble());
    controller-> setGewichtWerkstueck(ui->lineWeightPerPiece->text().toDouble());
    controller -> setFaktor(ui->lineFactor->text().toDouble());
    controller -> setGewinnzuschlag(ui->lineMargin->text().toDouble());
    controller -> setMwSt(ui-> lineTaxRate->text().toDouble());
    controller -> setAnzahlWerkstuecke(ui-> lineNumberOfPieces->text().toDouble());

    double result = controller->calculateTotal();
    // give out result
    ui ->lineDisplay-> setText("Gesamt Preis: " + Utility::formNum(result) + " €");

    // set values in felds
    ui -> linePricePerRoll->setText(Utility::formNum(model.getPreisProRolle()));
    ui -> lineWeightPerRoll-> setText(Utility::formNum(model.getGewichtProRolle()));
    ui -> lineWeightPerPiece -> setText(Utility::formNum(model.getGewichtProWerkstueck()));
    ui -> lineFactor -> setText(Utility::formNum(model.getFaktor()));
    ui -> lineMargin ->setText(Utility::formNum(model.getGewinnzuschlag()));
    ui -> lineTaxRate ->setText(Utility::formNum(model.getMwSt()));
    ui -> lineNumberOfPieces ->setText(Utility::formNum(model.getAnzahlWerkstuecke()));
}

