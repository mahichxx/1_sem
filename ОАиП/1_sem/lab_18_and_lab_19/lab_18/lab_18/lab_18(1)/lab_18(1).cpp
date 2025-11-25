#include <iostream>
#include <cstdarg> // Для работы с переменным числом аргументов
#include <limits>  // Для получения минимальных значений типов

using namespace std;

// Функция для нахождения минимума из чисел типа int или double
double mn(char type, int count, ...) {
    va_list args;
    va_start(args, count);

    double minValue;

    if (type == 'i') { // Если тип int
        minValue = numeric_limits<int>::max();
        for (int i = 0; i < count; i++) {
            int val = va_arg(args, int);
            if (val < minValue) {
                minValue = val;
            }
        }
    }
    else if (type == 'd') { // Если тип double
        minValue = numeric_limits<double>::max();
        for (int i = 0; i < count; i++) {
            double val = va_arg(args, double);
            if (val < minValue) {
                minValue = val;
            }
        }
    }
    else {
        cerr << "Неизвестный тип параметра!" << endl;
        va_end(args);
        return numeric_limits<double>::quiet_NaN();
    }

    va_end(args);
    return minValue;
}

int main() {
    setlocale(0, "Rus");

    // Вызовы функции mn с различным количеством параметров
    cout << "Минимальное int значение: " << mn('i', 5, 10, 20, 5, 30, 0) << endl;
    cout << "Минимальное double значение: " << mn('d', 4, 3.14, 2.71, 1.41, 6.28) << endl;
    cout << "Минимальное int значение: " << mn('i', 3, 100, 50, 75) << endl;

    return 0;
}
