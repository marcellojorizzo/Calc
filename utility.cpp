// utility.ccp

// Order of includes
// 1. Header files that belong to this C/C++ file
// 2. Header files of other components like classes
// 3. System header files

#include "utility.h"
#include <iostream>

// constructor initializes the member local when creating an object of the Utility class.
Utility::Utility() : local(){}

// destructor
Utility::~Utility(){}


// method to use inner class
void Utility::usingInnerClass(){

    std::cout << "functions to call method of inner class \n";
    local.test();
}

// constructor for inner class
Utility::LocalClass::LocalClass(){}

// destructor for inner class
Utility::LocalClass::~LocalClass(){}


// getter & setter of inner class

//getter
int Utility::LocalClass::getInnerNum() const{
    return innerNum;
};

//setter
void Utility::LocalClass::setInnerNum(int num){
    innerNum = num;
};

// test method of inner class
void Utility::LocalClass::test(){

    std::cout << "inner class method call \n";
}


