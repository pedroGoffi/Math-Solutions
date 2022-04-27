#include <iostream>
#include "Hash.h"
int main(void)
{
    int size_vec = 13,  max = 6;
    std::cout
        << "The factor is: "
        << (float)max / (float)size_vec
        << "\n";

    Hash myHash(size_vec, max);

    
    Person anotherOne1(1, "michael");
    Person anotherOne2(10, "ana");
    Person anotherOne3(69, "douglas");
    Person anotherOne4(6969, "pietra");



    myHash.insert(anotherOne1);
    myHash.insert(anotherOne2);
    myHash.insert(anotherOne3);
    myHash.insert(anotherOne4);
    

    myHash.display();
    bool searchforANA = false;
    myHash.searchFor(anotherOne2, searchforANA);
    if (searchforANA){
        std::cout
            << "\t"
            << anotherOne2.getName()
            << " is in the Hash table\n";
    }

    myHash.remove(anotherOne2);
    myHash.remove(anotherOne3);
    myHash.remove(anotherOne4);

    myHash.display();
    return 0;
}
