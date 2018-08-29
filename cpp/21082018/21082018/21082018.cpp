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
	*/
	// Program 2
	cout << "Program 2" << endl << endl;
	srand(time(0));
	// Инициализируем массив
	int const n2 = 20; int a2[n2]; int max2, mX = 0;
	// Заполняем рандомно наш массив от 0 до 50 и выводим пользователю 
	for (int i2 = 0; i2 < n2; i2++) { a2[i2] = rand() % 50; cout << a2[i2] << " "; }
	// Определяем что максимальным будет первое значение массива
	max2 = a2[0];
	// Проходим циклом по массиву в поисках максимального елемента и определяем его индекс
	for (int j2 = 1; j2 < n2; j2++) {
		if (a2[j2] > max2) { max2 = a2[j2]; mX = j2;}}
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
	// Обьявляем и инициализируем массивы
	int const n3 = 5; int a3[n3], b3[n3];
	// Заполняем рандомно первый массив и выводим его пользователю
	for (int i3 = 0; i3 < n3; i3++) { a3[i3] = rand() % 50 - rand() % 25; cout << a3[i3] << " "; }
	cout << endl << endl;
	// Заполняем рандомно второй массив и выводим его пользователю
	for (int i3 = 0; i3 < n3; i3++) { b3[i3] = rand() % 50 - rand() % 25; cout << b3[i3] << " "; }
	cout << endl << endl;
	// Создаем дополнительный массив в который мы все будем копировать и увеличиваем длинну массива
	int c3[2 * n3];
	// Копируем элементы массива в новый массив
	//for (int i3 = 0; i3 < n3; i3++) 
	// тут пока проблема !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	system("pause");
	system("cls");
	
	// Program 4
	cout << "Program 4" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	int const n4 = 10; int a4[n4], sum1 = 0;
	// Заполняем массив целыми произвольными значениями и выводим результат пользователю
	for (int i4 = 0; i4 < n4; i4++) { a4[i4] = rand() % 20 - rand() % 20; cout << a4[i4] << " ";} cout << endl;
	// Находи сумму позитивных чисел
	for (int i4 = 0; i4 < n4; i4++) if (a4[i4] >= 0) sum1 += a4[i4];
	// Выводим пользователю сумму
	cout << "PositiveSum = " << sum1 << endl;
	system("pause");
	system("cls");
	
	// Program 5
	cout << "Program 5" << endl << endl;

	system("pause");
	system("cls");
	
	// Program 6
	cout << "Program 6" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	int const n6 = 10; int a6[n6]; int prod = 1;
	// Заполняем массив и выводим пользователю
	for (int i6 = 0; i6 < n6; i6++) { a6[i6] = rand() % 25;	cout << a6[i6] << " ";} cout << endl;
	// Проходим по массиву находим произведение нечетных чисел
	for (int i6 = 0; i6 < n6; i6++) if(a6[i6] % 2 == 1 ) prod *= a6[i6];	
	// Выводим результат пользователю
	cout << endl << "Result = " << prod << endl;
	system("pause");
	system("cls");
	
	// Program 7
	cout << "Program 7" << endl << endl;
	int a7[50]; int min7, n7; // Количество одинаковых минимальных значений
	int b7[50]; // Позиции элементов которые содержат минимальное значение
	// Заполняем массив и выводим пользователю
	for (int i7 = 0; i7 < 50; i7++) { a7[i7] = rand() % 100; cout << a7[i7] << " ";} cout << endl;
	// Поиск минимального значения
	min7 = a7[0];
	for (int i7 = 1; i7 < 50; i7++)
		if (min7 > a7[i7]) min7 = a7[i7];
	//cout << min7 << endl;
	// Формируем массив индексов
	n7 = 0; // обнуляем счетчик в массиве индексов
	cout << endl << endl; // Далее у меня пока-что проблема !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	for (int i7 = 0; i7 < 50; i7++)
		if (min7 == a7[i7])
		{
			n7++; // увеличиваем количество элементов в массиве индексов
			b7[n7 - 1] = i7; // Запоминаем позицию
		}
	//cout << b7[n7] << " "; ДОЛЖНО РАБОТАТЬ, НО НЕ РАБОТАЕТ ЗАРАЗА
	system("pause");
	system("cls");
	/*
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