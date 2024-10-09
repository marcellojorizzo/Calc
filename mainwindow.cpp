//mainwindow.cpp

#include "mainwindow.h"
#include "ui_mainwindow.h"


using namespace std;

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

// error logging method that writes a logg file
void MainWindow::logError(const QString & message){
    // write logg msg to file
    QFile file("application.log");
    if (file.open(QIODevice::Append | QIODevice::Text)){
        QTextStream out(&file);
        out << QDateTime::currentDateTime().toString("yyy-MM-dd hh:mm:ss") << ": " << message << "/n";
        file.close();
    }
}
// opimice code here !!
// method for input processing
void MainWindow::setValue(QLineEdit *lineEdit, void (Controller::*setMethod)(double), double(Controller::*getMethod)() const, const QString &message){

    bool ok;
    double value = lineEdit->text().toDouble(&ok);
    if (!ok){
        logError("not a number");

    }
}


//price per roll
void MainWindow::on_setButton_1_clicked()
{
    try
    {
        bool ok;
        double value = ui-> linePricePerRoll ->text().toDouble(&ok);
        if (!ok)
        {
        throw invalid_argument("not a number!");
        }

       controller->setPreisProRolle(value);
        double result= controller -> getPreisProRolle();
       ui ->lineDisplay-> setText("Preis pro Filament-Rolle: " + Utillity::formNum(result)+ " €");
    }
    catch(const invalid_argument &e)
    {
    ui ->lineDisplay-> setText(e.what());
    ui -> linePricePerRoll ->clear();
    }
    catch(...)
    {
    ui ->lineDisplay-> setText("an unknown error has occurred!");
    }
}

// weight per roll
void MainWindow::on_setButton_2_clicked()
{
    try
    {
        bool ok;
        double value = ui->lineWeightPerRoll ->text().toDouble(&ok);
        if (!ok)
        {
            throw invalid_argument("not a number!");
        }

        controller->setGewichtProRolle(value);
        double result= controller -> getGewichtProRolle();
        ui ->lineDisplay-> setText("Gewicht pro Filament-Rolle: " + Utillity::formNum(result)+ " €");
    }
    catch(const invalid_argument &e)
    {
        ui ->lineDisplay-> setText(e.what());
        ui -> lineWeightPerRoll ->clear();
    }
    catch(...)
    {
        ui ->lineDisplay-> setText("an unknown error has occurred!");
    }
}

// weight per piece
void MainWindow::on_setButton_3_clicked()
{
    try
    {
    bool ok;
    double value = ui -> lineWeightPerPiece->text().toDouble(&ok);
        if (!ok)
        {
            throw invalid_argument ("not a number!");
        }
    controller-> setGewichtWerkstueck(value);
    double result= controller -> getGewichtProWerkstueck();
    ui ->lineDisplay-> setText("Gewicht pro Werkstück: " + Utillity::formNum(result)+ " g");
    }
    catch (const invalid_argument &e)
    {
        ui ->lineDisplay->setText(e.what());
        ui->lineWeightPerPiece->clear();
    }
    catch(...)
    {
        ui ->lineDisplay-> setText("an unknown error has occurred!");
    }
}

// factor
void MainWindow::on_setButton_4_clicked()
{
    try
    {
        bool ok;
        double value =  ui-> lineFactor-> text().toDouble(&ok);
        if(!ok)
        {
            throw invalid_argument("not a number!");
        }
    controller -> setFaktor(value);
    double result= controller -> getFaktor();
    ui ->lineDisplay-> setText("Der Faktor wurde auf: " + Utillity::formNum(result)+ " gesetzt!");
    }
    catch (const invalid_argument &e)
    {
        ui ->lineDisplay->setText(e.what());
        ui->lineFactor->clear();
    }
    catch(...){
        ui ->lineDisplay-> setText("an unknown error has occurred!");
    }
}

// margin
void MainWindow::on_setButton_5_clicked()
{
    try
    {
        bool ok;
        double value = ui->lineMargin->text().toDouble(&ok);

        if(!ok)
        {
            throw invalid_argument("not a number!");

        }
        controller -> setGewinnzuschlag(value);
        double result = controller ->getGewinnzuschlag();
          ui ->lineDisplay-> setText("Der Gewinnzuschlag beträgt: " + Utillity::formNum(result)+ " %");
    }
    catch (const invalid_argument &e)
    {
        ui->lineDisplay->setText(e.what());
        ui ->lineMargin->clear();

    }
    catch (...)
    {
        ui->lineDisplay->setText("an unknown error has occurred!");
    }
}

// tax rate
void MainWindow::on_setButton_6_clicked()
{
    try
    {
        bool ok;
        double value = ui ->lineTaxRate->text().toDouble(&ok);
        if(!ok)
        {
            throw invalid_argument("not a number!");
        }
        controller -> setMwSt(value);
        double result= controller -> getMwSt();
        ui ->lineDisplay-> setText("Der MwSt-Satz beträgt: " + Utillity::formNum(result)+ " %");
    }
    catch (const invalid_argument &e)
    {
        ui->lineDisplay->setText(e.what());
        ui->lineTaxRate->clear();
    }
    catch(...)
    {
        ui->lineDisplay->setText("an unknown error has occurred!");
    }
}

// number of pieces
void MainWindow::on_setButton_7_clicked()
{
    try
    {
        bool ok;
        double value = ui-> lineNumberOfPieces->text().toDouble(&ok);
        if(!ok)
        {
            throw invalid_argument("not a numer !");
        }
        controller -> setAnzahlWerkstuecke(value);
        double result= controller -> getAnzahlWerkstuecke();
        ui ->lineDisplay-> setText("Es werden die Kosten für: " + Utillity::formNum(result)+ " Werkstücke berechnet");
    }
    catch (const invalid_argument &e)
    {
        ui->lineDisplay->setText(e.what());
        ui ->lineNumberOfPieces->clear();
    }
    catch(...)
    {
        ui ->lineDisplay->setText("an unknown error has occurred!");
    }
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
    ui ->lineDisplay-> setText("Gesamt Preis: " + Utillity::formNum(result) + " €");

    // set values in felds
    ui -> linePricePerRoll->setText(Utillity::formNum(model.getPreisProRolle()));
    ui -> lineWeightPerRoll-> setText(Utillity::formNum(model.getGewichtProRolle()));
    ui -> lineWeightPerPiece -> setText(Utillity::formNum(model.getGewichtProWerkstueck()));
    ui -> lineFactor -> setText(Utillity::formNum(model.getFaktor()));
    ui -> lineMargin ->setText(Utillity::formNum(model.getGewinnzuschlag()));
    ui -> lineTaxRate ->setText(Utillity::formNum(model.getMwSt()));
    ui -> lineNumberOfPieces ->setText(Utillity::formNum(model.getAnzahlWerkstuecke()));
}

