// Lab_03_2.cpp
// Пазюк Сергій
// Лабораторна робота № 3.4
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 9
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double x;
    double y;
    double r;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> r;

    if ((y * y <= r * r - x * x && y <= 0 && x <= 0) || (y * y <= r * r - x * x && y >= pow(x - 1, 2) && x >= 0)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}