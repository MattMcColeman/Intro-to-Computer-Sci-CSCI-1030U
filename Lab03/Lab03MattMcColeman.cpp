// Lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	
	
	//PART 1
	//defining variables
	double guess;
	double epsilon;
	double num;
	// asking the user to input a value
	cout << "enter a number to be square rooted: ";
	cin >> num;
	//assigning values to variables
	epsilon = 0.01;
	guess = num / 2.0;
	//while loop uses equation to approximate square root value
	while (abs(pow(guess,2) - num) >= epsilon){
		guess = guess - (pow(guess,2) - num) / (2.0 * guess);
	}
	//outputs the answer of the square root
	cout << "the square root is: " << guess << endl;

	//PART 2
	//defining variables
	double n;
	double PIestimate;
	double PI;
	PI = 3.14159265358979323846;
	n = 3;
	//gives the value of PIestimate with three sides
	PIestimate = n * sin(180*0.0174533 / n);
	//increases the number of sides until PIestimate satisfies the value of epsilon
	while (PI - PIestimate >= 0.000000001){
		PIestimate = (n)*sin(180 * 0.0174533 / n);
		n++;
		}
	//outputs value of Pi
	cout << "the value of Pi is: " << PIestimate << " with " << n << " number of sides";
	//ends program
	return 0;
}