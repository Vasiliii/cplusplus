#include <iostream>

using namespace std;

int Sum(int a, int b, int c)
{
    return a + b + c;
}

int Sum(int a, int b)
{
    int res;

    res = a + b;

    cout << "What happened? ";

    return res;
}

double Sum(double a, double b)
{
    return a + b;
}

int main()
{

    cout <<"double Sum = " << Sum(5.53,6.45) << endl;
    cout <<"int Sum with 2 arg = " << Sum(1,4) <<endl;
    cout << "int Sum with 3 arg = " << Sum(5,5,3) << endl;

    return 0;
}
