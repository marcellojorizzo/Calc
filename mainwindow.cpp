//mainwindow.cpp

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    // initalize ui
    , ui(new Ui::MainWindow)
    // initalize controller
    , controller(new Controller(&model,this ))
{
    ui->setupUi(this);

// set Window flags to make Window aways on top
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);

// set default values
    ui -> linePricePerRoll->setText(Utillity::formNum(model.getPreisProRolle()));
    ui -> lineWeightPerRoll-> setText(Utillity::formNum(model.getGewichtProRolle()));
    ui -> lineWeightPerPiece -> setText(Utillity::formNum(model.getGewichtProWerkstueck()));
    ui -> lineFactor -> setText(Utillity::formNum(model.getFaktor()));
    ui -> lineMargin ->setText(Utillity::formNum(model.getGewinnzuschlag()));
    ui -> lineTaxRate ->setText(Utillity::formNum(model.getMwSt()));
    ui -> lineNumberOfPieces ->setText(Utillity::formNum(model.getAnzahlWerkstuecke()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete controller;
}

void MainWindow::on_setButton_1_clicked()
{
   controller->setPreisProRolle(ui->linePricePerRoll->text().toDouble());
    double result= controller -> getPreisProRolle();
    ui ->lineDisplay-> setText("Preis pro Filament-Rolle: " + Utillity::formNum(result)+ " €");
}


void MainWindow::on_setButton_2_clicked()
{
    controller -> setGewichtProRolle(ui->lineWeightPerRoll->text().toDouble());
    double result= controller -> getGewichtProRolle();
    ui ->lineDisplay-> setText("Gewicht pro Filament-Rolle: " + Utillity::formNum(result)+ " g");
}


void MainWindow::on_setButton_3_clicked()
{
    controller-> setGewichtWerkstueck(ui->lineWeightPerPiece->text().toDouble());
    double result= controller -> getGewichtProWerkstueck();
    ui ->lineDisplay-> setText("Gewicht pro Werkstück: " + Utillity::formNum(result)+ " g");
}


void MainWindow::on_setButton_4_clicked()
{
    controller -> setFaktor(ui->lineFactor->text().toDouble());
    double result= controller -> getFaktor();
    ui ->lineDisplay-> setText("Der Faktor wurde auf: " + Utillity::formNum(result)+ " gesetzt!");
}


void MainWindow::on_setButton_5_clicked()
{
    controller -> setGewinnzuschlag(ui->lineMargin->text().toDouble());
    double result= controller -> getGewinnzuschlag();
    ui ->lineDisplay-> setText("Der Gewinnzuschlag beträgt: " + Utillity::formNum(result)+ " %");
}


void MainWindow::on_setButton_6_clicked()
{
    controller -> setMwSt(ui-> lineTaxRate->text().toDouble());
    double result= controller -> getMwSt();
    ui ->lineDisplay-> setText("Der MwSt-Satz beträgt: " + Utillity::formNum(result)+ " %");
}


void MainWindow::on_setButton_7_clicked()
{
    controller -> setAnzahlWerkstuecke(ui-> lineNumberOfPieces->text().toDouble());
    double result= controller -> getAnzahlWerkstuecke();
    ui ->lineDisplay-> setText("Es werden die Kosten für: " + Utillity::formNum(result)+ " Werkstücke berechnet");
}

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
    ui ->lineDisplay-> setText("Gesamt Preis: " + Utillity::formNum(result) + " €");
}

