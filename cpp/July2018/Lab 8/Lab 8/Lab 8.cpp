// Lab 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;
/*
// отдельная функция для задачи про числа Фибоначчи продолжение в Program 17
unsigned int fib(unsigned int n) {
	return (n < 2) ? n : fib(n - 2) + fib(n - 1);
}
*/
int main()
{
	/*
	// Program 1
	int n, k, i = 0, kil = 0, a;
	cin >> n >> k;
	while (i < n) {
		cin >> a;
		if (a % k == 0)
		{
			kil++;
			i++;
		}
	}
	system("pause");
	system("cls");

	// Program 2
	float b, min, max;
	int N, j = 1;
	cin >> N;
	cin >> b;
	max = min = b;
	while (j++ <= N) {
		cin >> b;
		if (min > b) min = b;
		if (max < b) max = b;
	}
	cout << "Result = \n\n" << max - min;
	system("pause");
	system("cls");

	// Program 3
	float N;
	int s = 0, it = 0, n1;
	cout << "Please enter variables: \n\n";
	cin >> N;
	while (it < N)
	{
		cin >> n1;
		if (n1 < 100 && n1 > 9) {
			s += n1; it++;
		}
		else break;
	}
	cout << "Result = " << s << "\n\n";
	system("pause");
	system("cls");

	//Program 4
	int n2, d = 1, itr = 2;
	cout << "Please enter your variable: ";
	cin >> n2;
	while (itr <= n2)
	{
		d *= itr;
		itr++;
	}
	cout << "Result = " << d << "\n\n";
	system("pause");
	system("cls");

	//Program 5
	int number, number1;
	int rev = 0; // число перевернутое
	cout << "Please enter natural four-digit number: ";
	cin >> number;
	number1 = number;
	while (number1 != 0) {
		rev = rev * 10 + number1 % 10; // переворот числа
		number1 /= 10; //отброс последнего числа 
	}
	(number == rev) ? cout << "Palindrome\n\n" : cout << "Sorry, this isn't palindrome\n\n";
	system("pause");
	system("cls");

	//Program 6
	int N, M, iter, z;
	cout << "Please enter your variables: \n";
	cin >> N >> M;
	z = 0;
	for (iter = N; iter <= M; iter++)
		if (iter % 2 == 0) {
			cout << iter << " ";
			z++;
		}
	system("pause");
	system("cls");

	//Program 7
	int itrr, numb;
	numb = 1;
	for (itrr = 1; numb <= 1000; itrr++)
		if (numb % 3) numb += 3;
	cout << numb << " \n\n";
	system("pause");
	system("cls");

	//Program 8
	int num, num1, k, ji, i;
	num = num1; k = 0; ji = 0;
	while (ji < 5)
	{
		for (i = 2; i < num1; i++)
			if (num1 % i == 0) k++;
		if (k == 0) {
			cout << num1 << " ";
			ji++;
		}
		num1++;
	}
	system("pause");
	system("cls");

	//Program 9
	int num9, k9, n9, n91, i9;
	n9 = n91;
	cout << "Please enter your number: ";
	cin >> num9;
	while (n91 != 0) {
		k9++;
		n91 /= 10;
	}
	n9 = n91;
	for (i9 = 1; i9 <= k9; i9++)
	{
		cout << n91 / pow(10, k9 - i9);
	}
	system("pause");
	system("cls");

	//Program 10
	cout << "Please enter your variable: "; // тут я запутался
	double x, y, c, d;
	float const step = 0.01;
	double minY;
	x = c - step;
	minY = x * sin(x);
	while (x >= d) {
		x += step;
		y = x * sin(x);
		if (y < minY) minY = y;
	}
	cout << "Result: ";
	system("pause");
	system("cls");

	//Program 11

	system("pause");
	system("cls");
	
	//Program 12
	system("pause");
	system("cls");
	//Program 13
	system("pause");
	system("cls");
	*/
	//Program 14
	int a14, n14, k14;
	cout << "Please enter your variable: "; cin >> a14;
	cout << "Please enter number of times: "; cin >> n14;
	while (a14 < n14) {
		k14++;
	}
	cout << "Result = " << a14 << endl << endl;
	system("pause");
	system("cls");
	/*
	//Program 15
	int N15;
	cin >> N15;
	double sum = 0.0;
	for (int i15 = 0; i15 < N15; i15++)
		sum += (2.0 * i15 + 1.0) / (2.0 * i15 + 2.0);
	cout << sum;
	system("pause");
	system("cls");
	
	//Program 16
	// Эту так и не понял
	system("pause");
	system("cls");
	
	//Program 17
	// Достаточно сложное задание, я так понял из того что прочитал, оно для понимания рекурсии
	const unsigned int N17 = 10;
	for (unsigned int i17 = 0; i17 < N17; i17++) {
		cout << i17 << ": " << fib(i17) << endl;
	}
	system("pause");
	system("cls");

	//Program 18
	int xb, xe;
	cout << "Enter x begin: ";
	cin >> xb;
	cout << "Enter y end: ";
	cin >> xe;
	for(int x18 = xb; x18 <= xe; x18++) {
	  int p18 = 1;
	  for(int i18 = 1; 2 * p18 <=x + 1; i18++) {
	    if(2 * p18 - 1 == x18)
	    cout << x << ' ';
	    p18 *= 2;
	  }
	}
	cout << endl;
	system("pause");
	system("cls");
	*/
	return 0;
}

