#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int ari[20] = { 1, -2, 3, -4, 5, 6, 7, 8, 9, 10 ,11,12,13,14,15,16,17,18,19,20 };

	int max = 0,
		b, t = 1;
	bool a = false;

	cin >> b;


	if (b > ari[10])
		a = true;

	for (int i = 0; i < 20; i++)
	{
		if (ari[i] > ari[max])
			max = i;
		
		if (a)
		{
			if (ari[i] < 0)
				t *= ari[i];
		}
		else if (ari[i] < b)
			t++;
	}

	int tmp = ari[0];
	ari[0] = ari[max];
	ari[max] = tmp;

	for (int i = 0; i < 20; i++)
		cout << ari[i] << ' ';

	cout << endl;

	a ? cout << "- elem:\t" << t : cout << " < b :\t" << t - 1;

	cout << endl;
	return 0;
}
