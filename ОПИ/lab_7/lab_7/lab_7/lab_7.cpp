#include <iostream>
#include <Windows.h>

using namespace std;

void getDifferenceInLatinLetters() 
{
    unsigned char code;
    unsigned char originalCode;
    int diff, n, i;
    int k = 0;

    printf("Введите количество переменных\n");
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        printf("Введите символ ");
        cin >> originalCode;
        if (originalCode >= 0x61 && originalCode <= 0x7A)
        {

            printf("Это строчная латинская буква %c ,  код Windows - 1251 = %X\n", originalCode, originalCode);
            code = originalCode - 0x20;
            printf("Прописная латинская буква %c ,  код Windows - 1251 = %X\n", code, code);
            diff = originalCode - code;
            printf("Разница символов: %X\n", diff);
        }
        else if (originalCode >= 0x41 && originalCode <= 0x5A)
        {
            printf("Это прописная латинская буква %c ,  код Windows - 1251 = %X\n", originalCode, originalCode);
            code = originalCode + 0x20;
            printf("Строчная латинская буква %c ,  код Windows - 1251 = %X\n", code, code);
            diff = code - originalCode;
            printf("Разница символов: %X\n", diff);
        }
        else
        {
            printf("Ошибка\n");
        }

    }
}

void getDifferenceRussianLetters()
{
    unsigned char code;
    unsigned char originalCode;
    int diff, n, i;
    int k = 0;

    printf("Введите количество переменных\n");
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        printf("Введите символ ");
        cin >> originalCode;
        if (originalCode >= 0xE0 && originalCode <= 0xFF)
        {

            printf("Это строчная русская буква %c ,  код Windows - 1251 = %X\n", originalCode, originalCode);
            code = originalCode - 0x20;
            printf("Прописная русская буква %c ,  код Windows - 1251 = %X\n", code, code);
            diff = originalCode - code;
            printf("Разница символов: %X\n", diff);
        }

        else if (originalCode >= 0xC0 && originalCode <= 0xDF)
        {
            printf("Это прописная русская буква %c ,  код Windows - 1251 = %X\n", originalCode, originalCode);
            code = originalCode + 0x20;
            printf("Строчная русская буква %c ,  код Windows - 1251 = %X\n", code, code);
            diff = code - originalCode;
            printf("Разница символов: %X\n", diff);

        }

        else
        {
            printf("Ошибка\n");
        }
    }
}
void outputDigit()
{
    unsigned char originalCode;
    int n, i;
    int k = 0;

    printf("Введите количество переменных\n");
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        printf("Введите цифру: ");
        cin >> originalCode;
        if (originalCode >= 0x30 && originalCode <= 0x39)
        {
            printf("Это цифра с кодом: %X\n", originalCode);
        }
        else {
            printf("Ошибка\n");
        }
    }
}

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int k = 0;

    setlocale(LC_CTYPE, "Russian");
    while (k != 4) {
        printf("Выберите вариант использования программы:\n");
        printf("1 – определение разницы значений кодов символов латинского алфавита в прописном и строчном написании\n");
        printf("2 – определение разницы значений кодов символов русского алфавита в прописном и строчном написании \n");
        printf("3 – вывод в консоль кода символа, соответствующего введенной цифре\n");
        printf("4 – выход из программы.\n");
        cin >> k;
        switch (k)
        {

        case 1:
        {
            getDifferenceInLatinLetters();
            break;
        }
        case 2:
        {
            getDifferenceRussianLetters();
            break;
        }
        case 3:
        {
            outputDigit();
            break;
        }
        case 4:
        {
            printf("выход из программы");
        } 
        exit(0);

        }
    }
}