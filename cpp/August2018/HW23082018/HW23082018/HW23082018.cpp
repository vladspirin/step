// HW23082018.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void bubbleSort(int *, int);

int main()
{
	// Program 1
	//Написать программу «справочник».Создать два одномерных массива.Один массив хранит
	//номера ICQ, второй – телефонные номера.Реализовать меню для пользователя :
	//- Отсортировать по номерам ICQ
	//- Отсортировать по номерам телефона
	//- Вывести список пользователей
	//- Выход
	/*
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
	srand(time(0));
	int size_array;
	cout << "Please enter size of array: ";	cin >> size_array;
	cout << "Your array: " << endl;
	int *sorted_array = new int[size_array]; // одномерный динамический массив
	for (int counter = 0; counter < size_array; counter++)
	{
		sorted_array[counter] = rand() % 50; // заполняем массив случайными числами
		cout << setw(2) << sorted_array[counter] << "  "; // вывод массива на экран
	}
	cout << endl << endl;
	cout << "Your sorted array: " << endl;
	bubbleSort(sorted_array, size_array); // вызов функции сортировки пузырьком

	for (int counter = 0; counter < size_array; counter++)
	{
		cout << setw(2) << sorted_array[counter] << "  "; // печать отсортированного массива
	}
	cout << endl;
	system("pause");
	system("cls");
	*/
	// Program 2 Meeting 18
	//Временно! Условие.
	//Есть стопка оладий различного радиуса. Единственная операция проводимая с ними - между
	//любыми двумя суем лопатку и меняем порядок оладий над лопаткой на обратный. Необходимо
	//за минимальное количество таких операций отсортировать снизу вверх по убыванию радиуса.
	cout << "Program 2" << endl << endl;
	// Объявляем переменны и инициализируем массив
	const int n = 10; int arr[n] = {22, 12, 4, 6, 54, 45, 23, 10, 3, 15};
	int minEl, maxEl, minIndex, maxIndex;
	minEl = maxEl = 0;
	// Перемещаем внешним циклом 

	// Проходим внутренним циклом по массиву в поисках минимального элемента
	for (int i = 0; i < n; i++) {
		if (maxEl < arr[i]) { maxEl = arr[i]; maxIndex = i; }
		//if (minEl > arr[i]) { minEl = arr[i]; minIndex = i; }
	}
	cout << "MaxElem: " << maxEl << "  MaxIndex: " << maxIndex << endl;
	//cout << "MinElem: " << minEl << "  MinIndex: " << minIndex << endl;// потом удалить , ваЙ, эта хрень не выводит элемент, индекс ведь на месте!!!!!

	system("pause");
	return 0;
}

// Added sorting function
void bubbleSort(int* arrayPtr, int length_array) // сортировка пузырьком
{
	int temp = 0; // временная переменная для хранения элемента массива
	bool exit = false; // булевая переменная для выхода из цикла, если массив отсортирован

	while (!exit) // пока массив не отсортирован
	{
		exit = true;
		for (int int_counter = 0; int_counter < (length_array - 1); int_counter++) // внутренний цикл
		  //сортировка пузырьком по возрастанию - знак >
		  //сортировка пузырьком по убыванию - знак <
			if (arrayPtr[int_counter] > arrayPtr[int_counter + 1]) // сравниваем два соседних элемента
			{
				// выполняем перестановку элементов массива
				temp = arrayPtr[int_counter];
				arrayPtr[int_counter] = arrayPtr[int_counter + 1];
				arrayPtr[int_counter + 1] = temp;
				exit = false; // на очередной итерации была произведена перестановка элементов
			}
	}
}