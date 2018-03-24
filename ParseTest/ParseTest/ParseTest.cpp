// Lab 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{
	//Write a program to convert an English measurement in miles, yards, feet and inches into ametric measurement in kilometers, meters and centimeters.Use the following formula to change the English measurement to inches :

	double miles;
	double yards;
	double feet;
	double inches;

	cout << "Enter measurement in miles, yards, feet and inches\n";
	cin >> miles >> yards >> feet >> inches;

	double TotalInches = 63360 * miles + 36 * yards + 12 * feet + inches;
	double TotalMeters = (TotalInches) / 39.37;


	double kilo;
	double meters;
	double centi;

	kilo = TotalMeters * pow(10, 3);
	meters = TotalMeters;
	centi = TotalMeters * pow(10, -2);

	cout << "Kilometers: " << kilo << endl;
	cout << "Meters: " << meters << endl;
	cout << "Centimeters: " << centi << endl;

	system("pause");

	return 0;
}

