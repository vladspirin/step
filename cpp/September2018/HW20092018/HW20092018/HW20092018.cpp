// HW20092018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Program 1 Meeting 25
	// Используя два указателя на массив целых чисел, скопировать один массив в другой.
	// Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
	cout << "Program 1" << endl << endl;
	int arr1_1[10] = { 8, 54, 4, 81, 17, 25, 33, 12, 36, 10 }; int arr1_2[10] = {};
	int *p1_1 = arr1_1; int *p1_2 = arr1_2;
	cout << "First array: ";
	for (int i = 0; i < 10; i++) cout << arr1_1[i] << " ";
	cout << endl;
	cout << "Second array: ";
	for (int i = 0; i < 10; i++) cout << arr1_2[i] << " ";
	cout << endl;
	cout << "Copied first array to second: ";
	for (int i = 0; i < 10; i++) cout << (*(p1_2 + i) = *(p1_1 + i)) << " ";
	cout << endl;
	system("pause");
	system("cls");

	// Program 2 Meeting 25
	// Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный.
	// Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
	cout << "Program 2" << endl << endl;
	const int n = 10;
	int arr2_1[n] = { 8, 54, 4, 81, 17, 25, 33, 12, 36, 10 }; int arr2_2[n] = {};
	int *p2_1 = &arr2_1[0]; int *p2_2 = &arr2_2[n - 1];
	cout << "Source array: ";
	for (int i = 0; i < n; i++) cout << *(p2_1 + i) << " ";
	cout << endl << "Inverted array: ";
	for (int i = 0; i < n; i++) *(p2_2--) = *(p2_1 + i);
	for (int i = 1; i < n + 1; i++) cout << *(p2_2 + i) << " ";
	cout << endl;
	system("pause");
	system("cls");

	// Program 3 Meeting 25
	// Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы во втором массиве элементы находились в обратном порядке.
	// Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
	cout << "Program 3" << endl << endl;
	int arr3_1[10] = { 8, 54, 4, 81, 17, 25, 33, 12, 36, 10 };
	int arr3_2[10] = { 11, 31, 78, 50, 40, 13, 7, 2, 28, 55 };
	int *p3_1 = &arr3_1[0]; int *p3_2 = &arr3_2[10 - 1];
	cout << "First array: ";
	for (int i = 0; i < 10; i++) cout << arr3_1[i] << " ";
	cout << endl << "Second array: ";
	for (int i = 0; i < 10; i++) cout << arr3_2[i] << " ";
	for (int i = 0; i < 10; i++) *(p3_2--) = *(p3_1 + i);
	cout << endl << "Copied first array to second: ";
	for (int i = 1; i < 10 + 1; i++) cout << *(p3_2 + i) << " ";
	cout << endl;
	system("pause");
	system("cls");

	// Program 1 Meeting 26
	// Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры).
	// Необходимо создать третий массив минимально возможного размера, в котором нужно собрать элементы массива A, которые не включаются в массив B, без повторений.
	cout << "Program 1" << endl << endl;
	int *A, *B, *C, M, N, k = 0, l = 0;
	cout << "Please enter size of first array: "; cin >> M;
	cout << "Please enter size of second array: "; cin >> N;
	A = new int[M];	B = new int[N];
	cout << "Please enter variables of A array: " << endl;
	for (int i = 0; i < M; i++) cin >> A[i];
	cout << "Please enter variables of B array: " << endl;
	for (int i = 0; i < N; i++) cin >> B[i];
	for (int i = 0; i < M; i++)	{
		for (int j = 0; j < N; j++)
			if (A[i] != B[j]) k++;
		if (k == N) 
			l++;
		  k = 0;
	}
	C = new int[l];	l = 0; k = 0;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			if (A[i] != B[j]) k++;
		if (k == N) {
			C[l] = A[i];
			l++;
		}
		k = 0;
	}
	cout << "The third array = ";
	for (int i = 0; i < l; i++) cout << C[i] << " ";
	cout << endl;
	system("pause");
	system("cls");
	
	// Program 2 Meeting 26
	// Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры).
	// Необходимо создать третий массив минимально возможного размера, в котором нужно собрать элементы массивов A и B, которые не являются общими для них, без повторений.
	cout << "Program 2" << endl << endl;
	int *A2, *B2, *C2, M2, N2, k2 = 0, l2 = 0;
	cout << "Please enter size of first array: "; cin >> M2;
	cout << "Please enter size of second array: "; cin >> N2;
	A2 = new int[M2];	B2 = new int[N2];
	cout << "Please enter variables of A array: " << endl;
	for (int i = 0; i < M2; i++) cin >> A2[i];
	cout << "Please enter variables of B array: " << endl;
	for (int i = 0; i < N2; i++) cin >> B2[i];
	for (int i = 0; i < M2; i++) {
		for (int j = 0; j < N2; j++)
			if (A2[i] != B2[j]) k2++;
		if (k2 == N2)
			l2++;
		k2 = 0;
	}
	for (int i = 0; i < N2; i++) {
		for (int j = 0; j < M2; j++)
			if (B2[j] != A2[i]) k2++;
		if (k2 == M2)
			l2++;
		k2 = 0;
	}
	C2 = new int[l2]; l2 = 0; k2 = 0;
	for (int i = 0; i < M2; i++) {
		for (int j = 0; j < N2; j++)
			if (A2[i] != B2[j]) k2++;
		if (k2 == N2) {
			C2[l2] = A2[i];
			l2++;
		}
		k2 = 0;
	}
	for (int i = 0; i < N2; i++) {
		for (int j = 0; j < M2; j++)
			if (B2[j] != A2[i]) k2++;
		if (k2 == M2) {
			C2[l2] = B2[i];
			l2++;
		}
		k2 = 0;
	}
	cout << "The third array = ";
	for (int i = 0; i < l2; i++) cout << C2[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
