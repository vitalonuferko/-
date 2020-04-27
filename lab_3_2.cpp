#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x = 3.0,
		y;
	/*while (x < 4)
	{
		y = 3 * (pow(log(x), 2) + pow(log(x + 1), 2))
		cout << y << endl;
		x += 0.1;
	}*/
	do
	{
		y = 3 * (pow(log(x), 2) + pow(log(x + 1), 2));
		cout << y << endl;
		x += 0.1;
	} while (x < 4);



	return 0;
}
