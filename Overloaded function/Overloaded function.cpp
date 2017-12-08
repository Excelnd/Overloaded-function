// Overloaded function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int operate(int a, int b)
{
	return (a*b);
}

double operate(double a, double b)
{
	return (a / b);
}

int main()
{
	int a = 5, b = 2;
	double n = 5.0, m = 2.0;
	cout << operate(a, b) << "\n";
	cout << operate(n, m) << "\n";

    return 0;

}

