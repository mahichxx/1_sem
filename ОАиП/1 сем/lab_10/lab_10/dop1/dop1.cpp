#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 100; 
    int mas[n];
    int countPairs = 0, m;

    cout << "Введите размер массива:";
    cin >> m;

    cout << "Введите массив: ";

    for (int i = 0; i < m; i++)
        cin >> mas[i];

    for (int i = 0; i < m - 1; ++i) {
        if (mas[i] == mas[i + 1]) {
            countPairs = countPairs + 1;
        }
    }

    cout << "Количество пар соседних элементов с одинаковыми значениями: " << countPairs << endl;

    return 0;
}

