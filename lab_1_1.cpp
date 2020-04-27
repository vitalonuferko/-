
#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double d = 4.8,
		c = 6.5,
		f = 3.1;

	double k = log(d * f + 1) + pow(sin(c * f), 2);
	double l = tan(d + c * f * f) - 2 * exp(d);


	cout << "k:\t" << k << endl;
	cout << "l:\t" << l << endl;

	return 0;
}
