#include <iostream>

using namespace std;

void func(int a)
{
    a = 1;
}

void func1(int &a)
{
    a = 2;
}

void func2(int *a)
{
    *a = 3;
}

int main()
{
    int value = 5;
    cout << "value =\t" << value << endl;

    func(value);
    cout << "func value =\t" << value << endl;
    func1(value);
    cout << "func1 value =\t" << value << endl;
    func2(&value);
    cout << "func2 value =\t" << value << endl;

    return 0;
}
