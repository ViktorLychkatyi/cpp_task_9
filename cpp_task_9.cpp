// 1. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. Определить сумму элементов массива, среднее арифметическое, минимальный и максимальный элемент.

/*
#include <iostream>
#include <algorithm>
using namespace std;

int statistics(int massive[5][5], int M, int N, int elements, int &maximun, int &minimun, int sum, double middle, int start, int end);
int main();

int statistics(int massive[5][5], int M, int N, int elements, int &maximun, int &minimun, int sum, double middle, int start, int end) {
	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive[r][c] = rand() % (start + end + 1) + start;
			if (true) {
				sum += massive[r][c];
				elements++;
				cout << massive[r][c] << "\t";
			}
		}
		if (elements > 0) {
			middle = sum * 1.0 / elements;
		}
		cout << "\n";
	}

	minimun = massive[0][0];
	maximun = massive[0][0];

	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			minimun = min(minimun, massive[r][c]);
			maximun = max(maximun, massive[r][c]);
		}
	}

	cout << "Общая сумма элементов массива: " << sum << "\n";
	cout << "Среднее арифметическое среди элементов: " << middle << "\n";
	cout << "Минимальный значения элемента: " << minimun << "\n";
	cout << "Максимальный значения элемена: " << maximun << "\n";
	return start, end;
}

int main() {
	setlocale(0, "");
	srand(time(0));

	int start = 0;
	int end = 20;

	const int M = 5;
	const int N = 5;
	int massive[M][N] = {};

	int sum = 0;
	double middle = 0;
	int elements = 0;
	int minimun, maximun;

	statistics(massive, M, N, elements, maximun, minimun, sum, middle, start, end);
}
*/

// 2. Дан двумерный массив размерностью M х M, заполненный случайными числами из диапазона от 0 до 20. Определить сумму элементов, расположенных на главной диагонали, а также сумму элементов, расположенных на побочной диагонали.

/*
#include <iostream>
using namespace std;

int diagonal(int massive[5][5], int M, int main_diagonal, int second_diagonal, int start, int end);
int main();

int diagonal(int massive[5][5], int M, int main_diagonal, int second_diagonal, int start, int end) {
	for (int r = 0; r < M; r++) {
		for (int c = 0; c < M; c++) {
			massive[r][c] = rand() % (start + end + 1) + start;
			cout << massive[r][c] << "\t";
			if (r == c) {
				main_diagonal += massive[r][c];
			}
			else if (r + c == M - 1) {
				second_diagonal += massive[r][c];
			}
		}
		cout << "\n";
	}

	cout << "Сумма главного диагоналя: " << main_diagonal << "\n";
	cout << "Сумма побочного диагоналя: " << second_diagonal << "\n";
	return start, end;
}

int main() {
	setlocale(0, "");
	srand(time(0));

	int start = 0;
	int end = 20;

	const int M = 5;
	int massive[M][M] = {};

	int main_diagonal = 0;
	int second_diagonal = 0;

	diagonal(massive, M, main_diagonal, second_diagonal, start, end);
}
*/

// 3. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от - 10 до 10. Определить количество положительных, отрицательных и нулевых элементов.

/*
#include <iostream>
using namespace std;

int numbers(int massive[5][5], int M, int N, int number_positive, int number_negative, int number_zero, int start, int end);
int main();

int numbers(int massive[5][5], int M, int N, int number_positive, int number_negative, int number_zero, int start, int end) {
	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive[r][c] = rand() % (end - start + 1) + start;
			cout << massive[r][c] << "\t";
			if (massive[r][c] > 0) {
				number_positive++;
			}
			else if (massive[r][c] < 0) {
				number_negative++;
			}
			else {
				number_zero++;
			}
		}
		cout << "\n";
	}

	cout << "Позитивные числа: " << number_positive << "\n";
	cout << "Отрицательные числа: " << number_negative << "\n";
	cout << "Нулевые числа: " << number_zero << "\n";
	return start, end;
}

int main() {
	setlocale(0, "");
	srand(time(0));

	int start = -10;
	int end = 10;

	const int M = 5;
	const int N = 5;
	int massive[M][N] = {};

	int number_positive = 0;
	int number_negative = 0;
	int number_zero = 0;

	numbers(massive, M, N, number_positive, number_negative, number_zero, start, end);
}
*/

// 4. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. Определить сумму по каждой строке и по каждому столбцу массива.

