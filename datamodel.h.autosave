//datamodel.h

// using both is redundant but safer
#pragma once

#ifndef DATAMODEL_H
#define DATAMODEL_H

#include "utility.h"
#include <QDebug>

using namespace std;
using namespace Qt;

class DataModel
{
public:
    // standard   constructor
    DataModel();
    // destructor
    ~DataModel();


// getter and setter

 // getter
    double getPreisProRolle() const;
    double getGewichtProRolle() const;
    double getGewichtProWerkstueck() const;
    double getFaktor() const;
    double getGewinnzuschlag() const;
    double getMwSt() const;
    double getAnzahlWerkstuecke() const;

// setter
    void setPreisProRolle(double preis);
    void setGewichtProRolle(double r_gewicht);
    void setGewichtWerkstueck(double w_gewicht);
    void setFaktor(double value);
    void setGewinnzuschlag(double zuschlag);
    void setMwSt(double value);
    void setAnzahlWerkstuecke(double anzahl);

// method to calculate
    double calculateTotal() const;

private:
    double preisProRolle;
    double gewichtProRolle;
    double gewichtProWerkstueck;
    double faktor;
    double gewinnzuschlag;
    double mwst;
    double anzahlWerkstuecke;

};

#endif // DATAMODEL_H
