// bbu181spirin4_1Lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// Program 1
	cout << "Program 1 " << endl << endl; 
	int n;
	double x, y;
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
	kop = (kop / 1) % 100;
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
	cout << "Program 5 " << endl << endl;
	double v, pi = 3.14159265359;
	int r;
	cout << "please enter a ball radius: ";
	cin >> r;
	v = (0.75 * pi) * pow(r, 3); 
	cout << "result: " << v << endl << endl;
	system("pause");
	system("cls");

	// programm 6  
	//cout << "program 6 " << endl;

	//system("pause");
    return 0;
}

