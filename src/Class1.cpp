#include "Class1.h"

Class1::Class1()
{
    //ctor
}

Class1::~Class1()
{
    //dtor
}

Class1::Class1(const Class1& other)
{
    //copy ctor
}

Class1& Class1::operator=(const Class1& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
