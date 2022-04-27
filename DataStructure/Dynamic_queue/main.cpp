#include <iostream>
#include "Dynamic_queue.h"

int main(void)
{
    Dynamicqueue dq;


    dq.enqueue(1);
    dq.enqueue(2);
    dq.enqueue(3);
    dq.enqueue(4);

    dq.display();
    dq.dequeue();
    dq.display();
    dq.dequeue();
    dq.display();


    return 0;
}
