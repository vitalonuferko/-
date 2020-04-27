	#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

const double a = 7.83,
	x = 4.15,
	y = 5.37,
	z = 4.01;


double p(double k) {
	return (exp(a) + k) / (1 + exp(k));
}

double f() {
	return (pow(p(x),2) -1) / (pow(p(y), 2) + x * y) + p(z);
}

int main()
{
	cout << f();

	return 0;
}
