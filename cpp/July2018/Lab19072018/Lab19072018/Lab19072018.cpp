#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function for Program 17
unsigned int fib(unsigned int n) {
	return (n < 2) ? n : fib(n - 2) + fib(n - 1);
};

int main()
{
	
	// Program 1
	// Дано n натуральних чисел і ціле число k, що вводяться з клавіатури.
	// Визначити кількість чисел у наборі, кратних k. Якщо таких елементів немає, то вивести відповідне повідомлення.
	cout << "Program 1" << endl << endl;
	int n, k, i = 0, kil = 0, a;
	cin >> n >> k;
	while (i < n) {
		cin >> a;
		if (a % k == 0)
		{
			kil++;
			i++;
		}
	}
	system("pause");
	system("cls");

	// Program 2
	// Дано n дійсних чисел, що вводяться з клавіатури. Знайти різницю між максимальним і мінімальним із них.
	cout << "Program 2" << endl << endl;
	float b, min, max;
	int N, j = 1;
	cin >> N;
	cin >> b;
	max = min = b;
	while (j++ <= N) {
		cin >> b;
		if (min > b) min = b;
		if (max < b) max = b;
	}
	cout << "Result = \n\n" << max - min;
	system("pause");
	system("cls");

	// Program 3
	// Дано n дійсних чисел, що вводяться з клавіатури. Знайти суму двозначних чисел у наборі.
	cout << "Program 3" << endl << endl;
	float N;
	int s = 0, it = 0, n1;
	cout << "Please enter variables: \n\n";
	cin >> N;
	while (it < N)
	{
		cin >> n1;
		if (n1 < 100 && n1 > 9) {
			s += n1; it++;
		}
		else break;
	}
	cout << "Result = " << s << "\n\n";
	system("pause");
	system("cls");

	// Program 4
	// Дано натуральне число n. Знайти факторіал цього числа (факторіал числа n – це добуток всіх натуральних чисел від 1 до n, тобто n!=1×2×3×…×n).
	cout << "Program 4" << endl << endl;
	int n2, d = 1, itr = 2;
	cout << "Please enter your variable: ";
	cin >> n2;
	while (itr <= n2)
	{
		d *= itr;
		itr++;
	}
	cout << "Result = " << d << "\n\n";
	system("pause");
	system("cls");

	// Program 5
	// Дано натуральне чотирицифрове число n. З’ясувати, чи є воно паліндромом (таким, що читається однаково зліва направо та справа наліво, наприклад 1221).
	cout << "Program 5" << endl << endl;
	int number, number1;
	int rev = 0; // число перевернутое
	cout << "Please enter natural four-digit number: ";
	cin >> number;
	number1 = number;
	while (number1 != 0) {
		rev = rev * 10 + number1 % 10; // переворот числа
		number1 /= 10; //отброс последнего числа
	}
	(number == rev) ? cout << "Palindrome\n\n" : cout << "Sorry, this isn't palindrome\n\n";
	system("pause");
	system("cls");

	// Program 6
	// Вивести всі парні числа від n до m.
	cout << "Program 6" << endl << endl;
	int N, M, iter, z;
	cout << "Please enter your variables: \n";
	cin >> N >> M;
	z = 0;
	for (iter = N; iter <= M; iter++)
		if (iter % 2 == 0) {
			cout << iter << " ";
			z++;
		}
	system("pause");
	system("cls");

	// Program 7
	// Написати програму виведення всіх чисел від 1 до 1000, які закінчуються цифрою 3.
	cout << "Program 7" << endl << endl;
	int itrr, numb;
	numb = 1;
	for (itrr = 1; numb <= 1000; itrr++)
		if (numb % 3) numb += 3;
	cout << numb << " \n\n";
	system("pause");
	system("cls");

	// Program 8
	// Вивести 5 простих чисел, які більші введеного числа.
	cout << "Program 8" << endl << endl;
	int num, num1, k, ji, i;
	num = num1; k = 0; ji = 0;
	while (ji < 5)
	{
		for (i = 2; i < num1; i++)
			if (num1 % i == 0) k++;
		if (k == 0) {
			cout << num1 << " ";
			ji++;
		}
		num1++;
	}
	system("pause");
	system("cls");

	// Program 9
	// Написати програму, що підраховує кількість цифр у введеному цілому числі n.
	cout << "Program 9" << endl << endl;
	int num9, k9, n9, n91, i9;
	n9 = n91;
	cout << "Please enter your number: ";
	cin >> num9;
	while (n91 != 0) {
		k9++;
		n91 /= 10;
	}
	n9 = n91;
	for (i9 = 1; i9 <= k9; i9++)
	{
		cout << n91 / pow(10, k9 - i9);
	}
	system("pause");
	system("cls");

	// Program 10
	// Знайти мінімальне значення функції y= x sin(x), на відрізку [c, d] з кроком 0.01.
	cout << "Program 10" << endl << endl;
	cout << "Please enter your variable: "; // тут я запутался
	double x, y, c, d;
	float const step = 0.01;
	double minY;
	x = c - step;
	minY = x * sin(x);
	while (x >= d) {
		x += step;
		y = x * sin(x);
		if (y < minY) minY = y;
	}
	cout << "Result: ";
	system("pause");
	system("cls");

	// Program 11
	// Вивести члени арифметичної прогресії, що не перевищують 100, з заданим початковим членом та кроком(формула в pdf файле)
	cout << "Program 11" << endl << endl;
	//a1 = 5; // условно
	//d = 3; // шаг, условно
	// a2 = 8, a3 = 11, a4 = 14...
	//for(int i11 = a1; i11 <=100; i11 += d)
	//S+=i11;

	system("pause");
	system("cls");

	// Program 12
	// Написати програму знаходження всіх досконалих чисел на заданому інтервалі (натуральне число називається досконалим,
	// якщо воно дорівнює сумі своїх дільників, за винятком самого себе, наприклад, 6=1+2+3).
	cout << "Program 12" << endl << endl;

	system("pause");
	system("cls");

	// Program 13
	// Дано послідовність із n цілих чисел. Написати програму, яка обчислює добуток максимального та мінімального елементів цієї послідовності.
	cout << "Program 13" << endl << endl;

	system("pause");
	system("cls");
	
	// Program 14
	// Знайти суму наступної послідовності а1+а2-а3+а4-а5+...+аn, де n – кількість елементів послідовності.
	cout << "Program 14" << endl << endl;
	int a14, n14, k14 = 0;
	cout << "Please enter your variable: "; cin >> a14;
	cout << "Please enter number of times: "; cin >> n14;
	while (a14 < n14) k14++;
	cout << "Result = " << a14 << endl << endl;
	system("pause");
	system("cls");
	
	// Program 15
	// Написати програму знаходження суми n перших членів послідовності 1/2+3/4+5/6+...
	cout << "Program 15" << endl << endl;
	int N15;
	cin >> N15;
	double sum = 0.0;
	for (int i15 = 0; i15 < N15; i15++)
		sum += (2.0 * i15 + 1.0) / (2.0 * i15 + 2.0);
	cout << sum;
	system("pause");
	system("cls");

	// Program 16
	// Знайти суму ряду, загальний член якого заданий за формулою An=(x*n)/n!.
	cout << "Program 16" << endl << endl;
	//S = 0;
	//cin >>
	//for(n = 1; n <= N; )
	system("pause");
	system("cls");

	// Program 17
	// Знайти перше число Фібоначчі, яке більше за m (m>1) (числа Фібоначчі fn обчислюються за формулами f0=f1=1; fn=fn-1+fn-2при n=2,3,...
	// Числова послідовність Фібоначчі 1, 1, 2, 3, 5, 8, 13, ...).
	cout << "Program 17" << endl << endl;
	const unsigned int N17 = 10;
	for (unsigned int i17 = 0; i17 < N17; i17++) {
		cout << i17 << ": " << fib(i17) << endl;
	}
	system("pause");
	system("cls");

	// Program 18
	// Написати програму, яка виводить всі числа Мерсена із заданого проміжку. 
	// Просте число називається числом Мерсена, якщо його можна представити у вигляді 2p-1, де p – теж просте число.
	cout << "Program 18" << endl << endl;
	int xb, xe;
	cout << "Enter x begin: ";
	cin >> xb;
	cout << "Enter y end: ";
	cin >> xe;
	for(int x18 = xb; x18 <= xe; x18++) {
	  int p18 = 1;
	  for(int i18 = 1; 2 * p18 <= x + 1; i18++) {
		if(2 * p18 - 1 == x18)
		cout << x << ' ';
		p18 *= 2;
	  }
	}
	cout << endl;
	system("pause");
	return 0;
};