#include<iostream>
#include <iomanip> 
void main() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(18) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(17) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(16) << setfill(probel) << probel;
	cout << setw(8) << setfill(c) << c << endl;
	cout << setw(15) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(14) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(13) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
}

