#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	const int m = 4,
		n = 2;

	int s[m];

	for (int i = 0; i < m; i++)
		s[i] = 0;

	int ari[m][n] = { {1,2},
					{3, 4},
					{5,6},
	{7,8} };

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			s[i] += ari[i][j];


	for (int i(0); i < m; i++)
		cout << s[i] << " ";
	cout << endl;
	return 0;
}