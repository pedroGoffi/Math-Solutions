#ifndef FILA_H
#define FILA_H
#include <iostream>

typedef int type;
const   int MAX = 69;

class Queue
{
private:
    int first, last;
    type* Estrutura;

public:
    Queue();
    virtual ~Queue();
    bool isEmpty();
    bool isFull();
    void enqueue(type item); // similar to push
    type dequeue(); // similar to pop
    void display();

};

#endif /* FILA_H */
