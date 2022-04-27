#include <iostream>
#include "Dynamic_stack.h"

using namespace std;

int main(void)
{
    DynamicStack ds;
    type item;

    ds.insert(69);
    ds.insert(61);
    ds.display();
    ds.remove(); 
    ds.display();
    ds.remove();
    ds.display();
    return 69;

}
