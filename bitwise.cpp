#include <iostream>
using namespace std;

main()

{

    unsigned int a = 60;
    unsigned int b = 13;
    int c = 0;

    c = a & b;
    cout << "the value of c is:" << c<< endl;
    c = a | b;
    cout << "the value of c is:" <<c<< endl;

    c = a ^ b;
    cout << "the value of c is:" <<c<< endl;

    c = ~a;
    cout << "the value of c is:" <<c<< endl;

    c = a << 2;
    cout << "the value of c is:" <<c<< endl;

    c = a >> 2;
    cout << "the value of c is:" <<c<< endl;
    return 0;
}