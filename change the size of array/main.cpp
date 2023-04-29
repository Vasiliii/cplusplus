#include <iostream>

using namespace std;

void FillArray(int* const arr, int const sz)//description of function fillArray
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

void push_back(int *&arr, int &size, const int  value)// function to add the new value into the array
{
    int *newArr = new int [size+1];

    for(int i = 0; i < size; i++ )
    {
        newArr[i] = arr[i];
    }

    newArr[size] = value;
    size++;

    delete[]arr;
    arr = newArr;
}

void pop_back(int *&arr, int &size)//function to delete last values of array
{
   size--;
   int *newArr = new int[size];

   for(int i = 0; i < size; i++)
   {
       newArr[i] = arr[i];
   }

   delete[]arr;
   arr = newArr;
}

void pop_back1(int *&arr, int &size)//function  to delete the first values of array
{
    int *newArr = new int[size];

    for (int i = 1; i < size; i++)
    {
        newArr[i - 1] = arr[i];
    }

    size--;

    delete[] arr;
    arr = newArr;

}

void pop_back2(int *&arr, int &size)//function  to delete the third values of array
{
    int* newArr = new int[size + 1];
    size--;
    for (int i = 0, j = 0; i < size; i++, j++)
        {

        if (j == 3)
        {
            newArr[i-1];
            i = 2;
        }
        else
        {
        newArr[i] = arr[j];
        }
}

delete[] arr;
arr = newArr;
}

void push_back1(int *&arr, int &size, const int value)//function to add the third values of array
{
    int* newArr = new int[size + 1];
    size++;
    for (int i = 0, j =0; i < size; i++, j++)
    {

        if (i==3)
        {
            newArr[i] = value;
            j = 2;
        }
        else
        {
            newArr[i] = arr[j];
        }
    }

    delete[] arr;
    arr = newArr;
}

int main()
{

    int size = 5;
    int *arr = new int [size];

    FillArray(arr, size);

    ShowArray(arr, size);

    push_back(arr, size, 111);
    cout << "\n=========================================\n" << endl;

    ShowArray(arr, size);

    pop_back(arr,size);
    cout << "\n=========================================\n" << endl;

    ShowArray(arr, size);

    pop_back1(arr,size);
    cout << "\n=========================================\n" << endl;

    ShowArray(arr, size);

    push_back1(arr,size,17);
    cout << "\n=========================================\n" << endl;

    ShowArray(arr,size);

    pop_back2(arr, size);
    cout << "\n=========================================\n" << endl;

    ShowArray(arr, size);


    delete[]arr;

    return 0;
}
