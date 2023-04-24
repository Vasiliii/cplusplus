#include <iostream>

using namespace std;

int main()
{
    const int x = 6;
    int arr[x];
    int n;

    cout << "You can input only 7 numbers. Sorry :'(" << endl;

    for(int i = 0 ; i<x ; i++ )
    {
        cout << "Enter the next number: " << endl;
        cin >> n;

        arr[i] = n;

        if(i == 5)
        {
            for (int z = i; z >= 0 ; z--)
                {
                    cout << arr[z] << " ";
                }
        }
    }

    return 0;
}
