// Lab17072018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    // Program 1
	cout << "Program 1" << endl << endl;
	// Объявляем переменные 
	int n, paredSum = 0, isNotParedSum = 0;
	// Запрашиваем у пользователя количество целых цифр
	cout << "Please enter amount of numbers: "; cin >> n;
	// Проходим циклом по заданому интервалу 
	for (int i = 0; i < n; i++) {
		// Находим сумму парных и непарных значений
		if (i % 2 == 0) paredSum += i; 
		else isNotParedSum += i; 
	}
	// Выводим результат пользователю
	cout << "Pared sum result: " << paredSum << endl << "Isn't pared sum: " << isNotParedSum << endl;
	system("pause");
	system("cls");
	
	// Program 2 
	cout << "Program 2" << endl << endl;
	// Объявляем переменую
	int number;
	// Запрашиваем у пользователя число
	cout << "Please enter number: \n";
	cin >> number;
	// Проверяем на парность и выводим результат пользователю
	(number % 2 == 0) ? cout << "Pared\n" : cout << "Not pared\n";
	system("pause");
	system("cls");
	
	// Program 3
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");
	/*
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
	int n1, k = 0, n2;
	cin >> n1;
	n2 = n1;
	while (n2 != 0) {
		k++;
		n2 /= 10;
	}
	int n1, n2;
	cin >> n1;
	for (int itr = 1; itr < n1; itr++)
		cout << n1 << endl << endl;
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

	// Program 11
	cout << "Program 11" << endl << endl;

	system("pause");
	system("cls");

	// Program 12
	cout << "Program 12" << endl << endl;

	system("pause");
	*/
	return 0;
}