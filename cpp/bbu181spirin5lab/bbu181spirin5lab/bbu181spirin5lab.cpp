// bbu181spirin5lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	// Program 1
	cout << "Program 1 " << endl << endl;
	int a, s, m, h, day, dif;
	cout << "Please enter time in seconds: ";
	cin >> a;
	day = a / 86400;
	h = a % 86400 / 3600;
	m = a % 86400 % 3600 / 60;
	s = a % 60;
	cout << "Result: " << day << ":" << h << ":" << m << ":" << s << endl << endl;
	dif = 86400 - a;
	cout << dif << endl << endl;
	day = 86400 / dif;
	h = dif % 86400 / 3600;
	m = dif % 86400 % 3600 / 60;
	s = dif % 60;
	cout << "Difference: " << day << ":" << h << ":" << m << ":" << s << endl << endl;
	system("pause");
	system("cls");

	// Program 2
	cout << "Program 2 " << endl << endl;
	double pi = 3.141592, c;
	int S, d;
	float r;
	cout << "Please enter diameter: " << endl << endl;
	cin >> d;
	c = pi * d;
	cout << "Length: " << c << endl << endl;
	r = c / (2. * pi);
	S = pi * pow(r, 2);
	cout << "Result of 'S': "<< S << endl << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3 " << endl << endl;

	int x, m, b;
	float a, y;
	cin >> x >> m;
	b = pow(x, 4) + pow(m, 2);
	a = sqrt(abs(x));
	y = pow(cos(a + sin(b)), 2);
	cout << "y = " << y;
	system("pause");
	system("cls");

	// Program 4
	cout << "Program 4 " << endl << endl;
	double x1, x2, y1, y2, dist;
	cout << "Please enter the first coordinates x1, y1: " << endl << endl;
	cin >> x1 >> y1;
	cout << "Please enter the second coordinates x2, y2: " << endl << endl;
	cin >> x2 >> y2;
	dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << "Distance between A and B: " << dist << endl << endl;
	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5 " << endl << endl;
	int R, r1, r2;
	// for a parallel resistor connection
	cout << "This program is designed to calculate the resistance of the electric circuit for a parallel resistor connection: " << endl << endl;
	cout << "Please enter r1 and r2: " << endl << endl;
	cin >> r1 >> r2;
	R = ((r1 * r2) / (r1 + r2));
	cout << "Result: R = " << R << endl << endl;
	// for a series of resistances
	cout << "This program is designed to calculate the resistance of the electric circuit for a series of resistances: " << endl << endl;
	cout << "Please enter r1 and r2: " << endl << endl;
	cin >> r1 >> r2;
	R = r1 + r2;
	cout << "Result: R = " << R << endl << endl;
	system("pause");
	return 0;
}