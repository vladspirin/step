#include "pch.h"
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void randFunc(); // Для функции заполнения рандомно
void manually(); // Для функции заполнения вручную
void sortByICQ(); // Для сортировки по ICQ
void sortByPhone(); // Для сортировки по телефону
void sortByIndex(); // Для сортировки по индексу
int arrICQ[10]{0}; // Для ICQ
int arrPhone[10]{0}; // Для телефонов

void bubbleSort(int *, int); // Для сортировки пузырьком

int main()
{
	srand(time(0));
	// Program 1
	// Написать программу «справочник».Создать два одномерных массива.Один массив хранит
	// номера ICQ, второй – телефонные номера.Реализовать меню для пользователя:
	//- Отсортировать по номерам ICQ
	//- Отсортировать по номерам телефона
	//- Вывести список пользователей
	//- Выход
	
	// Program 1 Meeting 17
	cout << "Program 1" << endl << endl;
	int r = 0; // Для выбора метода ввода 
	int user = 0; // Для switch             
	cout << "You want to fill the array randomly or manually?\n\t\t 1 - manually\n\t\t 2 - randomly: "; cin >> r;
	if (r == 1)	{ manually();} else randFunc();
	cout << endl << endl;
	cout << "What do you want to display?\n 1 - Sort by ICQ\n 2 - sort by phone number\n 3 - sort by user index (phone and ICQ)" << endl;
	cin >> user;
	switch (user) {
	case 1: {	system("cls");
				sortByICQ();
				break;
		}
	case 2: {	system("cls");
				sortByPhone();
				break;
		}
	case 3: {	system("cls");
				sortByIndex();
				break;
		}
	default: {	cout << "You made a mistake!\n\n\t\t\tSorted by index!" << endl;
				sortByIndex();
		}
	}
	system("pause");
	system("cls");
	
	// Program 1 Meeting 18
	// Написать программу, реализующую сортировку массива методом усовершенствованной сортировки пузырьковым методом.
	// Усовершенствование состоит в том, что бы анализировать количество перестановок на каждом шагу, если это количество равно нулю,
	// то продолжать сортировку нет смысла – массив отсортирован.
	cout << "Program 1" << endl << endl;
	int size_array;
	cout << "Please enter size of array: ";	cin >> size_array;
	cout << "Your array: " << endl;
	int *sorted_array = new int[size_array]; // одномерный динамический массив
	for (int counter = 0; counter < size_array; counter++) {
		sorted_array[counter] = rand() % 50; // заполняем массив случайными числами
		cout << setw(2) << sorted_array[counter] << "  "; // вывод массива на экран
	}
	cout << endl << endl;
	cout << "Your sorted array: " << endl;
	bubbleSort(sorted_array, size_array); // вызов функции сортировки пузырьком
	for (int counter = 0; counter < size_array; counter++) {
		cout << setw(2) << sorted_array[counter] << "  "; // печать отсортированного массива
	}
	cout << endl;
	system("pause");
	system("cls");
	
	// Program 2 Meeting 18
	//Есть стопка оладий различного радиуса. Единственная операция проводимая с ними - между
	//любыми двумя суем лопатку и меняем порядок оладий над лопаткой на обратный. Необходимо
	//за минимальное количество таких операций отсортировать снизу вверх по убыванию радиуса.
	cout << "Program 2" << endl << endl;
	// Объявляем переменны и инициализируем массив
	int puncakeArray[] = { 10,5,7,4,6,1,3,9,2,8 };
	int arSize = sizeof(puncakeArray) / sizeof(int);
	int buff;
	int max;
	int maxArrayElement;

	cout << "Stack of pancakes start: " << endl;
	// Выводим исходный массив
	for (int i = 0; i < arSize; i++) {
		cout << "ArrayStart[" << i << "] = " << puncakeArray[i] << endl;
	}
	for (int i = arSize - 1; i >= 0; i--) {
		max = puncakeArray[i];
		maxArrayElement = i;
		// Ищем макс эелемент
		for (int j = i; j >= 0; j--) {
			if (puncakeArray[j] > max) {
				max = puncakeArray[j];
				maxArrayElement = j;
			}
		}
		// Переворачиваем часть массива, чтобы макс оказался сверху
		for (int flip = 0; flip <= maxArrayElement / 2; flip++)	{
			// Является ли верхний эелемент максимальным
			if (maxArrayElement == 0) {
				break;
			}
			buff = puncakeArray[flip];
			puncakeArray[flip] = puncakeArray[maxArrayElement - flip];
			puncakeArray[maxArrayElement - flip] = buff;
		}
		// Переворачиваем опять, чтобы макс оказался внизу стопки
		for (int flip = 0; flip <= i / 2; flip++) {
			buff = puncakeArray[flip];
			puncakeArray[flip] = puncakeArray[i - flip];
			puncakeArray[i - flip] = buff;
		}
	}
	cout << endl << "Stack of pancakes final: " << endl;
	// Выводим отсортированный массив
	for (int i = 0; i < arSize; i++) {
		cout << "ArrayFinish[" << i << "] = " << puncakeArray[i] << endl;
	}
	system("pause");
	return 0;
};

