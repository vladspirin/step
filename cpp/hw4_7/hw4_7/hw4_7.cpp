// hw4_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Program 1
	cout << "Please enter positive six-digit number (format: 000000): " << endl << endl;
	int sixDigit, num1, num2, num3, num4, num5, num6, sum1, sum2;
	cin >> sixDigit;
	if (sixDigit > 999999 || sixDigit < -999999) cout << endl << "Error! You enter a non-six-digit number." << endl << endl; 
	if (sixDigit <= 999999 && sixDigit >= -999999) {
		num1 = sixDigit / 100000;
		sixDigit = sixDigit % 100000;
		num2 = sixDigit / 10000;
		sixDigit = sixDigit % 10000;
		num3 = sixDigit / 1000;
		sixDigit = sixDigit % 1000;
		num4 = sixDigit / 100;
		sixDigit = sixDigit % 100;
		num5 = sixDigit / 10;
		sixDigit = sixDigit % 10;
		num6 = sixDigit;
		sum1 = num1 + num2 + num3;
		sum2 = num4 + num5 + num6;
	}
	if (sum1 == sum2) cout << "You have a lucky number" << endl << endl;
	else cout << "You haven't a lucky number" << endl << endl;
	system("pause");
	system("cls");
/*
	// Program 2
	cout << "Please enter your variables: " << endl << endl;


	system("pause");
	system("cls");

	// Program 3
	cout << "Please enter your variables: " << endl << endl;


	system("pause");
	system("cls");

	// Program 4
	cout << "Please enter your variables: " << endl << endl;


	system("pause");
	system("cls");*/
    return 0;
}

