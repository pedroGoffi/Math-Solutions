#ifndef DYNAMIC_STACK_H
#define DYNAMIC_STACK_H
#include <iostream>

typedef int type;

struct Node
{
    type value;
    Node* next;
};


class DynamicStack
{
private:
    Node* head;

public:
    DynamicStack();
    virtual ~DynamicStack();
    bool isEmpty();
    bool isFull();
    void insert(type item);
    type remove();
    void display();

};

#endif /* DYNAMIC_STACK_H */
