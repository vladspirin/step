// HW19072018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	// Program 1 Meeting 13
	// Пользователь вводит число. Определить количество цифр в этом числе, посчитать их сумму и среднее арифметическое.
	// Определить количество нулей в этом числе. Общение с пользователем организовать через меню.
	cout << "Program 1" << endl << endl;
	// Переменные
	int num, tmp, sum = 0, countZero = 0, count = 0;
	double average; int check;
	cout << "Please enter number: "; cin >> num;
	tmp = num;
	// Расчеты
	while (tmp != 0) {
		count++;
		if (tmp % 10 == 0) countZero++;
		sum += (tmp % 10);
		tmp /= 10;
	}
	average = (double)sum / count;
	// Меню
	cout << endl << "Please select the desired operation " << endl; 
	cout << "1. Determine the number of digits in this number" << endl; 
	cout << "2. Count the sum of the numbers of a given number" << endl; 
	cout << "3. Calculate arithmetic average" << endl; 
	cout << endl << "You choose: "; cin >> check;
	switch (check) {
	case 1: cout << endl << "In your number " << count << " digits" << endl; break;
	case 2: cout << endl << "Sum = " << sum << endl; break;
	case 3: cout << endl << "Average = " << average << endl; break;
	default: cout << endl << "Incorrect operation! Please select correct variant from 1 to 3" << endl; break;
	}
	system("pause");
	system("cls");
	
	// Program 2 Meeting 13
	// Написать программу, которая выводит на экран шахматную доску с заданным размером клеточки. 
	cout << "Program 2" << endl << endl;
	int size;
	cout << "Please enter size: "; cin >> size;
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < size; ++j) {
			for (int k = 0; k < 8; ++k) cout << setfill((i + k) % 2 ? '_' : '*') << setw(size) << "";
			cout << endl;
		}
	}
	system("pause");
	system("cls");

	// Program 1 Meeting 14
	// Написать программу, которая выводит на экран линию заданным символом, вертикальную или горизонтальную,
	// причем линия может выводиться быстро, нормально и медленно. Общение с пользователем организовать через меню.
	cout << "Program 1" << endl << endl;
	int symbolCount; char symbol; int lineType; int counter = 0;
	cout << "Please enter the number of characters in the line: "; cin >> symbolCount;
	cout << "Please enter the symbol: "; cin >> symbol;
	cout << "Please select line type: " << endl
		 << "1. Vertical line" << endl
		 << "2. Horizontal line" << endl;
	cin >> lineType;
	if (lineType != 1 && lineType != 2) { return printf("Incorrect line type!");}
	while (counter < symbolCount)
	{
		if (lineType == 1) cout << symbol << endl;
		if (lineType == 2) cout << symbol;
		counter++;
	}
	cout << endl;
	system("pause");
	system("cls");

	// Program 2 Meeting 14
	// Написать игру «Кубики». Пользователь и компьютер по очереди бросают 2 кубика.
	// Победитель – тот, у кого по результатам 3х бросков сумма больше. Предусмотреть красивый интерфейс игры.
	cout << "Program 2" << endl << endl;

	system("pause");
	return 0;

}
