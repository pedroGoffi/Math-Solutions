#include <iostream>
#define MAX 4000000
//#define MAX 10
int main(void)

{

    long int p1     = 0;
    long int p2     = 1;
    long int a      = 1; // first term
    long int sum    = 0;
    while (a <= MAX){
        if (a%2 == 0) sum += a;
        a = p2 + p1;
        p1 = p2;
        p2 = a;

    }
    std::cout << "the sum is " << sum << "\n";
    return 0;
}
