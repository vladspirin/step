// Lab13092018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

// Function 1 Program 1
/*
template <class T>
void QuickSortRecur(T* a, int Nend) {
	// исходный массив a[ ], a[Nend] — его последний элемент
	int і = 0, j = Nend;
	T rab, с;
	с = a[Nend >> 1];
	// выбор центрального элемента с использованием операции побитового сдвига вправо
	do
	{
		while (a[i] < с) i++; 
		while (a[j] > с) j--; 
		if (i <= j) { 
		rab = a[i];
		a[i++] = a[j];
		a[j--] = rab; 
		}
	} while (i <= j);
	// рекурсивные вызовы функции QuickSortRecur(), если есть, что сортировать
	if (j > 0) QuickSortRecur(a, j);
	if (Nend > i) QuickSortRecur(a + i, Nend - i);
}
*/
// Function 2 Program 2
// создать функцию с тремя значениями, далее нужна последовательность цифр, далее находим кратные 

int isTrueValue(int n = 10) {
	int amt = 0;
	while (n) {
		n /= 10;
		amt++;
	}
	return amt;
};


// Function 3 Program 3

// Function 4 Program 4

// Function 5 Program 5

// Function 6 Program 6

// Function 7 Program 7

// Function 8 Program 8

// Function 9 Program 9

// Function 10 Program 10
int main()
{
	// Program 1
	/*
	cout << "Program 1" << endl << endl;
	int a[] = {2, 7, 6, 9, 45, 4, 3, 67, 104, 1, 99, 72, 43, 8, 4, 28, 100};
	int n = sizeof(a) / sizeof(int);
	QuickSortRecur(a, n - 1);
	cout << "\n Result Quick-sort of array" << endl;
	for (int i = 0; i < n; i++)
	cout << a[i] << ' ';
	//getch();
	system("pause");
	system("cls");
	*/
	// Program 2
	cout << "Program " << endl << endl;
	//cout << "Please enter your variable: ";
	
	
	int isTrueValue();
	cout << isTrueValue();
	system("pause");
	system("cls");
	/*
	// Program 3
	cout << "Program 3" << endl << endl;

	system("pause");
	system("cls");

	// Program 4
	cout << "Program 4" << endl << endl;

	system("pause");
	system("cls");

	// Program 5
	cout << "Program 5" << endl << endl;

	system("pause");
	system("cls");

	// Program 6
	cout << "Program 6" << endl << endl;

	system("pause");
	system("cls");

	// Program 7
	cout << "Program 7" << endl << endl;

	system("pause");
	system("cls");

	// Program 8
	cout << "Program 8" << endl << endl;

	system("pause");
	system("cls");

	// Program 9
	cout << "Program 9" << endl << endl;

	system("pause");
	system("cls");

	// Program 10
	cout << "Program 10" << endl << endl;

	system("pause");
	*/
	return 0;
}