#include "Person.h"


Person::Person()
{
    this->ra = -1;
    this->name = "@";
}
Person::Person(int r, std::string n)
{
    this->ra    = r;
    this->name  = n;
}
int Person::getRa()
{
    return this->ra;
}
std::string Person::getName()
{
    return this->name;
}
