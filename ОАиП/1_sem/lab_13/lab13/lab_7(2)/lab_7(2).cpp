#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	char str1[50];

	cout << "Введите строку (<=50): ";
	cin >> str1;
	int count = 0;//объявляем счетчик цифр

	//создаем цикл для поиска цифр в строке
	for (char* str = &str1[0]; *str != '\0'; str++) {
		//пишем условие для поиска цифр
		if (*str >= '0' && *str <= '9') {
			count++;//если цифра есть, увеличиваем счетчик на 1
		}
	}
	cout << "Количество цифр: " << count;
}
