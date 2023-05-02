#include <iostream>
#include <string>

using namespace std;

void desplayInfo();

string DataFromBD()
{
    return "Data From BD";
}

string DataFromWebServer()
{
    return "Data from Web server";
}

void ShowInfo(string (*foo)())
{
    cout << foo() << endl;
}

int main()
{
    desplayInfo();
    int choose;
    cin >> choose;

    if (choose == 1)
    {
        ShowInfo(DataFromBD);
    }
    else (choose == 2);
    {
        ShowInfo(DataFromWebServer);
    }

    return 0;
}

void desplayInfo()
{
    cout << "This program for displaying one of two options for the user to choose from:\n";
    cout << "1. Data from BD\t2.Data from Server\n\n";

}
