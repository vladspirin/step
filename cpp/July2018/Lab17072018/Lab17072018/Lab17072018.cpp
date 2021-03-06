// Lab17072018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

bool isHammingNum(int);

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
	// Объявляем переменую
	long int num; int k = 1;
	// Запрашиваем у пользователя целое число
	cout << "Please enter integer: "; cin >> num;
	cout << "All dividers of this number: " << endl;
	// Ищем все делители и выводим результат пользователю
	for (int i = 1; i <= num; i++) if (num % i == 0) cout << k++ << ": " << i << endl;
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
	int N;
	int i = 2;
	cout << "Please enter number of amount variables: "; cin >> N;
	cout << "Your sequence of numbers: " << endl;
	for (; i < N; ++i) {
		if (isHammingNum(i))
			cout << i << " ";
	}
	cout << endl;
	system("pause");
	system("cls");
		
	// Program 11
	cout << "Program 11" << endl << endl;
	
	system("pause");
	system("cls");

	// Program 12
	cout << "Program 12" << endl << endl;

	system("pause");
	
	return 0;
}

bool isHammingNum(int n) {
	while (n % 2 == 0) { n /= 2; }
	while (n % 3 == 0) { n /= 3; }
	while (n % 5 == 0) { n /= 5; }
	return n == 1;
}