#include <iostream>
#include <cmath>
using namespace std;
void main()
{
    setlocale(LC_ALL, "RU");
    int n, i, min1, max1, sum;
    float x, max = -9999, min = 9999;
    cout << "Ввести  n: ";
    cin >> n;
    for (i = 1; i < n + 1; i++) {
        cout << "Введите число" << "(" << i << "):";
        cin >> x;
        if (x > max) {
            max = x;
            max1 = i;
        }
        if (x < min) {
            min = x;
            min1 = i;
        }
    }
    sum = max1 - min1;
    if (sum < 0) { sum = sum * (-1); }
    sum -= 1;
    cout << "Сумма=" << sum;
}