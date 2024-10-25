// errorhandler.cpp


#include "errorhandler.h"



// constructor
ErrorHandler::ErrorHandler() {}

// destructor
ErrorHandler::~ErrorHandler(){}

 // error logging method that writes a logg file
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


// method for input processing
void ErrorHandler::processInput(QLineEdit* lineEdit,
                  QLineEdit* lineDisplay,
                  Controller* controller,
                  void (Controller::*setMethod)(double),
                  double (Controller::*getMethod)() const,
                  const QString &message,
                    const QString &unit){
    try
    {

    bool ok;
    double value = lineEdit->text().toDouble(&ok);
    if (!ok){

        throw invalid_argument("not a number");
        ErrorHandler::logError("not a number");

    }

    controller->setPreisProRolle(value);
    double result= controller -> getPreisProRolle();
    //lineDisplay-> setText(message + "Preis pro Filament-Rolle: " + Utility::formNum(result)+ " €");
    lineDisplay-> setText(message + Utility::formNum(result)+ unit);

}
catch(const invalid_argument &e)
{
  ErrorHandler::logError(e.what());
 lineDisplay-> setText(e.what());
   lineEdit ->clear();
}
catch(...)
{
    lineDisplay-> setText("an unknown error has occurred!");
}
}
