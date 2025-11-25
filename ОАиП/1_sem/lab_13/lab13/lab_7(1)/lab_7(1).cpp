#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	char str1[50], str[] = "!";
	int n;

	cout << "Введите строку: ";
	cin >> str1;
	n = strlen(str1);//находим длину строки
	//создаем цикл for, который проходит по символам строки и ищет "а"
	for (int i = 0; str1[i] != '\0'; i++) {
		if (str1[i] == 'a')
		{
			//если в строке есть символ "а", то после его необходимо вставить "!"
			for (int j = n + 1; j != i; j--)
			{
				str1[j + 1] = str1[j];
			}
			str1[i + 1] = '!';
		}
	}
	cout << "Вывод строки:\n" << str1 << endl;//вывод новой строки
}

