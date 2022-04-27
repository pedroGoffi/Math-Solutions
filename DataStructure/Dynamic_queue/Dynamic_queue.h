#ifndef DYNAMIC_QUEUE_H
#define DYNAMIC_QUEUE_H

#include <iostream>
#include <new>
typedef int type;
struct Node
{
    type value;
    Node* next;
};



class Dynamicqueue
{
private:
    Node* first;
    Node* last;

public:
    Dynamicqueue();
    virtual ~Dynamicqueue();
    bool isEmpty();
    bool isFull();
    void enqueue(type item);
    type dequeue();
    void display();
};

#endif /* DYNAMIC_QUEUE_H */
