// Lab_03_4.cpp
// Пазюк Сергій Андрійович
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 9
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y<= (x-1)*(x-1) && y>=x) ||
		(y<= (x-1)*(x-1) && y>=x && y>=R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}