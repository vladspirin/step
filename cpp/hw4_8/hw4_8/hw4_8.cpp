// hw4_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Program 1
	int day, year,leapYear, month, day1, day2, month1, month2, year1, year2;
	cout << "Please enter first date (d/m/yyyy): \n\n";
	cin >> day1 >> month1 >> year1;
	cout << "Please enter second date (d/m/yyyy): \n\n";
	cin >> day2 >> month2 >> year2;
	leapYear = (year % 4 && year % 100 != 0 || year % 400 == 0) ? 1 : 0;
	switch (month)
	{
	case 1: day = 31; break;
	case 2: (leapYear)? day = 29: day = 28; break;
	case 3: day = 31; break;
	case 4: day = 30; break;
	case 5: day = 31; break;
	case 6: day = 30; break;
	case 7: day = 31; break;
	case 8: day = 31; break;
	case 9: day = 30; break;
	case 10: day = 31; break;
	case 11: day = 30; break;
	case 12: day = 31; break;
	}

	//cout << "\n\n";
	system("pause");
	system("cls");
	// Program 2

	system("pause");
    return 0;
}

