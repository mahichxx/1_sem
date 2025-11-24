#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    char tmp[33];
    int A, B, n, m;
  
    cout << "Введите число A= ";
    cin >> A;
    cout << "Введите число B= ";
    cin >> B;
    cout << "Введите позицию n: ";
    cin >> n;
    cout << "Введите позицию m: ";
    cin >> m;

    // Преобразуем число A в двоичную форму и сохраняем в tmp
    _itoa_s(A, tmp, 2);
    cout << "A=" << tmp << endl;
    // Преобразуем число B в двоичную форму и сохраняем в tmp
    _itoa_s(B, tmp, 2);
    cout << "B=" << tmp << endl;
    // Создаём маску для выделения 3 битов из числа A, начиная с позиции n
    int maskA = ((1 << 3) - 1) << n;
    _itoa_s(maskA, tmp, 2);
    cout << "Маска А: " << tmp << endl;
    // Извлекаем биты из числа A и сдвигаем их вправо на n позиций
    int bitsA = (A & maskA) >> n;
    _itoa_s(bitsA, tmp, 2);
    cout << "Извлеченные биты из числа А: " << tmp << endl;
    // Создаём маску для определения позиции вставки битов в число B
    int maskB = ((1 << 3) - 1) << m;
    _itoa_s(maskB, tmp, 2);
    cout << "Маска B: " << tmp << endl;
    // Очищаем соответствующие биты в числе B
    B &= ~maskB;
    // Вставляем извлеченные биты из числа A в число B
    B |= (bitsA << m);
    // Преобразуем число B в двоичную форму и сохраняем в tmp
    _itoa_s(B, tmp, 2);
    cout << "Новое В: " << tmp << endl; // выводим новое значение B

    return 0;
}
