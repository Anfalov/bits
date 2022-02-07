#include<iostream>

using namespace std;

int main()
{
    /*unsigned int a, i;
    cin >> a >> i;
    // Посмотреть, поднят ли i-ый бит
    cout << bool(a & (1 << i)) << " ";
    cout << ((a >> i) & 1) << endl; // Лучше так
    // Инвертировать i-ый бит
    cout << (a ^ (1 << i)) << endl;
    // Умножить / поделить число на 2 в степени i
    cout << (a << i) << " " << (a >> i) << endl;
    // Проверить делимость числа на степень двойки
    cout << ((a >> i) << i) == a << " ";
    cout << (((1 << i) - 1) & a) == 0 << endl;
    // Проверить что a == i
    cout << !(a ^ i) << endl;
    // Проверка на нечётность
    cout << (a & 1) << endl;
    // Поменять значения переменных a и i местами
    a ^= i ^= a ^= i;
    // Вывести двоичное представление числа a
    cout << a << " " << i << endl;
    for (int i = 31; i >= 0; i--)
        cout << ((a >> i) & 1);
    cout << endl;*/
    /*int b;
    cin >> b;
    // Найти младшую единичку
    cout << (b & (-b));*/
    // Перебор всех подмасок
    /*int m = 0b1011; // число в двоичном формате
    int p = m;
    while (p > 0)
    {
        cout << p << endl;
        p = (p - 1) & m;
    }*/
    // Полный перебор
    int n = 3;
    for (int mask = 1; mask < (1 << n); mask++)
    {
        for (int j = n - 1; j >= 0; j--)
            cout << ((mask >> j) & 1) << " ";
        cout << endl;
    }
}
