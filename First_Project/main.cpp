#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    //Введите температуру в градусах цельсия
    int celsius;
    cout << "Enter the temp in Celsius ";
    cin >> celsius;
    // Вычисление множителя для пересчёта темпрературы
    int Factor;
    Factor = 212 - 32;
    //Использование множителя для преобразования температуры
    int Fahrenheit;
    Fahrenheit = Factor * celsius/100 + 32;
    //Вывод результата программы
    cout << "Temperature in Fahrenheit: " << endl;
    cout << Fahrenheit << endl;

    cout << "Press enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
