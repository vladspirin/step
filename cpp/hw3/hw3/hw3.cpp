// hw3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// Program 1
	cout << "Program 1" << endl << endl;
	float r0, r1, r2, r3;
	cout << "Please enter variables: " << endl << endl;
	cin >> r1 >> r2 >> r3;
	r0 =  ((1 / r1) + (1 / r2) + (1 / r3));
	r0 = (1 / r0);
	cout << "Result: " << r0 << endl << endl;
	system("pause");
	system("cls");

	// Program 2
	cout << "Program 2" << endl << endl;
	double S, R, L;
	double const pi = 3.14;
	cout << "Please enter variables: " << endl << endl;
	cin >> L;
	R = L / (2 * pi);
	S = pi * pow(R, 2);
	cout << "Result: " << S << endl << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3" << endl << endl;
	int v, t, a, s;
	cout << "Please enter variables: " << endl << endl;  
	cin >> v >> t >> a;
	s = v * t + (a * (t * t)) / 2;
	cout << "Result: " << s << endl << endl;
	system("pause");
	return 0;
}

