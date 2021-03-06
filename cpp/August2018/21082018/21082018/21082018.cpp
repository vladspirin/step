// 21082018.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	// Program 1 
	cout << "Program 1" << endl << endl;
	// Инициализируем массив
	int const n1 = 10;
	int a1[n1] = { 1, 2, 0, 3, 0, 4, 5, 6, 7, 0 };
	// Проходим по массиву в поисках 0
	for (int i1 = 0; i1 < n1; i1++) {
		if (a1[i1] == 0) {
			// Производим сдвиг элементов влево
			for (int j1 = i1; j1 < n1 - 1; j1++) a1[j1] = a1[j1 + 1];
		}
		// Заполняем новыми значениями
		if (a1[i1] == 0) a1[i1] = -1;
		// Выводим результат пользователю
		cout << a1[i1] << " ";
	} cout << endl;
	system("pause");
	system("cls");
	
	// Program 2
	cout << "Program 2" << endl << endl;
	srand(time(0));
	// Инициализируем массив
	int const n2 = 20; int a2[n2]; int max2, mX = 0;
	// Заполняем рандомно наш массив от 0 до 50 и выводим пользователю 
	for (int i2 = 0; i2 < n2; i2++) { a2[i2] = rand() % 50; cout << a2[i2] << " "; }
	// Определяем что максимальным будет первое значение массива
	max2 = a2[0];
	// Проходим циклом по массиву в поисках максимального елемента и определяем его индекс
	for (int j2 = 1; j2 < n2; j2++) {
		if (a2[j2] > max2) { max2 = a2[j2]; mX = j2;}}
	// Выводим индекс максимального элемента пользователю
	cout << endl << "The index of max element = " << mX << endl << endl;
	// Меняем индекс максимального элемента
	a2[mX] = a2[0];
	// Меняем значение в первом индексе
	a2[0] = max2;
	// Выводим пользователю результат
	cout << "Result: " << endl;
	for (int k2 = 0; k2 < n2; k2++) cout << a2[k2] << " "; 	cout << endl << endl;
	system("pause");
	system("cls");
	
	// Program 3
	cout << "Program 3" << endl << endl;
	// Обьявляем и инициализируем массивы
	int const n3 = 5; int a3[n3], b3[n3]; int c3[10]; int idx = 0;
	// Заполняем рандомно первый массив и выводим его пользователю
	for (int i3 = 0; i3 < n3; i3++) { a3[i3] = rand() % 50 - rand() % 25; cout << a3[i3] << " "; }
	cout << endl << endl;
	// Заполняем рандомно второй массив и выводим его пользователю
	for (int i3 = 0; i3 < n3; i3++) { b3[i3] = rand() % 50 - rand() % 25; cout << b3[i3] << " "; }
	cout << endl << endl;
	// Находим элементы больше 0 для массива a3 и b3
	for (int i3 = 0; i3 < n3; i3++) {
		if (a3[i3] > 0) { c3[idx] = a1[i3]; idx++; }
		if (b3[i3] > 0) { c3[idx] = b3[i3]; idx++; }
	}
	// Находим элементы = 0 для массивов a3 и b3
	for (int i3 = 0; i3 < n3; i3++) {
		if (a3[i3] == 0) { c3[idx] = a1[i3]; idx++; }
		if (b3[i3] == 0) { c3[idx] = b3[i3]; idx++; }
	}
	// Находим элементы меньше 0 для массивов a3 и b3
	for (int i3 = 0; i3 < n3; i3++) {
		if (a3[i3] < 0) { c3[idx] = a1[i3]; idx++; }
		if (b3[i3] < 0) { c3[idx] = b3[i3]; idx++; }
	}
	// Выводим новый отсортированный массив на 10 элементов
	cout << "Result: " << endl;
	for (int i3 = 0; i3 < 10; i3++) {
		cout << "[" << i3 << "] = " << c3[i3] << endl;
	}
	system("pause");
	system("cls");
	
	// Program 4
	cout << "Program 4" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	int const n4 = 10; int a4[n4], sum1 = 0;
	// Заполняем массив целыми произвольными значениями и выводим результат пользователю
	for (int i4 = 0; i4 < n4; i4++) { a4[i4] = rand() % 20 - rand() % 20; cout << a4[i4] << " ";} cout << endl;
	// Находи сумму позитивных чисел
	for (int i4 = 0; i4 < n4; i4++) if (a4[i4] >= 0) sum1 += a4[i4];
	// Выводим пользователю сумму
	cout << "PositiveSum = " << sum1 << endl;
	system("pause");
	system("cls");
	
	// Program 5
	cout << "Program 5" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	char const n5 = 10; char a5[n5] = { '&', '%', '#', '?', '?', '@', '%', '~', '?', '?' };
	// Проходим по массиву и проверяем на начилие совпадений
	for (int i5 = 0; i5 < n5; i5++) {
		// Заменяем второй похожий элемент
		if (a5[i5] == a5[i5 - 1]) a5[i5] = '!';
		// Выводим массив пользователю
		cout << a5[i5] << " ";
	} cout << endl;
	system("pause");
	system("cls");
	
	// Program 6
	cout << "Program 6" << endl << endl;
	// Обьявляем переменные, инициализируем массив
	int const n6 = 10; int a6[n6]; int prod = 1;
	// Заполняем массив и выводим пользователю
	for (int i6 = 0; i6 < n6; i6++) { a6[i6] = rand() % 25;	cout << a6[i6] << " ";} cout << endl;
	// Проходим по массиву находим произведение нечетных чисел
	for (int i6 = 0; i6 < n6; i6++) if(a6[i6] % 2 == 1 ) prod *= a6[i6];	
	// Выводим результат пользователю
	cout << endl << "Result = " << prod << endl;
	system("pause");
	system("cls");
	
	// Program 7
	cout << "Program 7" << endl << endl;
	int a7[50]; int min7, n7; // Количество одинаковых минимальных значений
	int b7[50]; // Позиции элементов которые содержат минимальное значение
	// Заполняем массив и выводим пользователю
	for (int i7 = 0; i7 < 50; i7++) { a7[i7] = rand() % 100; cout << a7[i7] << " ";} cout << endl;
	// Поиск минимального значения
	min7 = a7[0];
	for (int i7 = 1; i7 < 50; i7++)
		if (min7 > a7[i7]) min7 = a7[i7];
	// Формируем массив индексов
	n7 = 0; // обнуляем счетчик в массиве индексов
	cout << endl << endl;
	// Далее у меня проблема, как ни крутил не могу обнаружить в чем же проблема
	for (int i7 = 0; i7 < 50; i7++) {
		if (min7 == a7[i7])
		{
			n7++; // увеличиваем количество элементов в массиве индексов
			b7[n7 - 1] = i7; // Запоминаем позицию
		}
		cout << b7[n7] << " ";
	} //ДОЛЖНО РАБОТАТЬ, НО НЕ РАБОТАЕТ
	system("pause");
	system("cls");
	
	// Program 8
	cout << "Program 8" << endl << endl;
	// Объявляем переменные, инициализируем массив
	int a8[10] = { 1,2,3,4,5,6,7,8,9,10 }; int temp[10]; int x8;
	// Выводим начальный массив пользователю
	for (int i8 = 0; i8 < 10; i8++) { cout << a8[i8] << " "; }
	cout << endl << "Enter Rotation Factor: " << endl;
	// Вводим точку сдвига
	cin >> x8;
	for (int i8 = 9; i8 >= 0; i8--)
	{
		if (i8 + x8 >= 10) { temp[i8 + x8 - 10] = a8[i8]; }
		else { temp[i8 + x8] = a8[i8]; }
	}
	for (int i8 = 0; i8 < 10; i8++) { 
		// Выводим результат пользователю
		cout << temp[i8] << " ";}
	cout << endl;
	system("pause");
	system("cls");

	// Program 9
	cout << "Program 9" << endl << endl;
	// Эту я так и не понял
	system("pause");
	system("cls");

	// Program 10
	cout << "Program 10" << endl << endl;
	// Объявляем переменные, инициализируем массив
	const int K = 10; int a10[K], arr_length, max10, mX10;
	cout << "Please enter array length: ";
	// Запрашиваем у пользователя длинну массива
	cin >> arr_length;
	// Заполняем массив
	for (int i10 = 0; i10 < arr_length; i10++) cin >> a10[i10];
	max10 = a10[0] + a10[1];
	int mX1_10 = 0, mX2_10 = 1;
	for (int i10 = 0; i10 < arr_length; i10++)
		for (int j10 = i10 + 1; j10 < arr_length; j10++)
			if (max10 < a10[i10] + a10[j10]) { max10 = a10[i10] + a10[j10]; mX1_10 = i10; mX2_10 = j10; }
	if (mX1_10 > mX2_10) mX10 = mX1_10; else mX10 = mX2_10;
	// Выводим результат
	for (int i10 = 0; i10 < mX10; i10++) cout << a10[i10] << " ";
	cout << endl;
	system("pause");
	return 0;
}