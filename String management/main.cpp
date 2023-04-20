//Concatenate - Concatenates two strings with "-" in between
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//declaration of prototypes
void concString(char szTarget[], const char szSource[]);

int main()
{
    // reading the first string
    char szString1[260];
    cout << "Enter the string #1: ";
    cin.getline(szString1,128);

    // reading the second string
    char szString2[128];
    cout << "Enter the string #2: ";
    cin.getline(szString2,128);

    // add connector..
    concString(szString1, " - ");
    //.. and the second string...
    concString(szString1, szString2);
    // output
    cout << "\n" << szString1 << endl;
    return 0;
}

// concString - adding the string szSource to the end of the string szTarget
void concString (char szTarget[], const char szSource[])
{
    //find the end of the first line
    int targetIndex = 0;
    while(szTarget[targetIndex])
    {
        targetIndex++;
    }

    //add the second line to the first
    int sourceIndex = 0;
    while(szSource[sourceIndex])
    {
        szTarget[targetIndex] = szSource[sourceIndex];
        targetIndex++;
        sourceIndex++;
    }

    // adding null at the final
    szTarget[targetIndex] = '\0';
}
