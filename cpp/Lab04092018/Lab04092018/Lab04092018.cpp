// Lab04092018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;
void rectanglePaint(int, int);

int main()
{
	// Program 1
	int a , b;
	cin >> a >> b; 
	rectanglePaint(a, b);
	cin >> a >> b;
	rectanglePaint(a, b);
	system("pause");
	system("cls");
	// Program 2

	system("pause");
	system("cls");
	return 0;
}
// Function 1, Program 1
void rectanglePaint(int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << "*";
		cout << endl;
	}
}
// Function 2, Program 2
