#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int n;
    const int k = 99;
    int mas[k];


    cout << "Введите размер массива:";
    cin >> n;

    cout << "Введите массив: ";

    for (int i = 0; i < n; i++)
        cin >> mas[i];

    for (int i = 0; i < (n / 2); i++)
    {
        int x = mas[i];
        mas[i] = mas[n - 1 - i];
        mas[n - 1 - i] = x;
    }

    for (int i = 0; i < n; i++)
        cout << mas[i];
    return 0;
}