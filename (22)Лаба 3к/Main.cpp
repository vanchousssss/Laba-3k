// Суслов Иван. 8 вариант. Лабораторная работа 22(3к). Перегрузка операций

#include <iostream>
#include "Money.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	Money a;
	Money b;
	Money c;
	Money d;

	cin >> a;
	cin >> b;
	if (a > b)
		c = a;
	else if (a < b) 
		c = b;
	else 
		c = a + b;
	d = a + b;
	cout << "a == " << a << endl;
	cout << "b == " << b << endl;
	cout << "Сумма == " << d << endl;
	cout << "c == " << c << endl;
	

}