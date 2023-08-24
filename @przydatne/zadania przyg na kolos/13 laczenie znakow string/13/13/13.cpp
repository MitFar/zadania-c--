/*
Wczytaj z klawiatury z użyciem cin osobno Imie i Nazwisko do zmiennych typu string. Połącz
Imie i Nazwisko w trzeciej zmiennej string ze spacją pomiędzy – dopisz string jako kolejny element
wektora (każda zapisana osoba w osobnym elemencie wektora). Wyświetl na ekranie wszystkie
zgromadzone w wektorze dane osobowe.
*/
//Mateusz Franków 259740

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string suma(string x, string y)
{
	vector<string> vec;
	string z;
	z = x +" "+ y;
	vec.push_back(z);
	for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec[i];
	}
	return z;
}



int main()
{
	string imie;
	string nazwisko;
	cin >> imie;
	cin >> nazwisko;
	suma(imie, nazwisko);
	





	return 0;
}