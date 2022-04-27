#include "Dynamic_stack.h"

DynamicStack::DynamicStack(){
    this->head = nullptr;
}
DynamicStack::~DynamicStack(){
    Node* tmp;
    while(!(this->head == nullptr)){
        tmp = this->head;
        this->head = this->head->next;
        delete tmp;
    }
}
bool DynamicStack::isEmpty(){
    return (this->head == nullptr);
}
bool DynamicStack::isFull(){
    Node* newNode;
    try{
        newNode = new Node;
        delete newNode;
        return false;
    }catch(std::bad_alloc exception){
        return true;
    }
}
void DynamicStack::insert(type item){
    if(this->isFull()){
        std::cout << "[D-stack] ERR\n";
        std::cout << "        |=> Not enough space in memory\n";
        return;
    }
    Node* newNode = new Node;
    newNode->value = item;
    newNode->next = this->head;
    this->head = newNode;
}
type DynamicStack::remove(){
    if(this->isEmpty()){
        std::cout << "[S-stack] Exception\n";
        std::cout << "        |=> Can't remove since d-stack already empty.\n";
        return 1;
    }
    Node* tmp = new Node;
    tmp = this->head;

    type item = this->head->value;
    this->head = this->head->next;
    delete tmp;    
    return item;
}
void DynamicStack::display(){
    Node* tmp = this->head;
    std::cout << "[S-stack]\n [";
    while(!(tmp == nullptr)){
        std::cout << tmp->value << " ";
        tmp = tmp->next;
    }
    std::cout << "]\n";
}

