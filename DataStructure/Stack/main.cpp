#include <iostream>
#include "pilha.h"
using namespace std;

int main(void)
{
    stack pilha;
    type item;
    pilha.push(1);
    pilha.push(2);
    pilha.push(3);
    pilha.push(8);
    pilha.push(9);
    pilha.push(10);
    pilha.push(11);

    pilha.push(12);

    while(!pilha.isEmpty()){
        pilha.display();
        pilha.pop();
    }

    return 0;
}
