#include <iostream>
#include <cmath>

using namespace std;

double equation1(double x) {
    // Уравнение x^3 + 2x - 4
    return x * x * x + 2 * x - 4;
}

double equation2(double x) {
    // Уравнение x^2 - 1
    return x * x - 1;
}

double bisection_method(double (*func)(double), double a, double b, double e) {
    // Метод дихотомии для нахождения корня функции func на отрезке [a, b] с заданной точностью e
    if (func(a) * func(b) >= 0) {
        cout << "Функция имеет одинаковый знак на границах отрезка. Попробуйте другой отрезок." << endl;
        return NAN;
    }

    while ((b - a) / 2.0 > e) {
        double midpoint = (a + b) / 2.0;
        if (func(midpoint) == 0) {
            return midpoint; // Найден точный корень
        }
        else if (func(a) * func(midpoint) < 0) {
            b = midpoint; // Корень находится в левой половине
        }
        else {
            a = midpoint; // Корень находится в правой половине
        }
    }

    return (a + b) / 2.0; // Возвращаем приближенный корень
}

int main() {
    setlocale(LC_ALL, "ru");
    double e = 0.001; // Точность
    cout << "Нахождение корней уравнений методом дихотомии" << endl;

    // Ввод границ для первого уравнения
    double a1, b1;
    cout << "Введите левую границу для первого уравнения (x^3 + 2x - 4): ";
    cin >> a1;
    cout << "Введите правую границу для первого уравнения: ";
    cin >> b1;

    double root1 = bisection_method(equation1, a1, b1, e);
    if (!isnan(root1)) {
        cout << "Корень первого уравнения: " << root1 << endl;
    }

    // Ввод границ для второго уравнения
    double a2, b2;
    cout << "Введите левую границу для второго уравнения (x^2 - 1): ";
    cin >> a2;
    cout << "Введите правую границу для второго уравнения: ";
    cin >> b2;

    double root2 = bisection_method(equation2, a2, b2, e);
    if (!isnan(root2)) {
        cout << "Корень второго уравнения: " << root2 << endl;
    }

    return 0;
}