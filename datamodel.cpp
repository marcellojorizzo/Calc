// datamodel.cpp
#include "datamodel.h"

// standard constructor
DataModel::DataModel()
    : preisProRolle(25.00), gewichtProRolle(1000.0),gewichtProWerkstueck(100.0),faktor(2.0), gewinnzuschlag(40.0), mwst(19.0),anzahlWerkstuecke(1.00)
{}

// destructor
DataModel::~DataModel(){}

// getter
double DataModel::getPreisProRolle()const {
    return preisProRolle;
}
double DataModel::getGewichtProRolle() const {
    return gewichtProRolle;
}
double DataModel::getGewichtProWerkstueck() const {
    return gewichtProWerkstueck;
}
double DataModel::getFaktor() const {
    return faktor;
}
double DataModel::getGewinnzuschlag() const {
    return gewinnzuschlag;
}
double DataModel::getMwSt() const {
    return mwst;
}

double DataModel::getAnzahlWerkstuecke() const{
    return anzahlWerkstuecke;
}


//setter

void DataModel::setPreisProRolle(double preis){

    preisProRolle =preis;
}

void DataModel::setGewichtProRolle(double r_gewicht){
    gewichtProRolle =r_gewicht;
}

void DataModel::setGewichtWerkstueck(double w_gewicht){
    gewichtProWerkstueck = w_gewicht;
}
void DataModel::setFaktor(double value){
    faktor = value;
}
void DataModel::setGewinnzuschlag(double zuschlag){
    gewinnzuschlag = zuschlag;
}
void DataModel::setMwSt(double value){
    mwst = value;
}
void DataModel::setAnzahlWerkstuecke(double anzahl){
    anzahlWerkstuecke =anzahl;
}

//  method to calculate

double DataModel::calculateTotal()const{

    double price = (getPreisProRolle() / getGewichtProRolle());
    double weight = getGewichtProWerkstueck();
    double factor =getFaktor();
    double profit =getGewinnzuschlag();
    double tax = getMwSt();
    double amount =getAnzahlWerkstuecke();

    double cost =(price*weight*factor);
    double net_price = cost + (cost/100*profit);
    double gross_price = net_price +(net_price/100*tax);
    double total = gross_price * static_cast<double>(amount);

    return total;
}
