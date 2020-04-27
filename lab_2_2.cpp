#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ruusian");
	char x;
	cin >> x;

	switch (x)
	{
	case 'a': 
	case 'б':  
	case 'в':  
	case 'г': cout << "1" << endl; break;
	case 'д':  
	case 'е':  
	case 'є':  
	case 'ж':  
	case 'з':  
	case 'и':  
	case 'і': cout << "2" << endl; break;
	case 'ї':  
	case 'й':  
	case 'к':  
	case 'л':  
	case 'м':  
	case 'н':  cout << "3" << endl; break;
	case 'о':  
	case 'п':  
	case 'р':  
	case 'с':  
	case 'т':  cout << "4" << endl; break;
	case 'у':  
	case 'ф':  
	case 'х':  
	case 'ц':  
	case 'ч':  
	case 'ш':  
	case 'щ':  
	case 'ь':  
	case 'ю':  
	case 'я':  cout << "5" << endl; break;

	default: cout << "Input Error" << endl;
	}
	return 0;
}