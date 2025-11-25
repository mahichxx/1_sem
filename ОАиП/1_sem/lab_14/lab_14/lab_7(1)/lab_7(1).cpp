#include <iostream>/
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	const int n = 3, m = 3;
	int column1 = 0, row1 = 0, column2 = 0, row2 = 0;
	int A[n][m];

	cout << "Введите элементы массива:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	int min = A[0][0];//инициализируем минимальный элемент матрицы
	int max = A[0][0];//инициализиурем максимальный элемент матрицы
	//цикл для поиска минимального и максимального элементов массива
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (min > A[i][j]) {
				min = A[i][j];
				row1 = i;
				column1 = i;
			}
			if (max < A[i][j]) {
				max = A[i][j];
				row2 = i;
				column2 = j;
			}
		}
	}
	//инициализируем новые элементы массива
	A[row1][column1] = max;
	A[row2][column2] = min;
	//выводим новую матрицу
	cout << "Получившаяся матрица:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << A[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;//завершаем программу
}
