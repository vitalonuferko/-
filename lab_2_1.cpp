#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double c = 1.231,
		d = 1.152;
	double x = 2.438,
		y = 3.289,
		a;

	if (x < y)
		a = x + pow(y , 1.0 / 3.0);
	else a = cos(c * y) - d * x;

	cout << "a:\t" << a << endl;

	return 0;
}
