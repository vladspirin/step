// 21082018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	/*
	// Program 1 // ???????????????????????????????????????????????
	cout << "Program 1" << endl << endl;
	// Инициализируем массив
	int const n1 = 10; int a1[n1];
	// Запоняем массив
	for (int i1 = 0; i1 < n1; i1++) cin >> a1[i1];
	// Проходим по массиву 
	for (int j1 = 0 j1 < n1; j1++) {
		if (a1[j1] == 0) {
			for (int k1 = j1; k1 < n1 - 1; k1++) { a1[k1] = a1[k1 + 1]; n1--; }
		}
	}
	system("pause");
	system("cls");
	
	// Program 2
	cout << "Program 2" << endl << endl;
	srand(time(0));
	// Инициализируем массив
	int const n2 = 20; int a2[n2]; int max2, mX = 0;
	// Заполняем рандомно наш массив от 0 до 50 и выводим пользователю 
	for (int i2 = 0; i2 < n2; i2++) { a2[i2] = rand() % 50; cout << a2[i2] << " "; }
	// Определяем что максимальным будет первое значение массива
	max2 = a2[0];
	// Проходим циклом по массиву в поисках максимального елемента
	for (int j2 = 1; j2 < n2; j2++) {
		if (a2[j2] > max2) {
			max2 = a2[j2];
			// После определения максимального елемента массива определяем его индекс
			mX = j2;
		}
	}
	// Выводим индекс максимального элемента пользователю
	cout << endl << "The index of max element = " << mX << endl << endl;
	// Меняем индекс максимального элемента
	a2[mX] = a2[0];
	// Меняем значение в первом индексе
	a2[0] = max2;
	// Выводим пользователю результат
	cout << "Result: " << endl;
	for (int k2 = 0; k2 < n2; k2++) cout << a2[k2] << " "; 	cout << endl << endl;
	system("pause");
	system("cls");
	
	// Program 3
	cout << "Program 3" << endl << endl;
	srand(time(0));
	// Обьявляем и инициализируем массивы
	int const n3 = 15; int a3[n3], b3[n3];
	// Заполняем рандомно первый массив и выводим его пользователю
	for (int i3 = 0; i3 < n3; i3++) { a3[i3] = rand() % 50; cout << a3[i3] << " "; }
	cout << endl << endl;
	// Заполняем рандомно второй массив и выводим его пользователю
	for (int j3 = 0; j3 < n3; j3++) { b3[j3] = rand() % 50; cout << b3[j3] << " "; }
	cout << endl << endl;
	// Создаем дополнительный массив в который мы все будем копировать и увеличиваем длинну массива
	int const N3 = 30; int c3[2 * N3];
	// Копируем элементы массива в новый массив
	for (int z3 = 0; z3 < N3; z3++) {
		// тут пока что не знаю
		if (c3[z3] > 0)  cin >> c3[z3]; 

	}
	system("pause");
	system("cls");
	*/
	// Program 4
	cout << "Program 4" << endl << endl;
	srand(time(0)); // потом убрать, чтоб не конфликтовало
	// Обьявляем переменные, инициализируем массив
	int const n4 = 10; int a4[n4], sum1 = 0;
	// Заполняем массив целыми произвольными значениями
	for (int i4 = 0; i4 < n4; i4++) {
		a4[i4] = rand() % 20 - rand() % 20;
		// Выподим результат пользователю
		cout << a4[i4] << " ";
	} cout << endl;
	// Находи сумму позитивных чисел
	for (int i4 = 0; i4 < n4; i4++) {
		if(a4[i4] >= 0) sum1 += a4[i4];
	}
	cout << "PositiveSum = " << sum1 << endl;
	system("pause");
	system("cls");
	/*
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
	*/
	
}