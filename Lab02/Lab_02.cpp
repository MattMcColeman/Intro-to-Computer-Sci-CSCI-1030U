// Lab_02.cpp : Defines the entry point for the console application.
//
// Author:       Matt McColeman
// Student Number: 100525235
// Date:         september 23, 2014
// Description:  Lab 02 – Programming Basics and Debugging


#include "stdafx.h"

#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
// PART 1

// This code creates a double-precision floating point variable, celsius.  
	double celsius;
	double fahrenheit;
//  Then, it prints a prompt asking the user for input, then inputs a value.  
//  The value is stored in the celsius variable.  
//  The same procedure can be used to input integers and strings.
	cout << "Temperature in celsius: ";
	cin >> celsius;
//  This line is the formula to convert celcius to fahrenheit
	fahrenheit = celsius*1.8 + 32;
//  The converted value for fahrenheit is printed
	cout << "Temperature in Fahernheit = " << fahrenheit << endl;
//  prompt to end the program

// PART 2

//  THis code creates a double-pprecision floating point variables, principal and rate.
	double principal;
	double rate;
//  Then, it prints a prompt asking the user for input, then inputs a value.
	cout << "Principal amount: ";
	cin >> principal;
	cout << "Interest rate: ";
	cin >> rate;
//  loops the equation five times to compund the rate annually.
	for (int amount = 1; amount <= 5; amount++)
	{
		principal = principal * rate;
	}
//  The final amount after five years is printed.
	cout << "Balance after five years = " << principal << endl;

	return 0;
}

