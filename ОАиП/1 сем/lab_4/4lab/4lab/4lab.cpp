#include<iostream>
#include <iomanip> 
void main() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double a, b, c, p, S;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите c: ";
	cin >> c;
	p = (a + b + c) / 2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << "Полусумма p: " << p;
	cout << " Площадь S: " << S;

}