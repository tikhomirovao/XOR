#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int a; cout << "������� ����� a: "; cin >> a;
	int b; cout << "������� ����� b: "; cin >> b;
	a = a xor b;
	b = a xor b;
	a = a xor b;
	cout << "����� ������: a = " << a << " b = " << b;
}