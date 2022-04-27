#include "Dynamic_queue.h"

Dynamicqueue::Dynamicqueue(){
    this->first = nullptr;
    this->last  = nullptr;
}
Dynamicqueue::~Dynamicqueue(){
    Node* tmp;
    while(this->isEmpty()){
        tmp = this->first;
        this->first = this->first->next;
        delete tmp;
    }
    this->last = nullptr;
}
bool Dynamicqueue::isEmpty(){
    return (this->first == nullptr);
}
bool Dynamicqueue::isFull(){
    Node* tmp;
    try{
        tmp = new Node;
        delete tmp;
        return false;
    } catch(std::bad_alloc exception){
        return true;
    }
}
void Dynamicqueue::enqueue(type item){
    if(this->isFull()){
        std::cout << "[S-QUEUE] ERR\n";
        std::cout << "        |=> Memory full\n";
        return;
    }
    Node* newNode = new Node;
    newNode->value = item;
    newNode->next  = nullptr;
    if( this->first == nullptr ){
        this->first = newNode;
    } else {
        this->last->next = newNode;
    }
    this->last = newNode;
}
type Dynamicqueue::dequeue(){
    if(this->isEmpty()){
        std::cout << "[S-QUEUE] Exception\n";
        std::cout << "        |=> Already empty\n";
        return 1;
    }
    Node* tmp;
    tmp = this->first;
    type item = this->first->value;
    this->first = this->first->next;
    if(this->first == nullptr){
        this->last = nullptr;
    }
    delete tmp;
    return item;
}
void Dynamicqueue::display(){
    std::cout << "[S-QUEUE] DISPLAY\n";
    std::cout << "[";
    Node *tmp = this->first;
    while(!(tmp == nullptr)){
        std::cout << tmp->value << ", ";
        tmp = tmp->next;
    }
    std::cout << "]\n";
    delete tmp;
}
