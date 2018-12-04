#include "Class2.h"

Class2::Class2()
{
    //ctor
}

Class2::~Class2()
{
    //dtor
}

Class2::Class2(const Class2& other)
{
    //copy ctor
}

Class2& Class2::operator=(const Class2& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
