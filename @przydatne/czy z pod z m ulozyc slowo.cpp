#include <iostream>
using namespace std;

int main()
{
	char znak;
	int k = 0;
	int o = 0;
	int n = 0;
	int t = 0;

	for (int i = 1; i <= 5; i++)
	{
		cout << "Podaj znak: ";
		cin >> znak;
		
		if (znak == 'k')
		{
			k++;
		}
		else if (znak == 'o')
		{
			o++;
		}
		else if (znak == 'n')
		{
			n++;
		}
		else if (znak == 't')
		{
			t++;
		}
	}
	if (k == 1 && o == 2 && n == 1 && t == 1)
	{
		cout << "Z podanych znakow mozna utworzyc slowo 'konto'" << endl;
	}
	else
	{
		cout << "Z podanych znakow nie mozna utworzyc slowa 'konto'" << endl;
	}
}
