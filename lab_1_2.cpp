#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a = 0.87,
		b = 0.43,
		x = 2.54;

	double y = log(sqrt(x) + b * x * x)/ (pow((a + x), 1 / 9)) * exp(3.9) - tan(a + b) + acos(b);

	cout << "y:" << y << endl;

	return 0;
}

