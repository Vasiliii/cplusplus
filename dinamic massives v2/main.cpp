#include <iostream>

using namespace std;

int main()
{

    int rows, cols;
    // request for the number of rows and columns
    cout << "Enter the rows: " << endl;
    cin >> rows;
    cout << "Enter the columns: " << endl;
    cin >> cols;

    cout << "\n=======================\n" << endl;


    int **arr = new int* [rows];

    for(int i = 0; i < rows; i++ ) //storing cells in memory
    {
        arr[i] = new int [cols];
    }


    for(int i = 0; i < rows; i++ ) //filling an array with data
    {
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 20;
        }
    }

    for(int i = 0; i < rows; i++ ) //output of the massive
    {
        for(int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }


    for(int i = 0; i < rows; i++ ) //cleaner the memory
    {
        delete [] arr[i];
        arr[i] = nullptr;
    }

    delete [] arr;
    arr = nullptr;

    return 0;
}
