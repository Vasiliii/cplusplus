#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    //������� ����������� � �������� �������
    int celsius;
    cout << "Enter the temp in Celsius ";
    cin >> celsius;
    // ���������� ��������� ��� ��������� ������������
    int Factor;
    Factor = 212 - 32;
    //������������� ��������� ��� �������������� �����������
    int Fahrenheit;
    Fahrenheit = Factor * celsius/100 + 32;
    //����� ���������� ���������
    cout << "Temperature in Fahrenheit: " << endl;
    cout << Fahrenheit << endl;

    cout << "Press enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
