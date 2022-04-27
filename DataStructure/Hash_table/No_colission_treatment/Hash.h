#ifndef HASH_H
#define HASH_H

#include "Person.h"

class Hash
{
private:
    int HashFunction(Person person);
    int maxItens;
    int maxPosition;
    int len;
    Person* Estructure;

public:
    Hash(int,int);
    virtual ~Hash();
    //bool isEmpty();
    bool isFull();
    int getLen();
    void insert(Person);
    void remove(Person);
    void searchFor(Person&,bool&);
    void display();
};

#endif /* HASH_H */
