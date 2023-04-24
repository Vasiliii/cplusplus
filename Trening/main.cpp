#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    int arr[SIZE]{4,3,77,82,13};

    for(int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "====================================" << endl;

    int *pArr = arr;

    cout << " arr\t" << arr << endl;
    cout << " pArr\t" << pArr << endl;

    cout << "====================================" << endl;

    for(int i = 0; i < SIZE; i++)
    {
        cout << *(pArr+i) << endl;
    }

    cout << "====================================" << endl;

    return 0;
}
