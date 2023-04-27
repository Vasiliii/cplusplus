#include <iostream>

using namespace std;

int main()
{

    int size = 5;
    int *arr = new int[size];

    for(int i=0; i < size; i++)
    {

        arr[i] = i + 2;

        cout << arr[i] << "\t"; // output the value
        cout << arr + i << endl; // output the address
    }

    cout << "\n===================================================\n" << endl;

    for(int i=0; i < size; i++)
    {
        cout << arr[i] << "\t"; // output the value
        cout << arr + i << endl; // output the address
    }

    delete [] arr;

    return 0;
}
