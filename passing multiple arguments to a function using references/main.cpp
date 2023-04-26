#include <iostream>
//passing multiple arguments to a function using references
using namespace std;

//declaration of prototype of function
void func(int& a, int& b, int& c);

int main()
{

    int a = 0, b = 4, c = 34;

    cout << "a = \t" << a << endl;
    cout << "b = \t" << b << endl;
    cout << "c = \t" << c << endl;

    cout << "============================" << endl;
    cout << "Checking the function 'func'" << endl;

    func(a,b,c);
    cout << "a = \t" << a << endl;
    cout << "b = \t" << b << endl;
    cout << "c = \t" << c << endl;

    return 0;
}

//description of the fucntions
void func(int& a, int& b, int& c)
{
    a = 10;
    b *= 2;
    c -= 100;

}