/*
#include <iostream>
using namespace std;

int row_col_sum(int massive[5][5], int M, int N, int row_sum[], int col_sum[], int start, int end);
int main();

int row_col_sum(int massive[5][5], int M, int N, int row_sum[], int col_sum[], int start, int end) {
	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive[r][c] = rand() % (start + end + 1) + start;
			row_sum[r] += massive[r][c];
			col_sum[c] += massive[r][c];
			cout << massive[r][c] << "\t";
		}
		cout << "\n";
	}

	cout << "\nСумма по каждой строке:\n";
	for (int r = 0; r < M; r++) {
		cout << "Строка " << r + 1 << ": " << row_sum[r] << "\n";
	}

	cout << "\nСумма по каждому столбцу:\n";
	for (int c = 0; c < N; c++) {
		cout << "Столбец " << c + 1 << ": " << col_sum[c] << "\n";
	}
	return start, end;
}

int main() {
	setlocale(0, "");
	srand(time(0));

	int start = 0;
	int end = 20;

	const int M = 5;
	const int N = 5;
	int massive[M][N] = {};

	int row_sum[M] = {};
	int col_sum[N] = {};

	row_col_sum(massive, M, N, row_sum, col_sum, start, end);
}
*/

// 9. Заполнить массив M x N следующим образом

/*
#include <iostream>
using namespace std;

int fill_massive(int massive[5][6], int M, int N, int number);
int main();

int fill_massive(int massive[5][6], int M, int N, int number) {
	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive[r][c] = number++;
			cout << massive[r][c] << "\t";
		}
		cout << "\n";
	}
	return number;
}

int main() {
	setlocale(0, "");

	const int M = 5;
	const int N = 6;
	int massive[M][N] = {};
	int number = 1;

	fill_massive(massive, M, N, number);
}
*/

// 7. Дан двумерный массив размерностью M x N, заполненный случайными числами из диапазона от - 100 до 100. Определить сумму элементов массива, расположенных между минимальным и максимальным элементами.

/*
#include <iostream>
#include <algorithm>
using namespace std;

int max_min(int massive[5][5], int M, int N, int massive_max, int massive_min, int start, int end);
int main();

int max_min(int massive[5][5], int M, int N, int massive_max, int massive_min, int start, int end) {
	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive[r][c] = rand() % (end - start + 1) + start;
			cout << massive[r][c] << "\t";
		}
		cout << "\n";
	}

	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive_max = max(massive_max, massive[r][c]);
			massive_min = min(massive_min, massive[r][c]);
		}
	}

	cout << "\nМинимальный элемент: " << massive_min;
	cout << "\nМаксимальный элемент: " << massive_max;
	return massive_max, massive_min;
}

int main() {
	setlocale(0, "");
	srand(time(0));

	int start = -100;
	int end = 100;

	const int M = 5;
	const int N = 5;
	int massive[M][N] = {};

	int massive_max = massive[0][0];
	int massive_min = massive[0][0];

	max_min(massive, M, N, massive_max, massive_min, start, end);
}
*/

// 13. Реализовать преобразование двумерного массива в одномерный, и наоборот.

/*
#include <iostream>
using namespace std;

int process(int M, int N, int number, int massive_2d[5][5], int massive_1d[], int massive_2d_back[5][5]);
int main();

int process(int M, int N, int number, int massive_2d[5][5], int massive_1d[], int massive_2d_back[5][5]) {
	cout << "Двумерный массив:\n";
	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			massive_2d[r][c] = number++;
			cout << massive_2d[r][c] << "\t";
		}
		cout << "\n";
	}

	const int SIZE = M * N;

	for (int i = 0; i < SIZE; i++) {
		massive_1d[i] = massive_2d[i / N][i % N];
	}

	cout << "\nОдномерный массив:\n";
	for (int i = 0; i < SIZE; i++) {
		cout << massive_1d[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < SIZE; i++) {
		massive_2d_back[i / N][i % N] = massive_1d[i];
	}

	cout << "\nОбратно в двумерный массив из одномерного массива:\n";
	for (int r = 0; r < M; r++) {
		for (int c = 0; c < N; c++) {
			cout << massive_2d_back[r][c] << "\t";
		}
		cout << "\n";
	}
	return SIZE;
}

int main() {
	setlocale(0, "");

	const int M = 5;
	const int N = 5;
	int massive_2d[M][N];
	int massive_1d[M * N];
	int massive_2d_back[M][N];
	int number = 1;

	process(M, N, number, massive_2d, massive_1d, massive_2d_back);
}
*/

// 5. Заполнить массив M x N двузначными числами так, чтобы первая цифра указывала  номер строки, а вторая – номер столбца.

/*
#include <iostream>
using namespace std;

void row_col_num(int massive[6][6], int M, int N);
int main();

void row_col_num(int massive[6][6], int M, int N) {
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			massive[i][j] = i * 10 + j;
		}
	}

	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << massive[i][j] << "\t";
		}
		cout << "\n";
	}
}

int main() {
	setlocale(0, "");

	const int M = 6;
	const int N = 6;
	int massive[M][N];

	row_col_num(massive, M, N);
}
*/