#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int A[3][3] = { 1,2,3,
				4,15,6,
				7,8,9 };

	int p[3] = { 1,1,1 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			p[j] *= A[i][j];
		}
	}

	for (int i(0); i < 3; i++)
		cout << p[i] << " ";
	cout << endl;
	return 0;
}
