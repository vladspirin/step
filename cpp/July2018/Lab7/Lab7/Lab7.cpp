// Lab7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main()
{
	
	//Program 1
	// Первая задача мне не далась, остальное решил более недели назад. Понимаю, что можно сделать через system("color номер_цвета__фона номер_цвета_текста");
	// Я перечитал кучу информации и понял что вариант с system грубый. Остановился на SetConsoleTextAttribute понимаю как сделать цвет фона текста и цвет сомого текста,
	// но тоже не, то. Как по мне, тут функции нужны и массивы бы не помешали, но увы. Задание отправляю, так как уже просрочил давно. Но над данной проблемой бьюсь дальше. 
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int txtcolor;
	cout << "Please select number of color (0-15): " << endl << endl;
	cin >> txtcolor;
	switch (txtcolor)
	{
	case 0:	SetConsoleTextAttribute(hConsole, 0); break;
	case 1:	SetConsoleTextAttribute(hConsole, 1); break;
	case 2: SetConsoleTextAttribute(hConsole, 2); break;
	case 3: SetConsoleTextAttribute(hConsole, 3); break;
	case 4: SetConsoleTextAttribute(hConsole, 4); break;
	case 5: SetConsoleTextAttribute(hConsole, 5); break;
	case 6: SetConsoleTextAttribute(hConsole, 6); break;
	case 7: SetConsoleTextAttribute(hConsole, 7); break;
	case 8: SetConsoleTextAttribute(hConsole, 8); break;
	case 9: SetConsoleTextAttribute(hConsole, 9); break;
	}
	cout << "Bla-bla-bla-bla-bla-bla-bla-bla-bla-bla-bla-bla-bla\n\n\n";
	system("pause");
	system("cls");
	
	//Program 2
	cout << "Please enter your number: " << endl << endl;
	int number, n;
	cin >> number;
	cout << "Please enter the power of number: " << endl << endl;
	cin >> n;
	switch (n)
	{
	case 0: cout << "Result = " << pow(number, 0) << endl << endl; break;
	case 1: cout << "Result = " << pow(number, 1) << endl << endl; break;
	case 2: cout << "Result = " << pow(number, 2) << endl << endl; break;
	case 3: cout << "Result = " << pow(number, 3) << endl << endl; break;
	case 4: cout << "Result = " << pow(number, 4) << endl << endl; break;
	case 5: cout << "Result = " << pow(number, 5) << endl << endl; break;
	case 6: cout << "Result = " << pow(number, 6) << endl << endl; break;
	case 7: cout << "Result = " << pow(number, 7) << endl << endl; break;
	default: cout << "Error! Please enter the power of number from 0 to 7 " << endl << endl; break;
	}
	system("pause");
	system("cls");

	//Program 3
	cout << "Please enter number of month:" << endl << endl;
	int month;
	cin >> month;
	switch (month)
	{
	case 1: cout << "January (Winter)\n\n"; break;
	case 2: cout << "February (Winter)\n\n"; break;
	case 3: cout << "March (Spring)\n\n"; break;
	case 4: cout << "April (Spring)\n\n"; break;
	case 5: cout << "May (Spring)\n\n"; break;
	case 6: cout << "June (Summer)\n\n"; break;
	case 7: cout << "July (Summer)\n\n"; break;
	case 8: cout << "August (Summer)\n\n"; break;
	case 9: cout << "September (Autumn)\n\n"; break;
	case 10: cout << "October (Autumn)\n\n"; break;
	case 11: cout << "November (Autumn)\n\n"; break;
	case 12: cout << "December (Winter)\n\n"; break;
	default: cout << "Error! In year only 12 month.\n\n";
		break;
	}
	system("pause");
	system("cls");

	//Program 4
	int xB, xA, xC, xD, yA, yB, yC, yD;
	cout << "Please enter your variables : " << endl << endl;
	cin >> xA >> xB >> xC >> xD >> yA >> yB >> yC >> yD;
	if ((0.5 * fabs((xB - xA) * (yC - yA) - (xC - xA) * (yB - yA) + (xC - xA) * (yD - yA) - (xD - xA) * (yC - yA)) - sqrt(pow(xB - xA, 2) + pow(yB - yA, 2)) * sqrt(pow(xD - xA, 2) + pow(yD - yA, 2))) < 0.0000001) cout << "This is a rectangle" << endl << endl;
	else cout << "This isn't a rectangle" << endl << endl;
	system("pause");
	system("cls");

	
	//Program 5
	cout << "Please enter your variables:" << endl << endl;
	float a, b, c, a1, a2;
	cin >> a >> b >> c;
	a1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	a2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	if ((b - 4 * a * c) > 0) cout << "D > 0, so x1 =" << a1 << "x2 = " << a2 << endl << endl;
	else if ((b - 4 * a * c) == 0) cout << "D = 0, so x = " << a1 << endl << endl;
	else if ((b - 4 * a * c) < 0) cout << "Error! D < 0" << endl << endl;
	system("pause");
	system("cls");
	
	//Program 6
	cout << "Please enter your height: " << endl << endl;
	int weight, height, optimalWeight, shouldAdd;
	cin >> height;
	optimalWeight = height - 100;
	cout << "Please enter your weight: " << endl << endl;
	cin >> weight;
	shouldAdd = optimalWeight - weight;
	if (weight > optimalWeight) cout << "Your weight is more than optimal " << endl << endl;
	else if (weight < optimalWeight) cout << "You need to dial another " << shouldAdd << " kg" << endl;
	else if (weight == optimalWeight) cout << "You are in good condition " << endl << endl;
	system("pause");
	system("cls");
	
	//Program 7
	float r1, r2;
	float s;
	printf("Please enter the source data \n");
	printf("Radius of the ring (cm): ");
	scanf_s("%f", &r1);
	printf("Radius of the hole (cm): ");
	scanf_s("%f", &r2);
	if (r1 > r2) {
		s = 2 * 3.14 * (r1 - r2);
		printf("\nRing area %6.2f sq.cm\n", s);
	}
	else {
		printf("\n Error! The radius of the hole can not be greater than the radius of the ring\n");
	}
	system("pause");
	system("cls");
	
	//Program 8
	double sum, res;
	cout << "Enter the purchase amount: ";
	cin >> sum;
	if ((sum == 0) || (sum < 500)) cout << "Discount not provided. Amount to be paid: " << sum << endl << endl;
	if ((sum >= 500) && (sum < 800)) {
		res = (sum * 1.03) - sum;
		sum *= 1.03;
		cout << "You get a discount of 3%: " << res << endl;
		cout << "Amount to be paid: " << sum << endl << endl;
	}
	if (sum >= 800) {
		res = (sum * 1.03) - sum;
		sum *= 1.05;
		cout << "You get a discount of 5%: " << res << endl;
		cout << "Amount to be paid: " << sum << endl << endl;
	}

	system("pause");
	system("cls");
	
	//Program 9
	int  answer1, answer2, answer3, answer_case = 0; 
    cout << "1)How many cat lives? \nanswers: \n-> 5 lives \n-> 7 lives \n-> 9 lives\nyour answer: "; 
    cin >> answer1;
    cout << "\n2)How many centimeters in a meter? \nanswers: \n-> 10 centimeters \n-> 100 centimeters \n-> 1000 centimeters\nyour answer: "; 
    cin >> answer2;
    cout << "\n2)The speed of sound? \nanswers: \n-> 340 m/s \n-> 320 m/s \n-> 240 m/s \nyour answer: "; 
    cin >> answer3;
    if (answer1 == 9) answer_case ++; 
    if (answer2 == 100) answer_case ++; 
    if (answer3 == 340) answer_case ++; 
    cout << "\nRating = ";
    switch (answer_case) 
    {
    case 1: {cout << "2 points\n"; break;}
    case 2: {cout << "4 points\n"; break;}
    case 3: {cout << "5 points\n"; break;}
    default : cout << "0 points\n";
    }
	system("pause");
	
	return 0;
}

