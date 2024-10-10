// utillity.h

// using both is redundant but safer
#pragma once

#ifndef UTILITY_H
#define UTILITY_H

#include <QString>

class Utility
{
public:

    //no constructor destructor cause this class has only static functions

    // Template function for formating a numeric  value
    template<typename T>
    static QString formNum(T value, int precision = 2)
    {
        return QString ("%1").arg(static_cast<double>(value),0, 'f', precision );
    }
};

#endif // UTILITY_H
