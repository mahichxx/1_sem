#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");

    float  p, q, r, s1, s2, s3, pi = 3.141592;

    cout << "Введите радиус шара: ";
    cin >> r;
    cout << "Введите диагональ 1: ";
    cin >> p;
    cout << "Введите диагональ 2: ";
    cin >> q;

    s1 = pi * pow(r, 2);
    s2 = pi * pow(p, 2);
    s3 = pi * pow(q, 2);


    if (s1 > s2) {
        cout << "Можно";
    }
        else if (s1>s3){ 
        cout << "Можно";
        }
        else
        cout << "Нельзя";

    }
