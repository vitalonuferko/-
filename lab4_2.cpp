#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;
const double  a = 0.98, c = 1.1;

double x(int i, int m1, int m2) {
	double s = 0;
	for (int i = m1; i < m2; i++)
	{
		s += (a - exp(c)) / c;
	}
	return s;
}

double f(int n1, int n2, int m1, int m2) {
	double p = 1;
	for (int i = n1; i < n2; i++)
	{
		p*= x(i, m1, m2);
	}
	return (1 + exp(p)) / 2;
}

int main()
{
	cout << f(2, 3, 2, 7);

	return 0;
}
