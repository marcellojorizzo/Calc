// utillity.h

// using both is redundant but safer
#pragma once

#ifndef UTILITY_H
#define UTILITY_H

// Order of includes
// 1. Header files that belong to this C/C++ file
// 2. Header files of other components like classes
// 3. System header files

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
        int getInnerNum() const;

        //setter
        void setInnerNum(int);

        //method
        void test();

        private:

        int innerNum;
    };


    // instance of inner class
    LocalClass local;

// Template function for formating a numeric  value
    template<typename T>
    static QString formNum(T value, int precision = 2)
    {
        return QString ("%1").arg(static_cast<double>(value),0, 'f', precision );
    }



};

#endif // UTILITY_H
