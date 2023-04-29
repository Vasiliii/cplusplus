#include <iostream>

using namespace std;

int strLenght(char *str)
{
    int res;

    while(str[res] != '\0')
    {
        res++;
    }

    return res;
}

int main()
{
    char *str = "Hello";

    cout << strLenght(str) << endl;

    return 0;
}
