// Lab_03_2.cpp
// Пазюк Сергій
// Лабораторна робота № 3.4
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 9
    #include <iostream>
    #include <cmath>

    using namespace std;

    int main()
    {
    double x;
    double y;

    cout << "x = "; cin >> x;

    if (x < -7) {
        y = 0;
    }
    else if (x >= -7 && x <= -3) {
        y = x + 7;
    }
    else if (x > -3 && x < -2) {
        y = 4;
    }
    else if (x >= -2 && x <= 2) {
        y = x * x;
    }
    else if (x > 2 && x < 4) {
        y = 2 * x - 4;
    }
    else {
        y = 0;
    }

    cout << "y = " << y;

    return 0;
    }

