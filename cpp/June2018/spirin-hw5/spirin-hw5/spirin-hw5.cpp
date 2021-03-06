// spirin-hw5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Program 1
	cout << "Program 1" << endl << endl;
	float t, v, s;
	cout << "Please enter time (sec): " << endl << endl;
	cin >> t;
	cout << "Please enter distance (m): " << endl << endl;
	cin >> s;
	v = s / t;
	cout << "You should drive with speed of " << v << " km / h " << endl << endl;
	system("pause");
	system("cls");

	// Program 2  
	cout << "Program 2" << endl << endl;
	double bill, secCost, minCost = 0.30;
	int h1, m1, s1, h2, m2, s2, time;
	cout << "Please enter start time in format '00' hours: " << endl;
	cin >> h1;
	cout << "Please enter start time in format '00' min: "  << endl;
	cin >> m1;
	cout << "Please enter start time in format '00' sec: "  << endl;
	cin >> s1;
	cout << "Please enter finish time in format '00' hours: " << endl;
	cin >> h2;
	cout << "Please enter finish time in format '00' min: " << endl;
	cin >> m2;
	cout << "Please enter finish time in format '00' sec: " << endl;
	cin >> s2;
	time = ((h2 * 3600) + (m2 * 3600 / 60) + s2) - ((h1 * 3600) + (m1 * 3600 / 60) + s1);
	secCost = minCost / 60;
	bill = time * secCost;
	cout << "Result: bill = " << bill << endl << endl;
	system("pause");
	system("cls");

	// Program 3
	cout << "Program 3" << endl << endl;
	int dist, V, V100;
	float cost1, cost2, cost3, price1, price2, price3;
	cout << "Please enter distance (km): " << endl;
	cin >> dist;
	cout << "Please enter petrol consumption per 100 km: " << endl;
	cin >> V100;
	V = dist * V100 / 100;
	cout << "Please enter the cost of three types of petrol: " << endl << endl;
	cout << "98: ";
	cin >> price1;
	cout << "95: ";
	cin >> price2;
	cout << "DP: ";
	cin >> price3;
	if (price1) { cost1 = V * price1; }
	if (price2) { cost2 = V * price2; }
	if (price3) { cost3 = V * price3; }
	cout << endl << "Result: " << endl << endl;
	cout << cost1 << endl << cost2 << endl << cost3 << endl << endl;
	system("pause"); 
	return 0;
}

