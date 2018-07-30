// hw6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{
	// Program 1
	int f;
	char a = '*';
	while (1) {
		puts("Choose from 1 to 10");
		puts("Tap 0 for exit");
		scanf_s("%d", &f);
		if (f > 10 || f < 0) {
			printf_s("Not correct number");
			continue;
		}
		if (f == 0) {
			printf_s("Bye! \n");
			break;
		}

		switch (f) {

		case 1:
			for (int i = 6; i > 0; i--) {
				for (int j = 0; j < 6; j++) {
					if (j < 6 - i)
						printf_s(" ");
					else
						printf_s("*");
				}
				printf_s("\n");
			}
			break;

		case 2:
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < i; j++) {
					if (i == 0)
					{
						break;
					}
					printf("%c", a);
				}
				printf("\n");
			}
			break;
		case 3:
			for (int a = 7, j = 0; j != 4; ++j, a -= 2) {
				for (int i = 0; i < j; ++i) {
					printf(" ");
				}
				for (int i = 0; i < a; ++i) {
					printf("*");
				}
				puts("");
			}
			break;

		case 4:
			for (int a = 1, j = 4; j != 0; --j, a += 2) {
				for (int i = 0; i < j; ++i) {
					printf(" ");
				}
				for (int i = 0; i < a; ++i) {
					printf("*");
				}
				puts("");
			}
			break;
		case 5:
			for (int a = 7, j = 1; j != 5; ++j, a -= 2) {
				for (int i = 0; i < j; ++i) {
					printf(" ");
				}
				for (int i = 0; i < a; ++i) {
					printf("*");
				}
				puts("");
			}
			for (int a = 1, j = 4; j != 0; --j, a += 2) {
				for (int i = 0; i < j; ++i) {
					printf(" ");
				}
				for (int i = 0; i < a; ++i) {
					printf("*");
				}
				puts("");
			}
			break;
		case 6:
			for (int a = 7, j = 1; j != 5; ++j, a -= 2) {
				for (int i = 0; i < j; ++i) {
					printf(" ");
				}
				for (int i = 0; i < a; ++i) {
					printf("*");
				}
				puts("");
			}
			for (int a = 1, j = 4; j != 0; --j, a += 2) {
				for (int i = 0; i < j; ++i) {
					printf(" ");
				}
				for (int i = 0; i < a; ++i) {
					printf("*");
				}
				puts("");
			}
			break;
		case 7:
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < i; j++) {
					if (i == 0)
					{
						break;
					}
					printf("%c", a);
				}
				printf("\n");
			}
			for (int y = 1; y <= 4; y++) {
				for (int x = 1; x <= 4; x++) {
					if (x >= y)
						printf_s("%c", a);

				}puts("");
			}
			break;
		case 8:
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					if (j < 4 - i)
						printf_s(" ");
					else
						printf_s("*");
				}
				printf_s("\n");
			}
			for (int i = 4; i > 0; i--) {
				for (int j = 0; j < 4; j++) {
					if (j < 4 - i)
						printf_s(" ");
					else
						printf_s("*");
				}
				printf_s("\n");
			}
			break;

		case 9:
			for (int y = 1; y <= 5; y++) {
				for (int x = 1; x <= 5; x++) {
					if (x >= y)
						printf_s("%c", a);

				}puts("");
			}
			break;
		case 10:
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 6; j++) {
					if (j < 6 - i)
						printf_s(" ");
					else
						printf_s("*");
				}
				printf_s("\n");
			}
			break;
		}
	}
	
	//Program 2
	int k12 = 0;
	int i11, i21, i31;
	for (int i212 = 100; i212 <= 999; i212++)
	{
		i11 = i212 / 100; 
		i21 = i212 % 10; 
		i31 = (i212 % 100) / 10; 
		if (i11 == i21 || i21 == i31 || i31 == i11) k12++;

	}
	cout << "Result: " << k12 << "\n";
	system("pause");
	system("cls");

	//Program 3
	int n1 = 0, n2 = 0, n3 = 0;
	int count = 0;
	for (int i = 100; i <= 999; i++)
	{
		n1 = i / 100;
		n2 = (i / 10) % 10;
		n3 = i % 10;

		if (n1 != n2 && n2 != n3 && n1 != n3)
		{
			count++;
		}
	}
	cout << count << endl;
	system("pause");
	system("cls");

	//Program 4
	int digit;
	do
	{
		cout << "Please enter your variable: ";
		cin >> digit;
		cout << "\n";
		int out = 0, tmp = 1;
		for (; digit != 0;)
		{
			if (digit % 10 != 3 && digit % 10 != 6) {
				out = out + tmp * (digit % 10);
				tmp *= 10;
    		}
			digit /= 10;
		}
		cout << "New digit: " << out << "\n";
		cout << "If you want to continue, press 1, if not press 0: ";
		cin >> digit;
	} while (digit == 1);
	system("pause");
	system("cls");

	//Program 5
	int a1 = 0;
	cout << "Please enter any integer A: ";
	cin >> a1;
	cout << "\n\n";
	for (int b1 = 1; b1 < a1; b1++)
	{
		if ((a1 % (b1 * b1) == 0) && (a1 % (b1 * b1 * b1) != 0))
			cout << b1 << " ";
	}
	system("pause");
	system("cls");

	//Program 6
	int a2, b2;
	cin >> a2;
	b2 = a2;
	int sum = 0;
	while (abs(b2) > 0) {
		sum += b2 % 10;
		b2 /= 10;
	}
	if ((sum*sum*sum) == (a2 * a2)) cout << "yes" << endl;
	else cout << "no" << endl;
    system("pause");
	system("cls");

	//Program 7
	int num;
	cout << "Insert you number\n";
	cin >> num;
	for (int i127 = 1; i127 <= num; i127++) {
		if (num % i127 == 0)
			cout << i127 << "\n";
	}
	system("pause");
	system("cls");

	//Program 8
	int num1, num2;
	cout << "Please enter first number : ";
	cin >> num1 ;
	cout << "Please enter second number: ";
	cin >> num2;
	cout << "Numbers on which to divide without a remainder = ";
	for (int i128 = 1; i128 <= num1 && i128 <= num2; i128++) {
		if (num1 % i128 == 0 && num2 % i128 == 0)
			cout << i128 << "\n";
	}
	cout << endl;
	system("pause");
	system("cls");
    return 0;
}

