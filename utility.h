// utillity.h

// using both is redundant but safer
#pragma once

#ifndef UTILITY_H
#define UTILITY_H

#include <QString>


// using namespace std;
// using namespace Qt;

class Utility
{
public:

    // constructor
    Utility();

    // destructor
    ~Utility();

    // method to use inner class
    void usingInnerClass();


    // inner class

    class LocalClass{

    public:
        // constructor (inner class)
        LocalClass();

        // destructor
        ~LocalClass();

// getter & setter

        //getter
        int getInnerNum();

        //setter
        void setInnerNum(int);

        //method
        void test();

        private:

        int innerNum;
    };


    // instance of inner class
    LocalClass Local;

// Template function for formating a numeric  value
    template<typename T>
    static QString formNum(T value, int precision = 2)
    {
        return QString ("%1").arg(static_cast<double>(value),0, 'f', precision );
    }



};

#endif // UTILITY_H
