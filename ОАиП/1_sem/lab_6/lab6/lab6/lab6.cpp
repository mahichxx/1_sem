#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	double i = 2, y = 2;
	float  t = 6.96e-5, z, q, x;
	while (i < 3)
	{
		for (int x = 0; x < 3; x++)
			
		{
			cout << "Введите x: ";
			cin >> x;
			z = t * pow(y, 2) - sqrt(i + x) * tan(y);
			q = sqrt(pow(z, 2) + 5 * z) * log(y);
			cout << "Вывести значение z: " << z << endl;
			cout << "Вывести значение q: " << q << endl;
		}
		i = i + 0.2;
	}
	return 0;
}


