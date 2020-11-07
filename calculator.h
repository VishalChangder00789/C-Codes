#pragma once

//Header files can contain other header files.
//Header files are coded other than the main file.
//


#include<iostream>
#include<stdio.h>
using namespace std;

void add(int a, int b)
{
	int sum;
	sum = a + b;
	cout << "The Number is added as----->" << sum << endl;
}


void multiply(int a, int b)
{
	int pro;
	pro = a * b;
	cout << "The Number is multiply as----->" << pro << endl;
}

void divide(int a, int b)
{
	int div;
	if (a < b)
	{
		div = b / a;
		cout << "The Number is divided as----->" << div << endl;
	}
	else
	{
		div = a / b;
		cout << "The Number is divided as----->" << div << endl;
	}
}

void subtract(int a, int b)
{
	int sub;
	if (a < b)
	{
		sub = b - a;
		cout << "The Number is subtracted as----->" << sub << endl;
	}
	else
	{
		sub = a - b;
		cout << "The Number is subtracted as----->" << sub << endl;
	}
}
