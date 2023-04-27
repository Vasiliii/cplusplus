#include <iostream>

using namespace std;

void FeelArray(int* const arr, int const sz)//description of function fellArray
{
    for(int i = 0; i < sz; i++)
    {
        arr[i] = rand() % 10;
    }
}

void ShowArray(const int* const arr, int const sz)//description of function ShowArray
{
    for(int i = 0; i < sz; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int sz = 10;
    int *arr1 = new int [sz];
    int *arr2 = new int [sz];

    FeelArray(arr1, sz);// feel the array
    FeelArray(arr2, sz);

    cout << "First array =\t";
    ShowArray(arr1, sz);//show the array
    cout << "Second array =\t";
    ShowArray(arr2, sz);

    cout << "\n\t===================================\t\n" << endl;

    delete[]arr1;

    arr1 = new int[sz];
    for(int i = 0; i < sz; i++)
    {
        arr1[i] = arr2 [i];
    }

    cout << "First array =\t";
    ShowArray(arr1, sz);//show the array
    cout << "Second array =\t";
    ShowArray(arr2, sz);


    delete[]arr1;
    delete[]arr2;

    return 0;
}
