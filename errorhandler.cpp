// errorhandler.cpp


#include "errorhandler.h"


// constructor
ErrorHandler::ErrorHandler() {}

// destructor
ErrorHandler::~ErrorHandler(){}

// // error logging method that writes a logg file
void ErrorHandler::logError(const QString & message){
    // write logg msg to file
    QFile file("application.log");
    if (file.open(QIODevice::Append | QIODevice::Text)){
        QTextStream out(&file);
        out << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") << ": " << message << endl;
        qDebug() << "log fie written" << endl;
        file.close();
    }
}

// optimice code here !




// try out this code

// Helper function to handle input setting
void ErrorHandler::setValueAndDisplay(QLineEdit* lineEdit, std::function<void(double)> setFunction,
                                    std::function<double()> getFunction, const QString& displayMessage)
{
    try
    {
        bool ok;
        double value = lineEdit->text().toDouble(&ok);
        if (!ok)
        {
            throw std::invalid_argument("not a number!");
        }

        setFunction(value);
        double result = getFunction();
        ui->lineDisplay->setText(displayMessage.arg(Utility::formNum(result)));
    }
    catch (const std::invalid_argument& e)
    {
        ui->lineDisplay->setText(e.what());
        lineEdit->clear();
    }
    catch (...)
    {
        ui->lineDisplay->setText("an unknown error has occurred!");
    }
}



// method for input processing
void ErrorHandler::processInput(QLineEdit *lineEdit, void (Controller::*setMethod)(double), double(Controller::*getMethod)() const, const QString &message){

    try
    {

    bool ok;
    double value = lineEdit->text().toDouble(&ok);
    if (!ok){

        throw invalid_argument("not a number!");
        ErrorHandler::logError("not a number");

    }

    // controller->setPreisProRolle(value);
    // double result= controller -> getPreisProRolle();
    // ui ->lineDisplay-> setText("Preis pro Filament-Rolle: " + Utility::formNum(result)+ " €");
}
catch(const invalid_argument &e)
{
    // utility->logError(e.what());
    // ui ->lineDisplay-> setText(e.what());
    // ui -> linePricePerRoll ->clear();
}
catch(...)
{
    // ui ->lineDisplay-> setText("an unknown error has occurred!");
}
}
