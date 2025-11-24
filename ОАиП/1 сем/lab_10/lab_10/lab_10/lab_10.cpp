#include <iostream>
using namespace std;

int mini(int mas[], int len)
{
    int a = mas[0];
    for (int i = 1; i < len; i++) {
        if (mas[i] < a)
            a = mas[i];
    }
    return a;
}

int main()
{
    setlocale(LC_ALL, "RU");
    int len;
    cout << "Введите размер массива: ";
    cin >> len;

    const int MAX_SIZE = 103; 
    int mas[MAX_SIZE];

    float sum = 0;
    cout << "Введите массив: ";
    for (int i = 0; i < len; i++) {
        cin >> mas[i];
        sum += mas[i];
    }
    sum = sum / len;
    cout << "Среднее значение: " << sum << endl;

    for (int i = len + 2; i >= 3; i--) {
        mas[i] = mas[i - 3];
    }

    mas[0] = (sum); 
    mas[1] = (sum); 
    mas[2] = (sum); 

    len += 3; 

    int min = mini(mas, len);
    cout << "Массив без минимального значения: ";
    for (int i = 0; i < len; i++) {
        if (mas[i] != min) {
            cout << mas[i] << " ";
        }
    }

    return 0;
}