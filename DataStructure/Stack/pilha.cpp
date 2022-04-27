#include <iostream>
#include "pilha.h"
using namespace std;

stack::stack(){
    this->len = 0;
    this->Estrutura = new type[MAX];
}
stack::~stack(){
    delete[] this->Estrutura;
}
bool stack::isFull(){
    return (this->len == MAX);
}
bool stack::isEmpty(){
    return (this->len == 0);
}
void stack::push(type item){
    if(this->isFull()){
        std::cout << "[ERROR] STACK FULL\n";
        return;
    }
    this->Estrutura[this->len+1] = item;
    this->len++;
}
type stack::pop(){
    if(this->isEmpty()){
        std::cout << "[ERROR] STACK ALREADY EMPTY\n";
        return 1;
    }
    this->len--;
    return this->Estrutura[this->len];
    
}
void stack::display(){
    std::cout<<"STACK: [ ";
    for( type i=0; i<this->len; i++ ){
        std::cout << this->Estrutura[i] << ", ";
    }
    std::cout << "]\n";
}
int stack::Len(){
    return this->len;
}

