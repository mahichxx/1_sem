#include<iostream>
#include <iomanip> 
void main() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double a, b, p, s;
	cout << "Введите a: ";
	cin >> a;
	b = 2 * a;
	p = (b + a)*2;
	s = b * a;
	cout << "Основание: " << b << endl;
	cout << "Перимиетор: " << p << endl;
	cout << "Площадь: " << s << endl;
}