#include <iostream>

using namespace std;


void func(int &a)
//�������� ������ � �������� ��������� ���������
//accepting a reference as an argument
{
    a++;
}

void func1(int *pA)
//�������� � �������� ��������� ���������
//taking a pointer as an argument
{
    (*pA)++;
}

void func2(int *pA1, int *pB, int *pC)
// ������� ������������ ��������� �������� � ������� ����������
// a function that returns multiple values using pointers
{
    (*pA1) = 555;

    (*pB)++;

    (*pC) = -20;
}


int main()
{

    int a = 0, b = 0, c = 1;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl << endl;

    func(a);

    cout << "func" << endl;
    cout << "a = " << a << endl;

    //��������� � ������� �� ������ �� �������
    func1(&a);

    cout << "func1" << endl;
    cout << "a = " << a << endl;

    cout << "====================================" << endl << endl;

    func2(&a, &b, &c);

    cout << "func2" << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
