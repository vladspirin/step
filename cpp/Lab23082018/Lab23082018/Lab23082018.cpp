// Lab23082018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // Program 1
	cout << "Program 1" << endl << endl;
	srand(time(0));
	// Объявляем и инициализируем массив
	int const n1 = 10;  int a1[n1]; int V1, max1;
	// Заполняем массив и выводим массив пользователю
	for (int i1 = 0; i1 < n1; i1++) { a1[i1] = rand() % 50;	cout  << a1[i1] << " "; }
	max1 = a1[0];
	// Находим максимальный элемент и его индекс
	for (int i1 = 1; i1 < n1; i1++) if (max1 < a1[i1]) { max1 = a1[i1]; V1 = i1; }
	// Условие перемещения элемента
	cout << "maxElement = " << max1 << " Index = " << V1 << endl;
	system("pause");
	system("cls");

	// Program 2
	cout << "Program 2" << endl << endl;

	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");

	// Program 4
	cout << "Program 4" << endl << endl;

	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5" << endl << endl;

	system("pause");
	system("cls");

	// Program 6
	cout << "Program 6" << endl << endl;

	system("pause");
	system("cls");

	// Program 7
	cout << "Program 7" << endl << endl;

	system("pause");
	system("cls");

	// Program 8
	cout << "Program 8" << endl << endl;

	system("pause");
	system("cls");

	// Program 9
	cout << "Program 9" << endl << endl;

	system("pause");
	system("cls");

	// Program 10
	cout << "Program 10" << endl << endl;

	system("pause");
	system("cls");
}