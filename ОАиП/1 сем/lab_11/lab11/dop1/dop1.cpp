#include <iostream> 
using namespace std; 
int main() 
{
	setlocale(LC_ALL, "RU"); 
	char tmp[33]; 
	int A, B, maskA, maskB; 
	cout << "Введите число A: ";
	cin >> A; 
	cout << "Введите число B: ";
	cin >> B; 
	_itoa_s(A, tmp, 2); //преобразование числа A в двоичную форму
	cout << "A=" << tmp << endl; 
	_itoa_s(B, tmp, 2); //преобразование числа B в двоичную форму
	cout << "B=" << tmp << endl; 
	maskA = 0b11111 << 2; //создание маски для A
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl; 
	maskB = 0b11111 << 1; //создание маски для B
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	int bitsA = (A & maskA) >> 2; // извлечение битов из A
	_itoa_s(bitsA, tmp, 2);
	cout << "Извлеченные биты из А: " << tmp << endl; //вывод извлеченных битов
	B &= ~(bitsA); //очистка битов в B
	B |= (bitsA << 1); //установка битов в B
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl; //вывод числа B после операции
}