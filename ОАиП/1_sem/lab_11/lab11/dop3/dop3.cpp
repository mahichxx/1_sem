#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int A;
    char tmp[33];
    cout << "Введите число A: ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "A = " << tmp << endl;
    // Создаем маску, которая будет изолировать биты с 5-го по 10-й включительно
    int mask = (1 << 6) - 1; // Маска для 6 битов (111111)
    mask = mask << 5;        // Сдвигаем маску на 5 позиций влево (11111100000)

    // Применяем маску к числу A и сдвигаем результат обратно на 5 позиций вправо
    int isolatedBits = (A & mask) >> 5;

    // Подсчитываем количество единиц в изолированных битах
    int count = 0;
    while (isolatedBits > 0) {
        count += isolatedBits & 1; // Проверяем последний бит
        isolatedBits >>= 1;        // Сдвигаем число вправо на 1 бит
    }

    cout << "Количество единиц в числе с 5 по 10 бит: " << count << endl;

    return 0;
}
