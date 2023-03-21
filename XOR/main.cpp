#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a; cout << "Введите число a: "; cin >> a;
	int b; cout << "Введите число b: "; cin >> b;
	a = a xor b;
	b = a xor b;
	a = a xor b;
	cout << "После замены: a = " << a << " b = " << b;
}