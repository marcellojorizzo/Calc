// controller.h
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QMainWindow>
#include "datamodel.h"

class Controller
{


public:

    //  constructor that takes two pointers as parameters:
    // 1. 'FilamentModel *model': A pointer to the FilamentModel object, which represents the data model (holds values like price, weight, etc.).
    // 2. 'MainWindow *view': A pointer to the MainWindow object, which represents the user interface (UI).
    // The controller uses these references to mediate between the model (data) and the view (UI), applying the MVC (Model-View-Controller) pattern.
    Controller(DataModel * model, QMainWindow * view);

    // destructor
    ~Controller();

// getter & setter
    // getter
    double getPreisProRolle() const;
    double getGewichtProRolle() const;
    double getGewichtProWerkstueck() const;
    double getFaktor() const;
    double getGewinnzuschlag() const;
    double getMwSt() const;
    double getAnzahlWerkstuecke() const;

    // setter
    void setPreisProRolle(double value);
    void setGewichtProRolle(double value);
    void setGewichtWerkstueck(double value);
    void setFaktor(double value);
    void setGewinnzuschlag(double value);
    void setMwSt(double value);
    void setAnzahlWerkstuecke(double value);

// methods
    double calculateTotal() const;


private:
    // pointer to model
    DataModel * model;
    // pointer to view
    QMainWindow * view;

};

#endif // CONTROLLER_H
