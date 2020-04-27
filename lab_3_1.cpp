#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a = 2.1,
		s = 0;

	for (int i = 1; i < 8; i++)
	{
		s += sqrt(a + i) / 5 + 3;

	}

	cout << "s:\t" << s << endl;

	return 0;
}
