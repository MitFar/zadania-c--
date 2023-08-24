/*
Napisz własną funkcję zliczającą duże litery w tablicy char przekazanej w argumencie.
Zabezpiecz tablicę przed omyłkową zmianą wartości.
*/
//Mateusz Franków 259740


#include <iostream>
#include<cstdlib>
using namespace std;

char funkcja(char *tab, int x)
{
	int licznik=0;
	
	
	
	for (int i = 0; i <= x; i++)
	{
		char znak = tab[i];
		if (znak >= 65 && znak<=90)
		{
			licznik++;
		}
	}
	cout <<"licznik: "<<
		licznik << endl;


	return 0;
}

int main()
{
	char tablica[] = { "Ala ma kota i Psa, XD mlodziezowym slowem ROKU" };
	int dlugosc = sizeof(tablica);
	cout <<"dlugosc tablicy: "<< dlugosc << endl;
	funkcja(tablica, dlugosc);
	return 0;
}

