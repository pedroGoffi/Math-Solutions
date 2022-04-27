#include "Hash.h"


Hash::Hash(
    int I,
    int P
)
{
    this->len = 0;
    this->maxItens = I;
    this->maxPosition = P;
    this->Estructure = new Person[P];
}
Hash::~Hash()
{
    delete[] this->Estructure;        
}
int Hash::HashFunction(Person person)
{
    return (person.getRa() % this->maxPosition);
}
bool Hash::isFull()
{
    return (this->len == this->maxItens);
}
int Hash::getLen()
{
    return this->len;
}
void Hash::insert(Person person)
{
    int local = this->HashFunction(person);
    this->Estructure[local] = person;
    this->len++;
}
void Hash::remove(Person person)
{
    int local = this->HashFunction(person);
    if (this->Estructure[local].getRa() != -1){
        this->Estructure[local] = Person(-1, " ");
        this->len--;
    }
}
void Hash::searchFor(Person& person, bool& search)
{
    int local = this->HashFunction(person);
    Person aux = this->Estructure[local];
    if (person.getRa() != aux.getRa()){
        search = false;
    }
    else {
        search = true;
        person = aux;
    }
}

void Hash::display()
{
    std::cout << "Hash table:\n";
    for ( size_t i=0; i<this->maxPosition; ++i ){
        if ( this->Estructure[i].getRa() != -1 ){
            std::cout 
                << i 
                << ":" 
                << this->Estructure[i].getRa() 
                << ":"
                << this->Estructure[i].getName() 
                << "\n";
        }
    }
}
