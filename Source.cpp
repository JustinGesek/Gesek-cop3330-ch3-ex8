#include <iostream>
#include "number.h"
using namespace std;

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Justin Gesek
 */

int main()
{
	int value;
	cout << "Please enter a number: ";
	cin >> value;
	if (value % 2 == 0)
	{
		cout << "The number is even." << endl;
	}
	else
	{
		cout << "The number is odd." << endl;
	}
	return 0;
}