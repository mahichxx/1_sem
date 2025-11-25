#include<iostream>
#include<cmath>
using namespace std;

void main() {
	setlocale(LC_ALL, "RU");
	double n = 200, a = 1, b = 3, i = 1;
	double  h = 0, s1 = 0, s2 = 0, x = 0, S;
	h = (b - a) / (2 * n);
	x = a + 2 * h;

	while (i < n)
	{
		s2 = s2 + (pow(x, 3) - 3);
		x += h;
		s1 = s1 + (pow(x, 3) - 3);
		x += h;
		i += 1;
	}

	S = (h / 3) * ((pow(a, 3) - 3) + ((pow(x, 3) - 3 + h) + 4 * s1 + 2 * s2 + (exp(b) + 2));
	cout << "Площадь: " << S;
}



	while (x < (b - h))
	{
		s += h * (pow(x, 3)-3) / 2;
		x += h;
	}
	cout << "Площадь: " << s;
}
