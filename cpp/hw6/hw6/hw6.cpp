// hw6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	// Program 1
	// Task 1



	//system("pause");
	//system("cls");
	// Task 2
	for (int i2 = 7; i2 >= 1; i2--) {
		cout << endl;
		for (int j2 = i2; j2 <= 7; j2++) {
			cout << "*";
		}
	}
	cout << endl << endl;
	system("pause");
	system("cls");
	// Task 3
	/*
	for (int i3 = 1; i3 <= 7; i3++) {
		cout << endl;
		for (int j3 = i3; j3 <= 7; j3++) {
			cout << "*";
		}
	}
	cout << endl << endl;
	system("pause");
	system("cls");
	*/
	// Task 4
	for (int i4 = 1; i4 <= 7; i4++) {
		for (int k = 1; k <= 7 - i4; k++) {
			cout << "\n\t";
		}
		for (int j4 = 1; j4 <= i4; j4++) {
			cout << "*\t\t";
		}
		cout << "\n";

	}
	cout << endl << endl;
	system("pause");
	system("cls");
	// Task 5

	system("pause");
	system("cls");
	// Task 6

	system("pause");
	system("cls");
	// Task 7

	system("pause");
	system("cls");
	// Task 8

	system("pause");
	system("cls");
	// Task 9
	for (int i9 = 7; i9 >= 1; i9--) {
		cout << endl;
		for (int j9 = i9; j9 >= 1; j9--) {
			cout << "*";
		}
	}
	cout << endl << endl;
	system("pause");
	system("cls");
	// Task 10

	system("pause");
	system("cls");
	//Program 2

	system("pause");
	system("cls");
	//Program 3

	system("pause");
	system("cls");
	//Program 4

	system("pause");
	system("cls");
	//Program 5

	system("pause");
	system("cls");
	//Program 6

	system("pause");
	system("cls");
	//Program 7

	system("pause");
	system("cls");
	//Program 8

	system("pause");
	system("cls");
    return 0;
}

