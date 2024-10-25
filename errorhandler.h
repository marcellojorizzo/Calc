//errorhandler.h

#pragma once

#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H


//#include "utility.h"
#include "controller.h"



#include <QlineEdit>
#include <functional> // get to know <-!
#include <QDateTime>
#include <QInputDialog>
#include <QDebug>

#include <QMainWindow>
#include <QFile>       // QFile needed for  QIODevice
#include <QTextStream>  // used with QTextStream
#include <QIODevice>   // direct include


using namespace std;
using namespace Qt;

class ErrorHandler
{
public:

    // constructor
    ErrorHandler();

    // destructor
    ~ErrorHandler();

// error logging method that writes a logg file
   void logError(const QString & message);

// method for input processing
   void processInput(QLineEdit* lineEdit,
                     QLineEdit* lineDisplay,
                     Controller* controller,
                     void (Controller::*setMethod)(double),
                     double (Controller::*getMethod)() const,
                     const QString &message,
                     const QString &unit);


private:

    // create a pointer to the controller
   // Controller * controller;
};

#endif // ERRORHANDLER_H
