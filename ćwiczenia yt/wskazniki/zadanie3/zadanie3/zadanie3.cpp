#include <iostream>
using namespace std;

float srednia(float* tab, int ile) //wskaznikiem jest nazwa floatow czyli tablica, jednak ze jest to argument formalny nie musi nazywac sie tablica, nazywam go tab i zamieniam w wskaznik *tab
{
	float suma = 0;
	for (int i = 0; i < ile; i++) //i=0, 0 szufladka
	{
		suma += *tab; //wskaznik ustawiony na 0 szufladke tablicy
		*tab = 999; //sprawdzam czy dzialam na kopiach czy orginalach
		tab++; //wprzesuwam wskaznik o jeden zeby dostac sie na nastepnych szufladek tablicy
	}
	return suma / ile;
}


int main()
{
	float tablica[3];
	for (int i = 0; i < 3; i++) //wpisywanie do tablicy
	{
		int wartosc;
		cin >> wartosc;
		tablica[i] = wartosc;
		cout << "wartos tablicy " << i << " to: " << wartosc << endl;
	}
	cout << "srednia wysnosi: " << srednia(tablica, 3) << endl;

	for (int i = 0; i < 3 ; i++)
	{
		cout << "wartosc po wykonaniu programy tablicy " << i << " wynosi " << tablica[i] << endl;//sprawdzam wartosci po wykonaniu operacji, sa 999 czyli faktycznie dzialalismy na orginalach
	}

	return 0;
	
}