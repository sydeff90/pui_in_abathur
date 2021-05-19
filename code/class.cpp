#include <iostream>

#include "class.h"

Class::Class()
{
    std::cout<<"constructor"<<std::endl;
}

void Class::print_num(int x)
{
    std::cout<< x <<"\n";
}

Class::~Class()
{
    std::cout<<"destructor"<<std::endl;
}

