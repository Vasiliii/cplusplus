#include <iostream>
#include <string>

using namespace std;

template <typename T>

//declaration of function
void chagerValues(T &a, T &b)
{

    T temp = a;
    a = b;
    b = temp;

}

int main()
{
    string a, b;

    cout << "Enter the first argument: ";
    cin >> a;

    cout << "Enter the second argument: ";
    cin >> b;

    cout << "\na = " << a <<endl;
    cout << "b = " << b <<endl;

    cout << "\n===================\nchange\n" <<endl;

    chagerValues(a, b);
    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;

    return 0;
}
