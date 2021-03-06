#include "pch.h"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <algorithm> 
#include <vector> 
using namespace std;

// Function for program 3
void bucketSort(float arr[]) 
{ 
    vector<float> b[10]; 
    for (int i = 0; i < 10; i++) { 
       int bi = 10 * arr[i]; 
       b[bi].push_back(arr[i]); 
    } 
    for (int i = 0; i < 10; i++) 
       sort(b[i].begin(), b[i].end()); 
    int index = 0; 
    for (int i = 0; i < 10; i++) 
        for (int j = 0; j < b[i].size(); j++) 
          arr[index++] = b[i][j]; 
};

// ф-ция для обмена значений ячеек - я так понял что обычная ф-ция swap() работает так же 
void swapEl(int *arr, int i)
{
	int buff;
	buff = arr[i];
	arr[i] = arr[i - 1];
	arr[i - 1] = buff;
}

//ф-ция "шейкер"-сортировки
void myShakerSort(int *arr, int size) {
	int leftMark = 1;
	int rightMark = size - 1;
	while (leftMark <= rightMark) {
		for (int i = rightMark; i >= leftMark; i--)
			if (arr[i - 1] > arr[i]) swapEl(arr, i);
		leftMark++;

		for (int i = leftMark; i <= rightMark; i++)
			if (arr[i - 1] > arr[i]) swapEl(arr, i);
		rightMark--;

		cout << endl << "Iteration: " << leftMark - 1;
	}
}

int main()
{
	srand(time(0));
	const int SIZE = 10;
    // Program 1
	// Організувати прямий пошук елементу V у заданому масиві дійсних значень.
	cout << "Program 1" << endl << endl;
	int arr1[SIZE]; int V1 = 0, max1;
	for (int i = 0; i < SIZE; i++) { arr1[i] = rand() % 50;	cout << arr1[i] << " "; }
	max1 = arr1[0];
	for (int i = 1; i < SIZE; i++) if (max1 < arr1[i]) { max1 = arr1[i]; V1 = i; }
	cout << endl << "maxElement = " << max1 << " Index = " << V1 << endl;
	system("pause");
	system("cls");
	
	// Program 2
	// Організувати бінарний пошук елементу V у заданому масиві цілих значень.
	cout << "Program 2" << endl << endl;
	int arr2[SIZE]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int average_index = 0, 
		first_index = 0, 
		last_index = SIZE - 1, 
		search_value = 8; 
	if (last_index == -1) cout << endl << "Array is empty" << endl; 
	while (first_index < last_index) {
		average_index = first_index + (last_index - first_index) / 2; 
		(search_value <= arr2[average_index]) ? last_index = average_index : first_index = average_index + 1;     
	}
	if (arr2[last_index] == search_value) cout << endl << "Value is found" << endl << "Index = " << last_index << endl;
	else cout << endl << "Value is not found" << endl;
	system("pause");
	system("cls");

	// Program 3
	// Організувати m-блочний пошук елементу V у заданому масиві дійсних значень.
	cout << "Program 3" << endl << endl; 
	float arr3[] = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434, 0.777, 0.8082, 0.110, 0.2345 };
	int n = sizeof(arr3) / sizeof(arr3[0]);
	cout << "Source array: " << endl;
	for (int i = 0; i < n; i++) cout << arr3[i] << " ";
	bucketSort(arr3);
	cout << endl << "Sorted array: " << endl;
	for (int i = 0; i < n; i++)
		cout << arr3[i] << " ";
	cout << endl;
	system("pause");
	system("cls");

	// Program 4
	// Організувати сортування одномірного масиву цілих чисел методом «бульбашкового» сортування.
	cout << "Program 4" << endl << endl;
	bool flag = false;
	double arr4[SIZE];
	cout << "Please enter " << SIZE << " elements of array:" << endl << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Array [ " << i << " ]= ";
		cin >> arr4[i];
	}
	cout << endl << "Source array:" << endl;
	for (int i = 0; i < SIZE; i++) cout << setw(4) << arr4[i];
	while (!flag) {
		flag = true;
		for (int i = 0; i < SIZE - 1; i++)
			if (arr4[i] > arr4[i + 1]) {
				swap(arr4[i], arr4[i + 1]); // перестановка
				flag = false;
			}
	}
	cout << endl << endl << "This is sorted array: " << endl;
	for (int i = 0; i < SIZE; i++) cout << setw(4) << arr4[i];
	cout << endl;
	system("pause");
	system("cls");

	// Program 5
	// Організувати сортування одномірного масиву цілих чисел методом прямої вставки.
	cout << "Program 5" << endl << endl;

	system("pause");
	system("cls");

	// Program 6
	// Написати програму «успішність». Користувач вводить 10 оцінок студента. Реалізувати меню для користувача:
	// − Вивід оцінок(вивід масиву);
	// − Перескладання екзамену(користувач вводить номер елементу масиву і нову оцінку);
	// − Стипендія(стипендія виходить, якщо середній бал не нижче 10.7).
	cout << "Program 6" << endl << endl;

	system("pause");
	system("cls");

	// Program 7
	// Використовуючи метод вибору максимального елемента, впорядкувати масив за зростанням.
	cout << "Program 7" << endl << endl;

	system("pause");
	system("cls");

	// Program 8
	// Відсортувати масив дійсних значень. Для сортування використати алгоритм методу бінарної вставки.
	cout << "Program 8" << endl << endl;

	system("pause");
	system("cls");

	// Program 9
	// Впорядкувати заданий список цілих значень методом Шейкера.
	cout << "Program 9" << endl << endl;
	int size = 0;
	cout << "Please enter array size: "; cin >> size;
	int *A = new int[size];
	for (int k = 0; k < size; k++) {
		A[k] = size - k; 
		cout << A[k] << " ";
	}
	myShakerSort(A, size); 
	cout << endl << "Array after sort: " << endl;
	for (int k = 0; k < size; k++) cout << A[k] << " ";
	cout << endl;
	system("pause");
	system("cls");

	// Program 10
	// Об’єднати два впорядковані списки в один, не порушуючи впорядкованості.
	cout << "Program 10" << endl << endl;
	
	system("pause");
	return 0;
};