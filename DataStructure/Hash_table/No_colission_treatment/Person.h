#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person
{
private:
    int ra;
    std::string name;

public:
    Person();
    Person(int, std::string);
    int getRa();
    std::string getName();

};

#endif /* PERSON_H */
