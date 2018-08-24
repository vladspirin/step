// HW16082018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	// Meeting 15
	// Program 1
	/*
	cout << "Program 1" << endl << endl;
	srand(time(0));
	// Обьявляем переменные, инициализируем массив
	int const n1 = 10; int a1[n1]; int min1, max1;
	// Заполняем массив случайными цифрами в интервале от 0 до 100
	for (int i1 = 0; i1 < n1; i1++) {
		a1[i1] = rand() % 100;
		// Выводим пользователю заполненный массив
		cout << a1[i1] << " ";
	} cout << endl << endl;
	// Отталкиваемся от первого индекса в массиве
	min1 = max1 = a1[0];
	//  Находим максимальный и минимальный элементы массива
	for (int j1 = 1; j1 < n1; j1++) {
		if (max1 < a1[j1]) max1 = a1[j1];
		if (min1 > a1[j1]) min1 = a1[j1];
	}
	// Выводим результат пользователю
	cout << "Result: " << " minElement = " << min1 << " maxElement = " << max1 << endl << endl;
	system("pause");
	system("cls");
	*/
	// Program 2 // не доделана, сыпет ошибки
	cout << "Program 2" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	const int monthIndex = 12; int profit[monthIndex]; int min2, max2, mN2, mX2, x2, y2;
	cout << "Please enter month profit of company: " << endl;
	// Заполняем массив данными о доходах фирмы за 12 месяцев
	for (int i2 = 0; i2 < monthIndex; i2++) cin >> profit[i2];
	// Пользователь вводит диапазон поиска прибыли по месяцам
	cout << "Please enter the search range (from 1 to 12 month): ";
	cin >> x2 >> y2;
	//x2 -= 1; y2 -= 1;
	// Отталкиваемся от первого заданного индекса
	min2 = max2 = profit[x2];
	// Делаем проверку на корректный ввод месяца
	if (x2 < 1 && y2 > 12) { cout << "Error! In standart Earth year only 12 months."; }
	//else if (!(isdigit(x2 && y2))) { cout << "Error! Please type only numbers."; } // Ошибка в этой проверке
	else {
		for (int j2 = x2 - 1; j2 < monthIndex && y2 - 1; j2++) {
			// Проходим по массиву в поисках минимального и максимального дохода + определяем индексы
			if (min2 > profit[j2]) { min2 = profit[j2]; mN2 = j2; }
			if (max2 < profit[j2]) { max2 = profit[j2]; mX2 = j2; }
		}
		// Выводим результат пользователю
		cout << "Result: " << " MinProfit = " << min2 << " MaxProfit = " << max2 << endl << endl;
	}

	system("pause");
	system("cls");
	/*
	// Program 3
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");

	// Meeting 16
	// Program 4
	cout << "Program 4" << endl << endl;

	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5" << endl << endl;

	system("pause");
	system("cls");
	*/
	return 0;
}
