// DZ_2_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main()
{
	HANDLE hStrOut = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hStrOut, 4);
	cout << "Hello\n";

	SetConsoleTextAttribute(hStrOut, 2);
	cout << "I am Vlad\n";

	SetConsoleTextAttribute(hStrOut, 7);
	cout << "Hello" << endl;

	system("pause");
	return 0;

}