// ICQ functions
void manually() {
	int errICQ = 0, errPhone = 0; // Для не засчитанных данных
	for (int i = 0; i < 10; i++) {
		cout << "Please enter next ICQ number: "; cin >> arrICQ[i];
		// Если вводяться числа меньше 1000 и больше 9999 выбиваем ошибку
		if (arrICQ[i] < 1000 || arrICQ[i] >= 10000) {
			cout << "Invalid value entered! Data not saved!" << endl;
			errICQ++;
		}
	}
	cout << "Amount of not saved data: " << errICQ << endl;
	for (int j = 0; j < 10; j++) {
		cout << "Please enter next phone number: ";	cin >> arrPhone[j];
		// Если вводяться числа меньше 1000000000000 и больше 999999999 выбиваем ошибку
		if (arrPhone[j]<100000000 || arrPhone[j]>+1000000000) {
			cout << "Invalid value entered! Data not saved!" << endl;
			errPhone++;
		}
	}
	cout << "Amount of not saved data: " << errPhone << endl;
};

void randFunc() {
	for (int j = 0; j < 10; j++) {
		arrICQ[j] = rand() % 900 + 1000;
		arrPhone[j] = rand() % 900000000 + 100000000;
	}
};

void sortByICQ() {
	int min = 0;
	for (int i = 0; i < 10; i++) {
		min = arrICQ[i];
		for (int j = i + 1; j < 10; j++) {
			if (arrICQ[j] < min) {
				min = arrICQ[j];
				arrICQ[j] = arrICQ[i];
			}
			arrICQ[i] = min;
		}
	}
	cout << "Sorted in ascending order: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << endl;
		cout << arrICQ[i];
		cout << endl;
	}
};

void sortByPhone() {
	int min = 0;
	for (int i = 0; i < 10; i++) {
		min = arrPhone[i];
		for (int j = i + 1; j < 10; j++) {
			if (arrPhone[j] < min) {
				min = arrPhone[j];
				arrPhone[j] = arrPhone[i];
			}
			arrPhone[i] = min;
		}
	}
	cout << "Sorted in ascending order: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << endl;
		cout << arrPhone[i];
		cout << endl;
	}
};

void sortByIndex() {
	int index = 0;
	system("color 17");
	for (int j = 0; j < 10; j++) {
		cout << "Index " << index << "\t ID ICQ "; // Выводим индекс ячейки
		cout << arrICQ[j]; // Выводим ID ICQ
		cout << "    phone number   ";
		cout << arrPhone[j]; // Номер телефона
		index++;
		cout << endl;                                           
	}
};

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
};