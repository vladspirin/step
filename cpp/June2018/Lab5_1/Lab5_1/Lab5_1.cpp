
// Lab5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	// Program 1
	cout << "Program 1 " << endl << endl;
	int a, b, c, sum, op, average;
	cout << "Please enter variables: " << endl << endl;
	cin >> a >> b >> c;
	sum = a + b + c;
	op = a * b * c;
	average = (a + b + c) / 3;
	cout << "Result: " << sum << endl << endl;
	cout << "Result: " << op << endl << endl;
	cout << "Result: " << average << endl << endl;
	system("pause");
	system("cls");

	// Program 2
	cout << "Program 2 " << endl << endl;
	int amount;
	float s, per, bill;
	cout << "Please enter the price of one laptop: " << endl << endl;
	cin >> amount;
	cout << "Please enter the amount of laptops: " << endl << endl;
	cin >> s;
	cout << "Please enter a discount percentage: " << endl << endl;
	cin >> per;
	bill = (amount * s) - (amount * s * per / 100);
	cout << "The total cost of the order is: " << bill << endl << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3 " << endl << endl;
	double salary, deal, percent, constsalary = 100;
	cout << "Please enter total cost of manager deals per month: " << endl << endl;
	cin >> deal;
	percent = deal * 1.05;
	salary = deal * percent / 100 + constsalary;
	cout << "Salary: " << salary << endl << endl;
	system("pause");
	system("cls");

	// Program 4
	cout << "Program 4 " << endl << endl;
	long double GB, KB, DSpeed, ConSpeed;
	int hour, min, sec, time;
	cout << "Please enter the size of one movie in GB: " << endl << endl;
	cin >> GB;
	cout << endl << "Please enter download speed in bit/s: " << endl << endl;
	cin >> ConSpeed;
	DSpeed = (ConSpeed / 8);
	KB = (GB * 1024) * 1024;
	time = KB / DSpeed;
	hour = time / 3600;
	min = time % 3600 / 60;
	sec = time % 60;
	cout << endl << "Download time = " << hour << ":" << min << ":" << sec << endl << endl;
	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5 " << endl << endl;
	int x, y, n, f, k, z;
	cout << "Please enter variables: " << endl << endl;
	// 1 equation
	cin >> x >> n;
	f = (1 + x) * ((pow(x, 2) - 0.86) / (2.43 + (1 / (1 + pow(x, 2))))) + (1.4761 * pow(n, 2) * x);
	cout << "Result = " << f << endl << endl;
	system("pause");
	system("cls");
	// 2 equation
	cout << "Please enter new variables: " << endl << endl;
	cin >> x >> n;
	f = pow(sin((x - (1 / sqrt(1 + pow(x, 2))))), 2) + pow(cos((x / (1 + pow(x, 2))) + 0.75), 2);
	cout << "Result = " << f << endl << endl;
	system("pause");
	system("cls");
	
	// 3 equation
	cout << "Please enter new variables: " << endl << endl;
	cin >> x >> y;
	// тут пишу только для целых так как в условии не указано какие числа должны быть (допускаю что целые)
	int min, max;
	min = (x < y) ? x : y;
	max = (x > y) ? x : y;
	f = (max + 14.2) / (2 + pow(min, 2));
	cout << endl << "Result: " << f << endl << endl;
	system("pause");
	system("cls");

	// 4 equation
	// Помню что вот эту задачу писали на доске и как на зло эта единственная задача которую я не записал. Вроде задача тривиальная, логика понятна, но рабочий вариант у меня вызывает сомнения
	cout << "Please enter new variables: " << endl << endl;
	cin >> x >> y;
	if ((x + y) < (x - y)) cout << endl << "Result #1: " << (x + y) << endl << endl;
	else if ((x - y) < (1 + y)) cout << endl << "Result #2: " << (x - y) << endl << endl;
	else cout << endl << "Result #3: " << (1 + y) << endl << endl;
	system("pause");
	system("cls");
	
	// 5 equation
	cout << "Please enter new variables: " << endl << endl;
	cin >> a >> b;
	if (a % b == 0 || a == 2)  k = sqrt(a) + b;
	else k = (1 + b) / (2 - a);
	f = (((a + b) < (2 * a)) ? (a + b) : (2 * a)) + (k * ((a - 3 * b) < 25 ? (a - 3 * b) : 25));
	cout << endl << "Result: " << f << endl << endl;
	system("pause");
	system("cls");

	// 6 equation
    int x, y, z;
	cout << "Please enter new variables: " << endl << endl;
	cin >> x >> y >> z;
		// Высчитываю абсолютное минимальное (даже звучит страшно)
		if (abs(x) < abs(y)) cout << endl << abs(x) << endl << endl;
		else if (abs(y) < abs(z)) cout << endl << abs(y) << endl << endl;
		else cout << endl << abs(z) << endl << endl;
		// Высчитываю максимальное
		if (x > y && x > z) cout << endl << x << endl << endl;
		else if (y > x && y > z) cout << endl << y << endl << endl;
		else cout << endl << z << endl << endl;
	//f ?
	// Тут у меня полный тупик. Решил отправить на 97\% выполненное задание ? лучше так : чем тянуть дальше; 
	system("pause");
	return 0;
}

