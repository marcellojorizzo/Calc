// controller.cpp

#include "controller.h"

//  constructor that takes two pointers as parameters:
// 1. 'FilamentModel *model': A pointer to the FilamentModel object, which represents the data model (holds values like price, weight, etc.).
// 2. 'MainWindow *view': A pointer to the MainWindow object, which represents the user interface (UI).
// The controller uses these references to mediate between the model (data) and the view (UI), applying the MVC (Model-View-Controller) pattern.
Controller::Controller(DataModel * model, QMainWindow * view): model(model), view (view){

    // connect the UI buttons to the respective slots
    // Arguments von Connect; Connect takes 5 Arguments; but the 5th Argument is optional
    //QObject::connect (sender, signal,receiver, method); where method is the slot
    //manual connectierung
    // MainWindow::connect((*ui).pushButton, &QPushButton::clicked, this, &MainWindow::pushButtonSlot);
    //connect(view->linePricePerRoll, &MainWindow::on_setButton_1_clicked, this, Controller::setPreisProRolleSlot);
}


// destructor
Controller::~Controller(){}

// getter & setter

// getter
double Controller::getPreisProRolle()const {
    return model->getPreisProRolle();
}
double Controller::getGewichtProRolle() const {
   return model -> getGewichtProRolle();
}
double Controller::getGewichtProWerkstueck() const {
   return model -> getGewichtProWerkstueck();
}
double Controller::getFaktor() const {
    return model -> getFaktor();
}
double Controller::getGewinnzuschlag() const {
   return model -> getGewinnzuschlag();
}
double Controller::getMwSt() const {
   return model -> getMwSt();
}

double Controller::getAnzahlWerkstuecke() const{
    return model ->  getAnzahlWerkstuecke();
}


// setter
void Controller::setPreisProRolle(double value){
    model->setPreisProRolle(value);
}

void Controller::setGewichtProRolle(double value){
    model -> setGewichtProRolle(value);
}

void Controller::setGewichtWerkstueck(double value){
    model -> setGewichtWerkstueck(value);
}

void Controller::setFaktor(double value){
    model -> setFaktor(value);
}

void Controller::setGewinnzuschlag(double value){
    model-> setGewinnzuschlag(value);
}

void Controller::setMwSt(double value){
    model-> setMwSt(value);
}

void Controller::setAnzahlWerkstuecke(double value){
    model ->setAnzahlWerkstuecke(value);
}

// methods
double Controller::calculateTotal() const{

    return model-> calculateTotal();
}
