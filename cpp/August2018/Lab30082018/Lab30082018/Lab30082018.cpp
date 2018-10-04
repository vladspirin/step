// Lab30082018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    // Program 1
	// Написати програму, яка формує квадратну матрицю (3 вида)
	cout << "Program 1" << endl << endl;

	system("pause"); 
	system("cls");
	
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
	/*
	// Program 3
	// Написати програму, яка визначає суму елементів матриці у тих стовпцях, які не містять від’ємних значень.
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");

	// Program 4
	// Написати програму, яка міняє місцями рядки, які містять мінімальний і максимальний елементи матриці дійсних значень.
	cout << "Program 4" << endl << endl;

	system("pause");
	system("cls");

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

	// Program 8
	// Написати програму, яка визначає чи є матриця магічним квадратом, тобто суми всіх значень
	// елементів у кожному рядку, кожному стовпцю та на обох діагоналях співпадають.
	cout << "Program 8" << endl << endl;

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

	system("pause");*/
	return 0;
}