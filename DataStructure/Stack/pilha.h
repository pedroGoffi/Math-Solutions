#ifndef PILHA_H
#define PILHA_H value

typedef int type;
const   int MAX = 10;


class stack
{
    private:
        int len;
        type* Estrutura;
    public:
        stack();
        ~stack();
        bool isFull();
        bool isEmpty();
        void push(type item);
        type pop();
        void display();
        int Len();
};
#endif /* ifndef PILHA_H */
