#include <iostream>
#include "fila.h"

int main(void)
{
    Queue queue;
    int opt;
    type item;

    std::cout << "[QUEUE]\n";
    std::cout << "      |-->Queue demnstrandum\n";
    int i = 5;
    do{
        std:: cout <<"[QUEUE] ENQUEUE: "<<i<<"\n";
        queue.enqueue(i);
        queue.display();
        i++;
    }while( i<10 );
    i = 5;
    do{
        std:: cout << "[QUEUE] DEQUEUE\n";
        queue.dequeue();
        queue.display();
        i++;
    } while(i<10);
    queue.display();


    return 0;
}
