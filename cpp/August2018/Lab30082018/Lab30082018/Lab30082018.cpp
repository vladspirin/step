//#include "stdafx.h"
#include "pch.h"
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
#include "Header.h"
using namespace std;

bool IsMagical(int** a, int n) {
	int magicsum = 0; //сумма для сравнения
	for (int i = 0; i < n; i++)
		magicsum += a[i][0];
	// сумма строк
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++)
			sum += a[i][j];
		if (sum != magicsum) return false;
	}
	// сумма столбцов
	for (int j = 0; j < n; j++) {
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += a[i][j];
		if (sum != magicsum) return false;
	}
	// сумма главной диагонали
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i][i];
	if (sum != magicsum) return false;
	// сумма побочной диагонали
	sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i][n - i - 1];
	if (sum != magicsum) return false;
	return true;
};

int main()
{
	// Program 1
	// Написати програму, яка формує квадратну матрицю (3 вида):
	// First matrix
	// Первая не понимаю, на данный момент у меня не получается составить этот алгоритм (может позже)  

	// Second matrix
	int const ROW = 10;
	int const COL = 10;
	int arr[ROW][COL];
	int i = 0, j, k = 0, counter = 1;
	while (i < ROW*COL) // Цикл по номеру витка
	{
		k++;
		for (j = k - 1; j < COL - k + 1; j++) {
			arr[k - 1][j] = counter++;
			i++;
		}   // Определение значений верхнего гр столбца
		for (j = k; j < ROW - k + 1; j++) {
			arr[j][COL - k] = counter++;
			i++;
		}   // По правому вертикальному столбцу
		for (j = COL - k - 1; j >= k - 1; j--) {
			arr[ROW - k][j] = counter++;
			i++;
		}   // По нижнему горизонтальному столбцу
		for (j = ROW - k - 1; j >= k; j--) {
			arr[j][k - 1] = counter++;
			i++;
		}   // По левому вертикальному столбцу
	}
	for (int q = 0; q < ROW; q++) {
		for (int w = 0; w < COL; w++) {
			cout << setw(4) << arr[q][w];
		};
		cout << endl;
	}
	system("pause");
	system("cls");
	// Third matrix
	// тут в процессе
	const int ROWS = 10;
	const int COLS = 10;
	int ARR[100][100];
	int val = 1;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			ARR[i][j] = val++;
		}
		for (int k = 0; k < COLS; k++) {

		}
	} 
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << ARR[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	system("pause"); 
	system("cls");
	/*
	// Program 2
	// Написати програму, яка міняє місцями перший і останній стовпці квадратної матриці цілих значень.
	cout << "Program 2" << endl << endl;
	int N, M;
	cout << "Enter matrix dimensions:" << endl;
	cout << "M = ";	cin >> M;
	cout << "N = ";	cin >> N;
	int **A = new int*[M];
	for (int i = 0; i < M; i++)	A[i] = new int[N];
	cout << "Enter matrix:" << endl;
	for (int i = 0; i < M; i++)	{
		for (int j = 0; j < N; j++)	{
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < M; i++)	{
		swap(A[i][0], A[i][N - 1]);
	}
	cout << "The desired matrix:" << endl;
	for (int i = 0; i < M; i++)	{
		for (int j = 0; j < N; j++)	{
			cout << A[i][j] << " ";
		} cout << endl;
	}
	system("pause");
	system("cls");
	
	// Program 3
	// Написати програму, яка визначає суму елементів матриці у тих стовпцях, які не містять від’ємних значень.
	cout << "Program 3" << endl << endl;
	
	system("pause");
	system("cls");
	*/
	// Program 4
	// Написати програму, яка міняє місцями рядки, які містять мінімальний і максимальний елементи матриці дійсних значень.
	cout << "Program 4" << endl << endl;
	// кинул костяк, пока не работает, не думал над логикой еще
	int arr4[ROWS][COLS]{ 0 }; int maxElement, minElement, maxIndex = 0, minIndex = 0;
	maxElement = minElement = arr4[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr4[i][j] = rand() % 90;
			if (arr4[i][j] > maxElement) { maxElement = arr4[i][j]; maxIndex = i; }
			if (arr4[i][j] < minElement) { maxElement = arr4[i][j]; minIndex = i; }
		}
	}
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << "maxElement = " << maxElement << endl;
	cout << endl << "minElement = " << minElement << endl;
	cout << endl << "maxIndex = " << maxIndex << endl;
	cout << endl << "minIndex = " << minIndex << endl;
	cout << endl;
	system("pause");
	system("cls");
	/*
	// Program 5
	// Написати програму, яка додає перший і останній стовпці квадратної матриці і записує результат на місце першого рядка.
	cout << "Program 5" << endl << endl;

	system("pause");
	system("cls");

	// Program 6
	// Написати програму, яка обчислює скалярний добуток тих рядків матриці, в яких знаходяться максимальний і мінімальний елементи.
	cout << "Program 6" << endl << endl;

	system("pause");
	system("cls");

	// Program 7
	// Написати програму, яка підраховує кількість парних і непарних елементів на головній і побічній діагоналях матриці дійсних значень.
	// Визначити номер стовпця, сума елементів якого мінімальна.
	cout << "Program 7" << endl << endl;

	system("pause");
	system("cls");
	*/
	// Program 8
	// Написати програму, яка визначає чи є матриця магічним квадратом, тобто суми всіх значень
	// елементів у кожному рядку, кожному стовпцю та на обох діагоналях співпадають.
	cout << "Program 8" << endl << endl;
	int n = 100;
	int** a = new int*[n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = i; // Для примера, ставьте сюда то, что необходимо. В данном случае - не является
	cout << (IsMagical(a, n) ? "Is an\n" : "Is not\n");
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
	cout << endl;
	system("pause");
	system("cls");

	// Program 9
	// Написати програму, яка обчислює суму і різницю двох матриць.
	cout << "Program 9" << endl << endl;
	
	system("pause");
	system("cls");

	// Program 10
	// Написати програму, яка шукає індекси всіх сідлових точок матриці. Сідлова точка – елемент
	// матриці, який є найбільшим у рядку і одночасно найменший в стовпці, або навпаки.
	cout << "Program 10" << endl << endl;
	
	system("pause");
	system("cls");
	//return 0;
}