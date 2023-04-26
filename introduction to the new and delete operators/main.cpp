#include <iostream>

using namespace std;

int main()
{
    int *pa = new int;
    *pa = 10;
    cout << "address of pointer pa = " << pa << endl; //output address of variable
    cout << "value at the address *pa = " << *pa << endl; //output  variable at the address *pa

    delete pa;
    pa = 0;

    return 0;
}
