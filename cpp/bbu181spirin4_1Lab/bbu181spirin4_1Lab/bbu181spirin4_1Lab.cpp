// bbu181spirin4_1Lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// Program 1
	cout << "Program 1 " << endl << endl; 
	int n, x, y;
	cout << "Please enter the number of year (example format - 2010): ";
	cin >> n;
	y = ceil((n % 4) * 0.25);
	x = 366 - y;
	cout << "Result: " << "In " << n << " year = " << x << " days" << endl << endl;
	system("pause");
	system("cls");
	
	// Program 2
	cout << "Program 2 " << endl << endl;
	int hrn, kop;
	cout << "Please enter amount of " << endl;
	cout << "hrn: ";
	cin >> hrn;
	cout << "kop: ";
	cin >> kop;
	kop = kop / 10;
	cout << hrn << " hrn "<< kop << " kop" << endl << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3 " << endl;


	// Program 4 

	//cout << "Program 4 " << endl;

	//system("pause");
	//system("cls");

	// Program 5
	cout << "Program 5 " << endl;
	//float pi = 3.1415926;	int R, V;
	//cout << "Please enter a ball radius: ";
	//cin >> R;
	//V = 4 / 3 * pi * pow(R, 3); // Тут ошибка в начале где 4/3 
	//cout << "Result: " << V;

	//system("pause");
	//system("cls");

	// Programm 6  
	//cout << "Program 6 " << endl;

	//system("pause");
    return 0;
}

