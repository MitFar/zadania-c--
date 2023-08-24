// Napisz funkcję wytnij, która dostaje jako argumenty napis
//oraz dwie liczby całkowite n i m, i wycina z otrzymanego napisu znaki
//o indeksach od n do m .
#include <iostream>
#include <string>
using namespace std;

string wytnij(int x, int z, string napis)
{
	string nowy_napis = napis.substr(x, z);
	return nowy_napis;

}


int main()
{
	int x, y, z;
	string napis;
	cout << "napisz napis: ";
	getline(cin, napis);
	cout << "podaj n: ";
		cin >> x;
	cout << "podaj m: ";
	cin >> y;
	z = y - x;

	
	cout << wytnij(x, z,napis);
}