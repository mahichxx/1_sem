#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");

    int a, b, p, q, r, s, S1, S2, S3;

    cout << "Введите размеры участка a (ширина) и b (длина): ";
    cin >> a >> b;
    cout << "Введите размеры участка p (ширина) и q (длина): ";
    cin >> p >> q;
    cout << "Введите размеры участка r (ширина) и s (длина): ";
    cin >> r >> s;

    S1 = a * b;
    S2 = p * q;
    S3 = r * s;

    if (p <= a && r <= a && p>0 && a>0 && r > 0 && (p+r)<=a ) {

        if (q <= b && s <= b && q > 0 && b > 0 && s > 0 && (q+s)<=b) {

            S1 = a * b;
            S2 = p * q;
            S3 = r * s;

            if ((S2 + S3) > S1) {
                cout << "Участки слишком большие. Они не вмещаются";
            }

            else {
                cout << "Возможно расместить" << endl;
                cout << "Плащадь участка (a;b): " << S1 << endl;
                cout << "Плащадь участка (p;q): " << S2 << endl;
                cout << "Плащадь участка (r;s): " << S2 << endl;

            }
        }

        else {
            cout << "Введите новую длину";
        }
    }

    else {
        cout << "Введите новую ширину";
    }
}
