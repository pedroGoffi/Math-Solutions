#include "fila.h"


Queue::Queue(){
    this->first = 0;
    this->last  = 0;
    this->Estrutura = new type[MAX];
}
Queue::~Queue(){
    delete[] this->Estrutura;
}
bool Queue::isEmpty(){
    return (first == last);
}
bool Queue::isFull(){
    return (this->last - this->first == MAX);
}
void Queue::enqueue(type item){
    if(this->isFull()){
        std::cout << "[QUEUE] is full\n";
        std::cout << "      |-> Cant add new item\n";
        return;
    }
    this->Estrutura[this->last % MAX] = item;
    this->last++;

}
type Queue::dequeue(){
    if(this->isEmpty()){
        std::cout << "[QUEUE] Cant remove item";
        std::cout << "      |-> queue is already empty";
        return 0;
    }
    this->first++;
    return this->Estrutura[(this->first-1) % MAX];

}
void Queue::display(){
    std::cout << "\n[QUEUE]\n";
    std::cout << "      |-> Display mode:\n";
    std::cout << "[";
    for ( size_t i=this->first; i<this->last; ++i ){
        std::cout << this->Estrutura[ i % MAX ] << ", ";
    }
    std::cout << "]\n";
}
