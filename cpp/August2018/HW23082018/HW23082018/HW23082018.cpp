// HW23082018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Program 1 Meeting 17
	cout << "Program 1" << endl << endl;
	int const N = 10;
	int icq[N] = { 660419, 325021, 405734, 948190, 396203, 664091, 524420, 405664, 831810, 459950 };
	int phoneNumber[N] = {5555555, 3333333, 1111111, 4444444, 2222222, 7777777, 6666666, 8888888, 9999999, 9898888};
	cout << "ICQ numbers: "; 
	for (int i = 0; i < N; i++) cout << icq[i] << " ";
	cout << endl;
	cout << "Phone Numbers: ";
	for (int i = 0; i < N; i++) cout << phoneNumber[i] << " ";
	cout << endl;
	for (int i = 0; i < N; i++) {

		switch (???)
		{
		case 1: cout << "Masha";
		case 2: cout << "Dasha";
		case 3: cout << "Ksyusha";
		case 4: cout << "Kesha";
		case 5: cout << "Gosha";
		case 6: cout << "Sasha";
		case 7: cout << "Pasha";
		case 8: cout << "Petr";
		case 9: cout << "Paul";
		case 10: cout << "Roma";
		default: cout << "Error!";
			break;
		}
	}
	system("pause");
	system("cls");

	// Program 1 Meeting 18
	cout << "Program 1" << endl << endl;

	system("pause");
	system("cls");

	// Program 2 Meeting 18
	cout << "Program 2" << endl << endl;

	system("pause");
	return 0;
}