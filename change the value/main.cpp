#include <iostream>
//this program to changing the values of variables
using namespace std;

// function prototype declaration
void func(int *pA, int *pB);

int main()
{

    int a, b;
    //input the variable
    cout << "Enter the first variable: ";
    cin >> a;

    cout << "Enter the second variable: ";
    cin >> b;
    //checking variables before changing
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "\n=================================\n";

    func(&a, &b);
    //checking variables after a change
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

//descriptions of a function
// func is a function to change the variables
void func(int *pA, int *pB)
{
    int x = *pA;
    *pA = *pB;
    *pB = x;

}
