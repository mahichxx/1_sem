#include <iostream>
#include <ctime>
using namespace std;

void main() {
	setlocale(LC_ALL, "RU");
	const int n = 7;
	int end, min =0, mas[n], sum = 0;

	const int m = 52;
	int sumWeek[m], week;


	cout << "Введите количество недель: ";
	cin >> week;

	for (int k = 0; k < week; k++)
		{
			for (int i = 0; i < 7; i++)
			{
				mas[i] = rand() % (100 + 1);
				sum += mas[i];
			}
			sumWeek[k] = sum;
		}

	for (int k = 0; k < week; k++)
	{
		cout << sumWeek[k] << endl;
	}
	
	for (int k = 0; k < week; k++)
	{
		sumWeek[k] < sumWeek[k + 1];

	}

	for (int k=0; k < n; k++ ) 
	{
		if (sumWeek[k] > min )
		{
			min = sumWeek[k];
		}
	}
	cout << "Неделя с каксимальным количеством осадков: " << min;
}

