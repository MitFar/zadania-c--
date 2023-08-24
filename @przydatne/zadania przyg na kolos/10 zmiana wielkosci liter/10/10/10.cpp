/*
* Napisz własną funkcję zmieniającą litery małe na duże w zmiennej string przekazanej w
argumencie. Funkcja powinna zwrócić liczbę dokonanych zmian.
*/
//Mateusz Franków 259740

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string funkcja(string x)
{
	int licznik = 0;
	for (size_t i = 0; i < x.size(); i++)
	{
		transform(x.begin(), x.end(), x.begin(), ::toupper);
		licznik++;
	}
	cout << licznik << endl;

	return x;
}



int main()
{
	string slowo;
	getline(cin, slowo);
	cout<<funkcja(slowo);
	return 0;
}

