#include <iostream>
#include <fstream>
#include <cctype> 
#include <windows.h> 
using namespace std;

void findShortWord(const char* line, char* shortWord) {
    int minLength = 256;
    int currentLength = 0;
    char word[256] = { 0 };
    int j = 0;

    for (int i = 0; line[i] != '\0'; ++i) {
        if (!isspace(line[i])) {
            word[currentLength++] = line[i];
        }
        else {
            if (currentLength > 0) {
                word[currentLength] = '\0';
                if (currentLength < minLength) {
                    minLength = currentLength;
                    for (j = 0; j <= currentLength; ++j) {
                        shortWord[j] = word[j];
                    }
                }
                currentLength = 0;
            }
        }
    }

    if (currentLength > 0) {
        word[currentLength] = '\0';
        if (currentLength < minLength) {
            for (j = 0; j <= currentLength; ++j) {
                shortWord[j] = word[j];
            }
        }
    }
}

void findLongWord(const char* line, char* longWord) {
    int maxLength = 0;
    int currentLength = 0;
    char word[256] = { 0 };
    int j = 0;

    for (int i = 0; line[i] != '\0'; ++i) {
        if (!isspace(line[i])) {
            word[currentLength++] = line[i];
        }
        else {
            if (currentLength > 0) {
                word[currentLength] = '\0';
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    for (j = 0; j <= currentLength; ++j) {
                        longWord[j] = word[j];
                    }
                }
                currentLength = 0;
            }
        }
    }

    if (currentLength > 0) {
        word[currentLength] = '\0';
        if (currentLength > maxLength) {
            for (j = 0; j <= currentLength; ++j) {
                longWord[j] = word[j];
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char inputLine1[256];
    char inputLine2[256];
    cout << "Введите первую строку символов: ";
    cin.getline(inputLine1, 256);
    cout << "Введите вторую строку символов: ";
    cin.getline(inputLine2, 256);

    ofstream outFile("output.txt");
    if (!outFile) {
        cout << "Ошибка открытия файла для записи!" << endl;
        return 1;
    }
    outFile << inputLine1 << endl << inputLine2;
    outFile.close();

    ifstream inFile("output.txt");
    if (!inFile) {
        cout << "Ошибка открытия файла для чтения!" << endl;
        return 1;
    }
    char fileLine1[256];
    char fileLine2[256];
    inFile.getline(fileLine1, 256);
    inFile.getline(fileLine2, 256);
    inFile.close();

    char shortWord[256] = { 0 };
    findShortWord(fileLine1, shortWord);

    char longWord[256] = { 0 };
    findLongWord(fileLine2, longWord);

    cout << "Самое короткое слово в первой строке: " << shortWord << endl;
    cout << "Самое длинное слово во второй строке: " << longWord << endl;

    return 0;
}
