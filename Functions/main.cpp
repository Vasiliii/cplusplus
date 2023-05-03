#include <iostream>

using namespace std;

void MainMenu();
void foo();
void instructions();
void sum();
void instructionsForFillArr();
void instructionsForPrintArr();
void FillArr(int arr[], int sz);
void PrintArr(int arr[], int sz);
int rec(int a);

int main()
{
    MainMenu();

    return 0;
}

void MainMenu()
{
    int choose, res;
    const int SIZE = 10;
    int arr[SIZE];
    cout << "Choose the function\n";
    cout << "1.Example of a function call\t2.The sum of the entered values\n\n3.Create a random array \t4.Factorial\n\n";
    cout << "5.Exit\n\n";
    cin >> choose;

    switch (choose)
    {
        case 1:
            foo();
            break;
        case 2:
            sum();
            break;
        case 3:
            FillArr(arr, SIZE);
            PrintArr(arr, SIZE);
            break;
        case 4:
            cout << "\nEnter a number to calculate the factorial" << endl;
            cin >> res;
            cout << "\n\nFactorial " << res << " is " << rec(res) << endl << endl;
            MainMenu();
            break;
    }

}

void foo()
{
    cout << "return foo\n" << endl;
    MainMenu();
}

void instructions()
{
    cout << "It's a function sum" << endl;
    cout << "It counts the sum of the numbers you entered\nuntil pass a negative number.\n" << endl;
}

void sum()
{
    int sum = 0, i;
    instructions();

    for(;;)
    {
        cout << "Enter the number: " << endl;
        cin >> i;

        if (i < 0)
        {
            break;
        }
        sum += i;
    }

    cout << "sum = " << sum << endl << endl;

    MainMenu();

}

void instructionsForFillArr()
{
    cout << "function FillArr is working\n" << endl;
}

void instructionsForPrintArr()
{
    cout << "Result work of function PrintArr\n" << endl;
}

void FillArr(int arr[], int sz)
{
    instructionsForFillArr();
    for (int i = 0; i < sz; i++)
    {
        arr[i] = rand() % 10;
    }
}

void PrintArr(int arr[], int sz)
{
    instructionsForPrintArr();
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl << endl;
    MainMenu();
}

int rec(int a)
{

    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * rec(a-1);
    }
}
