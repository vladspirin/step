// Lab 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
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
	/*
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
	system("pause");
	system("cls");
	//Program 10
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
	//Program 14
	system("pause");
	system("cls");
	//Program 16
	system("pause");
	system("cls");
	//Program 17
	system("pause");
	system("cls");
	//Program 18
	system("pause");
	system("cls");
	*/
    return 0;
}

