#include "pch.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	char str[50];
	cin.getline(str, 50);
	string str_num;
	int leng = strlen(str);
	int s = 0;
	for (int i = 0; i < leng; i++)
	{
		if (isdigit(str[i]))
			str_num += str[i];
		else if (str_num != "")
		{
			s += stoi(str_num);
			str_num = "";
		} 
	}
	if (str_num != "")
		s += stoi(str_num);

	cout << s << endl;

	return 0;
}

